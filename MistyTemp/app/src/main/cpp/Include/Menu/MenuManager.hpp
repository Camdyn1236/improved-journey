#pragma once
#include <XRInput.hpp>
#include <BNMResolve.hpp>
#include "../NotiLib/NotiLib.hpp"
#include "Settings.hpp"
#include "../PhotonResolve.hpp"
#include "ButtonInfo.hpp"
#include "Buttons.hpp"

using namespace BNM;
using namespace BNM::IL2CPP;
using namespace BNM::Structures;

class MenuManager {
public:
    struct ButtonCollider : BNM::UnityEngine::MonoBehaviour //im lazy tbh so ima just make this stay here lmao
    {
        BNM_CustomClass(ButtonCollider,
                        BNM::CompileTimeClassBuilder(BNM_OBFUSCATE_TMP(O("")), BNM_OBFUSCATE_TMP(O("ButtonCollider"))).Build(),
                        BNM::CompileTimeClassBuilder(BNM_OBFUSCATE_TMP(O("UnityEngine")), BNM_OBFUSCATE_TMP(O("MonoBehaviour")), BNM_OBFUSCATE_TMP(O("UnityEngine.CoreModule"))).Build(),
                        {},
        );

        void Constructor() {
            BNM::UnityEngine::MonoBehaviour tmp = *this;
            *this = ButtonCollider();
            *((BNM::UnityEngine::MonoBehaviour *)this) = tmp;
        }

        Mono::String* relatedText;
        void OnTriggerEnter(Collider* collider)
        {
            if (collider->GetGameObject() != Settings::reference) return;
            if (Time::GetFrameCount() >= Settings::framePressCooldown + 30)
            {
                MenuManager::Toggle(relatedText);
                Settings::framePressCooldown = Time::GetFrameCount();
            }
        }
        BNM_CustomField(relatedText, BNM::Defaults::Get<Mono::String*>(), "relatedText");
        BNM_CustomMethod(OnTriggerEnter, false, BNM::Defaults::Get<void>(), "OnTriggerEnter");
        BNM_CustomMethod(Constructor, false, BNM::Defaults::Get<void>(), ".ctor");
    };
    static void Prefix() {
        try {
            bool open = (!Settings::rightHanded && XRInput::GetBoolFeature(BoolFeature::SecondaryButton, Controller::Left)) || (Settings::rightHanded && XRInput::GetBoolFeature(BoolFeature::SecondaryButton, Controller::Right));
            for (auto& buttonList : Buttons::buttons) {
                for (auto& button : buttonList) {
                    if (button.enabled && button.method != nullptr) {
                        try { button.method(); } catch (...) {}
                    }
                }
            }
            if (Settings::menu == nullptr) {
                if (open) {
                    CreateMenu();
                    RecenterMenu(Settings::rightHanded);
                    if (Settings::reference == nullptr) CreateReference(Settings::rightHanded);
                }
            } else {
                if (open) {
                    RecenterMenu(Settings::rightHanded);
                } else {
                    if (Settings::menu) {
                        GameObject::Destroy(Settings::menu);
                        Settings::menu = nullptr;
                    }
                    if (Settings::reference) {
                        GameObject::Destroy(Settings::reference);
                        Settings::reference = nullptr;
                    }
                }
                if (Settings::menu != nullptr) {
                    if (Settings::fpsText != nullptr) {
                        Settings::fpsText->SetText("FPS: " + std::to_string(static_cast<int>(std::round(1.f / Time::GetUnscaledDeltaTime()))));
                    }
                }
            }
        } catch (Exception exc) {}
    }

    static void CreateMenu() {
        // menu holder
        Settings::menu = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(Settings::menu->GetComponent(Rigidbody::GetType()));
        GameObject::Destroy(Settings::menu->GetComponent(BoxCollider::GetType()));
        GameObject::Destroy(Settings::menu->GetComponent(Renderer::GetType()));
        Settings::menu->GetTransform()->SetLocalScale(Vector3(0.1f, 0.3825f, 0.3f));

        Shader* transparentShader = Shader::Find("Legacy Shaders/Transparent/Diffuse");
        if (transparentShader == nullptr) {
            transparentShader = Shader::Find("Unlit/Transparent");
        }
        if (transparentShader == nullptr) {
            BNM_LOG_WARN(BNM_OBFUSCATE("No transparent shader found; menu background opacity may not be applied"));
        }

        auto createRoundedPanel = [&](Color color, float sizeMultiplier, float xPosition, bool transparent) -> GameObject* {
            auto createBackgroundPiece = [&](PrimitiveType type, Vector3 scale, Vector3 position) -> GameObject* {
                GameObject* piece = GameObject::CreatePrimitive(type);
                GameObject::Destroy(piece->GetComponent(Rigidbody::GetType()));
                GameObject::Destroy(piece->GetComponent(BoxCollider::GetType()));
                GameObject::Destroy(piece->GetComponent(SphereCollider::GetType()));
                piece->GetTransform()->SetParent(Settings::menu->GetTransform());
                piece->GetTransform()->SetLocalRotation(Quaternion::identity);
                piece->GetTransform()->SetLocalScale(Vector3(scale.x, scale.y * sizeMultiplier, scale.z * sizeMultiplier));
                piece->GetTransform()->SetLocalPosition(Vector3(xPosition, position.y * sizeMultiplier, position.z * sizeMultiplier));
                Material* material = ((Renderer*)piece->GetComponent(Renderer::GetType()))->GetMaterial();
                if (transparent && transparentShader != nullptr) {
                    material->SetShader(transparentShader);
                }
                material->SetColor(color);
                return piece;
            };

            createBackgroundPiece(PrimitiveType::Cube, Vector3(0.1f, 0.76f, 0.12f), Vector3(0.05f, 0.f, 0.44f));
            createBackgroundPiece(PrimitiveType::Cube, Vector3(0.1f, 0.76f, 0.12f), Vector3(0.05f, 0.f, -0.44f));
            createBackgroundPiece(PrimitiveType::Sphere, Vector3(0.1f, 0.24f, 0.24f), Vector3(0.05f, 0.38f, 0.38f));
            createBackgroundPiece(PrimitiveType::Sphere, Vector3(0.1f, 0.24f, 0.24f), Vector3(0.05f, -0.38f, 0.38f));
            createBackgroundPiece(PrimitiveType::Sphere, Vector3(0.1f, 0.24f, 0.24f), Vector3(0.05f, 0.38f, -0.38f));
            createBackgroundPiece(PrimitiveType::Sphere, Vector3(0.1f, 0.24f, 0.24f), Vector3(0.05f, -0.38f, -0.38f));
            return createBackgroundPiece(PrimitiveType::Cube, Vector3(0.1f, 1.f, 0.76f), Vector3(0.05f, 0.f, 0.f));
        };
        if (Settings::menuOutlineEnabled) {
            createRoundedPanel(Settings::menuOutlineColor, 1.05f, 0.04f, false);
        }
        Settings::menuBackground = createRoundedPanel(Settings::menuBackgroundColor, 1.f, 0.05f, true);

        // Canvas
        Settings::canvasObject = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        Settings::canvasObject->GetTransform()->SetParent(Settings::menu->GetTransform());
        Canvas* canvas = (Canvas*)Settings::canvasObject->AddComponent(Canvas::GetType());
        CanvasScaler* scaler = (CanvasScaler*)Settings::canvasObject->AddComponent(CanvasScaler::GetType());
        Settings::canvasObject->AddComponent(GraphicRaycaster::GetType());
        canvas->SetRenderMode(RenderMode::WorldSpace);
        scaler->SetDynamicPixelsPerUnit(1000);

        // FPS
        if (Settings::fpsCounter) {
            GameObject* fpsObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
            fpsObj->GetTransform()->SetParent(Settings::canvasObject->GetTransform());
            Settings::fpsText = (Text*)fpsObj->AddComponent(Text::GetType());

            Settings::fpsText->SetFont(Settings::currentFont);
            Settings::fpsText->SetText("FPS: " + std::to_string((int)std::ceil(1.f / Time::GetUnscaledDeltaTime())));
            Settings::fpsText->SetColor(Settings::textColors[0]);
            Settings::fpsText->SetFontSize(1);
            Settings::fpsText->SetSupportRichText(true);
            Settings::fpsText->SetFontStyle(FontStyle::Italic);
            Settings::fpsText->SetAlignment(TextAnchor::MiddleCenter);
            Settings::fpsText->SetTextResizeForBestFit(true);
            Settings::fpsText->SetResizeTextMinSize(0);

            RectTransform* fpsRect = (RectTransform*)Settings::fpsText->GetComponent(RectTransform::GetType());
            fpsRect->SetLocalPosition(Vector3::zero);
            fpsRect->SetPosition(Vector3(0.06f, 0.f, 0.135f));
            fpsRect->SetSizeDelta(Vector2(0.28f, 0.02f));
            fpsRect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));
        }

        // Disconnect Button
        if (Settings::disconnectButton) {
            GameObject* disconnectObj = GameObject::CreatePrimitive(PrimitiveType::Capsule);
            GameObject::Destroy(disconnectObj->GetComponent(Rigidbody::GetType()));
            CapsuleCollider* col = (CapsuleCollider*)disconnectObj->GetComponent(CapsuleCollider::GetType());
            col->SetIsTrigger(true);
            disconnectObj->GetTransform()->SetParent(Settings::menu->GetTransform());
            disconnectObj->GetTransform()->SetLocalRotation(Quaternion::identity);
            disconnectObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.9f, 0.13f));
            disconnectObj->GetTransform()->SetLocalPosition(Vector3(0.56f, 0.f, 0.34f));

            Renderer* rend = (Renderer*)disconnectObj->GetComponent(Renderer::GetType());
            rend->GetMaterial()->SetColor(Settings::buttonColors[0]);

            ButtonCollider* bc = (ButtonCollider*)disconnectObj->AddComponent(ButtonCollider::BNMCustomClass.type);
            bc->relatedText = CreateMonoString("DisconnectBTN");

            GameObject* textObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
            textObj->GetTransform()->SetParent(Settings::canvasObject->GetTransform());
            Text* disconnectText = (Text*)textObj->AddComponent(Text::GetType());

            disconnectText->SetText("Disconnect");
            disconnectText->SetFont(Settings::currentFont);
            disconnectText->SetFontSize(1);
            disconnectText->SetColor(Settings::textColors[0]);
            disconnectText->SetAlignment(TextAnchor::MiddleCenter);
            disconnectText->SetTextResizeForBestFit(true);
            disconnectText->SetResizeTextMinSize(0);

            RectTransform* dRect = (RectTransform*)disconnectText->GetComponent(RectTransform::GetType());
            dRect->SetLocalPosition(Vector3(0.064f, -0.04f, 0.102f));
            dRect->SetSizeDelta(Vector2(0.2f, 0.03f));
            dRect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));

            GameObject* searchButton = GameObject::CreatePrimitive(PrimitiveType::Cube);
            GameObject::Destroy(searchButton->GetComponent(Rigidbody::GetType()));
            GameObject::Destroy(searchButton->GetComponent(BoxCollider::GetType()));
            searchButton->GetTransform()->SetParent(Settings::menu->GetTransform());
            searchButton->GetTransform()->SetLocalScale(Vector3(0.07f, 0.11f, 0.13f));
            searchButton->GetTransform()->SetLocalPosition(Vector3(0.61f, 0.39f, 0.34f));
            ((Renderer*)searchButton->GetComponent(Renderer::GetType()))->GetMaterial()->SetColor(Settings::backgroundColor);

            GameObject* searchIcon = GameObject::CreatePrimitive(PrimitiveType::Sphere);
            GameObject::Destroy(searchIcon->GetComponent(Rigidbody::GetType()));
            GameObject::Destroy(searchIcon->GetComponent(SphereCollider::GetType()));
            searchIcon->GetTransform()->SetParent(Settings::menu->GetTransform());
            searchIcon->GetTransform()->SetLocalScale(Vector3(0.035f, 0.055f, 0.055f));
            searchIcon->GetTransform()->SetLocalPosition(Vector3(0.65f, 0.39f, 0.34f));
            ((Renderer*)searchIcon->GetComponent(Renderer::GetType()))->GetMaterial()->SetColor(Settings::textColors[0]);

            GameObject* searchHandle = GameObject::CreatePrimitive(PrimitiveType::Cube);
            GameObject::Destroy(searchHandle->GetComponent(Rigidbody::GetType()));
            GameObject::Destroy(searchHandle->GetComponent(BoxCollider::GetType()));
            searchHandle->GetTransform()->SetParent(Settings::menu->GetTransform());
            searchHandle->GetTransform()->SetLocalRotation(Quaternion::FromEuler(Vector3(45.f, 0.f, 0.f)));
            searchHandle->GetTransform()->SetLocalScale(Vector3(0.025f, 0.018f, 0.045f));
            searchHandle->GetTransform()->SetLocalPosition(Vector3(0.65f, 0.415f, 0.315f));
            ((Renderer*)searchHandle->GetComponent(Renderer::GetType()))->GetMaterial()->SetColor(Settings::textColors[0]);
        }

        int categorySize = static_cast<int>(Buttons::buttons[Settings::currentCategory()].size());
        int lastPage = (categorySize + Settings::buttonsPerPage - 1) / Settings::buttonsPerPage - 1;
        if (lastPage > 0) {
        // Prev Page Button
        GameObject* prevObj = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(prevObj->GetComponent(Rigidbody::GetType()));
        BoxCollider* col = (BoxCollider*)prevObj->GetComponent(BoxCollider::GetType());
        col->SetIsTrigger(true);

        prevObj->GetTransform()->SetParent(Settings::menu->GetTransform());
        prevObj->GetTransform()->SetLocalRotation(Quaternion::identity);
        prevObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.2f, 0.9f));
        prevObj->GetTransform()->SetLocalPosition(Vector3(0.56f, 0.65f, 0.f));

        Renderer* rend = (Renderer*)prevObj->GetComponent(Renderer::GetType());
        rend->GetMaterial()->SetColor(Settings::buttonColors[0]);

        ButtonCollider* bc = (ButtonCollider*)prevObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        bc->relatedText = CreateMonoString("PreviousPage");

        GameObject* textObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        textObj->GetTransform()->SetParent(Settings::canvasObject->GetTransform());
        Text* text = (Text*)textObj->AddComponent(Text::GetType());

        text->SetFont(Settings::currentFont);
        text->SetText("<");
        text->SetFontSize(1);
        text->SetColor(Settings::textColors[0]);
        text->SetAlignment(TextAnchor::MiddleCenter);
        text->SetTextResizeForBestFit(true);
        text->SetResizeTextMinSize(0);

        RectTransform* rect = (RectTransform*)text->GetComponent(RectTransform::GetType());
        rect->SetLocalPosition(Vector3(0.064f, 0.195f, 0.f));
        rect->SetSizeDelta(Vector2(0.2f, 0.03f));
        rect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));

        // Next Page Button
        GameObject* nextObj = GameObject::CreatePrimitive(PrimitiveType::Cube);
        GameObject::Destroy(nextObj->GetComponent(Rigidbody::GetType()));
        BoxCollider* colNP = (BoxCollider*)nextObj->GetComponent(BoxCollider::GetType());
        colNP->SetIsTrigger(true);

        nextObj->GetTransform()->SetParent(Settings::menu->GetTransform());
        nextObj->GetTransform()->SetLocalRotation(Quaternion::identity);
        nextObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.2f, 0.9f));
        nextObj->GetTransform()->SetLocalPosition(Vector3(0.56f, -0.65f, 0.f));

        Renderer* rendNP = (Renderer*)nextObj->GetComponent(Renderer::GetType());
        rendNP->GetMaterial()->SetColor(Settings::buttonColors[0]);

        ButtonCollider* nbc = (ButtonCollider*)nextObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        nbc->relatedText = CreateMonoString("NextPage");

        GameObject* textObjNP = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        textObjNP->GetTransform()->SetParent(Settings::canvasObject->GetTransform());
        Text* textNP = (Text*)textObjNP->AddComponent(Text::GetType());

        textNP->SetFont(Settings::currentFont);
        textNP->SetText(">");
        textNP->SetFontSize(1);
        textNP->SetColor(Settings::textColors[0]);
        textNP->SetAlignment(TextAnchor::MiddleCenter);
        textNP->SetTextResizeForBestFit(true);
        textNP->SetResizeTextMinSize(0);

        RectTransform* rectNP = (RectTransform*)textNP->GetComponent(RectTransform::GetType());
        rectNP->SetLocalPosition(Vector3(0.064f, -0.195f, 0.f));
        rectNP->SetSizeDelta(Vector2(0.2f, 0.03f));
        rectNP->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));
        }

        std::vector<ButtonInfo> activeButtons(
                Buttons::buttons[Settings::currentCategory()].begin() + std::min((int)Buttons::buttons[Settings::currentCategory()].size(), Settings::pageNumber * Settings::buttonsPerPage),
                Buttons::buttons[Settings::currentCategory()].begin() + std::min((int)Buttons::buttons[Settings::currentCategory()].size(), Settings::pageNumber * Settings::buttonsPerPage + Settings::buttonsPerPage)
        );
        for (int i = 0; i < activeButtons.size(); i++)
        {
            CreateButton(i * (Settings::currentCategory() == 0 ? 0.18f : 0.1f), activeButtons[i]);
        }
    }

    static void CreateButton(float offset, ButtonInfo method) {
        bool mainMenuButton = Settings::currentCategory() == 0;
        GameObject* buttonObj = GameObject::CreatePrimitive(PrimitiveType::Capsule);
        GameObject::Destroy(buttonObj->GetComponent(Rigidbody::GetType()));
        CapsuleCollider* col = (CapsuleCollider *) buttonObj->GetComponent(CapsuleCollider::GetType());
        col->SetIsTrigger(true);
        buttonObj->GetTransform()->SetParent(Settings::menu->GetTransform());
        buttonObj->GetTransform()->SetRotation(Quaternion::identity);
        buttonObj->GetTransform()->SetLocalScale(Vector3(0.09f, 0.9f, mainMenuButton ? 0.13f : 0.08f));
        buttonObj->GetTransform()->SetLocalPosition(Vector3(0.56f, 0.f, (mainMenuButton ? 0.16f : 0.28f) - offset));
        Renderer* rend = (Renderer *) buttonObj->GetComponent(Renderer::GetType());
        rend->GetMaterial()->SetColor(method.enabled ? Settings::buttonColors[1] : Settings::buttonColors[0]);

        ButtonCollider* nbc = (ButtonCollider*)buttonObj->AddComponent(ButtonCollider::BNMCustomClass.type);
        nbc->relatedText = CreateMonoString(method.buttonText);

        GameObject* textObj = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
        textObj->GetTransform()->SetParent(Settings::canvasObject->GetTransform());
        Text* text = (Text*)textObj->AddComponent(Text::GetType());
        text->SetFont(Settings::currentFont);
        std::string buttonLabel = method.buttonText;
        if (Settings::currentCategory() == 1) {
            if (method.buttonText == "Background Color") {
                buttonLabel = "Background: " + Settings::menuColorNames[Settings::menuBackgroundColorIndex];
            } else if (method.buttonText == "Outline Color") {
                buttonLabel = "Outline: " + Settings::menuColorNames[Settings::menuOutlineColorIndex];
            } else if (method.buttonText == "Outline Toggle") {
                buttonLabel = Settings::menuOutlineEnabled ? "Outline: Enabled" : "Outline: Disabled";
            }
        }
        if (!method.overlapText.empty()) text->SetText(method.overlapText);
        else text->SetText(buttonLabel);
        text->SetSupportRichText(true);
        text->SetFontSize(1);
        text->SetColor(method.enabled ? Settings::textColors[1] : Settings::textColors[0]);
        text->SetAlignment(TextAnchor::MiddleCenter);
        text->SetFontStyle(FontStyle::Normal);
        text->SetTextResizeForBestFit(true);
        text->SetResizeTextMinSize(0);
        RectTransform* rect = (RectTransform*)text->GetComponent(RectTransform::GetType());
        rect->SetLocalPosition(Vector3::zero);
        rect->SetSizeDelta(Vector2(0.2f, 0.03f));
        rect->SetLocalPosition(Vector3(0.064f, 0.f, (mainMenuButton ? 0.048f : 0.1071f) - offset * (mainMenuButton ? 0.3f : 0.3825f)));
        rect->SetRotation(Quaternion::FromEuler(Vector3(180.f, 90.f, 90.f)));
    }
    static void RecreateMenu() {
        if (Settings::menu != nullptr) {
            GameObject::Destroy(Settings::menu);
            Settings::menu = nullptr;
        }
        CreateMenu();
        RecenterMenu(Settings::rightHanded);
    }
    static void RecenterMenu(bool isrightHanded) {
        if (!isrightHanded) {
            if (GameObject::Find("LeftHand Controller") != nullptr) {
                Settings::menu->GetTransform()->SetPosition(GameObject::Find("LeftHand Controller")->GetTransform()->GetPosition());
                Settings::menu->GetTransform()->SetRotation(GameObject::Find("LeftHand Controller")->GetTransform()->GetRotation());
            }
        }
        else {
            if (GameObject::Find("RightHand Controller") != nullptr) {
                Settings::menu->GetTransform()->SetPosition(GameObject::Find("RightHand Controller")->GetTransform()->GetPosition());
                Vector3 rot = GameObject::Find("RightHand Controller")->GetTransform()->GetEulerAngles();
                rot += Vector3(0.f, 0.f, 180.f);
                Settings::menu->GetTransform()->SetRotation(Quaternion::FromEuler(rot));
            }
        }
    }
    static void CreateReference(bool isrightHanded) {
        Settings::reference = GameObject::CreatePrimitive(PrimitiveType::Sphere);
        Settings::reference->GetTransform()->SetParent(isrightHanded ? GameObject::Find("LeftHand Controller")->GetTransform() : GameObject::Find("RightHand Controller")->GetTransform());
        Renderer* RefRend = (Renderer*)Settings::reference->GetComponent(Renderer::GetType());
        RefRend->GetMaterial()->SetColor(Settings::backgroundColor);
        Settings::reference->GetTransform()->SetLocalPosition(Vector3(0.f, -0.1f, 0.f));
        Settings::reference->GetTransform()->SetLocalScale(Vector3(0.01f, 0.01f, 0.01f));
        Settings::buttonCollider = (SphereCollider*)Settings::reference->GetComponent(SphereCollider::GetType());
    }
    static void Toggle(Mono::String* text) {
        if (!text) return;
        string buttonText = text->str();
        int lastPage = ((Buttons::buttons[Settings::currentCategory()].size() + Settings::buttonsPerPage - 1) / Settings::buttonsPerPage) - 1;
        if (buttonText == "PreviousPage") {
            Settings::pageNumber--;
            if (Settings::pageNumber < 0)
                Settings::pageNumber = lastPage;
        } else if (buttonText == "NextPage") {
            Settings::pageNumber++;
            if (Settings::pageNumber > lastPage)
                Settings::pageNumber = 0;
        } else if (buttonText == "DisconnectBTN") {
            PhotonNetwork::Disconnect();
            NotiLib::SendNotification("<color=grey>[</color><color=yellow>DISCONNECT</color><color=grey>]</color> Disconnected from the server");
        } else {
            NotiLib::SendNotification("Button Clicked");
            for (auto& Button : Buttons::buttons[Settings::currentCategory()]) {
                if (Button.buttonText == buttonText) {
                    if (Button.isTogglable) {
                        Button.enabled = !Button.enabled;
                        if (Button.enabled) {
                            if (!Button.toolTip.empty()) { NotiLib::SendNotification("<color=grey>[</color><color=green>ENABLE</color><color=grey>]</color> " + Button.toolTip); }
                            if (Button.enableMethod != nullptr) { Button.enableMethod(); }
                        } else if (!Button.enabled) {
                            if (!Button.toolTip.empty()) { NotiLib::SendNotification("<color=grey>[</color><color=red>DISABLE</color><color=grey>]</color> " + Button.toolTip); }
                            if (Button.disableMethod != nullptr) { Button.disableMethod(); }
                        }
                    } else {
                        if (!Button.toolTip.empty()) { NotiLib::SendNotification("<color=grey>[</color><color=green>ENABLE</color><color=grey>]</color> " + Button.toolTip); }
                        if (Button.method != nullptr) { Button.method(); }
                    }
                    break;
                }
            }
        }
        RecreateMenu();
    }
};
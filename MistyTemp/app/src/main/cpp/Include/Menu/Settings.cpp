#include "Settings.hpp"
#include <BNMResolve.hpp>
#include "../NotiLib/NotiLib.hpp"

using namespace BNM;

NotiLib* Settings::noti;

Color Settings::backgroundColor;
Color Settings::menuBackgroundColor;
Color Settings::menuOutlineColor;
std::vector<Color> Settings::buttonColors;
std::vector<Color> Settings::textColors;
std::vector<Color> Settings::menuColors;
std::vector<std::string> Settings::menuColorNames;
int Settings::menuBackgroundColorIndex = 0;
int Settings::menuOutlineColorIndex = 14;
bool Settings::menuOutlineEnabled = true;
Font* Settings::currentFont = nullptr;

bool Settings::fpsCounter = false;
bool Settings::disconnectButton = false;
bool Settings::rightHanded = false;
bool Settings::disableNotifications = false;

Vector3 Settings::menuSize = Vector3::zero;
int Settings::buttonsPerPage = 0;
int Settings::framePressCooldown = 0;
float Settings::gradientSpeed = 0.0f;

GameObject* Settings::menu = nullptr;
GameObject* Settings::menuBackground = nullptr;
GameObject* Settings::reference = nullptr;
GameObject* Settings::canvasObject = nullptr;
SphereCollider* Settings::buttonCollider = nullptr;
Text* Settings::titleText = nullptr;
Text* Settings::fpsText = nullptr;

int Settings::pageNumber = 0;
int Settings::_currentCategory = 0;

void Settings::Init() {
    backgroundColor = Color(0.035f, 0.04f, 0.05f, 1.f);
    menuColors = {
            Color(0.29f, 0.30f, 0.32f, 1.f),
            Color(0.08f, 0.09f, 0.11f, 1.f),
            Color(0.10f, 0.15f, 0.32f, 1.f),
            Color(0.12f, 0.30f, 0.82f, 1.f),
            Color(0.20f, 0.62f, 0.95f, 1.f),
            Color(0.08f, 0.78f, 0.86f, 1.f),
            Color(0.05f, 0.52f, 0.48f, 1.f),
            Color(0.12f, 0.62f, 0.30f, 1.f),
            Color(0.55f, 0.82f, 0.16f, 1.f),
            Color(0.96f, 0.82f, 0.18f, 1.f),
            Color(0.95f, 0.48f, 0.12f, 1.f),
            Color(0.85f, 0.16f, 0.18f, 1.f),
            Color(0.95f, 0.34f, 0.58f, 1.f),
            Color(0.52f, 0.22f, 0.76f, 1.f),
            Color(0.88f, 0.90f, 0.94f, 1.f)
    };
    menuColorNames = {
            "Gray", "Black", "Navy", "Blue", "Sky Blue", "Cyan", "Teal", "Green",
            "Lime", "Yellow", "Orange", "Red", "Pink", "Purple", "White"
    };
    menuBackgroundColorIndex = 0;
    menuOutlineColorIndex = 14;
    menuBackgroundColor = menuColors[menuBackgroundColorIndex];
    menuBackgroundColor.a = 0.85f;
    menuOutlineColor = menuColors[menuOutlineColorIndex];
    menuOutlineEnabled = true;

    buttonColors = {
            Color(0.29f, 0.30f, 0.32f, 1.f),
            Color(0.38f, 0.39f, 0.41f, 1.f)
    };
    textColors = {
            Color(0.84f, 0.85f, 0.87f, 1.f),
            Color(0.84f, 0.85f, 0.87f, 1.f)
    };

    if (!currentFont) {
        currentFont = (Font*)Resources::GetBuiltinResource(Font::GetType(), BNM_OBFUSCATE("Arial.ttf"));
        if (!currentFont) {
            BNM_LOG_WARN(BNM_OBFUSCATE("Failed to load Arial.ttf"));
        }
    }

    fpsCounter = false;
    disconnectButton = true;
    rightHanded = false;
    disableNotifications = false;

    menuSize = Vector3(0.1f, 1.0f, 1.0f);
    buttonsPerPage = 8;
    framePressCooldown = 0;
    gradientSpeed = 0.5f;

    menu = nullptr;
    menuBackground = nullptr;
    reference = nullptr;
    canvasObject = nullptr;
    buttonCollider = nullptr;
    titleText = nullptr;
    fpsText = nullptr;

    pageNumber = 0;
    _currentCategory = 0;
}

void Settings::CycleMenuBackgroundColor() {
    menuBackgroundColorIndex = (menuBackgroundColorIndex + 1) % static_cast<int>(menuColors.size());
    menuBackgroundColor = menuColors[menuBackgroundColorIndex];
    menuBackgroundColor.a = 0.85f;
}

void Settings::CycleMenuOutlineColor() {
    menuOutlineColorIndex = (menuOutlineColorIndex + 1) % static_cast<int>(menuColors.size());
    menuOutlineColor = menuColors[menuOutlineColorIndex];
}

void Settings::ToggleMenuOutline() {
    menuOutlineEnabled = !menuOutlineEnabled;
}
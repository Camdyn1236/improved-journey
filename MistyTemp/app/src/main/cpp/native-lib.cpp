#include <jni.h>
#include "BNM/Loading.hpp"
#include "Include/Menu/ModMenu.hpp"
#include "BNM/UnityStructures.hpp"
#include "BNM/Method.hpp"
#include "BNM/Class.hpp"
#include "BNMResolve.hpp"
#include "BNM/Il2CppHeaders.hpp"
#include <BNMIncludes.hpp>
#include "Include/NotiLib/NotiLib.hpp"
#include <httplib.h>
#include <json.hpp>
#include <random>
#include <string>
#include <BNM/Class.hpp>
#include <BNM/Method.hpp>
#include <BNM/Field.hpp>
#include "Include/PhotonResolve.hpp"
#include "Include/Mods/Bots.hpp"

//----- Crash logging stubs (used by Soundboard) -----//
extern "C" void EnvySetCrashLogPath(const char* path) {
    // Stub - crash logging path setter
    BNM_LOG_INFO("Crash log path set to: %s", path ? path : "null");
}

extern "C" void EnvySetCrashContext(const char* context) {
    // Stub - crash context setter
    if (context) {
        BNM_LOG_INFO("Crash context: %s", context);
    }
}

//----- Variables -----\\-
//Methods

// COC Text Variables
AppSettings* photonServerSettings = nullptr;
GameObject* motdtext = nullptr;
Text* txtlol = nullptr;
Player* localPlayer = nullptr;
std::string cachedTitleId = "NULL";
std::string cachedPlayerId = "NULL";
std::string cachedNickname = "NULL";
std::string cachedRealtimeId = "NULL";
std::string cachedVoiceId = "NULL";
std::string cachedAppVersion = "NULL";
bool bol = false;

// Oculus Authentication Variables
std::string gen(int length) {
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, characters.length() - 1);
    std::string randomString;
    randomString.reserve(length);
    for (int i = 0; i < length; ++i) {
        randomString += characters[distribution(generator)];
    }
    return randomString;
}

void* (*old_LoginWithCustomID)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*) = nullptr;

void* new_LoginWithCustomID(Il2CppObject* request, Il2CppObject* resultCallback, Il2CppObject* errorCallback, Il2CppObject* customData, Il2CppObject* extraHeaders) {
    static Field<Mono::String*> CustomId = Class("PlayFab.ClientModels", "LoginWithCustomIDRequest").GetField("CustomId");
    CustomId.SetInstance(request);
    Mono::String* customId = CustomId();
    if (!customId) {
        BNM_LOG_ERR("CustomId is null.");
        return nullptr;
    }
    std::string str = customId->str();
    if (!str.starts_with("OCULUS")) {
        CustomId.Set(CreateMonoString(gen(16)));
    }
    return old_LoginWithCustomID(request, resultCallback, errorCallback, customData, extraHeaders);
}

void (*Awake)(void*);
void new_Awake(void* instance) {
    Awake(instance);
    ModMenu::Init();

    BNM_LOG_INFO("Menu Initialization Called");
}

bool isUpdated = true;
void (*LateUpdate)(void*);
void new_LateUpdate(void* instance) {
    LateUpdate(instance);
    ModMenu::Update();
    if (isUpdated) {
        BNM_LOG_INFO(BNM_OBFUSCATE("Menu Update Called"));
        isUpdated = false;

    }
}

void (*old_FixedUpdate)(BNM::UnityEngine::Object *);

void FixedUpdate(BNM::UnityEngine::Object *instance) {
    old_FixedUpdate(instance);

    if (bol == false) {
        BNM_LOG_INFO("fixed update ran - initializing cached data");

        motdtext = GameObject::Find("motdtext");
        if (motdtext) {
            txtlol = (Text*)motdtext->GetComponent(Text::GetType());
        } else {
            BNM_LOG_ERR("motdtext GameObject not found!");
        }

        photonServerSettings = PhotonNetwork::GetPhotonServerSettings()->GetAppSettings();
        if (photonServerSettings) {
            cachedRealtimeId = photonServerSettings->GetAppIdRealtime();
            cachedVoiceId = photonServerSettings->GetAppIdVoice();
            cachedAppVersion = photonServerSettings->GetAppVersion();
        }

        std::string tempTitleId = "";
        if (!tempTitleId.empty()) {
            cachedTitleId = tempTitleId;
        }

        bol = true;
    }

    if (txtlol != nullptr) {
        localPlayer = PhotonNetwork::GetLocalPlayer();
        if (localPlayer != nullptr) {
            cachedPlayerId = localPlayer->GetUserId();
            cachedNickname = localPlayer->GetNickname();
        } else {
            cachedPlayerId = "Not in room";
            cachedNickname = "Not in room";
        }

        std::string output = "NAME ON TOP\n\n"
                             "Realtime: " + cachedRealtimeId + "\n"
                             + "Voice: " + cachedVoiceId + "\n"
                             + "Version: " + cachedAppVersion + "\n"
                             + "Title ID: " + cachedTitleId + "\n"
                             + "Player ID: " + cachedPlayerId + "\n"
                             + "Nickname: " + cachedNickname;

        txtlol->SetText(output);

        // Change background to red
        if (motdtext) {
            Renderer* renderer = (Renderer*)motdtext->GetComponent(Renderer::GetType());
            if (renderer) {
                Material* material = renderer->GetMaterial();
                if (material) {
                    material->SetColor(Color(1.0f, 0.0f, 0.0f, 0.8f)); // Red background with transparency
                }
            }
        }
    }
}

void OnLoaded() {
    BNM_LOG_INFO(BNM_OBFUSCATE("Hooking Methods Now!!"));

    InvokeHook(Class(BNM_OBFUSCATE("GorillaLocomotion"), BNM_OBFUSCATE("Player"), Image(
            BNM_OBFUSCATE("Assembly-CSharp.dll"))).GetMethod(BNM_OBFUSCATE("LateUpdate")), new_LateUpdate, LateUpdate);

    InvokeHook(Class(BNM_OBFUSCATE("GorillaLocomotion"), BNM_OBFUSCATE("Player"), Image(
            BNM_OBFUSCATE("Assembly-CSharp.dll"))).GetMethod(BNM_OBFUSCATE("Awake")), new_Awake, Awake);

    InvokeHook(Class("GorillaLocomotion", "Player").GetMethod("FixedUpdate"), FixedUpdate, old_FixedUpdate);

    BasicHook(Class("PlayFab", "PlayFabClientAPI").GetMethod("LoginWithCustomID", 5), new_LoginWithCustomID, old_LoginWithCustomID);

    BNM_LOG_INFO(BNM_OBFUSCATE("Hooked Methods..."));
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv *env;

    if (vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6) != JNI_OK) {
        BNM_LOG_ERR("Failed to get JNI environment!");
        return JNI_ERR;
    }

    BNM::Loading::AddOnLoadedEvent(OnLoaded);

    BNM_LOG_INFO("loaded! Calling TryLoadByJNI...");
    if (!BNM::Loading::TryLoadByJNI(env)) {
        BNM_LOG_ERR("TryLoadByJNI failed!");
        return JNI_ERR;
    }

    return JNI_VERSION_1_6;
}
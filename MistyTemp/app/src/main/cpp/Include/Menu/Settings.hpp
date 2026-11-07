#pragma once
#include <BNMResolve.hpp>
#include <string>
#include <vector>
#include <unordered_map>
#include "../NotiLib/NotiLib.hpp"

using namespace BNM;

class Settings {
public:
    static NotiLib* noti;

    static Color backgroundColor;
    static Color menuBackgroundColor;
    static Color menuOutlineColor;
    static std::vector<Color> buttonColors;
    static std::vector<Color> textColors;
    static std::vector<Color> menuColors;
    static std::vector<std::string> menuColorNames;
    static int menuBackgroundColorIndex;
    static int menuOutlineColorIndex;
    static bool menuOutlineEnabled;

    static Font* currentFont;

    static bool fpsCounter;
    static bool disconnectButton;
    static bool rightHanded;
    static bool disableNotifications;

    static Vector3 menuSize;
    static int buttonsPerPage;
    static int framePressCooldown;
    static float gradientSpeed;

    static GameObject* menu;
    static GameObject* menuBackground;
    static GameObject* reference;
    static GameObject* canvasObject;
    static SphereCollider* buttonCollider;
    static Text* titleText;
    static Text* fpsText;

    static int pageNumber;
    static int _currentCategory;
    static int currentCategory() {
        return _currentCategory;
    }
    static void setCurrentCategory(int value) {
        _currentCategory = value;
        pageNumber = 0;
    }

    static void Init();
    static void CycleMenuBackgroundColor();
    static void CycleMenuOutlineColor();
    static void ToggleMenuOutline();
};
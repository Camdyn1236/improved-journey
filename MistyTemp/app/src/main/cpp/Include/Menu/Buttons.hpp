#pragma once
#include <BNMResolve.hpp>
#include <functional>
#include <string>
#include "ButtonInfo.hpp"
#include "Settings.hpp"
#include "../NotiLib/NotiLib.hpp"
#include "../ModInclude.hpp"

using namespace BNM;
using namespace BNM::IL2CPP;
using namespace BNM::Structures;

class Buttons {
public:
    static inline std::vector<std::vector<ButtonInfo>> buttons = {
            {//main stuff - 0
                    ButtonInfo {.buttonText = "Settings", .method = []() { Settings::setCurrentCategory(1); }, .isTogglable = false, .toolTip = "Opens the settings"},
                    ButtonInfo {.buttonText = "Mod Settings", .method = []() { Settings::setCurrentCategory(7); }, .isTogglable = false, .toolTip = "Opens the mod settings"},
                    ButtonInfo {.buttonText = "Advantages", .method = []() { Settings::setCurrentCategory(4); }, .isTogglable = false, .toolTip = "Opens the advantages"},
                    ButtonInfo {.buttonText = "Movement", .method = []() { Settings::setCurrentCategory(2); }, .isTogglable = false, .toolTip = "Opens movement"},
            },
            {//Settings - 1
                    ButtonInfo {.buttonText = "Back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "Right hand menu", .enableMethod = []() { Settings::rightHanded = true; }, .disableMethod = []() { Settings::rightHanded = false; }, .toolTip = "Sets the menu to right hand"},
                    ButtonInfo {.buttonText = "Notifications", .enableMethod = []() { NotiLib::SetEnabled(true); }, .disableMethod = []() { NotiLib::SetEnabled(false); }, .enabled = true, .toolTip = "Toggles the notifications"},
                    ButtonInfo {.buttonText = "Disconnect button", .enableMethod = []() { Settings::disconnectButton = true; }, .disableMethod = []() { Settings::disconnectButton = false; }, .enabled = true, .toolTip = "Toggles the disconnect button"},
                    ButtonInfo {.buttonText = "Background Color", .method = []() { Settings::CycleMenuBackgroundColor(); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Outline Color", .method = []() { Settings::CycleMenuOutlineColor(); }, .isTogglable = false},
                    ButtonInfo {.buttonText = "Outline Toggle", .method = []() { Settings::ToggleMenuOutline(); }, .isTogglable = false},
            },
            {//Movement - 2
                    ButtonInfo {.buttonText = "Back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "Platforms", .method = []() { Movement::platforms(); }, .toolTip = "Platforms"},
                    ButtonInfo {.buttonText = "Hand Fly", .method = []() { Movement::HandFly(); }, .toolTip = "Hand Fly"},
                    ButtonInfo {.buttonText = "Long Arms", .method = []() { Movement::Longarms(true); }, .toolTip = "Long Arm"},
                    ButtonInfo {.buttonText = "Car", .method = []() { Movement::Car(); }, .toolTip = "Car"},
                    ButtonInfo {.buttonText = "Slingshot Fly", .method = []() { Movement::SlingshotFly(); }, .toolTip = "Slingshot Fly"},
                    },
            {//Player - 3
                    ButtonInfo {.buttonText = "Back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "TempName1", .method = []() { PlayerMods::TempName1(); }, .toolTip = "Temp"},
                    ButtonInfo {.buttonText = "TempName2", .method = []() { PlayerMods::TempName2(); }, .toolTip = "Temp"},
                    ButtonInfo {.buttonText = "TempName3", .method = []() { PlayerMods::TempName3(); }, .toolTip = "Temp"},
                    ButtonInfo {.buttonText = "TempName4", .method = []() { PlayerMods::TempName4(); }, .toolTip = "Temp"},
            },
            {//Overpowered - 4
                    ButtonInfo {.buttonText = "back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    },
            {//Credits - 5
                    ButtonInfo {.buttonText = "back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "Glitch", .isTogglable = false, .toolTip = "Ported the menu from iiDk's template and the dev of this menu"},
                    ButtonInfo {.buttonText = "Ossuary", .isTogglable = false, .toolTip = "Taught me how to mod :D"},
                    ButtonInfo {.buttonText = "Pubert", .isTogglable = false, .toolTip = "Helped me a lot with the code"},
                    ButtonInfo {.buttonText = "Notfishvr", .isTogglable = false, .toolTip = "Helped me a lot debugging"},
            },
            {//Cool people - 6
                    ButtonInfo {.buttonText = "back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "TempName", .isTogglable = false, .toolTip = "Cool person :D"},
                    ButtonInfo {.buttonText = "TempName", .isTogglable = false, .toolTip = "Cool person :D"},
                    ButtonInfo {.buttonText = "TempName", .isTogglable = false, .toolTip = "Cool person :D"},
                    ButtonInfo {.buttonText = "TempName", .isTogglable = false, .toolTip = "Cool person :D"},
                    ButtonInfo {.buttonText = "TempName", .isTogglable = false, .toolTip = "Cool person :D"},
            },
            {//Mod Settings - 7
                    ButtonInfo {.buttonText = "Back", .method = []() { Settings::setCurrentCategory(0); }, .isTogglable = false, .toolTip = "Goes back to main menu"},
                    ButtonInfo {.buttonText = "Player Mods", .method = []() { Settings::setCurrentCategory(3); }, .isTogglable = false, .toolTip = "Opens player mods"},
                    ButtonInfo {.buttonText = "Credits", .method = []() { Settings::setCurrentCategory(5); }, .isTogglable = false, .toolTip = "Opens the credits"},
                    ButtonInfo {.buttonText = "Cool People", .method = []() { Settings::setCurrentCategory(6); }, .isTogglable = false, .toolTip = "Opens the cool people page"},
            },
    };
};
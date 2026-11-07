#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaHatButtonParent : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaHatButtonParent", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaHatButton[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T hatButtons() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hatButtons");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaHatButton[] */
		void set_hatButtons(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("hatButtons");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T adminObjects() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("adminObjects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_adminObjects(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("adminObjects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T hat() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hat");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_hat(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("hat");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T face() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("face");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_face(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("face");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T badge() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("badge");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_badge(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("badge");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T leftHandHold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandHold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_leftHandHold(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("leftHandHold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T rightHandHold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandHold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_rightHandHold(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("rightHandHold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T initialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_initialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaLevelScreen */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T screen() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("screen");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaLevelScreen */
		void set_screen(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("screen");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PressButton(bool isOn, int buttonType, BNM::Structures::Mono::String* buttonValue) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PressButton", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isOn, buttonType, buttonValue);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateButtonState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateButtonState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

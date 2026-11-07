#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaPlayerLineButton : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaPlayerLineButton", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaPlayerScoreboardLine */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T parentLine() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("parentLine");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaPlayerScoreboardLine */
		void set_parentLine(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("parentLine");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaPlayerLineButton/ButtonType */
		template <typename T = int> T buttonType() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("buttonType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaPlayerLineButton/ButtonType */
		void set_buttonType(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("buttonType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isOn() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isOn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isOn(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isOn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T offMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("offMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_offMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("offMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T onMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("onMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_onMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("onMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T offText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("offText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_offText(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("offText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T onText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("onText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_onText(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("onText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_myText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T debounceTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("debounceTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_debounceTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("debounceTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T touchTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("touchTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_touchTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("touchTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testPress() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testPress");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testPress(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testPress");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T TestPressCheck() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TestPressCheck", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* collider) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collider);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerExit(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerExit", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateColor() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateColor", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

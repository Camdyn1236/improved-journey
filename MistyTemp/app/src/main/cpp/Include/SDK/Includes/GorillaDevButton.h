#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaDevButton : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaDevButton", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: DevButtonType */
		template <typename T = int> T Type() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Type");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: DevButtonType */
		void set_Type(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("Type");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.LogType */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T levelType() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("levelType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.LogType */
		void set_levelType(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("levelType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: DevConsoleInstance */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T targetConsole() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetConsole");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: DevConsoleInstance */
		void set_targetConsole(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("targetConsole");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lineNumber() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lineNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lineNumber(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lineNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T repeatIfHeld() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("repeatIfHeld");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_repeatIfHeld(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("repeatIfHeld");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T holdForSeconds() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("holdForSeconds");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_holdForSeconds(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("holdForSeconds");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Coroutine */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T pressCoroutine() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("pressCoroutine");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Coroutine */
		void set_pressCoroutine(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("pressCoroutine");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T get_on() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_on", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_on(bool $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_on", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

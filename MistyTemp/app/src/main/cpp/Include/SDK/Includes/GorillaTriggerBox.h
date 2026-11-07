#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTriggerBox : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTriggerBox", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T triggerBoxOnce() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("triggerBoxOnce");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_triggerBoxOnce(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("triggerBoxOnce");
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
		template <typename T = BNM::IL2CPP::Il2CppObject*> T TestTrigger() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TestTrigger", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnBoxTriggered() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnBoxTriggered", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

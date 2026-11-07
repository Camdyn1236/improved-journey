#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaCameraTriggerIndex : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaCameraTriggerIndex", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T sceneTriggerIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sceneTriggerIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_sceneTriggerIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("sceneTriggerIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaCameraSceneTrigger */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T parentTrigger() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("parentTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaCameraSceneTrigger */
		void set_parentTrigger(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("parentTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerExit(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerExit", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		
	};
}

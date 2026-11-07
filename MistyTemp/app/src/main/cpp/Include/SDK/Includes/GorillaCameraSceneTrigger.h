#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaCameraSceneTrigger : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaCameraSceneTrigger", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaSceneCamera */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T sceneCamera() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sceneCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaSceneCamera */
		void set_sceneCamera(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("sceneCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaCameraTriggerIndex */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentSceneTrigger() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentSceneTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaCameraTriggerIndex */
		void set_currentSceneTrigger(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentSceneTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaCameraTriggerIndex */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mostRecentSceneTrigger() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mostRecentSceneTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaCameraTriggerIndex */
		void set_mostRecentSceneTrigger(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mostRecentSceneTrigger");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ChangeScene(BNM::IL2CPP::Il2CppObject* triggerLeft) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ChangeScene", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](triggerLeft);
		}
		
	};
}

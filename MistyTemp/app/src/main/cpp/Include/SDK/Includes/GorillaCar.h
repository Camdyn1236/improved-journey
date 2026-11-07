#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaCar : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaCar", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T GorillaPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("GorillaPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Rigidbody */
		void set_GorillaPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("GorillaPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T VroomVroomSpeed() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("VroomVroomSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_VroomVroomSpeed(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("VroomVroomSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T CarDirection() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("CarDirection");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_CarDirection(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("CarDirection");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

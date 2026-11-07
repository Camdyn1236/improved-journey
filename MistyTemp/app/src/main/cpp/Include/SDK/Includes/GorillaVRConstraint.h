#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaVRConstraint : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaVRConstraint", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isConstrained() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isConstrained");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isConstrained(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isConstrained");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T angle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("angle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_angle(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("angle");
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

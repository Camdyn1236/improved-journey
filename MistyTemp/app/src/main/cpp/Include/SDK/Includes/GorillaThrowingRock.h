#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaThrowingRock : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaThrowingRock", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Single */
		template <typename T = float> T bonkSpeedMin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bonkSpeedMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_bonkSpeedMin(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("bonkSpeedMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T bonkSpeedMax() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bonkSpeedMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_bonkSpeedMax(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("bonkSpeedMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T hitRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hitRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_hitRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("hitRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPhotonInstantiate(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPhotonInstantiate", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnCollisionEnter(BNM::IL2CPP::Il2CppObject* collision) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnCollisionEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collision);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		
	};
}

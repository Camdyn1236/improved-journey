#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaIKHandTarget : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaIKHandTarget", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T handToStickTo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handToStickTo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_handToStickTo(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("handToStickTo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isLeftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isLeftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isLeftHand(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isLeftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T hapticStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_hapticStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("hapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T thisRigidbody() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("thisRigidbody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Rigidbody */
		void set_thisRigidbody(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("thisRigidbody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.Interaction.Toolkit.XRController */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T controllerReference() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("controllerReference");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.Interaction.Toolkit.XRController */
		void set_controllerReference(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("controllerReference");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T FixedUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FixedUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnCollisionEnter(BNM::IL2CPP::Il2CppObject* collision) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnCollisionEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collision);
		}
		
	};
}

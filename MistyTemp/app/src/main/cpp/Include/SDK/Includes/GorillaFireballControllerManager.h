#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaFireballControllerManager : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaFireballControllerManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.XR.InputDevice */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.InputDevice */
		void set_leftHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.InputDevice */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.InputDevice */
		void set_rightHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T hasInitialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hasInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_hasInitialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("hasInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T leftHandLastState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandLastState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_leftHandLastState(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("leftHandLastState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T rightHandLastState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandLastState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_rightHandLastState(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("rightHandLastState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T throwingThreshold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("throwingThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_throwingThreshold(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("throwingThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T TryThrowFireball(bool isLeftHand) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TryThrowFireball", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isLeftHand);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CreateFireball(bool isLeftHand) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CreateFireball", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isLeftHand);
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaIK : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaIK", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headBone() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headBone");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_headBone(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headBone");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftUpperArm() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftUpperArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_leftUpperArm(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftUpperArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftLowerArm() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftLowerArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_leftLowerArm(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftLowerArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_leftHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightUpperArm() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightUpperArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_rightUpperArm(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightUpperArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightLowerArm() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightLowerArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_rightLowerArm(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightLowerArm");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_rightHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T targetLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_targetLeft(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("targetLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T targetRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_targetRight(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("targetRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T targetHead() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetHead");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_targetHead(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("targetHead");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T initialUpperLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialUpperLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_initialUpperLeft(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("initialUpperLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T initialLowerLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialLowerLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_initialLowerLeft(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("initialLowerLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T initialUpperRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialUpperRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_initialUpperRight(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("initialUpperRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T initialLowerRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialLowerRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_initialLowerRight(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("initialLowerRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T newRotationUpper() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("newRotationUpper");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_newRotationUpper(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("newRotationUpper");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T newRotationLower() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("newRotationLower");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_newRotationLower(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("newRotationLower");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T dU() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("dU");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_dU(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("dU");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T dL() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("dL");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_dL(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("dL");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T dMax() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("dMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_dMax(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("dMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testInEditor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testInEditor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testInEditor(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testInEditor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T reset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_reset(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("reset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testDefineRot() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testDefineRot");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testDefineRot(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testDefineRot");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T moveOnce() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("moveOnce");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_moveOnce(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("moveOnce");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T eps() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("eps");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_eps(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("eps");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T upperArmAngle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("upperArmAngle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_upperArmAngle(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("upperArmAngle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T elbowAngle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("elbowAngle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_elbowAngle(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("elbowAngle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ArmIK(BNM::IL2CPP::Il2CppObject* upperArm, BNM::IL2CPP::Il2CppObject* lowerArm, BNM::IL2CPP::Il2CppObject* hand, BNM::Structures::Unity::Quaternion initRotUpper, BNM::Structures::Unity::Quaternion initRotLower, BNM::IL2CPP::Il2CppObject* target) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ArmIK", 6);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](upperArm, lowerArm, hand, initRotUpper, initRotLower, target);
		}
		
	};
}

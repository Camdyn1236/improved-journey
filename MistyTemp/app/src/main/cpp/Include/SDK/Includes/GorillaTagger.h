#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTagger : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTagger", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaTagger */
		template <typename T = GlobalNamespace::GorillaTagger*> static T _instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaTagger */
		static void set__instance(GlobalNamespace::GorillaTagger* value) {
			static BNM::Field<GlobalNamespace::GorillaTagger*> __bnm__field__ = StaticClass().GetField("_instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> static T hasInstance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hasInstance");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		static void set_hasInstance(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("hasInstance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T inCosmeticsRoom() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("inCosmeticsRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_inCosmeticsRoom(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("inCosmeticsRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.SphereCollider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.SphereCollider */
		void set_headCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.CapsuleCollider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T bodyCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.CapsuleCollider */
		void set_bodyCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("bodyCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastLeftHandPositionForTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastLeftHandPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastLeftHandPositionForTag(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastLeftHandPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastRightHandPositionForTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastRightHandPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastRightHandPositionForTag(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastRightHandPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastBodyPositionForTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastBodyPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastBodyPositionForTag(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastBodyPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastHeadPositionForTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastHeadPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastHeadPositionForTag(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastHeadPositionForTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_rightHandTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_leftHandTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T hapticWaitSeconds() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hapticWaitSeconds");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_hapticWaitSeconds(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("hapticWaitSeconds");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T handTapVolume() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handTapVolume");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_handTapVolume(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("handTapVolume");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tapCoolDown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tapCoolDown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tapCoolDown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tapCoolDown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lastLeftTap() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastLeftTap");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lastLeftTap(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lastLeftTap");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lastRightTap() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastRightTap");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lastRightTap(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lastRightTap");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tapHapticDuration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tapHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tapHapticDuration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tapHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tapHapticStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tapHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tapHapticStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tapHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tagHapticDuration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tagHapticDuration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tagHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tagHapticStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tagHapticStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tagHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T taggedHapticDuration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("taggedHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_taggedHapticDuration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("taggedHapticDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T taggedHapticStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("taggedHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_taggedHapticStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("taggedHapticStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T leftHandTouching() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_leftHandTouching(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("leftHandTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T rightHandTouching() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_rightHandTouching(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("rightHandTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T taggedTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("taggedTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_taggedTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("taggedTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tagCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tagCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tagCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T slowCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("slowCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_slowCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("slowCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_myVRRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T offlineVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("offlineVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_offlineVRRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("offlineVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mainCamera() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mainCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_mainCamera(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mainCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testTutorial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testTutorial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testTutorial(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testTutorial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T disableTutorial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("disableTutorial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_disableTutorial(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("disableTutorial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T frameRateUpdated() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("frameRateUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_frameRateUpdated(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("frameRateUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandTriggerCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandTriggerCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_leftHandTriggerCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandTriggerCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandTriggerCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandTriggerCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_rightHandTriggerCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandTriggerCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Camera */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mirrorCamera() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mirrorCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Camera */
		void set_mirrorCamera(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mirrorCamera");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandSlideSource() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandSlideSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_leftHandSlideSource(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandSlideSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandSlideSource() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandSlideSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_rightHandSlideSource(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandSlideSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T overrideNotInFocus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overrideNotInFocus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_overrideNotInFocus(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("overrideNotInFocus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T leftRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_leftRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("leftRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T leftHeadRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHeadRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_leftHeadRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("leftHeadRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T rightRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_rightRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("rightRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T rightHeadRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHeadRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_rightHeadRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("rightHeadRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T headRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_headRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("headRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T bodyRaycastSweep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_bodyRaycastSweep(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("bodyRaycastSweep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.InputDevice */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightDevice() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.InputDevice */
		void set_rightDevice(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.InputDevice */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftDevice() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.InputDevice */
		void set_leftDevice(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T primaryButtonPressRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("primaryButtonPressRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_primaryButtonPressRight(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("primaryButtonPressRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T secondaryButtonPressRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("secondaryButtonPressRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_secondaryButtonPressRight(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("secondaryButtonPressRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T primaryButtonPressLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("primaryButtonPressLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_primaryButtonPressLeft(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("primaryButtonPressLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T secondaryButtonPressLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("secondaryButtonPressLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_secondaryButtonPressLeft(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("secondaryButtonPressLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.RaycastHit */
		template <typename T = BNM::Structures::Unity::RaycastHit> T hitInfo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hitInfo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.RaycastHit */
		void set_hitInfo(BNM::Structures::Unity::RaycastHit value) {
			static BNM::Field<BNM::Structures::Unity::RaycastHit> __bnm__field__ = StaticClass().GetField("hitInfo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T otherPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("otherPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_otherPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("otherPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tryPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tryPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tryPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tryPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T topVector() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("topVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_topVector(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("topVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T bottomVector() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bottomVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_bottomVector(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("bottomVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T bodyVector() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_bodyVector(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("bodyVector");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempInt() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempInt(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.InputDevice */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T inputDevice() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("inputDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.InputDevice */
		void set_inputDevice(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("inputDevice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T wasInOverlay() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("wasInOverlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_wasInOverlay(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("wasInOverlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempView() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Pun.PhotonView */
		void set_tempView(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaTagger/StatusEffect */
		template <typename T = int> T currentStatus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaTagger/StatusEffect */
		void set_currentStatus(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T statusStartTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("statusStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_statusStartTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("statusStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T statusEndTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("statusEndTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_statusEndTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("statusEndTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T refreshRate() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("refreshRate");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_refreshRate(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("refreshRate");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T baseSlideControl() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("baseSlideControl");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_baseSlideControl(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("baseSlideControl");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T gorillaTagColliderLayerMask() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gorillaTagColliderLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_gorillaTagColliderLayerMask(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("gorillaTagColliderLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.RaycastHit[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T nonAllocRaycastHits() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nonAllocRaycastHits");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.RaycastHit[] */
		void set_nonAllocRaycastHits(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("nonAllocRaycastHits");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T nonAllocHits() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nonAllocHits");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_nonAllocHits(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("nonAllocHits");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Voice.Unity.Recorder */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myRecorder() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myRecorder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Voice.Unity.Recorder */
		void set_myRecorder(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myRecorder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T xrSubsystemIsActive() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("xrSubsystemIsActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_xrSubsystemIsActive(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("xrSubsystemIsActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T loadedDeviceName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("loadedDeviceName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_loadedDeviceName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("loadedDeviceName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Steamworks.Callback`1<Steamworks.GameOverlayActivated_t> */
		template <typename T = void* /*GENERICTYPE*/> T gameOverlayActivatedCb() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gameOverlayActivatedCb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Steamworks.Callback`1<Steamworks.GameOverlayActivated_t> */
		void set_gameOverlayActivatedCb(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("gameOverlayActivatedCb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isGameOverlayActive() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isGameOverlayActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isGameOverlayActive(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isGameOverlayActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T $rigidbody$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$rigidbody$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Rigidbody */
		void set_$rigidbody$(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("$rigidbody$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: GorillaTagger */
		template <typename T = GlobalNamespace::GorillaTagger*> static T get_Instance() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Instance", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T get_rigidbody() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_rigidbody", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_rigidbody(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_rigidbody", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T get_sphereCastRadius() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_sphereCastRadius", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDestroy() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDestroy", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T IsXRSubsystemActive() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsXRSubsystemActive", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnGameOverlayActivated(BNM::IL2CPP::Il2CppObject* pCallback) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnGameOverlayActivated", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pCallback);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T TryToTag(BNM::Structures::Unity::RaycastHit hitInfo, bool isBodyTag, BNM::IL2CPP::Il2CppObject** taggedPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TryToTag", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](hitInfo, isBodyTag, taggedPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T StartVibration(bool forLeftController, float amplitude, float duration) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StartVibration", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](forLeftController, amplitude, duration);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T HapticPulses(bool forLeftController, float amplitude, float duration) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("HapticPulses", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](forLeftController, amplitude, duration);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateColor(float red, float green, float blue) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateColor", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](red, green, blue);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ShowCosmeticParticles(bool showParticles) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ShowCosmeticParticles", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](showParticles);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ApplyStatusEffect(int newStatus, float duration) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ApplyStatusEffect", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newStatus, duration);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CheckEndStatusEffect() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckEndStatusEffect", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndStatusEffect(int effectToEnd) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndStatusEffect", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](effectToEnd);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T CalcSlideControl(float fps) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CalcSlideControl", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](fps);
		}
		
	};
}

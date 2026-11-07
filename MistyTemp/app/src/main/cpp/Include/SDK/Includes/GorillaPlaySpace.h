#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaPlaySpace : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaPlaySpace", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaPlaySpace */
		template <typename T = GlobalNamespace::GorillaPlaySpace*> static T _instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaPlaySpace */
		static void set__instance(GlobalNamespace::GorillaPlaySpace* value) {
			static BNM::Field<GlobalNamespace::GorillaPlaySpace*> __bnm__field__ = StaticClass().GetField("_instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider */
		void set_headCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T bodyCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider */
		void set_bodyCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("bodyCollider");
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
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T headColliderOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headColliderOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_headColliderOffset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("headColliderOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T bodyColliderOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyColliderOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_bodyColliderOffset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("bodyColliderOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastLeftHandPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastLeftHandPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastLeftHandPosition(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastLeftHandPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastRightHandPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastRightHandPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastRightHandPosition(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastRightHandPosition");
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
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playspaceRigidbody() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playspaceRigidbody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Rigidbody */
		void set_playspaceRigidbody(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playspaceRigidbody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headsetTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headsetTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_headsetTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headsetTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T rightHandOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_rightHandOffset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("rightHandOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T leftHandOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_leftHandOffset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("leftHandOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T vrRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vrRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_vrRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("vrRig");
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
		/* @brief Orig Type: System.Single */
		template <typename T = float> T vibrationCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vibrationCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_vibrationCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("vibrationCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T vibrationDuration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vibrationDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_vibrationDuration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("vibrationDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T leftLastTouchedSurface() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftLastTouchedSurface");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_leftLastTouchedSurface(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("leftLastTouchedSurface");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T rightLastTouchedSurface() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightLastTouchedSurface");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_rightLastTouchedSurface(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("rightLastTouchedSurface");
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
		/* @brief Orig Type: System.Single */
		template <typename T = float> T bodyHeight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyHeight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_bodyHeight(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("bodyHeight");
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
		template <typename T = float> T disconnectTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("disconnectTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_disconnectTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("disconnectTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T maxStepVelocity() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maxStepVelocity");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_maxStepVelocity(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("maxStepVelocity");
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
		
		/* @brief Orig Type: GorillaPlaySpace */
		template <typename T = GlobalNamespace::GorillaPlaySpace*> static T get_Instance() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Instance", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

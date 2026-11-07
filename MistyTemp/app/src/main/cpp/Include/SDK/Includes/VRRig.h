#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class VRRig : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "VRRig", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: VRMap */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T head() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("head");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMap */
		void set_head(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("head");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMap */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMap */
		void set_rightHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMap */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMap */
		void set_leftHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapThumb */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftThumb() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftThumb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapThumb */
		void set_leftThumb(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftThumb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapIndex */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapIndex */
		void set_leftIndex(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapMiddle */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftMiddle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftMiddle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapMiddle */
		void set_leftMiddle(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftMiddle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapThumb */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightThumb() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightThumb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapThumb */
		void set_rightThumb(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightThumb");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapIndex */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapIndex */
		void set_rightIndex(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRMapMiddle */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightMiddle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightMiddle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRMapMiddle */
		void set_rightMiddle(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightMiddle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isOfflineVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isOfflineVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isOfflineVRRig(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isOfflineVRRig");
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
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerOffsetTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerOffsetTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_playerOffsetTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerOffsetTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T SDKIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SDKIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_SDKIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("SDKIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isMyPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isMyPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isMyPlayer(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isMyPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_leftHandPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_rightHandPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tagSound() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagSound");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_tagSound(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tagSound");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T ratio() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ratio");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_ratio(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("ratio");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headConstraint() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headConstraint");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_headConstraint(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headConstraint");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T headBodyOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headBodyOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_headBodyOffset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("headBodyOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T headMesh() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("headMesh");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_headMesh(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("headMesh");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T syncPos() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("syncPos");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_syncPos(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("syncPos");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T syncRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("syncRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Quaternion */
		void set_syncRotation(BNM::Structures::Unity::Quaternion value) {
			static BNM::Field<BNM::Structures::Unity::Quaternion> __bnm__field__ = StaticClass().GetField("syncRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioClip[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T clipToPlay() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("clipToPlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioClip[] */
		void set_clipToPlay(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("clipToPlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioClip[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T handTapSound() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handTapSound");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioClip[] */
		void set_handTapSound(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("handTapSound");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T currentMatIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_currentMatIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T setMatIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_setMatIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("setMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempMatIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempMatIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lerpValueFingers() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lerpValueFingers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lerpValueFingers(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lerpValueFingers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lerpValueBody() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lerpValueBody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lerpValueBody(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lerpValueBody");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T backpack() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("backpack");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_backpack(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("backpack");
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
		/* @brief Orig Type: UnityEngine.SkinnedMeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mainSkin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mainSkin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.SkinnedMeshRenderer */
		void set_mainSkin(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mainSkin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_myPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T spectatorSkin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("spectatorSkin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_spectatorSkin(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("spectatorSkin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T handSync() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handSync");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_handSync(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("handSync");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T materialsToChangeTo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("materialsToChangeTo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material[] */
		void set_materialsToChangeTo(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("materialsToChangeTo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T red() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("red");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_red(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("red");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T green() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("green");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_green(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("green");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T blue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("blue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_blue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("blue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_playerText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T showName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("showName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_showName(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("showName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticItemRegistry */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T cosmeticsObjectRegistry() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("cosmeticsObjectRegistry");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticItemRegistry */
		void set_cosmeticsObjectRegistry(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("cosmeticsObjectRegistry");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T cosmetics() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("cosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_cosmetics(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("cosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T overrideCosmetics() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overrideCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_overrideCosmetics(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("overrideCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T combinedCosmetics() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("combinedCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_combinedCosmetics(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("combinedCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T concatStringOfCosmeticsAllowed() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("concatStringOfCosmeticsAllowed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_concatStringOfCosmeticsAllowed(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("concatStringOfCosmeticsAllowed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T initializedCosmetics() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initializedCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_initializedCosmetics(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("initializedCosmetics");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T cosmeticSet() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("cosmeticSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		void set_cosmeticSet(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("cosmeticSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tryOnSet() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tryOnSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		void set_tryOnSet(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tryOnSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mergedSet() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mergedSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		void set_mergedSet(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mergedSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T prevSet() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("prevSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticSet */
		void set_prevSet(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("prevSet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: SizeManager */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T sizeManager() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sizeManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: SizeManager */
		void set_sizeManager(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("sizeManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T pitchScale() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("pitchScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_pitchScale(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("pitchScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T pitchOffset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("pitchOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_pitchOffset(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("pitchOffset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRigReliableState */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T reliableState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reliableState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRigReliableState */
		void set_reliableState(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("reliableState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T inTryOnRoom() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("inTryOnRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_inTryOnRoom(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("inTryOnRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T muted() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("muted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_muted(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("muted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T scaleFactor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("scaleFactor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_scaleFactor(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("scaleFactor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T timeSpawned() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeSpawned");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_timeSpawned(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("timeSpawned");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T doNotLerpConstant() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("doNotLerpConstant");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_doNotLerpConstant(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("doNotLerpConstant");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T tempString() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempString");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_tempString(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("tempString");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tempPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T creator() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("creator");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_creator(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("creator");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = GlobalNamespace::VRRig*> T tempRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_tempRig(GlobalNamespace::VRRig* value) {
			static BNM::Field<GlobalNamespace::VRRig*> __bnm__field__ = StaticClass().GetField("tempRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T speedArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("speedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single[] */
		void set_speedArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("speedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Double */
		template <typename T = double> T handLerpValues() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handLerpValues");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Double */
		void set_handLerpValues(double value) {
			static BNM::Field<double> __bnm__field__ = StaticClass().GetField("handLerpValues");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T initialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_initialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: BattleBalloons */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T battleBalloons() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("battleBalloons");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: BattleBalloons */
		void set_battleBalloons(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("battleBalloons");
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
		/* @brief Orig Type: BodyDockPositions */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myBodyDockPositions() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myBodyDockPositions");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: BodyDockPositions */
		void set_myBodyDockPositions(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myBodyDockPositions");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.ParticleSystem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T lavaParticleSystem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lavaParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.ParticleSystem */
		void set_lavaParticleSystem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("lavaParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.ParticleSystem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rockParticleSystem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rockParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.ParticleSystem */
		void set_rockParticleSystem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rockParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.ParticleSystem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T iceParticleSystem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("iceParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.ParticleSystem */
		void set_iceParticleSystem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("iceParticleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T tempItemName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItemName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_tempItemName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("tempItemName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempItem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		void set_tempItem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T tempItemId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItemId");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_tempItemId(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("tempItemId");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempItemCost() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItemCost");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempItemCost(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempItemCost");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T leftHandHoldableStatus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandHoldableStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_leftHandHoldableStatus(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("leftHandHoldableStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T rightHandHoldableStatus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandHoldableStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_rightHandHoldableStatus(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("rightHandHoldableStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T musicDrums() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("musicDrums");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource[] */
		void set_musicDrums(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("musicDrums");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: TransferrableObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T instrumentSelfOnly() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instrumentSelfOnly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: TransferrableObject[] */
		void set_instrumentSelfOnly(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("instrumentSelfOnly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T bonkTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bonkTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_bonkTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("bonkTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T bonkCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bonkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_bonkCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("bonkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isQuitting() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isQuitting");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isQuitting(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isQuitting");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = GlobalNamespace::VRRig*> T tempVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_tempVRRig(GlobalNamespace::VRRig* value) {
			static BNM::Field<GlobalNamespace::VRRig*> __bnm__field__ = StaticClass().GetField("tempVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T huntComputer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("huntComputer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_huntComputer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("huntComputer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Slingshot */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T slingshot() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("slingshot");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Slingshot */
		void set_slingshot(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("slingshot");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T playerLeftHanded() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerLeftHanded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_playerLeftHanded(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("playerLeftHanded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Slingshot/SlingshotState */
		template <typename T = int> T slingshotState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("slingshotState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Slingshot/SlingshotState */
		void set_slingshotState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("slingshotState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Voice.PUN.PhotonVoiceView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myPhotonVoiceView() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myPhotonVoiceView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Voice.PUN.PhotonVoiceView */
		void set_myPhotonVoiceView(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myPhotonVoiceView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = GlobalNamespace::VRRig*> T senderRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("senderRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_senderRig(GlobalNamespace::VRRig* value) {
			static BNM::Field<GlobalNamespace::VRRig*> __bnm__field__ = StaticClass().GetField("senderRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: TransferrableObject/PositionState */
		template <typename T = int> T currentState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: TransferrableObject/PositionState */
		void set_currentState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isInitialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isInitialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<VRRig/VelocityTime> */
		template <typename T = void* /*GENERICTYPE*/> T velocityHistoryList() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("velocityHistoryList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<VRRig/VelocityTime> */
		void set_velocityHistoryList(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("velocityHistoryList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T velocityHistoryMaxLength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("velocityHistoryMaxLength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_velocityHistoryMaxLength(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("velocityHistoryMaxLength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastPosition(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T voiceAudio() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("voiceAudio");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_voiceAudio(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("voiceAudio");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T get_ExtraSerializedState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_ExtraSerializedState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_ExtraSerializedState(int $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_ExtraSerializedState", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T get_LeftHandState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_LeftHandState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_LeftHandState(int $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_LeftHandState", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T get_RightHandState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_RightHandState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_RightHandState(int $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_RightHandState", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T get_SizeLayerMask() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_SizeLayerMask", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_SizeLayerMask(int $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_SizeLayerMask", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T ActiveTransferrableObjectIndex(int idx) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ActiveTransferrableObjectIndex", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T ActiveTransferrableObjectIndexLength() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ActiveTransferrableObjectIndexLength", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetActiveTransferrableObjectIndex(int idx, int v) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetActiveTransferrableObjectIndex", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx, v);
		}
		/* @brief Orig Type: TransferrableObject/PositionState */
		template <typename T = int> T TransferrablePosStates(int idx) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TransferrablePosStates", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetTransferrablePosStates(int idx, int v) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetTransferrablePosStates", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx, v);
		}
		/* @brief Orig Type: TransferrableObject/ItemStates */
		template <typename T = int> T TransferrableItemStates(int idx) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("TransferrableItemStates", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetTransferrableItemStates(int idx, int v) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetTransferrableItemStates", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](idx, v);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SharedStart() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SharedStart", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T OccasionalUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OccasionalUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IsItemAllowed(BNM::Structures::Mono::String* itemName) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsItemAllowed", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](itemName);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetHeadBodyOffset() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetHeadBodyOffset", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T VRRigResize(float ratioVar) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("VRRigResize", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](ratioVar);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T ReturnHandPosition() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReturnHandPosition", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDestroy() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDestroy", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IOnPhotonViewPreNetDestroy_OnPreNetDestroy(BNM::IL2CPP::Il2CppObject* rootView) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IOnPhotonViewPreNetDestroy.OnPreNetDestroy", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](rootView);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunObservable_OnPhotonSerializeView(BNM::IL2CPP::Il2CppObject* stream, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunObservable.OnPhotonSerializeView", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](stream, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ChangeMaterial(int materialIndex, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ChangeMaterial", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](materialIndex, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ChangeMaterialLocal(int materialIndex) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ChangeMaterialLocal", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](materialIndex);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InitializeNoobMaterial(float red, float green, float blue, bool leftHanded, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InitializeNoobMaterial", 5);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](red, green, blue, leftHanded, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InitializeNoobMaterialLocal(float red, float green, float blue, bool leftHanded) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InitializeNoobMaterialLocal", 4);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](red, green, blue, leftHanded);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T NormalizeName(bool doIt, BNM::Structures::Mono::String* text) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NormalizeName", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](doIt, text);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetJumpLimitLocal(float maxJumpSpeed) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetJumpLimitLocal", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](maxJumpSpeed);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetJumpMultiplierLocal(float jumpMultiplier) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetJumpMultiplierLocal", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](jumpMultiplier);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetTaggedTime(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetTaggedTime", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetSlowedTime(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetSlowedTime", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetJoinTaggedTime(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetJoinTaggedTime", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T RequestMaterialColor(BNM::IL2CPP::Il2CppObject* askingPlayer, bool noneBool, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RequestMaterialColor", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](askingPlayer, noneBool, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T RequestCosmetics(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RequestCosmetics", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PlayTagSound(int soundIndex, float soundVolume, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayTagSound", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](soundIndex, soundVolume, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Bonk(int soundIndex, float bonkPercent, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Bonk", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](soundIndex, bonkPercent, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PlayDrum(int drumIndex, float drumVolume, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayDrum", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](drumIndex, drumVolume, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PlaySelfOnlyInstrument(int selfOnlyIndex, int noteIndex, float instrumentVol, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlaySelfOnlyInstrument", 4);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](selfOnlyIndex, noteIndex, instrumentVol, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PlayHandTap(int soundIndex, bool isLeftHand, float tapVolume, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayHandTap", 4);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](soundIndex, isLeftHand, tapVolume, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PlayHandTapLocal(int soundIndex, bool isLeftHand, float tapVolume) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayHandTapLocal", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](soundIndex, isLeftHand, tapVolume);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateCosmetics(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* currentItems, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateCosmetics", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currentItems, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateCosmeticsWithTryon(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* currentItems, BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* tryOnItems, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateCosmeticsWithTryon", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currentItems, tryOnItems, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateAllowedCosmetics() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateAllowedCosmetics", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LocalUpdateCosmetics(BNM::IL2CPP::Il2CppObject* newSet) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalUpdateCosmetics", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newSet);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LocalUpdateCosmeticsWithTryon(BNM::IL2CPP::Il2CppObject* newSet, BNM::IL2CPP::Il2CppObject* newTryOnSet) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalUpdateCosmeticsWithTryon", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newSet, newTryOnSet);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CheckForEarlyAccess() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckForEarlyAccess", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetCosmeticsActive() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetCosmeticsActive", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUserCosmeticsAllowed() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetUserCosmeticsAllowed", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Quitting() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Quitting", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GenerateFingerAngleLookupTables() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GenerateFingerAngleLookupTables", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GenerateTableThumb(BNM::IL2CPP::Il2CppObject* thumb) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GenerateTableThumb", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](thumb);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GenerateTableIndex(BNM::IL2CPP::Il2CppObject* index) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GenerateTableIndex", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](index);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GenerateTableMiddle(BNM::IL2CPP::Il2CppObject* middle) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GenerateTableMiddle", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](middle);
		}
		/* @brief Orig Type: UnityEngine.Quaternion */
		template <typename T = BNM::Structures::Unity::Quaternion> T SanitizeQuaternion(BNM::Structures::Unity::Quaternion quat) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SanitizeQuaternion", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](quat);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T SanitizeVector3(BNM::Structures::Unity::Vector3 vec) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SanitizeVector3", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](vec);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T IncrementRPC(BNM::IL2CPP::Il2CppObject* info, BNM::Structures::Mono::String* sourceCall) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IncrementRPC", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info, sourceCall);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T AddVelocityToQueue(BNM::Structures::Unity::Vector3 position, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("AddVelocityToQueue", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](position, info);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T ReturnVelocityAtTime(double timeToReturn) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReturnVelocityAtTime", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](timeToReturn);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUserCosmeticsAllowedb__158_0(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<GetUserCosmeticsAllowed>b__158_0", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUserCosmeticsAllowedb__158_1(BNM::IL2CPP::Il2CppObject* error) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<GetUserCosmeticsAllowed>b__158_1", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](error);
		}
		
	};
}

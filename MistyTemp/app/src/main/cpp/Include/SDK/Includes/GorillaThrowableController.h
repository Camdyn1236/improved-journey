#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaThrowableController : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaThrowableController", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandController() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_leftHandController(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandController() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_rightHandController(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T leftHandIsGrabbing() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandIsGrabbing");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_leftHandIsGrabbing(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("leftHandIsGrabbing");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T rightHandIsGrabbing() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandIsGrabbing");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_rightHandIsGrabbing(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("rightHandIsGrabbing");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaThrowable */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHandGrabbedObject() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHandGrabbedObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaThrowable */
		void set_leftHandGrabbedObject(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHandGrabbedObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaThrowable */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHandGrabbedObject() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHandGrabbedObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaThrowable */
		void set_rightHandGrabbedObject(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHandGrabbedObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T hoverVibrationStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hoverVibrationStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_hoverVibrationStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("hoverVibrationStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T hoverVibrationDuration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hoverVibrationDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_hoverVibrationDuration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("hoverVibrationDuration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T handRadius() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("handRadius");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_handRadius(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("handRadius");
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
		/* @brief Orig Type: System.Single */
		template <typename T = float> T triggerValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("triggerValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_triggerValue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("triggerValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T boolVar() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("boolVar");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_boolVar(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("boolVar");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T colliders() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("colliders");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider[] */
		void set_colliders(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("colliders");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T minCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("minCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider */
		void set_minCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("minCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T returnCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("returnCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider */
		void set_returnCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("returnCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T magnitude() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("magnitude");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_magnitude(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("magnitude");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testCanGrab() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testCanGrab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testCanGrab(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testCanGrab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T gorillaThrowableLayerMask() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gorillaThrowableLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_gorillaThrowableLayerMask(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("gorillaThrowableLayerMask");
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
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T CheckIfHandHasReleased(int node) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckIfHandHasReleased", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](node);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T CheckIfHandHasGrabbed(int node) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckIfHandHasGrabbed", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](node);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T CanGrabAnObject(BNM::IL2CPP::Il2CppObject* handTransform, BNM::IL2CPP::Il2CppObject** returnCollider) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CanGrabAnObject", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](handTransform, returnCollider);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GrabbableObjectHover(bool isLeft) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GrabbableObjectHover", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isLeft);
		}
		
	};
}

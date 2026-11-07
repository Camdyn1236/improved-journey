#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class OVRPlayerController : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "OVRPlayerController", BNM::Image("Oculus.VR.dll"));
		}
		
		/* @brief Orig Type: System.Single */
		template <typename T = float> T Acceleration() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Acceleration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_Acceleration(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("Acceleration");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T Damping() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Damping");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_Damping(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("Damping");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T BackAndSideDampen() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("BackAndSideDampen");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_BackAndSideDampen(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("BackAndSideDampen");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T JumpForce() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("JumpForce");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_JumpForce(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("JumpForce");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T RotationAmount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RotationAmount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_RotationAmount(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("RotationAmount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T RotationRatchet() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RotationRatchet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_RotationRatchet(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("RotationRatchet");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T SnapRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SnapRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_SnapRotation(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("SnapRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T RotateAroundGuardianCenter() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RotateAroundGuardianCenter");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_RotateAroundGuardianCenter(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("RotateAroundGuardianCenter");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T FixedSpeedSteps() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("FixedSpeedSteps");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_FixedSpeedSteps(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("FixedSpeedSteps");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T HmdResetsY() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("HmdResetsY");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_HmdResetsY(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("HmdResetsY");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T HmdRotatesY() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("HmdRotatesY");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_HmdRotatesY(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("HmdRotatesY");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T GravityModifier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("GravityModifier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_GravityModifier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("GravityModifier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T useProfileData() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("useProfileData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_useProfileData(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("useProfileData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T CameraHeight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("CameraHeight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_CameraHeight(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("CameraHeight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Action`1<UnityEngine.Transform> */
		template <typename T = void* /*GENERICTYPE*/> T TransformUpdated() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("TransformUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Action`1<UnityEngine.Transform> */
		void set_TransformUpdated(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("TransformUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T Teleported() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Teleported");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_Teleported(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("Teleported");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Action */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T CameraUpdated() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("CameraUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Action */
		void set_CameraUpdated(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("CameraUpdated");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Action */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T PreCharacterMove() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("PreCharacterMove");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Action */
		void set_PreCharacterMove(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("PreCharacterMove");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T EnableLinearMovement() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("EnableLinearMovement");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_EnableLinearMovement(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("EnableLinearMovement");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T EnableRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("EnableRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_EnableRotation(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("EnableRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T RotationEitherThumbstick() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RotationEitherThumbstick");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_RotationEitherThumbstick(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("RotationEitherThumbstick");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.CharacterController */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Controller() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Controller");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.CharacterController */
		void set_Controller(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Controller");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRCameraRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T CameraRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("CameraRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRCameraRig */
		void set_CameraRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("CameraRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T MoveScale() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("MoveScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_MoveScale(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("MoveScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T MoveThrottle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("MoveThrottle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_MoveThrottle(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("MoveThrottle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T FallSpeed() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("FallSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_FallSpeed(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("FallSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Nullable`1<OVRPose> */
		template <typename T = void* /*GENERICTYPE*/> T InitialPose() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("InitialPose");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Nullable`1<OVRPose> */
		void set_InitialPose(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("InitialPose");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T $InitialYRotation$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$InitialYRotation$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_$InitialYRotation$(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("$InitialYRotation$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T MoveScaleMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("MoveScaleMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_MoveScaleMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("MoveScaleMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T RotationScaleMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RotationScaleMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_RotationScaleMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("RotationScaleMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T SkipMouseRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SkipMouseRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_SkipMouseRotation(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("SkipMouseRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T HaltUpdateMovement() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("HaltUpdateMovement");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_HaltUpdateMovement(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("HaltUpdateMovement");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T prevHatLeft() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("prevHatLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_prevHatLeft(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("prevHatLeft");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T prevHatRight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("prevHatRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_prevHatRight(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("prevHatRight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T SimulationRate() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SimulationRate");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_SimulationRate(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("SimulationRate");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T buttonRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("buttonRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_buttonRotation(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("buttonRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T ReadyToSnapTurn() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ReadyToSnapTurn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_ReadyToSnapTurn(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("ReadyToSnapTurn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T playerControllerEnabled() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerControllerEnabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_playerControllerEnabled(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("playerControllerEnabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T add_TransformUpdated(void* /*GENERICTYPE*/ $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("add_TransformUpdated", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T remove_TransformUpdated(void* /*GENERICTYPE*/ $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("remove_TransformUpdated", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T add_CameraUpdated(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("add_CameraUpdated", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T remove_CameraUpdated(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("remove_CameraUpdated", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T add_PreCharacterMove(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("add_PreCharacterMove", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T remove_PreCharacterMove(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("remove_PreCharacterMove", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T get_InitialYRotation() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_InitialYRotation", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_InitialYRotation(float $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_InitialYRotation", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateController() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateController", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateMovement() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateMovement", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateTransform(BNM::IL2CPP::Il2CppObject* rig) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateTransform", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](rig);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T Jump() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Jump", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Stop() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Stop", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetMoveScaleMultiplier(BNM::IL2CPP::Il2CppObject* moveScaleMultiplier) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetMoveScaleMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](moveScaleMultiplier);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetMoveScaleMultiplier(float moveScaleMultiplier) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetMoveScaleMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](moveScaleMultiplier);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetRotationScaleMultiplier(BNM::IL2CPP::Il2CppObject* rotationScaleMultiplier) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetRotationScaleMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](rotationScaleMultiplier);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetRotationScaleMultiplier(float rotationScaleMultiplier) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetRotationScaleMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](rotationScaleMultiplier);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetSkipMouseRotation(BNM::IL2CPP::Il2CppObject* skipMouseRotation) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetSkipMouseRotation", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](skipMouseRotation);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetSkipMouseRotation(bool skipMouseRotation) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetSkipMouseRotation", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](skipMouseRotation);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetHaltUpdateMovement(BNM::IL2CPP::Il2CppObject* haltUpdateMovement) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetHaltUpdateMovement", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](haltUpdateMovement);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetHaltUpdateMovement(bool haltUpdateMovement) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetHaltUpdateMovement", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](haltUpdateMovement);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ResetOrientation() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ResetOrientation", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

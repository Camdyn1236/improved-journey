#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaWalkingGrab : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaWalkingGrab", BNM::Image("Assembly-CSharp.dll"));
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
		/* @brief Orig Type: System.Single */
		template <typename T = float> T ratioToUse() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ratioToUse");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_ratioToUse(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("ratioToUse");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T forceMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("forceMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_forceMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("forceMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T historySteps() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("historySteps");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_historySteps(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("historySteps");
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
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T maybeLastPositionIDK() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maybeLastPositionIDK");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_maybeLastPositionIDK(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("maybeLastPositionIDK");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T positionHistory() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("positionHistory");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3[] */
		void set_positionHistory(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("positionHistory");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T historyIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("historyIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_historyIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("historyIndex");
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
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T MakeJump() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MakeJump", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnCollisionStay(BNM::IL2CPP::Il2CppObject* collision) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnCollisionStay", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collision);
		}
		
	};
}

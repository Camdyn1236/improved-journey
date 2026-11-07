#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaVelocityEstimator : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaVelocityEstimator", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T numFrames() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("numFrames");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_numFrames(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("numFrames");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaVelocityEstimator/VelocityHistorySample[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T history() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("history");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaVelocityEstimator/VelocityHistorySample[] */
		void set_history(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("history");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T currentFrame() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentFrame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_currentFrame(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentFrame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T lastPos() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastPos");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_lastPos(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("lastPos");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T $linearVelocity$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$linearVelocity$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_$linearVelocity$(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("$linearVelocity$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T $angularVelocity$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$angularVelocity$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_$angularVelocity$(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("$angularVelocity$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T $handPos$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$handPos$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_$handPos$(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("$handPos$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T get_linearVelocity() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_linearVelocity", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_linearVelocity(BNM::Structures::Unity::Vector3 $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_linearVelocity", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T get_angularVelocity() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_angularVelocity", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_angularVelocity(BNM::Structures::Unity::Vector3 $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_angularVelocity", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T get_handPos() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_handPos", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_handPos(BNM::Structures::Unity::Vector3 $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_handPos", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
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
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

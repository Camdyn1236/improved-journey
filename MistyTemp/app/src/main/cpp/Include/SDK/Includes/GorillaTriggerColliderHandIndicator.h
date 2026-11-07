#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTriggerColliderHandIndicator : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTriggerColliderHandIndicator", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T currentVelocity() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentVelocity");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_currentVelocity(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("currentVelocity");
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
		/* @brief Orig Type: GorillaThrowableController */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T throwableController() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("throwableController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaThrowableController */
		void set_throwableController(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("throwableController");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		
	};
}

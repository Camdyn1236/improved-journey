#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaBodyPhysics : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaBodyPhysics", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T bodyCollider() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bodyCollider");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_bodyCollider(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("bodyCollider");
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
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T FixedUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FixedUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

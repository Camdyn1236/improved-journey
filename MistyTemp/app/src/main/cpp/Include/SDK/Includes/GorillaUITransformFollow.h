#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaUITransformFollow : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaUITransformFollow", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T transformToFollow() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transformToFollow");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_transformToFollow(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("transformToFollow");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T offset() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("offset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_offset(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("offset");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T doesMove() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("doesMove");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_doesMove(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("doesMove");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

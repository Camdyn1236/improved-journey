#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaHasUITransformFollow : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaHasUITransformFollow", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaUITransformFollow[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T transformFollowers() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transformFollowers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaUITransformFollow[] */
		void set_transformFollowers(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("transformFollowers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
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
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaUIParent : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaUIParent", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaUIParent */
		template <typename T = GlobalNamespace::GorillaUIParent*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaUIParent */
		static void set_instance(GlobalNamespace::GorillaUIParent* value) {
			static BNM::Field<GlobalNamespace::GorillaUIParent*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

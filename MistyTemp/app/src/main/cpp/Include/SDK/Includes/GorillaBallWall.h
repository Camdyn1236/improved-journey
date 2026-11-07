#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaBallWall : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaBallWall", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaBallWall */
		template <typename T = GlobalNamespace::GorillaBallWall*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaBallWall */
		static void set_instance(GlobalNamespace::GorillaBallWall* value) {
			static BNM::Field<GlobalNamespace::GorillaBallWall*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PostVRRigPhysicsSynch : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PostVRRigPhysicsSynch", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

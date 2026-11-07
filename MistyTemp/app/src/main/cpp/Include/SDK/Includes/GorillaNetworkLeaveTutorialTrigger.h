#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaNetworkLeaveTutorialTrigger : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaNetworkLeaveTutorialTrigger", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnBoxTriggered() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnBoxTriggered", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

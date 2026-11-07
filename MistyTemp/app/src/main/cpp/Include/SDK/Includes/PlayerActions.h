#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	struct PlayerActions
	{
		static BNM::Class StaticClass() {
			return BNM::Class("", "PlayerActions", BNM::Image("Unity.InputSystem.dll"));
		}
		
		BNM::IL2CPP::Il2CppObject* m_Wrapper;
		
		
	};
}

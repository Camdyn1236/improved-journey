#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PlayerJoinedEvent : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PlayerJoinedEvent", BNM::Image("Unity.InputSystem.dll"));
		}
		
		
		
	};
}

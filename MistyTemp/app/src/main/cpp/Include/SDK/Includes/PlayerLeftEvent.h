#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PlayerLeftEvent : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PlayerLeftEvent", BNM::Image("Unity.InputSystem.dll"));
		}
		
		
		
	};
}

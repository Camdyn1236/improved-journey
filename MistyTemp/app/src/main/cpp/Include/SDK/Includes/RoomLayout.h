#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	struct RoomLayout
	{
		static BNM::Class StaticClass() {
			return BNM::Class("", "RoomLayout", BNM::Image("Oculus.VR.dll"));
		}
		
		BNM::IL2CPP::Il2CppObject* floorUuid;
		BNM::IL2CPP::Il2CppObject* ceilingUuid;
		BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* wallUuids;
		
		
	};
}

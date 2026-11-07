#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	struct RoomLayoutInternal
	{
		static BNM::Class StaticClass() {
			return BNM::Class("", "RoomLayoutInternal", BNM::Image("Oculus.VR.dll"));
		}
		
		BNM::IL2CPP::Il2CppObject* floorUuid;
		BNM::IL2CPP::Il2CppObject* ceilingUuid;
		int wallUuidCapacityInput;
		int wallUuidCountOutput;
		BNM::Types::nuint wallUuids;
		
		
	};
}

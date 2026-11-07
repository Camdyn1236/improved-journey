#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	struct OVRRoomLayout
	{
		static BNM::Class StaticClass() {
			return BNM::Class("", "OVRRoomLayout", BNM::Image("Oculus.VR.dll"));
		}
		
		static GlobalNamespace::OVRRoomLayout* Null;
		BNM::Types::ulong $Handle$;
		
		
	};
}

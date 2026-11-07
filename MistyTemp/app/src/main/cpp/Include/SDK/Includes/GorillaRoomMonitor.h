#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaRoomMonitor : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaRoomMonitor", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

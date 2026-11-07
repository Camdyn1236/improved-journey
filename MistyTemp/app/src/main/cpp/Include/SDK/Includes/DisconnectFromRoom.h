#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class DisconnectFromRoom : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "DisconnectFromRoom", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

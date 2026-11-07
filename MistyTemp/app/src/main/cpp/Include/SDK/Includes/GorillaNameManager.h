#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaNameManager : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaNameManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

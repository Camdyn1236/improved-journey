#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaEnemySpawner : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaEnemySpawner", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

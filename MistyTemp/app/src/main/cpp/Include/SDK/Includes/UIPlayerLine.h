#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class UIPlayerLine : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "UIPlayerLine", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

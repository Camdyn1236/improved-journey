#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	struct GorillaPosRotConstraint
	{
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaPosRotConstraint", BNM::Image("Assembly-CSharp.dll"));
		}
		
		BNM::IL2CPP::Il2CppObject* follower;
		BNM::IL2CPP::Il2CppObject* source;
		
		
	};
}

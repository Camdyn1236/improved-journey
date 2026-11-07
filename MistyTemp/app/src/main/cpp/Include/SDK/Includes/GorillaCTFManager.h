#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaCTFManager : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaCTFManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		
	};
}

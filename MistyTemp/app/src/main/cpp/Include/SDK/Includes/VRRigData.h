#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class VRRigData : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "VRRigData", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> static T allcosmetics() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("allcosmetics");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		static void set_allcosmetics(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("allcosmetics");
			__bnm__field__.Set(value);
		}
		
		
	};
}

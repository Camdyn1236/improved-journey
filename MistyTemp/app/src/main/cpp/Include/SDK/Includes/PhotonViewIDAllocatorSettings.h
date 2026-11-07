#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PhotonViewIDAllocatorSettings : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PhotonViewIDAllocatorSettings", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: PathGroup */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T root() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("root");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: PathGroup */
		void set_root(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("root");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

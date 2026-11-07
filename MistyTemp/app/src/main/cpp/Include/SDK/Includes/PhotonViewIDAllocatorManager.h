#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PhotonViewIDAllocatorManager : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PhotonViewIDAllocatorManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: PhotonViewIDAllocatorSettings */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T settings() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("settings");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: PhotonViewIDAllocatorSettings */
		void set_settings(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("settings");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

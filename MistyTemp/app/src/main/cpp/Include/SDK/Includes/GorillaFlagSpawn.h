#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaFlagSpawn : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaFlagSpawn", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isRedFlagSpawn() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isRedFlagSpawn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isRedFlagSpawn(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isRedFlagSpawn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

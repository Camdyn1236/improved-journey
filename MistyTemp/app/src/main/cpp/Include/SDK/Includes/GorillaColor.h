#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaColor : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaColor", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T setRandomly() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setRandomly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_setRandomly(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("setRandomly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

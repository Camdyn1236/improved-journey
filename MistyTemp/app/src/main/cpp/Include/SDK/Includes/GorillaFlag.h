#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaFlag : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaFlag", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isRedFlag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isRedFlag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isRedFlag(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isRedFlag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggered() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggered", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class InternalPlayersRefreshComplete : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "InternalPlayersRefreshComplete", BNM::Image("Assembly-CSharp-firstpass.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Invoke(BNM::Types::nuint thisptr) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Invoke", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](thisptr);
		}
		/* @brief Orig Type: System.IAsyncResult */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T BeginInvoke(BNM::Types::nuint thisptr, BNM::IL2CPP::Il2CppObject* callback, BNM::IL2CPP::Il2CppObject* $object) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("BeginInvoke", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](thisptr, callback, $object);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndInvoke(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndInvoke", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		
	};
}

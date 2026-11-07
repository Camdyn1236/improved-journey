#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class AddPlayerToList : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "AddPlayerToList", BNM::Image("Assembly-CSharp-firstpass.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Invoke(BNM::Structures::Mono::String* pchName, int nScore, float flTimePlayed) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Invoke", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pchName, nScore, flTimePlayed);
		}
		/* @brief Orig Type: System.IAsyncResult */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T BeginInvoke(BNM::Structures::Mono::String* pchName, int nScore, float flTimePlayed, BNM::IL2CPP::Il2CppObject* callback, BNM::IL2CPP::Il2CppObject* $object) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("BeginInvoke", 5);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pchName, nScore, flTimePlayed, callback, $object);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndInvoke(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndInvoke", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		
	};
}

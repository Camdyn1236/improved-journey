#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PlayerNumberingChanged : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PlayerNumberingChanged", BNM::Image("PhotonUnityNetworking.Utilities.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Invoke() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Invoke", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.IAsyncResult */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T BeginInvoke(BNM::IL2CPP::Il2CppObject* callback, BNM::IL2CPP::Il2CppObject* $object) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("BeginInvoke", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](callback, $object);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndInvoke(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndInvoke", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		
	};
}

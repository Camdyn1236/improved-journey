#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class IPlayerActions
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "IPlayerActions", BNM::Image("Unity.InputSystem.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnMove(BNM::IL2CPP::Il2CppObject* context) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnMove", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](context);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnLook(BNM::IL2CPP::Il2CppObject* context) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnLook", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](context);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnFire(BNM::IL2CPP::Il2CppObject* context) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnFire", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](context);
		}
		
	};
}

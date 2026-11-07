#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class PlayerCollection : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "PlayerCollection", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Collections.Generic.List`1<VRRig> */
		template <typename T = void* /*GENERICTYPE*/> T containedRigs() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("containedRigs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<VRRig> */
		void set_containedRigs(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("containedRigs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerEnter(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnTriggerExit(BNM::IL2CPP::Il2CppObject* other) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnTriggerExit", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](other);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		
	};
}

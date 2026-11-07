#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaGeoHideShowTrigger : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaGeoHideShowTrigger", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T makeSureThisIsDisabled() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("makeSureThisIsDisabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_makeSureThisIsDisabled(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("makeSureThisIsDisabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T makeSureThisIsEnabled() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("makeSureThisIsEnabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject[] */
		void set_makeSureThisIsEnabled(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("makeSureThisIsEnabled");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T lotsOfStuff() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lotsOfStuff");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_lotsOfStuff(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("lotsOfStuff");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnBoxTriggered() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnBoxTriggered", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

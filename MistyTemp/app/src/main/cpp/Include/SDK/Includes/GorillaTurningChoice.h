#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTurningChoice : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTurningChoice", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T choiceName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("choiceName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_choiceName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("choiceName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaTurning */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T parent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("parent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaTurning */
		void set_parent(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("parent");
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

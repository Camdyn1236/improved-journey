#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaPlayerCounter : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaPlayerCounter", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isRedTeam() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isRedTeam");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isRedTeam(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isRedTeam");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T text() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("text");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_text(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("text");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T attribute() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("attribute");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_attribute(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("attribute");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

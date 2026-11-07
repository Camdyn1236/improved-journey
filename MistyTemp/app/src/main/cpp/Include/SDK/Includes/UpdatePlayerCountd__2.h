#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class $UpdatePlayerCount$d__2 : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "<UpdatePlayerCount>d__2", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T $$1__state() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$$1__state");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_$$1__state(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("$$1__state");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T $$2__current() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$$2__current");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Object */
		void set_$$2__current(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("$$2__current");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Networking.UnityWebRequest */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T $www$5__2() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$www$5__2");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Networking.UnityWebRequest */
		void set_$www$5__2(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("$www$5__2");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T System_IDisposable_Dispose() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("System.IDisposable.Dispose", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T MoveNext() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MoveNext", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T m__Finally1() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<>m__Finally1", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("System.Collections.Generic.IEnumerator<System.Object>.get_Current", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T System_Collections_IEnumerator_Reset() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("System.Collections.IEnumerator.Reset", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("System.Collections.IEnumerator.get_Current", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

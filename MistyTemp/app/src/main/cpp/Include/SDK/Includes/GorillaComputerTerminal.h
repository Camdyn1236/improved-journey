#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaComputerTerminal : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaComputerTerminal", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myScreenText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myScreenText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_myScreenText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myScreenText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myFunctionText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myFunctionText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_myFunctionText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myFunctionText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T monitorMesh() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("monitorMesh");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer */
		void set_monitorMesh(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("monitorMesh");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

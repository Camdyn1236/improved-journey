#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaLevelScreen : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaLevelScreen", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T startingText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("startingText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_startingText(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("startingText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T goodMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("goodMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_goodMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("goodMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T badMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("badMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_badMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("badMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_myText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateText(BNM::Structures::Mono::String* newText, bool setToGoodMaterial) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateText", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newText, setToGoodMaterial);
		}
		
	};
}

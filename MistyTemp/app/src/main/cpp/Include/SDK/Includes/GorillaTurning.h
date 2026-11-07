#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTurning : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTurning", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T redMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("redMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_redMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("redMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T blueMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("blueMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_blueMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("blueMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T greenMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("greenMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_greenMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("greenMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T transparentBlueMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transparentBlueMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_transparentBlueMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("transparentBlueMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T transparentRedMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transparentRedMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_transparentRedMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("transparentRedMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T transparentGreenMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transparentGreenMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_transparentGreenMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("transparentGreenMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T smoothTurnBox() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("smoothTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer */
		void set_smoothTurnBox(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("smoothTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T snapTurnBox() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("snapTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer */
		void set_snapTurnBox(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("snapTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T noTurnBox() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("noTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer */
		void set_noTurnBox(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("noTurnBox");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T snapTurn() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("snapTurn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.XR.Interaction.Toolkit.GorillaSnapTurn */
		void set_snapTurn(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("snapTurn");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T currentChoice() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentChoice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_currentChoice(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("currentChoice");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T currentSpeed() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_currentSpeed(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("currentSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

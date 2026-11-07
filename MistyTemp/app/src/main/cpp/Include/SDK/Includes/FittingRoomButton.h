#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class FittingRoomButton : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "FittingRoomButton", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentCosmeticItem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentCosmeticItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		void set_currentCosmeticItem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentCosmeticItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentImage() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_currentImage(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T button() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("button");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer */
		void set_button(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("button");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T blank() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("blank");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_blank(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("blank");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T noCosmeticText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("noCosmeticText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_noCosmeticText(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("noCosmeticText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T buttonText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("buttonText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_buttonText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("buttonText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateColor() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateColor", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ButtonActivationWithHand(bool isLeftHand) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ButtonActivationWithHand", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isLeftHand);
		}
		
	};
}

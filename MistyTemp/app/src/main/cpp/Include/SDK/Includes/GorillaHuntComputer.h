#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaHuntComputer : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaHuntComputer", BNM::Image("Assembly-CSharp.dll"));
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
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T material() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("material");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_material(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("material");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T hat() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hat");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_hat(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("hat");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T face() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("face");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_face(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("face");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T badge() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("badge");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_badge(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("badge");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T leftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_leftHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("leftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rightHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_rightHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myTarget() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_myTarget(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempTarget() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tempTarget(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_myRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Sprite */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempSprite() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempSprite");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Sprite */
		void set_tempSprite(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempSprite");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempItem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		void set_tempItem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempItem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetImage(BNM::Structures::Mono::String* itemDisplayName, BNM::IL2CPP::Il2CppObject* image) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetImage", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](itemDisplayName, image);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T NormalizeName(bool doIt, BNM::Structures::Mono::String* text) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NormalizeName", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](doIt, text);
		}
		/* @brief Orig Type: GorillaNetworking.CosmeticsController/CosmeticItem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T GetPrioritizedItemForHand(BNM::IL2CPP::Il2CppObject* targetRig, bool forLeftHand) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetPrioritizedItemForHand", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](targetRig, forLeftHand);
		}
		
	};
}

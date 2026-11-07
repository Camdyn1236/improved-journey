#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaParent : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaParent", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tagUI() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagUI");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_tagUI(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tagUI");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerParent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerParent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_playerParent(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerParent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T vrrigParent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vrrigParent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_vrrigParent(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("vrrigParent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaParent */
		template <typename T = GlobalNamespace::GorillaParent*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaParent */
		static void set_instance(GlobalNamespace::GorillaParent* value) {
			static BNM::Field<GlobalNamespace::GorillaParent*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> static T hasInstance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hasInstance");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		static void set_hasInstance(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("hasInstance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<VRRig> */
		template <typename T = void* /*GENERICTYPE*/> T vrrigs() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vrrigs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<VRRig> */
		void set_vrrigs(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("vrrigs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,VRRig> */
		template <typename T = void* /*GENERICTYPE*/> T vrrigDict() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("vrrigDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,VRRig> */
		void set_vrrigDict(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("vrrigDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T i() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("i");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_i(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("i");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T childPhotonViews() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("childPhotonViews");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Pun.PhotonView[] */
		void set_childPhotonViews(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("childPhotonViews");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T joinedRoom() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("joinedRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_joinedRoom(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("joinedRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDestroy() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDestroy", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T OccasionalUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OccasionalUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnJoinedRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnJoinedRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnLeftRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnLeftRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

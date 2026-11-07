#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaEnemyAI : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaEnemyAI", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_playerTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AI.NavMeshAgent */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T agent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("agent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AI.NavMeshAgent */
		void set_agent(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("agent");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Rigidbody */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T r() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("r");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Rigidbody */
		void set_r(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("r");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T targetPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_targetPosition(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("targetPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T targetRotation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("targetRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_targetRotation(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("targetRotation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lerpValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lerpValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lerpValue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lerpValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunObservable_OnPhotonSerializeView(BNM::IL2CPP::Il2CppObject* stream, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunObservable.OnPhotonSerializeView", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](stream, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T FindClosestPlayer() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FindClosestPlayer", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnCollisionEnter(BNM::IL2CPP::Il2CppObject* collision) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnCollisionEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collision);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(BNM::IL2CPP::Il2CppObject* newMasterClient) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newMasterClient);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(BNM::IL2CPP::Il2CppObject* newPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(BNM::IL2CPP::Il2CppObject* propertiesThatChanged) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](propertiesThatChanged);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(BNM::IL2CPP::Il2CppObject* targetPlayer, BNM::IL2CPP::Il2CppObject* changedProps) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](targetPlayer, changedProps);
		}
		
	};
}

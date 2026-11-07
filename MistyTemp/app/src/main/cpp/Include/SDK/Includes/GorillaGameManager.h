#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaGameManager : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaGameManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaGameManager */
		template <typename T = GlobalNamespace::GorillaGameManager*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaGameManager */
		static void set_instance(GlobalNamespace::GorillaGameManager* value) {
			static BNM::Field<GlobalNamespace::GorillaGameManager*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Room */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentRoom() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Room */
		void set_currentRoom(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentRoom");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T obj() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("obj");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Object */
		void set_obj(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("obj");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T stepVolumeMax() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("stepVolumeMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_stepVolumeMax(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("stepVolumeMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T stepVolumeMin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("stepVolumeMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_stepVolumeMin(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("stepVolumeMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T fastJumpLimit() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("fastJumpLimit");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_fastJumpLimit(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("fastJumpLimit");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T fastJumpMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("fastJumpMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_fastJumpMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("fastJumpMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T slowJumpLimit() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("slowJumpLimit");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		static void set_slowJumpLimit(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("slowJumpLimit");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T slowJumpMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("slowJumpMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		static void set_slowJumpMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("slowJumpMultiplier");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Byte */
		template <typename T = BNM::Types::byte> T roomSize() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("roomSize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Byte */
		void set_roomSize(BNM::Types::byte value) {
			static BNM::Field<BNM::Types::byte> __bnm__field__ = StaticClass().GetField("roomSize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lastCheck() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastCheck");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lastCheck(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lastCheck");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T checkCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("checkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_checkCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("checkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T userDecayTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("userDecayTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_userDecayTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("userDecayTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,VRRig> */
		template <typename T = void* /*GENERICTYPE*/> T playerVRRigDict() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerVRRigDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,VRRig> */
		void set_playerVRRigDict(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerVRRigDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.Single> */
		template <typename T = void* /*GENERICTYPE*/> T expectedUsersDecay() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("expectedUsersDecay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.Single> */
		void set_expectedUsersDecay(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("expectedUsersDecay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.String> */
		template <typename T = void* /*GENERICTYPE*/> T playerCosmeticsLookup() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerCosmeticsLookup");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.String> */
		void set_playerCosmeticsLookup(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerCosmeticsLookup");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T tempString() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempString");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_tempString(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("tempString");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T startingToLookForFriend() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("startingToLookForFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_startingToLookForFriend(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("startingToLookForFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T timeToSpendLookingForFriend() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeToSpendLookingForFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_timeToSpendLookingForFriend(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("timeToSpendLookingForFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T successfullyFoundFriend() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("successfullyFoundFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_successfullyFoundFriend(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("successfullyFoundFriend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T maxProjectilesToKeepTrackOfPerPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maxProjectilesToKeepTrackOfPerPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_maxProjectilesToKeepTrackOfPerPlayer(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("maxProjectilesToKeepTrackOfPerPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerImpactEffectPrefab() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerImpactEffectPrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_playerImpactEffectPrefab(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerImpactEffectPrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T localPlayerProjectileCounter() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("localPlayerProjectileCounter");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_localPlayerProjectileCounter(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("localPlayerProjectileCounter");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,System.Collections.Generic.List`1<GorillaGameManager/ProjectileInfo>> */
		template <typename T = void* /*GENERICTYPE*/> T playerProjectiles() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerProjectiles");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<Photon.Realtime.Player,System.Collections.Generic.List`1<GorillaGameManager/ProjectileInfo>> */
		void set_playerProjectiles(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerProjectiles");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tagDistanceThreshold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagDistanceThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tagDistanceThreshold(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tagDistanceThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testAssault() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testAssault");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testAssault(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testAssault");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T endGameManually() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("endGameManually");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_endGameManually(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("endGameManually");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentMasterClient() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentMasterClient");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_currentMasterClient(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentMasterClient");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T returnPhotonView() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("returnPhotonView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Pun.PhotonView */
		void set_returnPhotonView(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("returnPhotonView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T returnRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("returnRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_returnRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("returnRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T outPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_outPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("outPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T outInt() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_outInt(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("outInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_tempRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T currentPlayerArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentPlayerArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player[] */
		void set_currentPlayerArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("currentPlayerArray");
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
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InfrequentUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfrequentUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T GameMode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GameMode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportTag(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::IL2CPP::Il2CppObject* taggingPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, taggingPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportStep(BNM::IL2CPP::Il2CppObject* steppingRig, bool isLeftHand, float velocityRatio) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportStep", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](steppingRig, isLeftHand, velocityRatio);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunInstantiateMagicCallback_OnPhotonInstantiate(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunInstantiateMagicCallback.OnPhotonInstantiate", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T NewVRRig(BNM::IL2CPP::Il2CppObject* player, int vrrigPhotonViewID, bool didTutorial) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NewVRRig", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player, vrrigPhotonViewID, didTutorial);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LocalCanTag(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalCanTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T FindVRRigForPlayer(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FindVRRigForPlayer", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> static T StaticFindRigForPlayer(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StaticFindRigForPlayer", 1);
			return __bnm__method__(player);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportTagRPC(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportTagRPC", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T AttemptGetNewPlayerCosmetic(BNM::IL2CPP::Il2CppObject* playerToUpdate, int attempts) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("AttemptGetNewPlayerCosmetic", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](playerToUpdate, attempts);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerEnteredRoom(BNM::IL2CPP::Il2CppObject* newPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerEnteredRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnJoinedRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnJoinedRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdatePlayerCosmetic(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdatePlayerCosmetic", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T JoinPubWithFriends(BNM::Structures::Mono::String* shufflerStr, BNM::Structures::Mono::String* keyStr, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("JoinPubWithFriends", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](shufflerStr, keyStr, info);
		}
		/* @brief Orig Type: System.Single[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T LocalPlayerSpeed() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalPlayerSpeed", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T FindUserIDInRoom(BNM::Structures::Mono::String* userID) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FindUserIDInRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](userID);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T MyMatIndex(BNM::IL2CPP::Il2CppObject* forPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MyMatIndex", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](forPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T DestroyInvalidManager() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("DestroyInvalidManager", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LaunchSlingshotProjectile(BNM::Structures::Unity::Vector3 slingshotLaunchLocation, BNM::Structures::Unity::Vector3 slingshotLaunchVelocity, int projHash, int trailHash, bool forLeftHand, int projectileCount, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LaunchSlingshotProjectile", 7);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](slingshotLaunchLocation, slingshotLaunchVelocity, projHash, trailHash, forLeftHand, projectileCount, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SpawnSlingshotPlayerImpactEffect(BNM::Structures::Unity::Vector3 hitLocation, float teamColorR, float teamColorG, float teamColorB, float teamColorA, int projectileCount, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SpawnSlingshotPlayerImpactEffect", 7);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](hitLocation, teamColorR, teamColorG, teamColorB, teamColorA, projectileCount, info);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T IncrementLocalPlayerProjectileCount() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IncrementLocalPlayerProjectileCount", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Updateb__37_0(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<Update>b__37_0", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		
	};
}

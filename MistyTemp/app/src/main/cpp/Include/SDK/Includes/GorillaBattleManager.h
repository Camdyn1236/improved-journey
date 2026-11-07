#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaBattleManager : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaBattleManager", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Single */
		template <typename T = float> T playerMin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_playerMin(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("playerMin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T tagCoolDown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagCoolDown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_tagCoolDown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("tagCoolDown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> */
		template <typename T = void* /*GENERICTYPE*/> T playerLives() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerLives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> */
		void set_playerLives(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerLives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,GorillaBattleManager/BattleStatus> */
		template <typename T = void* /*GENERICTYPE*/> T playerStatusDict() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerStatusDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,GorillaBattleManager/BattleStatus> */
		void set_playerStatusDict(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerStatusDict");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Single> */
		template <typename T = void* /*GENERICTYPE*/> T playerHitTimes() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerHitTimes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Single> */
		void set_playerHitTimes(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerHitTimes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Single> */
		template <typename T = void* /*GENERICTYPE*/> T playerStunTimes() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerStunTimes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Int32,System.Single> */
		void set_playerStunTimes(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerStunTimes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T playerActorNumberArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerActorNumberArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_playerActorNumberArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("playerActorNumberArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T playerLivesArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerLivesArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_playerLivesArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("playerLivesArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T playerStatusArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerStatusArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaBattleManager/BattleStatus[] */
		void set_playerStatusArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("playerStatusArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T teamBattle() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("teamBattle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_teamBattle(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("teamBattle");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T countDownTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("countDownTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_countDownTime(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("countDownTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T timeBattleEnded() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeBattleEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_timeBattleEnded(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("timeBattleEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T hitCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hitCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_hitCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("hitCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T stunGracePeriod() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("stunGracePeriod");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_stunGracePeriod(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("stunGracePeriod");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T objRef() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("objRef");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Object */
		void set_objRef(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("objRef");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T playerInList() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerInList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_playerInList(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("playerInList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T coroutineRunning() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("coroutineRunning");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_coroutineRunning(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("coroutineRunning");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lives() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lives(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T outLives() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outLives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_outLives(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("outLives");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T bcount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bcount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_bcount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("bcount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T rcount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rcount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_rcount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("rcount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T randInt() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("randInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_randInt(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("randInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T outHitTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outHitTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_outHitTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("outHitTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Pun.PhotonView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempView() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Pun.PhotonView */
		void set_tempView(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T keyValuePairs() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("keyValuePairs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[] */
		void set_keyValuePairs(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("keyValuePairs");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.KeyValuePair`2<System.Int32,GorillaBattleManager/BattleStatus>[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T keyValuePairsStatus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("keyValuePairsStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.KeyValuePair`2<System.Int32,GorillaBattleManager/BattleStatus>[] */
		void set_keyValuePairsStatus(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("keyValuePairsStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus */
		template <typename T = int> T tempStatus() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaBattleManager/BattleStatus */
		void set_tempStatus(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempStatus");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleState */
		template <typename T = int> T currentState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaBattleManager/BattleState */
		void set_currentState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ActivateBattleBalloons(bool enable) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ActivateBattleBalloons", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](enable);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T HasFlag(int state, int statusFlag) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("HasFlag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](state, statusFlag);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T GameMode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GameMode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ActivateDefaultSlingShot() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ActivateDefaultSlingShot", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Transition(int newState) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Transition", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newState);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateBattleState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateBattleState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T CheckForGameEnd() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckForGameEnd", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T StartBattleCountdown() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StartBattleCountdown", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T StartBattle() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StartBattle", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T EndBattleGame() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndBattleGame", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T BattleEnd() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("BattleEnd", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T SlingshotHit(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SlingshotHit", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportSlingshotHit(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::Structures::Unity::Vector3 hitLocation, int projectileCount, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportSlingshotHit", 4);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, hitLocation, projectileCount, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerEnteredRoom(BNM::IL2CPP::Il2CppObject* newPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerEnteredRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(BNM::IL2CPP::Il2CppObject* newMasterClient) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newMasterClient);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunObservable_OnPhotonSerializeView(BNM::IL2CPP::Il2CppObject* stream, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunObservable.OnPhotonSerializeView", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](stream, info);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T MyMatIndex(BNM::IL2CPP::Il2CppObject* forPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MyMatIndex", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](forPlayer);
		}
		/* @brief Orig Type: System.Single[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T LocalPlayerSpeed() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalPlayerSpeed", 0);
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
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T GetPlayerLives(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetPlayerLives", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T PlayerInHitCooldown(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayerInHitCooldown", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T PlayerInStunCooldown(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayerInStunCooldown", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus */
		template <typename T = int> T GetPlayerStatus(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetPlayerStatus", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnRedTeam(int status) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnRedTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](status);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnRedTeam_1(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnRedTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnBlueTeam(int status) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnBlueTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](status);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnBlueTeam_1(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnBlueTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnNoTeam(int status) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnNoTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](status);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnNoTeam_1(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnNoTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LocalCanTag(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalCanTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnSameTeam(int playerA, int playerB) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnSameTeam", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](playerA, playerB);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T OnSameTeam_1(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnSameTeam", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LocalCanHit(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalCanHit", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyBattleDictToArray() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyBattleDictToArray", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyArrayToBattleDict() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyArrayToBattleDict", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus */
		template <typename T = int> T SetFlag(int currState, int flag) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetFlag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currState, flag);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus */
		template <typename T = int> T SetFlagExclusive(int currState, int flag) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetFlagExclusive", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currState, flag);
		}
		/* @brief Orig Type: GorillaBattleManager/BattleStatus */
		template <typename T = int> T ClearFlag(int currState, int flag) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ClearFlag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currState, flag);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T FlagIsSet(int currState, int flag) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("FlagIsSet", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](currState, flag);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T RandomizeTeams() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RandomizeTeams", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T AddPlayerToCorrectTeam(BNM::IL2CPP::Il2CppObject* newPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("AddPlayerToCorrectTeam", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InitializePlayerStatus() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InitializePlayerStatus", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdatePlayerStatus() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdatePlayerStatus", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

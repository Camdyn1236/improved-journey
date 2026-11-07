#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaTagManager : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaTagManager", BNM::Image("Assembly-CSharp.dll"));
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
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T infectedModeThreshold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("infectedModeThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_infectedModeThreshold(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("infectedModeThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Byte */
		template <typename T = BNM::Types::byte> static T ReportTagEvent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ReportTagEvent");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Byte */
		static void set_ReportTagEvent(BNM::Types::byte value) {
			static BNM::Field<BNM::Types::byte> __bnm__field__ = StaticClass().GetField("ReportTagEvent");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Byte */
		template <typename T = BNM::Types::byte> static T ReportInfectionTagEvent() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ReportInfectionTagEvent");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Byte */
		static void set_ReportInfectionTagEvent(BNM::Types::byte value) {
			static BNM::Field<BNM::Types::byte> __bnm__field__ = StaticClass().GetField("ReportInfectionTagEvent");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		template <typename T = void* /*GENERICTYPE*/> T currentInfected() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentInfected");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		void set_currentInfected(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("currentInfected");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T currentInfectedArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentInfectedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_currentInfectedArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("currentInfectedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentIt() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentIt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_currentIt(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentIt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T lastInfectedPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastInfectedPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_lastInfectedPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("lastInfectedPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Double */
		template <typename T = double> T lastTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Double */
		void set_lastTag(double value) {
			static BNM::Field<double> __bnm__field__ = StaticClass().GetField("lastTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Double */
		template <typename T = double> T timeInfectedGameEnded() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeInfectedGameEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Double */
		void set_timeInfectedGameEnded(double value) {
			static BNM::Field<double> __bnm__field__ = StaticClass().GetField("timeInfectedGameEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T waitingToStartNextInfectionGame() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("waitingToStartNextInfectionGame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_waitingToStartNextInfectionGame(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("waitingToStartNextInfectionGame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isCurrentlyTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isCurrentlyTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isCurrentlyTag(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isCurrentlyTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isCasual() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isCasual");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isCasual(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isCasual");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempItInt() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempItInt");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempItInt(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempItInt");
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
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T iterator1() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("iterator1");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_iterator1(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("iterator1");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tempPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T allInfected() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("allInfected");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_allInfected(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("allInfected");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		template <typename T = void* /*GENERICTYPE*/> T returnPlayerList() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("returnPlayerList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		void set_returnPlayerList(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("returnPlayerList");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T persistedIsTag() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("persistedIsTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_persistedIsTag(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("persistedIsTag");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T persistedIsTagResult() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("persistedIsTagResult");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_persistedIsTagResult(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("persistedIsTagResult");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T inspectorLocalPlayerSpeed() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("inspectorLocalPlayerSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single[] */
		void set_inspectorLocalPlayerSpeed(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("inspectorLocalPlayerSpeed");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InfrequentUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfrequentUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T InfectionEnd() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfectionEnd", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateInfectionState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateInfectionState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateTagState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateTagState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndInfectionGame() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndInfectionGame", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: Photon.Realtime.Player[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T CurrentInfectionPlayers() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CurrentInfectionPlayers", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LocalCanTag(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalCanTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T InterpolatedInfectedJumpMultiplier(int infectedCount) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InterpolatedInfectedJumpMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](infectedCount);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T InterpolatedInfectedJumpSpeed(int infectedCount) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InterpolatedInfectedJumpSpeed", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](infectedCount);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T InterpolatedNoobJumpMultiplier(int infectedCount) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InterpolatedNoobJumpMultiplier", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](infectedCount);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T InterpolatedNoobJumpSpeed(int infectedCount) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InterpolatedNoobJumpSpeed", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](infectedCount);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportTag(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::IL2CPP::Il2CppObject* taggingPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, taggingPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerEnteredRoom(BNM::IL2CPP::Il2CppObject* newPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerEnteredRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T NewVRRig(BNM::IL2CPP::Il2CppObject* player, int vrrigPhotonViewID, bool didntDoTutorial) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NewVRRig", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player, vrrigPhotonViewID, didntDoTutorial);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyInfectedListToArray() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyInfectedListToArray", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyInfectedArrayToList() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyInfectedArrayToList", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ChangeCurrentIt(BNM::IL2CPP::Il2CppObject* newCurrentIt) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ChangeCurrentIt", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newCurrentIt);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetisCurrentlyTag(bool newTagSetting) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetisCurrentlyTag", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newTagSetting);
		}
		/* @brief Orig Type: System.Void */
		static void AddInfectedPlayer(BNM::IL2CPP::Il2CppObject* infectedPlayer) {
			static Method<void> __bnm__method__ = StaticClass().GetMethod("AddInfectedPlayer", 1);
			return __bnm__method__(infectedPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T AddInfectedPlayer_1(BNM::IL2CPP::Il2CppObject* infectedPlayer, bool withTagStop) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("AddInfectedPlayer", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](infectedPlayer, withTagStop);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ClearInfectionState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ClearInfectionState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IsGameModeTag() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsGameModeTag", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(BNM::IL2CPP::Il2CppObject* newMasterClient) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](newMasterClient);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyRoomDataToLocalData() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyRoomDataToLocalData", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportTagRPC(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportTagRPC", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunObservable_OnPhotonSerializeView(BNM::IL2CPP::Il2CppObject* stream, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunObservable.OnPhotonSerializeView", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](stream, info);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T GameMode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GameMode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
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
		
	};
}

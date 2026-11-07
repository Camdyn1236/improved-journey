#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaHuntManager : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaHuntManager", BNM::Image("Assembly-CSharp.dll"));
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
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T currentHuntedArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentHuntedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_currentHuntedArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("currentHuntedArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		template <typename T = void* /*GENERICTYPE*/> T currentHunted() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentHunted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		void set_currentHunted(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("currentHunted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T currentTargetArray() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentTargetArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_currentTargetArray(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("currentTargetArray");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		template <typename T = void* /*GENERICTYPE*/> T currentTarget() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<Photon.Realtime.Player> */
		void set_currentTarget(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("currentTarget");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T huntStarted() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("huntStarted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_huntStarted(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("huntStarted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T waitingToStartNextHuntGame() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("waitingToStartNextHuntGame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_waitingToStartNextHuntGame(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("waitingToStartNextHuntGame");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T inStartCountdown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("inStartCountdown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_inStartCountdown(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("inStartCountdown");
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
		/* @brief Orig Type: System.Double */
		template <typename T = double> T timeHuntGameEnded() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeHuntGameEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Double */
		void set_timeHuntGameEnded(double value) {
			static BNM::Field<double> __bnm__field__ = StaticClass().GetField("timeHuntGameEnded");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T timeLastSlowTagged() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeLastSlowTagged");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_timeLastSlowTagged(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("timeLastSlowTagged");
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
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempRandPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempRandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tempRandPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempRandPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempRandIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempRandIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempRandIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempRandIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T notHuntedCount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("notHuntedCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_notHuntedCount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("notHuntedCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tempTargetIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempTargetIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tempTargetIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tempTargetIndex");
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
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T copyListToArrayIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("copyListToArrayIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_copyListToArrayIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("copyListToArrayIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T copyArrayToListIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("copyArrayToListIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_copyArrayToListIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("copyArrayToListIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T GameMode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GameMode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
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
		template <typename T = void> T CleanUpHunt() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CleanUpHunt", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T StartHuntCountdown() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StartHuntCountdown", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T StartHunt() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("StartHunt", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T RandomizePlayerList(BNM::IL2CPP::Il2CppObject* listToRandomize) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RandomizePlayerList", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](listToRandomize);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T HuntEnd() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("HuntEnd", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateHuntState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateHuntState", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T EndHuntGame() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("EndHuntGame", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LocalCanTag(BNM::IL2CPP::Il2CppObject* myPlayer, BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalCanTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayer, otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportTag(BNM::IL2CPP::Il2CppObject* taggedPlayer, BNM::IL2CPP::Il2CppObject* taggingPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportTag", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](taggedPlayer, taggingPlayer);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IsTargetOf(BNM::IL2CPP::Il2CppObject* huntingPlayer, BNM::IL2CPP::Il2CppObject* huntedPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsTargetOf", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](huntingPlayer, huntedPlayer);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T GetTargetOf(BNM::IL2CPP::Il2CppObject* player) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetTargetOf", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](player);
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
		template <typename T = void> T CopyHuntDataListToArray() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyHuntDataListToArray", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CopyHuntDataArrayToList() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CopyHuntDataArrayToList", 0);
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
		template <typename T = void> T InfrequentUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfrequentUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

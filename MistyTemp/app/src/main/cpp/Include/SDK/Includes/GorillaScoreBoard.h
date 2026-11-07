#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaScoreBoard : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaScoreBoard", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T scoreBoardLinePrefab() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("scoreBoardLinePrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_scoreBoardLinePrefab(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("scoreBoardLinePrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T startingYValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("startingYValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_startingYValue(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("startingYValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lineHeight() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lineHeight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lineHeight(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lineHeight");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaGameManager */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T gameManager() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gameManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaGameManager */
		void set_gameManager(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("gameManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T gameType() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gameType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_gameType(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("gameType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T includeMMR() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("includeMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_includeMMR(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("includeMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isActive() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isActive(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<GorillaPlayerScoreboardLine> */
		template <typename T = void* /*GENERICTYPE*/> T lines() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lines");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<GorillaPlayerScoreboardLine> */
		void set_lines(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("lines");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T boardText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("boardText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_boardText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("boardText");
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
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerForVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerForVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_playerForVRRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerForVRRig");
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
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_currentRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentRig");
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
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T GetBeginningString() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetBeginningString", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T InfrequentUpdateCoroutine() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfrequentUpdateCoroutine", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T InfrequentUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InfrequentUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T RedrawPlayerLines() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RedrawPlayerLines", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Realtime_IOnEventCallback_OnEvent(BNM::IL2CPP::Il2CppObject* photonEvent) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Realtime.IOnEventCallback.OnEvent", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](photonEvent);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T RefreshData(int actorNumber1, int actorNumber2) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("RefreshData", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](actorNumber1, actorNumber2);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T GetActorIDFromUserID(BNM::Structures::Mono::String* userID) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetActorIDFromUserID", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](userID);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T NormalizeName(bool doIt, BNM::Structures::Mono::String* text) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NormalizeName", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](doIt, text);
		}
		
	};
}

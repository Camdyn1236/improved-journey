#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaPlayerScoreboardLine : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaPlayerScoreboardLine", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_playerName(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerLevel() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerLevel");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_playerLevel(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerLevel");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerMMR() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text */
		void set_playerMMR(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerSwatch() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerSwatch");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image */
		void set_playerSwatch(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerSwatch");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Texture */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T infectedTexture() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("infectedTexture");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Texture */
		void set_infectedTexture(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("infectedTexture");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T linePlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("linePlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_linePlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("linePlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: VRRig */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T playerVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: VRRig */
		void set_playerVRRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("playerVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T currentMatIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_currentMatIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("currentMatIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerLevelValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerLevelValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerLevelValue(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerLevelValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerMMRValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerMMRValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerMMRValue(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerMMRValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerNameValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerNameValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerNameValue(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerNameValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T playerActorNumber() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerActorNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_playerActorNumber(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("playerActorNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T initialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_initialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("initialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaPlayerLineButton */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T muteButton() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("muteButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaPlayerLineButton */
		void set_muteButton(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("muteButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaPlayerLineButton */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T reportButton() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reportButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaPlayerLineButton */
		void set_reportButton(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("reportButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T speakerIcon() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("speakerIcon");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_speakerIcon(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("speakerIcon");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T canPressNextReportButton() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("canPressNextReportButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_canPressNextReportButton(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("canPressNextReportButton");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Text[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T texts() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("texts");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Text[] */
		void set_texts(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("texts");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.SpriteRenderer[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T sprites() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sprites");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.SpriteRenderer[] */
		void set_sprites(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("sprites");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.MeshRenderer[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T meshes() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("meshes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.MeshRenderer[] */
		void set_meshes(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("meshes");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Image[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T images() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("images");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Image[] */
		void set_images(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("images");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Voice.PUN.PhotonVoiceView */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myVoiceView() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myVoiceView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Voice.PUN.PhotonVoiceView */
		void set_myVoiceView(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myVoiceView");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Voice.Unity.Recorder */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myRecorder() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myRecorder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Voice.Unity.Recorder */
		void set_myRecorder(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myRecorder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T linePlayerInitialized() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("linePlayerInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_linePlayerInitialized(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("linePlayerInitialized");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T mute() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mute");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_mute(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("mute");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T emptyRigCount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("emptyRigCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_emptyRigCount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("emptyRigCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T myRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_myRig(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("myRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T reportedCheating() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reportedCheating");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_reportedCheating(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("reportedCheating");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T reportedToxicity() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reportedToxicity");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_reportedToxicity(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("reportedToxicity");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T reportedHateSpeech() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reportedHateSpeech");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_reportedHateSpeech(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("reportedHateSpeech");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateLevel() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateLevel", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T HideShowLine(bool active) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("HideShowLine", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](active);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T UpdateLine() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateLine", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T PressButton(bool isOn, int buttonType) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PressButton", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isOn, buttonType);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetReportState(bool reportState, int buttonType) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetReportState", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](reportState, buttonType);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUserLevel(BNM::Structures::Mono::String* myPlayFabeId) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetUserLevel", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](myPlayFabeId);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ReportPlayer(BNM::Structures::Mono::String* PlayerID, int buttonType, BNM::Structures::Mono::String* OtherPlayerNickName) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ReportPlayer", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](PlayerID, buttonType, OtherPlayerNickName);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T MutePlayer(BNM::Structures::Mono::String* PlayerID, BNM::Structures::Mono::String* OtherPlayerNickName, int muting) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MutePlayer", 3);
			return __bnm__method__(PlayerID, OtherPlayerNickName, muting);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T NormalizeName(bool doIt, BNM::Structures::Mono::String* text) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("NormalizeName", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](doIt, text);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUserLevelb__36_0(BNM::IL2CPP::Il2CppObject* result) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<GetUserLevel>b__36_0", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](result);
		}
		
	};
}

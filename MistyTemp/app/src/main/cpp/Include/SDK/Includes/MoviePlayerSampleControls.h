#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class MoviePlayerSampleControls : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "MoviePlayerSampleControls", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: MoviePlayerSample */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Player() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Player");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSample */
		void set_Player(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Player");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.EventSystems.OVRInputModule */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T InputModule() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("InputModule");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.EventSystems.OVRInputModule */
		void set_InputModule(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("InputModule");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRGazePointer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T GazePointer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("GazePointer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRGazePointer */
		void set_GazePointer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("GazePointer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T LeftHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("LeftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_LeftHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("LeftHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T RightHand() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_RightHand(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("RightHand");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Canvas */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Canvas() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Canvas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Canvas */
		void set_Canvas(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Canvas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: ButtonDownListener */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T PlayPause() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("PlayPause");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: ButtonDownListener */
		void set_PlayPause(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("PlayPause");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MediaPlayerImage */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T PlayPauseImage() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("PlayPauseImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MediaPlayerImage */
		void set_PlayPauseImage(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("PlayPauseImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.UI.Slider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T ProgressBar() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ProgressBar");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.UI.Slider */
		void set_ProgressBar(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("ProgressBar");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: ButtonDownListener */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T FastForward() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("FastForward");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: ButtonDownListener */
		void set_FastForward(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("FastForward");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MediaPlayerImage */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T FastForwardImage() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("FastForwardImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MediaPlayerImage */
		void set_FastForwardImage(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("FastForwardImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: ButtonDownListener */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Rewind() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Rewind");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: ButtonDownListener */
		void set_Rewind(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Rewind");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MediaPlayerImage */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T RewindImage() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("RewindImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MediaPlayerImage */
		void set_RewindImage(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("RewindImage");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T TimeoutTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("TimeoutTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_TimeoutTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("TimeoutTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T _isVisible() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_isVisible");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set__isVisible(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("_isVisible");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T _lastButtonTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_lastButtonTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set__lastButtonTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("_lastButtonTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T _didSeek() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_didSeek");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set__didSeek(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("_didSeek");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T _seekPreviousPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_seekPreviousPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int64 */
		void set__seekPreviousPosition(int64_t value) {
			static BNM::Field<int64_t> __bnm__field__ = StaticClass().GetField("_seekPreviousPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T _rewindStartPosition() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_rewindStartPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int64 */
		void set__rewindStartPosition(int64_t value) {
			static BNM::Field<int64_t> __bnm__field__ = StaticClass().GetField("_rewindStartPosition");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T _rewindStartTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_rewindStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set__rewindStartTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("_rewindStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MoviePlayerSampleControls/PlaybackState */
		template <typename T = int> T _state() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_state");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSampleControls/PlaybackState */
		void set__state(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("_state");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayPauseClicked() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayPauseClicked", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnFastForwardClicked() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnFastForwardClicked", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnRewindClicked() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnRewindClicked", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnSeekBarMoved(float $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnSeekBarMoved", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Seek(int64_t pos) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Seek", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pos);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetVisible(bool visible) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetVisible", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](visible);
		}
		
	};
}

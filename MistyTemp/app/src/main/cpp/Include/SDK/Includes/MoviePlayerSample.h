#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class MoviePlayerSample : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "MoviePlayerSample", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T videoPausedBeforeAppPause() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("videoPausedBeforeAppPause");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_videoPausedBeforeAppPause(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("videoPausedBeforeAppPause");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Video.VideoPlayer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T videoPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("videoPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Video.VideoPlayer */
		void set_videoPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("videoPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVROverlay */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T overlay() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVROverlay */
		void set_overlay(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("overlay");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Renderer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T mediaRenderer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mediaRenderer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Renderer */
		void set_mediaRenderer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("mediaRenderer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.RenderTexture */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T copyTexture() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("copyTexture");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.RenderTexture */
		void set_copyTexture(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("copyTexture");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Material */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T externalTex2DMaterial() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("externalTex2DMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Material */
		void set_externalTex2DMaterial(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("externalTex2DMaterial");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T MovieName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("MovieName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_MovieName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("MovieName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T DrmLicenseUrl() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("DrmLicenseUrl");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_DrmLicenseUrl(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("DrmLicenseUrl");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LoopVideo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("LoopVideo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_LoopVideo(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("LoopVideo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MoviePlayerSample/VideoShape */
		template <typename T = int> T Shape() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Shape");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSample/VideoShape */
		void set_Shape(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("Shape");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MoviePlayerSample/VideoStereo */
		template <typename T = int> T Stereo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Stereo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSample/VideoStereo */
		void set_Stereo(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("Stereo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T DisplayMono() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("DisplayMono");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_DisplayMono(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("DisplayMono");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MoviePlayerSample/VideoShape */
		template <typename T = int> T _LastShape() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_LastShape");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSample/VideoShape */
		void set__LastShape(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("_LastShape");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: MoviePlayerSample/VideoStereo */
		template <typename T = int> T _LastStereo() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_LastStereo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MoviePlayerSample/VideoStereo */
		void set__LastStereo(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("_LastStereo");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T _LastDisplayMono() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_LastDisplayMono");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set__LastDisplayMono(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("_LastDisplayMono");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T $IsPlaying$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$IsPlaying$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_$IsPlaying$(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("$IsPlaying$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T $Duration$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$Duration$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int64 */
		void set_$Duration$(int64_t value) {
			static BNM::Field<int64_t> __bnm__field__ = StaticClass().GetField("$Duration$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T $PlaybackPosition$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$PlaybackPosition$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int64 */
		void set_$PlaybackPosition$(int64_t value) {
			static BNM::Field<int64_t> __bnm__field__ = StaticClass().GetField("$PlaybackPosition$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T get_IsPlaying() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_IsPlaying", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_IsPlaying(bool $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_IsPlaying", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T get_Duration() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Duration", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_Duration(int64_t $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_Duration", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> T get_PlaybackPosition() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_PlaybackPosition", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_PlaybackPosition(int64_t $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_PlaybackPosition", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IsLocalVideo(BNM::Structures::Mono::String* movieName) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsLocalVideo", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](movieName);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateShapeAndStereo() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateShapeAndStereo", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Play(BNM::Structures::Mono::String* moviePath, BNM::Structures::Mono::String* drmLicencesUrl) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Play", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](moviePath, drmLicencesUrl);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Play_1() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Play", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Pause() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Pause", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SeekTo(int64_t position) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SeekTo", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](position);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetPlaybackSpeed(float speed) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetPlaybackSpeed", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](speed);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Stop() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Stop", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnApplicationPause(bool appWasPaused) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnApplicationPause", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](appWasPaused);
		}
		
	};
}

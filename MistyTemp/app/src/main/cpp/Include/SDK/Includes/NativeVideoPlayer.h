#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class NativeVideoPlayer

	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "NativeVideoPlayer", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Nullable`1<System.IntPtr> */
		template <typename T = void* /*GENERICTYPE*/> static T _Activity() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_Activity");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Nullable`1<System.IntPtr> */
		static void set__Activity(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_Activity");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Nullable`1<System.IntPtr> */
		template <typename T = void* /*GENERICTYPE*/> static T _VideoPlayerClass() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_VideoPlayerClass");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Nullable`1<System.IntPtr> */
		static void set__VideoPlayerClass(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_VideoPlayerClass");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T EmptyParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("EmptyParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_EmptyParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("EmptyParams");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T getIsPlayingMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("getIsPlayingMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_getIsPlayingMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("getIsPlayingMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T getCurrentPlaybackStateMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("getCurrentPlaybackStateMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_getCurrentPlaybackStateMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("getCurrentPlaybackStateMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T getDurationMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("getDurationMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_getDurationMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("getDurationMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T getPlaybackPositionMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("getPlaybackPositionMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_getPlaybackPositionMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("getPlaybackPositionMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T setPlaybackPositionMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setPlaybackPositionMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_setPlaybackPositionMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("setPlaybackPositionMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T setPlaybackPositionParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setPlaybackPositionParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_setPlaybackPositionParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("setPlaybackPositionParams");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T playVideoMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playVideoMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_playVideoMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("playVideoMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T playVideoParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playVideoParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_playVideoParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("playVideoParams");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T stopMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("stopMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_stopMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("stopMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T resumeMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("resumeMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_resumeMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("resumeMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T pauseMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("pauseMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_pauseMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("pauseMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T setPlaybackSpeedMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setPlaybackSpeedMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_setPlaybackSpeedMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("setPlaybackSpeedMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T setPlaybackSpeedParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setPlaybackSpeedParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_setPlaybackSpeedParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("setPlaybackSpeedParams");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T setLoopingMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setLoopingMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_setLoopingMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("setLoopingMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T setLoopingParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setLoopingParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_setLoopingParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("setLoopingParams");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T setListenerRotationQuaternionMethodId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setListenerRotationQuaternionMethodId");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.IntPtr */
		static void set_setListenerRotationQuaternionMethodId(BNM::Types::nuint value) {
			static BNM::Field<BNM::Types::nuint> __bnm__field__ = StaticClass().GetField("setListenerRotationQuaternionMethodId");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.jvalue[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> static T setListenerRotationQuaternionParams() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setListenerRotationQuaternionParams");
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.jvalue[] */
		static void set_setListenerRotationQuaternionParams(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("setListenerRotationQuaternionParams");
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T get_VideoPlayerClass() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_VideoPlayerClass", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.IntPtr */
		template <typename T = BNM::Types::nuint> static T get_Activity() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Activity", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> static T get_IsAvailable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_IsAvailable", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> static T get_IsPlaying() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_IsPlaying", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: NativeVideoPlayer/PlabackState */
		template <typename T = int> static T get_CurrentPlaybackState() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_CurrentPlaybackState", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> static T get_Duration() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Duration", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Int64 */
		template <typename T = int64_t> static T get_PlaybackPosition() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_PlaybackPosition", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T set_PlaybackPosition(int64_t $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_PlaybackPosition", 1);
			return __bnm__method__($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T PlayVideo(BNM::Structures::Mono::String* path, BNM::Structures::Mono::String* drmLicenseUrl, BNM::Types::nuint surfaceObj) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("PlayVideo", 3);
			return __bnm__method__(path, drmLicenseUrl, surfaceObj);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T Stop() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Stop", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T Play() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Play", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T Pause() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Pause", 0);
			return __bnm__method__();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T SetPlaybackSpeed(float speed) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetPlaybackSpeed", 1);
			return __bnm__method__(speed);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T SetLooping(bool looping) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetLooping", 1);
			return __bnm__method__(looping);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T SetListenerRotation(BNM::Structures::Unity::Quaternion rotation) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetListenerRotation", 1);
			return __bnm__method__(rotation);
		}
		
	};
}

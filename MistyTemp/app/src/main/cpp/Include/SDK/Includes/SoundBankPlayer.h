#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class SoundBankPlayer : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "SoundBankPlayer", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.AudioSource */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T audioSource() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("audioSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioSource */
		void set_audioSource(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("audioSource");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T playOnEnable() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playOnEnable");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_playOnEnable(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("playOnEnable");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T shuffleOrder() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("shuffleOrder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_shuffleOrder(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("shuffleOrder");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: SoundBankSO */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T soundBank() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("soundBank");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: SoundBankSO */
		void set_soundBank(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("soundBank");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Audio.AudioMixerGroup */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T outputAudioMixerGroup() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outputAudioMixerGroup");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Audio.AudioMixerGroup */
		void set_outputAudioMixerGroup(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("outputAudioMixerGroup");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T spatialize() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("spatialize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_spatialize(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("spatialize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T spatializePostEffects() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("spatializePostEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_spatializePostEffects(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("spatializePostEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T bypassEffects() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bypassEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_bypassEffects(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("bypassEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T bypassListenerEffects() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bypassListenerEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_bypassListenerEffects(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("bypassListenerEffects");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T bypassReverbZones() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bypassReverbZones");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_bypassReverbZones(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("bypassReverbZones");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T priority() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("priority");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_priority(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("priority");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T spatialBlend() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("spatialBlend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_spatialBlend(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("spatialBlend");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T reverbZoneMix() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reverbZoneMix");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_reverbZoneMix(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("reverbZoneMix");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T dopplerLevel() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("dopplerLevel");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_dopplerLevel(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("dopplerLevel");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T spread() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("spread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_spread(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("spread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AudioRolloffMode */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T rolloffMode() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rolloffMode");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AudioRolloffMode */
		void set_rolloffMode(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("rolloffMode");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T minDistance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("minDistance");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_minDistance(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("minDistance");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T maxDistance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maxDistance");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_maxDistance(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("maxDistance");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.AnimationCurve */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T customRolloffCurve() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("customRolloffCurve");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.AnimationCurve */
		void set_customRolloffCurve(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("customRolloffCurve");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T nextIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nextIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_nextIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("nextIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T playEndTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playEndTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_playEndTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("playEndTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: SoundBankPlayer/PlaylistEntry[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T playlist() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playlist");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: SoundBankPlayer/PlaylistEntry[] */
		void set_playlist(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("playlist");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T get_isPlaying() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_isPlaying", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Play() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Play", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

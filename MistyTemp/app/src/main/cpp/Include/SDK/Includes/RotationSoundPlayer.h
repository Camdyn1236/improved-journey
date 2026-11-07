#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class RotationSoundPlayer : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "RotationSoundPlayer", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T transforms() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transforms");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform[] */
		void set_transforms(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("transforms");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: SoundBankPlayer */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T soundBankPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("soundBankPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: SoundBankPlayer */
		void set_soundBankPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("soundBankPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T rotationAmountThreshold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rotationAmountThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_rotationAmountThreshold(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("rotationAmountThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T rotationSpeedThreshold() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rotationSpeedThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_rotationSpeedThreshold(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("rotationSpeedThreshold");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T cooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("cooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_cooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("cooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T cooldownTimer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("cooldownTimer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_cooldownTimer(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("cooldownTimer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T initialUpAxis() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("initialUpAxis");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3[] */
		void set_initialUpAxis(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("initialUpAxis");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T lastUpAxis() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastUpAxis");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3[] */
		void set_lastUpAxis(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("lastUpAxis");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T lastRotationSpeeds() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastRotationSpeeds");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single[] */
		void set_lastRotationSpeeds(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("lastRotationSpeeds");
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
		
	};
}

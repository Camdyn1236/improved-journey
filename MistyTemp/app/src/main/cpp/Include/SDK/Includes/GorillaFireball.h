#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaFireball : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaFireball", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Single */
		template <typename T = float> T maxExplosionScale() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maxExplosionScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_maxExplosionScale(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("maxExplosionScale");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T totalExplosionTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("totalExplosionTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_totalExplosionTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("totalExplosionTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T gravityStrength() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gravityStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_gravityStrength(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("gravityStrength");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T canExplode() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("canExplode");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_canExplode(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("canExplode");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T explosionStartTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("explosionStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_explosionStartTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("explosionStartTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Update() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Update", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LateUpdate() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LateUpdate", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T ThrowThisThingo() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ThrowThisThingo", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnCollisionEnter(BNM::IL2CPP::Il2CppObject* collision) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnCollisionEnter", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](collision);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LocalExplode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LocalExplode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPhotonInstantiate(BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPhotonInstantiate", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Explode() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Explode", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

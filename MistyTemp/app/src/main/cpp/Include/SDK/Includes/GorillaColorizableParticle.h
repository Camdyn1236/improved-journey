#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaColorizableParticle : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaColorizableParticle", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.ParticleSystem */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T particleSystem() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("particleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.ParticleSystem */
		void set_particleSystem(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("particleSystem");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T gradientColorPower() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gradientColorPower");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_gradientColorPower(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("gradientColorPower");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T useLinearColor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("useLinearColor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_useLinearColor(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("useLinearColor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetColor(BNM::Structures::Unity::Color color) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetColor", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](color);
		}
		
	};
}

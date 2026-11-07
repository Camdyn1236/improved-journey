#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaSurfaceOverride : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaSurfaceOverride", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T overrideIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overrideIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_overrideIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("overrideIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T extraVelMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("extraVelMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_extraVelMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("extraVelMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T extraVelMaxMultiplier() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("extraVelMaxMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_extraVelMaxMultiplier(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("extraVelMaxMultiplier");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

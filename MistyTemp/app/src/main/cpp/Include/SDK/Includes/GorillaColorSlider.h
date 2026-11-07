#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaColorSlider : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaColorSlider", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T setRandomly() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("setRandomly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_setRandomly(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("setRandomly");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T zRange() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("zRange");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_zRange(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("zRange");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T maxValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("maxValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_maxValue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("maxValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T minValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("minValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_minValue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("minValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Vector3 */
		template <typename T = BNM::Structures::Unity::Vector3> T startingLocation() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("startingLocation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Vector3 */
		void set_startingLocation(BNM::Structures::Unity::Vector3 value) {
			static BNM::Field<BNM::Structures::Unity::Vector3> __bnm__field__ = StaticClass().GetField("startingLocation");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T valueIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("valueIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_valueIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("valueIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T valueImReporting() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("valueImReporting");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_valueImReporting(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("valueImReporting");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaTriggerBox */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T gorilla() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gorilla");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaTriggerBox */
		void set_gorilla(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("gorilla");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T startingZ() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("startingZ");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_startingZ(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("startingZ");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetPosition(float speed) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetPosition", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](speed);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T InterpolateValue(float $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("InterpolateValue", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnSliderRelease() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnSliderRelease", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

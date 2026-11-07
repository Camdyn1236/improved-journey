#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaDayNight : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaDayNight", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaDayNight */
		template <typename T = GlobalNamespace::GorillaDayNight*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaDayNight */
		static void set_instance(GlobalNamespace::GorillaDayNight* value) {
			static BNM::Field<GlobalNamespace::GorillaDayNight*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaLightmapData[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T lightmapDatas() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lightmapDatas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaLightmapData[] */
		void set_lightmapDatas(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("lightmapDatas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.LightmapData[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T workingLightMapDatas() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("workingLightMapDatas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.LightmapData[] */
		void set_workingLightMapDatas(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("workingLightMapDatas");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.LightmapData */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T workingLightMapData() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("workingLightMapData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.LightmapData */
		void set_workingLightMapData(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("workingLightMapData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lerpValue() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lerpValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lerpValue(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lerpValue");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T done() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("done");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_done(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("done");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T finishedStep() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("finishedStep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_finishedStep(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("finishedStep");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Color[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T fromPixels() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("fromPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Color[] */
		void set_fromPixels(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("fromPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Color[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T toPixels() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("toPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Color[] */
		void set_toPixels(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("toPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Color[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T mixedPixels() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("mixedPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Color[] */
		void set_mixedPixels(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("mixedPixels");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T firstData() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("firstData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_firstData(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("firstData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T secondData() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("secondData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_secondData(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("secondData");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T i() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("i");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_i(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("i");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T j() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("j");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_j(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("j");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T k() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("k");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_k(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("k");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T l() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("l");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_l(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("l");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Threading.Thread */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T lightsThread() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lightsThread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Threading.Thread */
		void set_lightsThread(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("lightsThread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Threading.Thread */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T dirsThread() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("dirsThread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Threading.Thread */
		void set_dirsThread(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("dirsThread");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T test() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("test");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_test(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("test");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T working() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("working");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_working(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("working");
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
		/* @brief Orig Type: System.Void */
		template <typename T = void> T DoWork() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("DoWork", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T DoLightsStep() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("DoLightsStep", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T DoDirsStep() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("DoDirsStep", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T LightMapSet(int setFirstData, int setSecondData, float setLerp) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LightMapSet", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](setFirstData, setSecondData, setLerp);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LightMapSetb__25_0() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<LightMapSet>b__25_0", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T LightMapSetb__25_1() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<LightMapSet>b__25_1", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class OVRSceneRoom : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "OVRSceneRoom", BNM::Image("Oculus.VR.dll"));
		}
		
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T $Floor$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$Floor$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRScenePlane */
		void set_$Floor$(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("$Floor$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T $Ceiling$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$Ceiling$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRScenePlane */
		void set_$Ceiling$(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("$Ceiling$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRScenePlane[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T $Walls$() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("$Walls$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRScenePlane[] */
		void set_$Walls$(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("$Walls$");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<OVRScenePlane> */
		template <typename T = void* /*GENERICTYPE*/> T _walls() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_walls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<OVRScenePlane> */
		void set__walls(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_walls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Guid,System.Int32> */
		template <typename T = void* /*GENERICTYPE*/> T _orderedRoomGuids() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_orderedRoomGuids");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Guid,System.Int32> */
		void set__orderedRoomGuids(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_orderedRoomGuids");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Comparison`1<OVRScenePlane> */
		template <typename T = void* /*GENERICTYPE*/> T _wallOrderComparer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_wallOrderComparer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Comparison`1<OVRScenePlane> */
		void set__wallOrderComparer(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_wallOrderComparer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRSceneAnchor */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T _sceneAnchor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_sceneAnchor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRSceneAnchor */
		void set__sceneAnchor(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("_sceneAnchor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRSceneManager */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T _sceneManager() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_sceneManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRSceneManager */
		void set__sceneManager(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("_sceneManager");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.HashSet`1<System.Guid> */
		template <typename T = void* /*GENERICTYPE*/> T _uuidToQuery() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_uuidToQuery");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.HashSet`1<System.Guid> */
		void set__uuidToQuery(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_uuidToQuery");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<OVRAnchor> */
		template <typename T = void* /*GENERICTYPE*/> T _roomAnchors() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_roomAnchors");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<OVRAnchor> */
		void set__roomAnchors(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_roomAnchors");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneRoom> */
		template <typename T = void* /*GENERICTYPE*/> static T SceneRooms() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SceneRooms");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneRoom> */
		static void set_SceneRooms(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("SceneRooms");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<OVRSceneRoom> */
		template <typename T = void* /*GENERICTYPE*/> static T SceneRoomsList() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("SceneRoomsList");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<OVRSceneRoom> */
		static void set_SceneRoomsList(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("SceneRoomsList");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T _taskCount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_taskCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set__taskCount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("_taskCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Action`1<System.Boolean> */
		template <typename T = void* /*GENERICTYPE*/> T _onFetchAnchorsCompleted() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_onFetchAnchorsCompleted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Action`1<System.Boolean> */
		void set__onFetchAnchorsCompleted(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_onFetchAnchorsCompleted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Action`2<System.Boolean,OVRAnchor> */
		template <typename T = void* /*GENERICTYPE*/> T _onAnchorLocalizationCompleted() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_onAnchorLocalizationCompleted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Action`2<System.Boolean,OVRAnchor> */
		void set__onAnchorLocalizationCompleted(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("_onAnchorLocalizationCompleted");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T get_Floor() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Floor", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_Floor(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_Floor", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T get_Ceiling() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Ceiling", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_Ceiling(BNM::IL2CPP::Il2CppObject* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_Ceiling", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: OVRScenePlane[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T get_Walls() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_Walls", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_Walls(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_Walls", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T IOVRSceneComponent_Initialize() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IOVRSceneComponent.Initialize", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LoadRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LoadRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnFetchAnchorsCompleted(bool success) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnFetchAnchorsCompleted", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](success);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnLocalizationCompleted(bool success, BNM::IL2CPP::Il2CppObject* anchor) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnLocalizationCompleted", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](success, anchor);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T UpdateRoomInformation(BNM::IL2CPP::Il2CppObject* plane) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateRoomInformation", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](plane);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T GetUuidsToQuery() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetUuidsToQuery", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDestroy() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDestroy", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T Awakeb__24_0(BNM::IL2CPP::Il2CppObject* planeA, BNM::IL2CPP::Il2CppObject* planeB) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<Awake>b__24_0", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](planeA, planeB);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T Awakeg__TryGetUuid$24_1(BNM::IL2CPP::Il2CppObject* plane, BNM::IL2CPP::Il2CppObject** index) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("<Awake>g__TryGetUuid|24_1", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](plane, index);
		}
		
	};
}

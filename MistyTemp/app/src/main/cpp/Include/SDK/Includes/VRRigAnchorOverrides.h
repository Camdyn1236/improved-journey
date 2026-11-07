#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class VRRigAnchorOverrides : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "VRRigAnchorOverrides", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T nameDefaultAnchor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nameDefaultAnchor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_nameDefaultAnchor(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("nameDefaultAnchor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T nameTransform() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nameTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform */
		void set_nameTransform(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("nameTransform");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Transform[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T overrideAnchors() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overrideAnchors");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Transform[] */
		void set_overrideAnchors(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("overrideAnchors");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T nameLastObjectToAttach() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("nameLastObjectToAttach");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_nameLastObjectToAttach(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("nameLastObjectToAttach");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T get_NameDefaultAnchor() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_NameDefaultAnchor", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T get_NameTransform() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_NameTransform", 0);
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
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T MapPositionToIndex(int pos) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("MapPositionToIndex", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pos);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OverrideAnchor(int pos, BNM::IL2CPP::Il2CppObject* anchor) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OverrideAnchor", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pos, anchor);
		}
		/* @brief Orig Type: UnityEngine.Transform */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T AnchorOverride(int pos, BNM::IL2CPP::Il2CppObject* fallback) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("AnchorOverride", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](pos, fallback);
		}
		
	};
}

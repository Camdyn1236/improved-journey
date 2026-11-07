#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaScoreboardSpawner : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaScoreboardSpawner", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T gameType() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("gameType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_gameType(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("gameType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T includeMMR() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("includeMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_includeMMR(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("includeMMR");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T scoreboardPrefab() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("scoreboardPrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_scoreboardPrefab(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("scoreboardPrefab");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T notInRoomText() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("notInRoomText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_notInRoomText(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("notInRoomText");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.GameObject */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T controllingParentGameObject() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("controllingParentGameObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.GameObject */
		void set_controllingParentGameObject(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("controllingParentGameObject");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isActive() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isActive(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isActive");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: GorillaScoreBoard */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentScoreboard() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentScoreboard");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaScoreBoard */
		void set_currentScoreboard(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentScoreboard");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IsCurrentScoreboard() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IsCurrentScoreboard", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnJoinedRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnJoinedRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisconnected(int cause) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisconnected", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](cause);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T UpdateBoard() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdateBoard", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnLeftRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnLeftRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

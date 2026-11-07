#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class ScheduledTimelinePlayer : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "ScheduledTimelinePlayer", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: UnityEngine.Playables.PlayableDirector */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T timeline() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("timeline");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Playables.PlayableDirector */
		void set_timeline(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("timeline");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T eventHour() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("eventHour");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_eventHour(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("eventHour");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T scheduledEventID() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("scheduledEventID");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_scheduledEventID(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("scheduledEventID");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnEnable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnEnable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnDisable() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnDisable", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T HandleScheduledEvent() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("HandleScheduledEvent", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

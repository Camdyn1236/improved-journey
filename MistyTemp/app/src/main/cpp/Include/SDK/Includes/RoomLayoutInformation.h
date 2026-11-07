#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class RoomLayoutInformation : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "RoomLayoutInformation", BNM::Image("Oculus.VR.dll"));
		}
		
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Floor() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Floor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRScenePlane */
		void set_Floor(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Floor");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: OVRScenePlane */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T Ceiling() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Ceiling");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: OVRScenePlane */
		void set_Ceiling(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("Ceiling");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<OVRScenePlane> */
		template <typename T = void* /*GENERICTYPE*/> T Walls() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("Walls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<OVRScenePlane> */
		void set_Walls(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("Walls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaFriendCollider : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaFriendCollider", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Collections.Generic.List`1<System.String> */
		template <typename T = void* /*GENERICTYPE*/> T playerIDsCurrentlyTouching() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerIDsCurrentlyTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<System.String> */
		void set_playerIDsCurrentlyTouching(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("playerIDsCurrentlyTouching");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.CapsuleCollider */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T thisCapsule() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("thisCapsule");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.CapsuleCollider */
		void set_thisCapsule(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("thisCapsule");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T myAllowedMapsToJoin() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("myAllowedMapsToJoin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String[] */
		void set_myAllowedMapsToJoin(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("myAllowedMapsToJoin");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: UnityEngine.Collider[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T overlapColliders() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("overlapColliders");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: UnityEngine.Collider[] */
		void set_overlapColliders(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("overlapColliders");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T tagAndBodyLayerMask() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tagAndBodyLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_tagAndBodyLayerMask(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("tagAndBodyLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Awake() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Awake", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T UpdatePlayersInSphere() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("UpdatePlayersInSphere", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

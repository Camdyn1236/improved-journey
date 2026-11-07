#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class VRRigReliableState : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "VRRigReliableState", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: System.Int32[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T activeTransferrableObjectIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("activeTransferrableObjectIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32[] */
		void set_activeTransferrableObjectIndex(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("activeTransferrableObjectIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: TransferrableObject/PositionState[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T transferrablePosStates() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transferrablePosStates");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: TransferrableObject/PositionState[] */
		void set_transferrablePosStates(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("transferrablePosStates");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: TransferrableObject/ItemStates[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T transferrableItemStates() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("transferrableItemStates");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: TransferrableObject/ItemStates[] */
		void set_transferrableItemStates(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("transferrableItemStates");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T extraSerializedState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("extraSerializedState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_extraSerializedState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("extraSerializedState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lHandState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lHandState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lHandState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lHandState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T rHandState() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rHandState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_rHandState(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("rHandState");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T isOfflineVRRig() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("isOfflineVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_isOfflineVRRig(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("isOfflineVRRig");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: BodyDockPositions */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T bDock() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("bDock");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: BodyDockPositions */
		void set_bDock(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("bDock");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T sizeLayerMask() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sizeLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_sizeLayerMask(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("sizeLayerMask");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SharedStart(bool isOfflineVRRig_, BNM::IL2CPP::Il2CppObject* bDock_) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SharedStart", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](isOfflineVRRig_, bDock_);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Photon_Pun_IPunObservable_OnPhotonSerializeView(BNM::IL2CPP::Il2CppObject* stream, BNM::IL2CPP::Il2CppObject* info) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Photon.Pun.IPunObservable.OnPhotonSerializeView", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](stream, info);
		}
		
	};
}

#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaSceneCamera : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaSceneCamera", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaSceneTransform[] */
		template <typename T = BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> T sceneTransforms() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("sceneTransforms");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaSceneTransform[] */
		void set_sceneTransforms(BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>* value) {
			static BNM::Field<BNM::Structures::Mono::Array<BNM::IL2CPP::Il2CppObject*>*> __bnm__field__ = StaticClass().GetField("sceneTransforms");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetSceneCamera(int sceneIndex) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetSceneCamera", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](sceneIndex);
		}
		
	};
}

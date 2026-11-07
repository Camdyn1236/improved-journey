#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaColorizableBase : public BNM::UnityEngine::MonoBehaviour
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaColorizableBase", BNM::Image("Assembly-CSharp.dll"));
		}
		
		
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetColor(BNM::Structures::Unity::Color color) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetColor", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](color);
		}
		
	};
}

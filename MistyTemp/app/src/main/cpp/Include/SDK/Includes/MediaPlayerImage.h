#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class MediaPlayerImage : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "MediaPlayerImage", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: MediaPlayerImage/ButtonType */
		template <typename T = int> T m_ButtonType() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("m_ButtonType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: MediaPlayerImage/ButtonType */
		void set_m_ButtonType(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("m_ButtonType");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: MediaPlayerImage/ButtonType */
		template <typename T = int> T get_buttonType() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_buttonType", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_buttonType(int $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_buttonType", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPopulateMesh(BNM::IL2CPP::Il2CppObject* toFill) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPopulateMesh", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](toFill);
		}
		
	};
}

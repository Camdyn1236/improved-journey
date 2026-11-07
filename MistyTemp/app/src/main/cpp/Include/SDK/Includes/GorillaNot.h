#pragma once
#include <BNMIncludes.hpp>

namespace GlobalNamespace {
	class GorillaNot : public BNM::IL2CPP::Il2CppObject
	{
		public:
		static BNM::Class StaticClass() {
			return BNM::Class("", "GorillaNot", BNM::Image("Assembly-CSharp.dll"));
		}
		
		/* @brief Orig Type: GorillaNot */
		template <typename T = GlobalNamespace::GorillaNot*> static T instance() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("instance");
			return __bnm__field__();
		}
		/* @param value Orig Type: GorillaNot */
		static void set_instance(GlobalNamespace::GorillaNot* value) {
			static BNM::Field<GlobalNamespace::GorillaNot*> __bnm__field__ = StaticClass().GetField("instance");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T _sendReport() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_sendReport");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set__sendReport(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("_sendReport");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T _suspiciousPlayerId() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_suspiciousPlayerId");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set__suspiciousPlayerId(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("_suspiciousPlayerId");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T _suspiciousPlayerName() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_suspiciousPlayerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set__suspiciousPlayerName(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("_suspiciousPlayerName");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T _suspiciousReason() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("_suspiciousReason");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set__suspiciousReason(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("_suspiciousReason");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.List`1<System.String> */
		template <typename T = void* /*GENERICTYPE*/> T reportedPlayers() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("reportedPlayers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.List`1<System.String> */
		void set_reportedPlayers(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("reportedPlayers");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Byte */
		template <typename T = BNM::Types::byte> T roomSize() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("roomSize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Byte */
		void set_roomSize(BNM::Types::byte value) {
			static BNM::Field<BNM::Types::byte> __bnm__field__ = StaticClass().GetField("roomSize");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T lastCheck() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastCheck");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_lastCheck(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("lastCheck");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T checkCooldown() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("checkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_checkCooldown(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("checkCooldown");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Single */
		template <typename T = float> T userDecayTime() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("userDecayTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Single */
		void set_userDecayTime(float value) {
			static BNM::Field<float> __bnm__field__ = StaticClass().GetField("userDecayTime");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T currentMasterClient() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("currentMasterClient");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_currentMasterClient(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("currentMasterClient");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T testAssault() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("testAssault");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Boolean */
		void set_testAssault(bool value) {
			static BNM::Field<bool> __bnm__field__ = StaticClass().GetField("testAssault");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Byte */
		template <typename T = BNM::Types::byte> static T ReportAssault() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("ReportAssault");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Byte */
		static void set_ReportAssault(BNM::Types::byte value) {
			static BNM::Field<BNM::Types::byte> __bnm__field__ = StaticClass().GetField("ReportAssault");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lowestActorNumber() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lowestActorNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lowestActorNumber(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lowestActorNumber");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T calls() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("calls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_calls(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("calls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T rpcCallLimit() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rpcCallLimit");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_rpcCallLimit(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("rpcCallLimit");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T logErrorMax() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("logErrorMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_logErrorMax(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("logErrorMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T rpcErrorMax() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("rpcErrorMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_rpcErrorMax(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("rpcErrorMax");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Object */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T outObj() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("outObj");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Object */
		void set_outObj(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("outObj");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: Photon.Realtime.Player */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T tempPlayer() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: Photon.Realtime.Player */
		void set_tempPlayer(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("tempPlayer");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T logErrorCount() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("logErrorCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_logErrorCount(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("logErrorCount");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T stringIndex() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("stringIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_stringIndex(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("stringIndex");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerID() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerID");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerID(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerID");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T playerNick() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("playerNick");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		void set_playerNick(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("playerNick");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T lastServerTimestamp() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("lastServerTimestamp");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Int32 */
		void set_lastServerTimestamp(int value) {
			static BNM::Field<int> __bnm__field__ = StaticClass().GetField("lastServerTimestamp");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> static T InvalidRPC() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("InvalidRPC");
			return __bnm__field__();
		}
		/* @param value Orig Type: System.String */
		static void set_InvalidRPC(BNM::Structures::Mono::String* value) {
			static BNM::Field<BNM::Structures::Mono::String*> __bnm__field__ = StaticClass().GetField("InvalidRPC");
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,GorillaNot/RPCCallTracker>> */
		template <typename T = void* /*GENERICTYPE*/> T userRPCCalls() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("userRPCCalls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,GorillaNot/RPCCallTracker>> */
		void set_userRPCCalls(void* /*GENERICTYPE*/ value) {
			static BNM::Field<void* /*GENERICTYPE*/> __bnm__field__ = StaticClass().GetField("userRPCCalls");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		/* @brief Orig Type: ExitGames.Client.Photon.Hashtable */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T hashTable() {
			static BNM::Field<T> __bnm__field__ = StaticClass().GetField("hashTable");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			return __bnm__field__();
		}
		/* @param value Orig Type: ExitGames.Client.Photon.Hashtable */
		void set_hashTable(BNM::IL2CPP::Il2CppObject* value) {
			static BNM::Field<BNM::IL2CPP::Il2CppObject*> __bnm__field__ = StaticClass().GetField("hashTable");
			__bnm__field__.SetInstance((BNM::IL2CPP::Il2CppObject*)this);
			__bnm__field__.Set(value);
		}
		
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T get_sendReport() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_sendReport", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_sendReport(bool $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_sendReport", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T get_suspiciousPlayerId() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_suspiciousPlayerId", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_suspiciousPlayerId(BNM::Structures::Mono::String* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_suspiciousPlayerId", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T get_suspiciousPlayerName() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_suspiciousPlayerName", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_suspiciousPlayerName(BNM::Structures::Mono::String* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_suspiciousPlayerName", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.String */
		template <typename T = BNM::Structures::Mono::String*> T get_suspiciousReason() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("get_suspiciousReason", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T set_suspiciousReason(BNM::Structures::Mono::String* $value) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("set_suspiciousReason", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]($value);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T Start() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("Start", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T LogErrorCount(BNM::Structures::Mono::String* logString, BNM::Structures::Mono::String* stackTrace, int type) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LogErrorCount", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](logString, stackTrace, type);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SendReport(BNM::Structures::Mono::String* susReason, BNM::Structures::Mono::String* susId, BNM::Structures::Mono::String* susNick) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SendReport", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](susReason, susId, susNick);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T CheckReports() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CheckReports", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Int32 */
		template <typename T = int> T LowestActorNumber() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("LowestActorNumber", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T OnPlayerLeftRoom(BNM::IL2CPP::Il2CppObject* otherPlayer) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("OnPlayerLeftRoom", 1);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](otherPlayer);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> static T IncrementRPCCall(BNM::IL2CPP::Il2CppObject* info, BNM::Structures::Mono::String* callingMethod) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IncrementRPCCall", 2);
			return __bnm__method__(info, callingMethod);
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T IncrementRPCCallLocal(BNM::IL2CPP::Il2CppObject* info, BNM::Structures::Mono::String* rpcFunction) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IncrementRPCCallLocal", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](info, rpcFunction);
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T IncrementRPCTracker(BNM::IL2CPP::Il2CppObject* sender, BNM::IL2CPP::Il2CppObject* rpcFunction, BNM::IL2CPP::Il2CppObject* callLimit) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("IncrementRPCTracker", 3);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](sender, rpcFunction, callLimit);
		}
		/* @brief Orig Type: GorillaNot/RPCCallTracker */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T GetRPCCallTracker(BNM::IL2CPP::Il2CppObject* sender, BNM::IL2CPP::Il2CppObject* rpcFunction) {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("GetRPCCallTracker", 2);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this](sender, rpcFunction);
		}
		/* @brief Orig Type: System.Collections.IEnumerator */
		template <typename T = BNM::IL2CPP::Il2CppObject*> T QuitDelay() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("QuitDelay", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T SetToRoomCreatorIfHere() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("SetToRoomCreatorIfHere", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Boolean */
		template <typename T = bool> T ShouldDisconnectFromRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("ShouldDisconnectFromRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		/* @brief Orig Type: System.Void */
		template <typename T = void> T CloseInvalidRoom() {
			static BNM::Method<T> __bnm__method__ = StaticClass().GetMethod("CloseInvalidRoom", 0);
			return __bnm__method__[(BNM::IL2CPP::Il2CppObject*)this]();
		}
		
	};
}

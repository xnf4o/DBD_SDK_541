// Name: DeadB, Version: 5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x02AF1FC0
//		Name   -> Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InPartyOwnerId                                             (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");

	ALobbyBeaconClient_ServerSetPartyOwner_Params params {};
	params.InUniqueId = InUniqueId;
	params.InPartyOwnerId = InPartyOwnerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1F70
//		Name   -> Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");

	ALobbyBeaconClient_ServerNotifyJoiningServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1DC0
//		Name   -> Function Lobby.LobbyBeaconClient.ServerLoginPlayer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FString                                     InSessionId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     UrlString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");

	ALobbyBeaconClient_ServerLoginPlayer_Params params {};
	params.InSessionId = InSessionId;
	params.InUniqueId = InUniqueId;
	params.UrlString = UrlString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1C30
//		Name   -> Function Lobby.LobbyBeaconClient.ServerKickPlayer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FUniqueNetIdRepl                            PlayerToKick                                               (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       reason                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");

	ALobbyBeaconClient_ServerKickPlayer_Params params {};
	params.PlayerToKick = PlayerToKick;
	params.reason = reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1BE0
//		Name   -> Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");

	ALobbyBeaconClient_ServerDisconnectFromLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1B20
//		Name   -> Function Lobby.LobbyBeaconClient.ServerCheat
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FString                                     Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ServerCheat(const struct FString& Msg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");

	ALobbyBeaconClient_ServerCheat_Params params {};
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF19C0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientWasKicked
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FText                                       KickReason                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");

	ALobbyBeaconClient_ClientWasKicked_Params params {};
	params.KickReason = KickReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1930
//		Name   -> Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		struct FJoinabilitySettings                        Settings                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");

	ALobbyBeaconClient_ClientSetInviteFlags_Params params {};
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1840
//		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerLeft
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");

	ALobbyBeaconClient_ClientPlayerLeft_Params params {};
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF16D0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerJoined
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FText                                       NewPlayerName                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");

	ALobbyBeaconClient_ClientPlayerJoined_Params params {};
	params.NewPlayerName = NewPlayerName;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF15A0
//		Name   -> Function Lobby.LobbyBeaconClient.ClientLoginComplete
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");

	ALobbyBeaconClient_ClientLoginComplete_Params params {};
	params.InUniqueId = InUniqueId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1580
//		Name   -> Function Lobby.LobbyBeaconClient.ClientJoinGame
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void ALobbyBeaconClient::ClientJoinGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");

	ALobbyBeaconClient_ClientJoinGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1560
//		Name   -> Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");

	ALobbyBeaconClient_ClientAckJoiningServer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1AE0
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId");

	ALobbyBeaconPlayerState_OnRep_UniqueId_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1AC0
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");

	ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1A80
//		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");

	ALobbyBeaconPlayerState_OnRep_InLobby_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1B00
//		Name   -> Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");

	ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AF1AA0
//		Name   -> Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
//		Flags  -> (Final, Native, Protected)
void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");

	ALobbyBeaconState_OnRep_LobbyStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

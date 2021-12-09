#pragma once

// Name: DeadB, Version: 5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SocialParty.EJoinPartyMethod
enum class SocialParty_EJoinPartyMethod : uint8_t
{
	EJoinPartyMethod__None         = 0,
	EJoinPartyMethod__PlatformInvitation = 1,
	EJoinPartyMethod__InGameInvitation = 2,
	EJoinPartyMethod__JoinRequest  = 3,
	EJoinPartyMethod__EJoinPartyMethod_MAX = 4,

};

// Enum SocialParty.EPartyBusyReason
enum class SocialParty_EPartyBusyReason : uint8_t
{
	EPartyBusyReason__None         = 0,
	EPartyBusyReason__CreatingParty = 1,
	EPartyBusyReason__LeavingParty = 2,
	EPartyBusyReason__SyncingParty = 3,
	EPartyBusyReason__DestroyingParty = 4,
	EPartyBusyReason__InvitingPlayer = 5,
	EPartyBusyReason__AcceptingPartyInvite = 6,
	EPartyBusyReason__RejectingPartyInvite = 7,
	EPartyBusyReason__CancelingPartyInvite = 8,
	EPartyBusyReason__RequestingJoinParty = 9,
	EPartyBusyReason__AcceptingRequestJoinParty = 10,
	EPartyBusyReason__RejectingRequestJoinParty = 11,
	EPartyBusyReason__CancelingRequestJoinParty = 12,
	EPartyBusyReason__AcceptingPlatformInvite = 13,
	EPartyBusyReason__KickingPlayerFromParty = 14,
	EPartyBusyReason__LeavingPartyFromKick = 15,
	EPartyBusyReason__CreatingPartyPlatformSession = 16,
	EPartyBusyReason__LeavingCrossplatformPlatformSession = 17,
	EPartyBusyReason__WaitingForPlatformSessionInfo = 18,
	EPartyBusyReason__ProcessingPlatformSession = 19,
	EPartyBusyReason__EPartyBusyReason_MAX = 20,

};

// Enum SocialParty.EPartyError
enum class SocialParty_EPartyError : uint8_t
{
	EPartyError__None              = 0,
	EPartyError__CreatePartyFail   = 1,
	EPartyError__CreatePartyFail_PlayerAlreadyInParty = 2,
	EPartyError__ConnectionToPartyManagementLost = 3,
	EPartyError__AcceptInvitationFail = 4,
	EPartyError__AcceptInvitationFail_InvitationExpired = 5,
	EPartyError__AcceptInvitationFail_PartyIsFull = 6,
	EPartyError__AcceptInvitationFail_PartyDoesNotExists = 7,
	EPartyError__AcceptInvitationFail_VersionMismatch = 8,
	EPartyError__AcceptInvitationFail_StreamingInstallationIncomplete = 9,
	EPartyError__AcceptInvitationFail_PartyAlreadyInMatchmaking = 10,
	EPartyError__AcceptInvitationFail_AllPartyMembersAreInMatch = 11,
	EPartyError__RejectInvitationFail = 12,
	EPartyError__RejectInvitationFail_PartyDoesNotExists = 13,
	EPartyError__InvitationFail    = 14,
	EPartyError__InvitationFail_PartyDoesNotExists = 15,
	EPartyError__InvitationFail_PlayerAlreadyInParty = 16,
	EPartyError__InvitationFail_NotFriendsWithUser = 17,
	EPartyError__JoinRequestFail   = 18,
	EPartyError__JoinRequestFail_PartyDoesNotExists = 19,
	EPartyError__JoinRequestFail_PlayerAlreadyInPartyOrPartyFull = 20,
	EPartyError__JoinRequestFail_BannedFromParty = 21,
	EPartyError__JoinRequestFail_FriendNotInParty = 22,
	EPartyError__JoinRequestFail_PartyIsPrivate = 23,
	EPartyError__JoinRequestAcceptedFail = 24,
	EPartyError__JoinRequestAcceptedFail_PartyDoesNotExists = 25,
	EPartyError__AcceptJoinRequestFail = 26,
	EPartyError__AcceptJoinRequestFail_RequestNotFound = 27,
	EPartyError__AcceptJoinRequestFail_PartyDoesNotExists = 28,
	EPartyError__RejectJoinRequestFail = 29,
	EPartyError__RejectJoinRequestFail_RequestNotFound = 30,
	EPartyError__RejectJoinRequestFail_PartyDoesNotExists = 31,
	EPartyError__CancelJoinRequestFail = 32,
	EPartyError__CancelJoinRequestFail_RequestNotFound = 33,
	EPartyError__RealTimeMessagingDisconnected = 34,
	EPartyError__FriendBlocked_UnableToJoinParty = 35,
	EPartyError__FriendBlocked_UnableToRemainInParty = 36,
	EPartyError__CancelInvitationFail = 37,
	EPartyError__CancelInvitationFail_PartyDoesNotExists = 38,
	EPartyError__SendPartyChatMessageFail = 39,
	EPartyError__SendPartyChatMessageFail_PartyDoesNotExists = 40,
	EPartyError__SendPartyChatMessageFail_MessageNotAllowed = 41,
	EPartyError__InvitationValidationError = 42,
	EPartyError__InvitationValidationError_StandardInviteFlowButActiveCrowdPlay = 43,
	EPartyError__InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay = 44,
	EPartyError__InvitationValidationError_PartyIsFull = 45,
	EPartyError__InvitationValidationError_PartyDoesNotExists = 46,
	EPartyError__InvitationValidationError_VersionMismatch = 47,
	EPartyError__InvitationValidationError_StreamingInstallationIncomplete = 48,
	EPartyError__InvitationValidationError_FriendBlocked = 49,
	EPartyError__InvitationValidationError_InsufficientPrivileges = 50,
	EPartyError__InvitationValidationError_PlayerBanned = 51,
	EPartyError__InvitationValidationError_LocalCrossplayIncompatibility = 52,
	EPartyError__InvitationValidationError_RemoteCrossplayIncompatibility = 53,
	EPartyError__InvitationValidationError_ListenServerCrossplayIncompatibility = 54,
	EPartyError__RemovePlayerFromPartyFail = 55,
	EPartyError__JoinFail_PlayerAlreadyInParty = 56,
	EPartyError__UnknownError      = 57,
	EPartyError__EPartyError_MAX   = 58,

};

// Enum SocialParty.EPartyPostMatchmakingState
enum class SocialParty_EPartyPostMatchmakingState : uint8_t
{
	EPartyPostMatchmakingState__None = 0,
	EPartyPostMatchmakingState__InProgress = 1,
	EPartyPostMatchmakingState__Completed = 2,
	EPartyPostMatchmakingState__Error = 3,
	EPartyPostMatchmakingState__EPartyPostMatchmakingState_MAX = 4,

};

// Enum SocialParty.EPartyPostMatchmakingRole
enum class SocialParty_EPartyPostMatchmakingRole : uint8_t
{
	EPartyPostMatchmakingRole__None = 0,
	EPartyPostMatchmakingRole__Client = 1,
	EPartyPostMatchmakingRole__Host = 2,
	EPartyPostMatchmakingRole__EPartyPostMatchmakingRole_MAX = 3,

};

// Enum SocialParty.EMatchmakingState
enum class SocialParty_EMatchmakingState : uint8_t
{
	EMatchmakingState__None        = 0,
	EMatchmakingState__Searching   = 1,
	EMatchmakingState__MatchFound  = 2,
	EMatchmakingState__Error       = 3,
	EMatchmakingState__EMatchmakingState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SocialParty.SocialPartyMember
// 0x00A0
struct FSocialPartyMember
{
	unsigned char                                      UnknownData_BLWI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               _customizationMesh;                                        // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _playerName;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _platformSessionId;                                        // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _uniquePlayerId;                                           // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _playerRank;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _characterLevel;                                           // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _prestigeLevel;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _gameRole;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _characterId;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _powerId;                                                  // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _location;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _ready;                                                    // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _crossplayAllowed;                                         // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7V5M[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _playerPlatform;                                           // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _playerProvider;                                           // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	SocialParty_EPartyPostMatchmakingRole              _postMatchmakingRole;                                      // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	SocialParty_EPartyPostMatchmakingState             _postMatchmakingState;                                     // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _roleRequested;                                            // 0x0092(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isStateInitialized;                                       // 0x0093(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7ONT[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            _disconnectionPenaltyEndOfBan;                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SocialParty.CustomGameBot
// 0x0008
struct FCustomGameBot
{
	unsigned char                                      UnknownData_HL7F[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      _role;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _difficulty;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1PD6[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _characterIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SocialParty.PartySessionSettings
// 0x0098
struct FPartySessionSettings
{
	unsigned char                                      UnknownData_ISYH[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _sessionId;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FString>               _gameSessionInfos;                                         // 0x0018(0x0050) (NativeAccessSpecifierPrivate)
	struct FString                                     _owningUserId;                                             // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _owningUserName;                                           // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isDedicated;                                              // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PULQ[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            _matchmakingTimestamp;                                     // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SocialParty.PartyMatchmakingSettings
// 0x0030
struct FPartyMatchmakingSettings
{
	unsigned char                                      UnknownData_DM0K[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             _playerIds;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	SocialParty_EMatchmakingState                      _matchmakingState;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SLYV[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            _startMatchmakingDateTimestamp;                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInFinalCountdown;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U01E[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SocialParty.CustomGameBotsData
// 0x0018
struct FCustomGameBotsData
{
	unsigned char                                      UnknownData_7B6N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCustomGameBot>                      _bots;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct SocialParty.CustomGamePresetData
// 0x0038
struct FCustomGamePresetData
{
	unsigned char                                      UnknownData_SPLK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              _mapAvailabilities;                                        // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _arePerkAvailable;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _areOfferingAvailable;                                     // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _areItemAvailable;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _areItemAddonAvailable;                                    // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _areDlcContentAllowed;                                     // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPrivateMatch;                                           // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WUIX[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomGameBotsData                         _botsData;                                                 // 0x0020(0x0018) (NativeAccessSpecifierPrivate)

};

// ScriptStruct SocialParty.SocialPartyState
// 0x0188
struct FSocialPartyState
{
	unsigned char                                      UnknownData_T1NF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomGamePresetData                       _customGamePresetData;                                     // 0x0008(0x0038) (NativeAccessSpecifierPrivate)
	struct FPartySessionSettings                       _partySessionSettings;                                     // 0x0040(0x0098) (NativeAccessSpecifierPrivate)
	struct FPartyMatchmakingSettings                   _partyMatchmakingSettings;                                 // 0x00D8(0x0030) (NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _playerJoinOrder;                                          // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, unsigned char>                  _playerChatIndices;                                        // 0x0118(0x0050) (NativeAccessSpecifierPrivate)
	int                                                _gameType;                                                 // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isCrowdPlay;                                              // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isUsingDedicatedServer;                                   // 0x016D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P07Y[0x2];                                     // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _version;                                                  // 0x0170(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _lastUpdatedTime;                                          // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _lastSentTime;                                             // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

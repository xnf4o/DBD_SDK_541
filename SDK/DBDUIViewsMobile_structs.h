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

// Enum DBDUIViewsMobile.EActionOnFriendType
enum class DBDUIViewsMobile_EActionOnFriendType : uint8_t
{
	EActionOnFriendType__None      = 0,
	EActionOnFriendType__SendFriendRequest = 1,
	EActionOnFriendType__ConfirmFriendRequest = 2,
	EActionOnFriendType__DeclineFriendRequest = 3,
	EActionOnFriendType__RemoveFriend = 4,
	EActionOnFriendType__AddToFavorite = 5,
	EActionOnFriendType__RemoveToFavorite = 6,
	EActionOnFriendType__Mute      = 7,
	EActionOnFriendType__Unmute    = 8,
	EActionOnFriendType__InviteToParty = 9,
	EActionOnFriendType__CancelInviteToParty = 10,
	EActionOnFriendType__Select    = 11,
	EActionOnFriendType__ConfirmAction = 12,
	EActionOnFriendType__DeclineAction = 13,
	EActionOnFriendType__RemovePlayerFromParty = 14,
	EActionOnFriendType__Count     = 15,
	EActionOnFriendType__EActionOnFriendType_MAX = 16,

};

// Enum DBDUIViewsMobile.EAtlantaFriendUIStatus
enum class DBDUIViewsMobile_EAtlantaFriendUIStatus : uint8_t
{
	EAtlantaFriendUIStatus__Undefined = 0,
	EAtlantaFriendUIStatus__FriendSuggestion = 1,
	EAtlantaFriendUIStatus__FriendRequestSent = 2,
	EAtlantaFriendUIStatus__FriendRequestReceived = 3,
	EAtlantaFriendUIStatus__Available = 4,
	EAtlantaFriendUIStatus__InAMatch = 5,
	EAtlantaFriendUIStatus__Offline = 6,
	EAtlantaFriendUIStatus__AddFriendToSeeStatus = 7,
	EAtlantaFriendUIStatus__EAtlantaFriendUIStatus_MAX = 8,

};

// Enum DBDUIViewsMobile.ECustomMatchDifficulty
enum class DBDUIViewsMobile_ECustomMatchDifficulty : uint8_t
{
	ECustomMatchDifficulty__Easy   = 0,
	ECustomMatchDifficulty__Medium = 1,
	ECustomMatchDifficulty__Hard   = 2,
	ECustomMatchDifficulty__Suggested = 3,
	ECustomMatchDifficulty__Random = 4,
	ECustomMatchDifficulty__None   = 5,
	ECustomMatchDifficulty__Max    = 6,
	ECustomMatchDifficulty__ECustomMatchDifficulty_MAX = 7,

};

// Enum DBDUIViewsMobile.ECustomMatchOptions
enum class DBDUIViewsMobile_ECustomMatchOptions : uint8_t
{
	ECustomMatchOptions__All       = 0,
	ECustomMatchOptions__None      = 1,
	ECustomMatchOptions__Owned     = 2,
	ECustomMatchOptions__Random    = 3,
	ECustomMatchOptions__Special   = 4,
	ECustomMatchOptions__Count     = 5,
	ECustomMatchOptions__ECustomMatchOptions_MAX = 6,

};

// Enum DBDUIViewsMobile.ECustomMatchTab
enum class DBDUIViewsMobile_ECustomMatchTab : uint8_t
{
	ECustomMatchTab__Perks         = 0,
	ECustomMatchTab__ItemsAndAddons = 1,
	ECustomMatchTab__Offerings     = 2,
	ECustomMatchTab__Maps          = 3,
	ECustomMatchTab__BotDifficulty = 4,
	ECustomMatchTab__BotCharacter  = 5,
	ECustomMatchTab__Count         = 6,
	ECustomMatchTab__ECustomMatchTab_MAX = 7,

};

// Enum DBDUIViewsMobile.EFriendTypeButton
enum class DBDUIViewsMobile_EFriendTypeButton : uint8_t
{
	EFriendTypeButton__InvitePlayerToParty = 0,
	EFriendTypeButton__RemovePlayerFromParty = 1,
	EFriendTypeButton__EFriendTypeButton_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewsMobile.MatchConfigDifficultyData
// 0x0030
struct FMatchConfigDifficultyData
{
	unsigned char                                      DifficultyIcon[0x30];                                      // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DBDUIViewsMobile.MatchOptionAssetData
// 0x0048
struct FMatchOptionAssetData
{
	struct FText                                       TextName;                                                  // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x30];                                                // 0x0018(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DBDUIViewsMobile.MatchConfigTabData
// 0x00B0
struct FMatchConfigTabData
{
	unsigned char                                      Widget[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      TabIcon[0x30];                                             // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<DBDUIViewsMobile_ECustomMatchOptions, int>    DefaultOptionsID;                                          // 0x0060(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsMobile.CustomMatchTabConfig
// 0x0040
struct FCustomMatchTabConfig
{
	int                                                ItemWidth;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemHeight;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                row;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OptionButtonClass[0x30];                                   // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct DBDUIViewsMobile.AtlantaFriendUIData
// 0x0068
struct FAtlantaFriendUIData
{
	unsigned char                                      UnknownData_G8V0[0x68];                                    // 0x0000(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewsMobile.ActionOnFriend
// 0x0078
struct FActionOnFriend
{
	DBDUIViewsMobile_EActionOnFriendType               ActionToProceed;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8P5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAtlantaFriendUIData                        AtlantaFriendDataToUpdate;                                 // 0x0008(0x0068) (NativeAccessSpecifierPublic)
	class UUMGBaseFriendListElement*                   ActionOwner;                                               // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsMobile.FriendStatusUIData
// 0x0050 (0x0058 - 0x0008)
struct FFriendStatusUIData : public FDBDTableRowBase
{
	DBDUIViewsMobile_EAtlantaFriendUIStatus            FriendStatus;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GIJ7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      StatusIcon[0x30];                                          // 0x0009(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       StatusText;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewsMobile.MatchConfigOptionUIData
// 0x0068
struct FMatchConfigOptionUIData
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAG3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringId;                                                  // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       OptionName;                                                // 0x0018(0x0018) (Transient, NativeAccessSpecifierPublic)
	unsigned char                                      OptionIcon[0x30];                                          // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	DBDUIViewsMobile_ECustomMatchOptions               OptionType;                                                // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0LTO[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum RetentionRewardsUtilities.EClaimType
enum class RetentionRewardsUtilities_EClaimType : uint8_t
{
	EClaimType__Minute             = 0,
	EClaimType__Hour               = 1,
	EClaimType__Day                = 2,
	EClaimType__Week               = 3,
	EClaimType__Month              = 4,
	EClaimType__Year               = 5,
	EClaimType__EClaimType_MAX     = 6,

};

// Enum RetentionRewardsUtilities.EClaimResponseCodes
enum class RetentionRewardsUtilities_EClaimResponseCodes : uint8_t
{
	EClaimResponseCodes__Claimed   = 0,
	EClaimResponseCodes__CalendarNotFound = 1,
	EClaimResponseCodes__RewardNotAvailable = 2,
	EClaimResponseCodes__RewardNotSupported = 3,
	EClaimResponseCodes__EClaimResponseCodes_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RetentionRewardsUtilities.RetentionReward
// 0x0068
struct FRetentionReward
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           amount;                                                    // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RewardUtilities_ERewardItemType                    RewardType;                                                // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMY7[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FString>                 GameSpecificData;                                          // 0x0018(0x0050) (Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct RetentionRewardsUtilities.RetentionCalendar
// 0x0038
struct FRetentionCalendar
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   StartTime;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EndTime;                                                   // 0x0018(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	RetentionRewardsUtilities_EClaimType               ClaimType;                                                 // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_88Y3[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRetentionReward>                    Rewards;                                                   // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct RetentionRewardsUtilities.CampaignStatus
// 0x0018
struct FCampaignStatus
{
	bool                                               IsValid;                                                   // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ9J[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   startDate;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   endDate;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct RetentionRewardsUtilities.ClaimStatus
// 0x0010
struct FClaimStatus
{
	bool                                               IsSet;                                                     // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9162[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastClaimedIndex;                                          // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   NextClaimTime;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

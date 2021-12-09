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

// Enum SubscriptionSubsystem.ESubscriptionClaimType
enum class SubscriptionSubsystem_ESubscriptionClaimType : uint8_t
{
	ESubscriptionClaimType__None   = 0,
	ESubscriptionClaimType__Daily  = 1,
	ESubscriptionClaimType__Renewal = 2,
	ESubscriptionClaimType__ESubscriptionClaimType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SubscriptionSubsystem.SubscriptionReward
// 0x0028
struct FSubscriptionReward
{
	TArray<struct FRewardItem>                         Rewards;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   NextClaimTime;                                             // 0x0010(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnalyticsEventId;                                          // 0x0018(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SubscriptionSubsystem.SubscriptionRewardMap
// 0x0050
struct FSubscriptionRewardMap
{
	TMap<SubscriptionSubsystem_ESubscriptionClaimType, struct FSubscriptionReward> RewardsByClaimType;                                        // 0x0000(0x0050) (Transient, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

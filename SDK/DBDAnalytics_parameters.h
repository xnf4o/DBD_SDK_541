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
// Parameters
//---------------------------------------------------------------------------

// Function DBDAnalytics.AnalyticsFunctionLibrary.StartSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_ESurvivorTutorialSections             tutorialSection;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.StartKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_StartKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EKillerTutorialSections               tutorialSection;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
struct UAnalyticsFunctionLibrary_IncrementHookSpawned_Params
{
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.EndSurvivorTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndSurvivorTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_ESurvivorTutorialSections             tutorialSection;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.AnalyticsFunctionLibrary.EndKillerTutorialSectionAnalytics
struct UAnalyticsFunctionLibrary_EndKillerTutorialSectionAnalytics_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDAnalytics_EKillerTutorialSections               tutorialSection;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
struct UClosetAnalytics_RecordClosetSearchSuccess_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
struct UClosetAnalytics_RecordClosetSearchFail_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
struct UClosetAnalytics_IncrementClosetEnter_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.DBDAnalytics.RecordGameProgress
struct UDBDAnalytics_RecordGameProgress_Params
{
	struct FString                                     InProgressType;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
struct UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params
{
	class ADBDPlayer*                                  interruptedPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
struct UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params
{
	class ADBDPlayer*                                  hitPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
struct UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params
{
	class ADBDPlayer*                                  revealedPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
struct UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params
{
	class ADBDPlayer*                                  findingSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  foundSurvivor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
struct UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params
{
	class ADBDPlayer*                                  hitSurvivor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
struct UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params
{
	class ADBDPlayer*                                  previousOwner;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.RecordRBTSearch
struct UPigAnalytics_RecordRBTSearch_Params
{
	class ACamperPlayer*                               searchingPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
struct UPigAnalytics_OnRBTAttached_Analytics_Params
{
	class ASlasherPlayer*                              attacher;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               attachee;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
struct UPigAnalytics_IncrementRBTTimerActived_Params
{
	class ACamperPlayer*                               attachedPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
struct UPigAnalytics_IncrementRBTKilledCount_Params
{
	class ACamperPlayer*                               playerKilled;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               killedByExecutionZone;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
struct UPulldownAnalytics_IncrementPalletStun_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
struct UPulldownAnalytics_IncrementPalletSpawned_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
struct UPulldownAnalytics_IncrementPalletDrop_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
struct UPulldownAnalytics_IncrementPalletDestroy_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
struct USurvivorInteractionAnalytics_RecordHealSuccess_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
struct USurvivorInteractionAnalytics_RecordHatchEscape_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
struct USurvivorInteractionAnalytics_IncrementHealCount_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

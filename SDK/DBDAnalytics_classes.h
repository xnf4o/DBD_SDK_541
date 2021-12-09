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
// Classes
//---------------------------------------------------------------------------

// Class DBDAnalytics.AnalyticsDelegates
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAnalyticsDelegates : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.AnalyticsDelegates");
		return ptr;
	}



};

// Class DBDAnalytics.AnalyticsFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.AnalyticsFunctionLibrary");
		return ptr;
	}



	void STATIC_StartSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection);
	void STATIC_StartKillerTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection);
	void STATIC_IncrementHookSpawned();
	void STATIC_EndSurvivorTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_ESurvivorTutorialSections tutorialSection);
	void STATIC_EndKillerTutorialSectionAnalytics(class UObject* WorldContextObject, DBDAnalytics_EKillerTutorialSections tutorialSection);
};

// Class DBDAnalytics.AnalyticsManager
// 0x38D8 (FullSize[0x3910] - InheritedSize[0x0038])
class UAnalyticsManager : public UAbstractAnalyticsManager
{
public:
	unsigned char                                      UnknownData_B41F[0x38D8];                                  // 0x0038(0x38D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.AnalyticsManager");
		return ptr;
	}



};

// Class DBDAnalytics.AtlantaAnalyticsManager
// 0x0000 (FullSize[0x3910] - InheritedSize[0x3910])
class UAtlantaAnalyticsManager : public UAnalyticsManager
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.AtlantaAnalyticsManager");
		return ptr;
	}



};

// Class DBDAnalytics.ClosetAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UClosetAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.ClosetAnalytics");
		return ptr;
	}



	void STATIC_RecordClosetSearchSuccess(class ASlasherPlayer* killer);
	void STATIC_RecordClosetSearchFail(class ASlasherPlayer* killer);
	void STATIC_IncrementClosetEnter(class ACamperPlayer* survivor);
};

// Class DBDAnalytics.DBDAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDAnalytics : public UBHVRAnalytics
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.DBDAnalytics");
		return ptr;
	}



	void STATIC_RecordGameProgress(const struct FString& InProgressType);
};

// Class DBDAnalytics.EmblemAnalyticsComponent
// 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
class UEmblemAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CNZZ[0xE8];                                    // 0x00B8(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.EmblemAnalyticsComponent");
		return ptr;
	}



};

// Class DBDAnalytics.InteractionAnalyticsComponent
// 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
class UInteractionAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_FD61[0xB8];                                    // 0x00B8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.InteractionAnalyticsComponent");
		return ptr;
	}



};

// Class DBDAnalytics.PerkAnalyticsLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPerkAnalyticsLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.PerkAnalyticsLibrary");
		return ptr;
	}



	void STATIC_SendTinkererUndetectableInterruptAnalytics(class ADBDPlayer* interruptedPlayer, class ADBDPlayer* Slasher);
	void STATIC_SendTinkererUndetectableHitNearGeneratorAnalytics(class ADBDPlayer* hitPlayer, class ADBDPlayer* Slasher);
	void STATIC_SendLightbornAuraRevealedAnalytics(class ADBDPlayer* revealedPlayer, class ADBDPlayer* Slasher);
	void STATIC_SendKnockoutSurvivorFoundAnalytics(class ADBDPlayer* findingSurvivor, class ADBDPlayer* foundSurvivor);
	void STATIC_SendFranklinsHitSurvivorNearDroppedItemAnalytics(class ADBDPlayer* hitSurvivor, class ADBDPlayer* Slasher);
	void STATIC_SendFranklinsConsumeItemAnalytics(class ADBDPlayer* previousOwner);
};

// Class DBDAnalytics.PigAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPigAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.PigAnalytics");
		return ptr;
	}



	void STATIC_RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success);
	void STATIC_OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee);
	void STATIC_IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer);
	void STATIC_IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone);
};

// Class DBDAnalytics.PulldownAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPulldownAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.PulldownAnalytics");
		return ptr;
	}



	void STATIC_IncrementPalletStun(class ACamperPlayer* survivor);
	void STATIC_IncrementPalletSpawned(class AActor* Actor);
	void STATIC_IncrementPalletDrop(class ACamperPlayer* survivor);
	void STATIC_IncrementPalletDestroy(class ASlasherPlayer* killer);
};

// Class DBDAnalytics.SurvivorInteractionAnalytics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDAnalytics.SurvivorInteractionAnalytics");
		return ptr;
	}



	void STATIC_RecordHealSuccess(class ACamperPlayer* survivor);
	void STATIC_RecordHatchEscape(class ACamperPlayer* survivor);
	void STATIC_IncrementHealCount(class ACamperPlayer* survivor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
struct ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params
{
	class UGameEventDispatcher*                        GameEventDispatcher;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
struct ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params
{
	class UGameEventDispatcher*                        GameEventDispatcher;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
struct ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

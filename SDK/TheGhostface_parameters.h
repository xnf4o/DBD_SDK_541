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

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
struct UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params
{
	bool                                               IsInStalkMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
struct UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params
{
	DBDSharedTypes_ELeanState                          leanState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
struct UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params
{
	bool                                               IsStealth;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
struct UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params
{
	class UChargeableComponent*                        ChargeableComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentCompletionChange;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalPercentComplete;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
struct UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

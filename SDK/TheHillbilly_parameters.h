﻿#pragma once

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

// Function TheHillbilly.ChainsawRevInteraction.OnLevelReadyToPlay
struct UChainsawRevInteraction_OnLevelReadyToPlay_Params
{
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.OnRep_IsChainsawOverheating
struct UHillbillyChainsawOverheatComponent_OnRep_IsChainsawOverheating_Params
{
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.OnLevelReadyToPlay
struct UHillbillyChainsawOverheatComponent_OnLevelReadyToPlay_Params
{
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.OnHeatChargeUpdate
struct UHillbillyChainsawOverheatComponent_OnHeatChargeUpdate_Params
{
	float                                              currentCharge;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              previosCharge;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.IsChainsawOverheating
struct UHillbillyChainsawOverheatComponent_IsChainsawOverheating_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeFull
struct UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeFull_Params
{
};

// Function TheHillbilly.HillbillyChainsawOverheatComponent.Authority_OnHeatChargeEmpty
struct UHillbillyChainsawOverheatComponent_Authority_OnHeatChargeEmpty_Params
{
};

// Function TheHillbilly.HillbillyOverheatPresentationItemProgressComponent.SetHillbillyChainsawOverheatComponent
struct UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Params
{
	class UHillbillyChainsawOverheatComponent*         HillbillyChainsawOverheatComponent;                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHillbilly.LightbornBlindFailedIndicatorCondition.OnRep_ReplicatedIsTrue
struct ULightbornBlindFailedIndicatorCondition_OnRep_ReplicatedIsTrue_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

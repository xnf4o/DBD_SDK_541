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
//		Offset -> 0x04330860
//		Name   -> Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               CamperPlayer                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_TheBlight_18::SpawnParticleOnSurvivor(class ACamperPlayer* CamperPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.SpawnParticleOnSurvivor");

	UAddon_TheBlight_18_SpawnParticleOnSurvivor_Params params {};
	params.CamperPlayer = CamperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16440
//		Name   -> Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<class ACamperPlayer*>                       survivors                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_TheBlight_18::Multicast_SpawnParticleOnSurvivors(TArray<class ACamperPlayer*> survivors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.Addon_TheBlight_18.Multicast_SpawnParticleOnSurvivors");

	UAddon_TheBlight_18_Multicast_SpawnParticleOnSurvivors_Params params {};
	params.survivors = survivors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16500
//		Name   -> Function TheBlight.BlightPower.OnPowerStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheBlight_EWallGrabState                           previousState                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TheBlight_EWallGrabState                           NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABlightPower::OnPowerStateChanged(TheBlight_EWallGrabState previousState, TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPower.OnPowerStateChanged");

	ABlightPower_OnPowerStateChanged_Params params {};
	params.previousState = previousState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABlightPowerEstimatedCollisionIndicator::OnShowIndicator_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnShowIndicator_Cosmetic");

	ABlightPowerEstimatedCollisionIndicator_OnShowIndicator_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ABlightPowerEstimatedCollisionIndicator::OnHideIndicator_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerEstimatedCollisionIndicator.OnHideIndicator_Cosmetic");

	ABlightPowerEstimatedCollisionIndicator_OnHideIndicator_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E162D0
//		Name   -> Function TheBlight.BlightPowerState.GetStateDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerState::GetStateDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerState.GetStateDuration");

	UBlightPowerState_GetStateDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16620
//		Name   -> Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		TheBlight_EWallGrabState                           NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightPowerStateComponent::Server_SetWallGrabState(TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Server_SetWallGrabState");

	UBlightPowerStateComponent_Server_SetWallGrabState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16600
//		Name   -> Function TheBlight.BlightPowerStateComponent.ResetDashTokens
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBlightPowerStateComponent::ResetDashTokens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.ResetDashTokens");

	UBlightPowerStateComponent_ResetDashTokens_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E165E0
//		Name   -> Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer
//		Flags  -> (Final, Native, Private)
void UBlightPowerStateComponent::OnRep_StateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_StateTimer");

	UBlightPowerStateComponent_OnRep_StateTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E165C0
//		Name   -> Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens
//		Flags  -> (Final, Native, Private)
void UBlightPowerStateComponent::OnRep_DashTokens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnRep_DashTokens");

	UBlightPowerStateComponent_OnRep_DashTokens_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E164E0
//		Name   -> Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UBlightPowerStateComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.OnLevelReadyToPlay");

	UBlightPowerStateComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16390
//		Name   -> Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
// Parameters:
//		TheBlight_EWallGrabState                           NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlightPowerStateComponent::Multicast_SetWallGrabState(TheBlight_EWallGrabState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.Multicast_SetWallGrabState");

	UBlightPowerStateComponent_Multicast_SetWallGrabState_Params params {};
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16340
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetStateTimeRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeRemaining");

	UBlightPowerStateComponent_GetStateTimeRemaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16370
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTimerObject*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UBlightPowerStateComponent::GetStateTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimer");

	UBlightPowerStateComponent_GetStateTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16300
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetStateTimeElapsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetStateTimeElapsed");

	UBlightPowerStateComponent_GetStateTimeElapsed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16240
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheBlight_EWallGrabState                           StateEnum                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBlightPowerState*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlightPowerState* UBlightPowerStateComponent::GetPowerStateByEnum(TheBlight_EWallGrabState StateEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerStateByEnum");

	UBlightPowerStateComponent_GetPowerStateByEnum_Params params {};
	params.StateEnum = StateEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16210
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetPowerState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheBlight_EWallGrabState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheBlight_EWallGrabState UBlightPowerStateComponent::GetPowerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetPowerState");

	UBlightPowerStateComponent_GetPowerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E161E0
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlightPowerStateComponent::GetLookAngleDegrees()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetLookAngleDegrees");

	UBlightPowerStateComponent_GetLookAngleDegrees_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E161C0
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UBlightPowerStateComponent::GetDashTokensRemaining()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetDashTokensRemaining");

	UBlightPowerStateComponent_GetDashTokensRemaining_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16190
//		Name   -> Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UBlightPowerState*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBlightPowerState* UBlightPowerStateComponent::GetCurrentPowerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.GetCurrentPowerState");

	UBlightPowerStateComponent_GetCurrentPowerState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E16150
//		Name   -> Function TheBlight.BlightPowerStateComponent.CanDash
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlightPowerStateComponent::CanDash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BlightPowerStateComponent.CanDash");

	UBlightPowerStateComponent_CanDash_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBuiltToLast::OnBuiltToLastTrigger_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.BuiltToLast.OnBuiltToLastTrigger_Cosmetic");

	UBuiltToLast_OnBuiltToLastTrigger_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheBlight.DragonsGrip.OnRevealSurvivor
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDragonsGrip::OnRevealSurvivor(class ADBDPlayer* Instigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.OnRevealSurvivor");

	UDragonsGrip_OnRevealSurvivor_Params params {};
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CE07E0
//		Name   -> Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDragonsGrip::Multicast_OnRevealSurvivor(class ADBDPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.DragonsGrip.Multicast_OnRevealSurvivor");

	UDragonsGrip_Multicast_OnRevealSurvivor_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16080
//		Name   -> Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UGameplayModifierContainer*                  GameplayModifierContainer                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsApplicable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexUndying::Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_UpdateHexPerkStatusView");

	UHexUndying_Authority_UpdateHexPerkStatusView_Params params {};
	params.GameplayModifierContainer = GameplayModifierContainer;
	params.IsApplicable = IsApplicable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E16000
//		Name   -> Function TheBlight.HexUndying.Authority_OnSurvivorAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexUndying::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnSurvivorAdded");

	UHexUndying_Authority_OnSurvivorAdded_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E15EF0
//		Name   -> Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UHexUndying::Authority_OnCamperCleansedHexPerk(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheBlight.HexUndying.Authority_OnCamperCleansedHexPerk");

	UHexUndying_Authority_OnCamperCleansedHexPerk_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

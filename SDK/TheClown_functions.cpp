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
//		Offset -> 0x03E24310
//		Name   -> Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated
//		Flags  -> (Final, Native, Protected)
void UAISkill_InteractionTarget_ThrowAntidote::OnPathUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated");

	UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E254F0
//		Name   -> Function TheClown.BaseGasCloudProjectile.SetIsDissipating
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsDissipating                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::SetIsDissipating(bool IsDissipating)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetIsDissipating");

	ABaseGasCloudProjectile_SetIsDissipating_Params params {};
	params.IsDissipating = IsDissipating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E254D0
//		Name   -> Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
//		Flags  -> (Final, Native, Private)
void ABaseGasCloudProjectile::SetIgnoredActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetIgnoredActors");

	ABaseGasCloudProjectile_SetIgnoredActors_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               activated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::SetGasAudioActive(bool activated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.SetGasAudioActive");

	ABaseGasCloudProjectile_SetGasAudioActive_Params params {};
	params.activated = activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E25390
//		Name   -> Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UPrimitiveComponent*                         hitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::OnOverlapEnd(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnOverlapEnd");

	ABaseGasCloudProjectile_OnOverlapEnd_Params params {};
	params.hitComp = hitComp;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E25180
//		Name   -> Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         hitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::OnOverlapBegin(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnOverlapBegin");

	ABaseGasCloudProjectile_OnOverlapBegin_Params params {};
	params.hitComp = hitComp;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::OnDelayedActivationStart(float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart");

	ABaseGasCloudProjectile_OnDelayedActivationStart_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E250F0
//		Name   -> Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               acquired                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::OnAcquiredChanged(bool acquired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged");

	ABaseGasCloudProjectile_OnAcquiredChanged_Params params {};
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D21170
//		Name   -> Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void ABaseGasCloudProjectile::Multicast_DissipateGasCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud");

	ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E250C0
//		Name   -> Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseGasCloudProjectile::IsSurvivorDetectionEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled");

	ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E250A0
//		Name   -> Function TheClown.BaseGasCloudProjectile.IsDissipating
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseGasCloudProjectile::IsDissipating()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.IsDissipating");

	ABaseGasCloudProjectile_IsDissipating_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E25080
//		Name   -> Function TheClown.BaseGasCloudProjectile.GetGasType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TheClown_EBombType                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheClown_EBombType ABaseGasCloudProjectile::GetGasType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.GetGasType");

	ABaseGasCloudProjectile_GetGasType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E25060
//		Name   -> Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseGasCloudProjectile::DissipateGasCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.DissipateGasCloud");

	ABaseGasCloudProjectile_DissipateGasCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E24FE0
//		Name   -> Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseGasCloudProjectile::Authority_SetCumulativeLifetime(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime");

	ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E24FB0
//		Name   -> Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABaseGasCloudProjectile::Authority_GetCumulativeLifetime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime");

	ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABaseGasCloudProjectile::ActivateCosmetic_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP");

	ABaseGasCloudProjectile_ActivateCosmetic_BP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E25B40
//		Name   -> Function TheClown.BombLauncher.SetProjectileSpeedCurve
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCurveFloat*                                 newProjectileSpeedCurve                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetProjectileSpeedCurve");

	UBombLauncher_SetProjectileSpeedCurve_Params params {};
	params.newProjectileSpeedCurve = newProjectileSpeedCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C565E0
//		Name   -> Function TheClown.BombLauncher.SetProjectilePitchCurve
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCurveFloat*                                 newProjectilePitchCurve                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetProjectilePitchCurve");

	UBombLauncher_SetProjectilePitchCurve_Params params {};
	params.newProjectilePitchCurve = newProjectilePitchCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E25AC0
//		Name   -> Function TheClown.BombLauncher.SetPercentThrowStrength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              throwStrength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::SetPercentThrowStrength(float throwStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.SetPercentThrowStrength");

	UBombLauncher_SetPercentThrowStrength_Params params {};
	params.throwStrength = throwStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E25A70
//		Name   -> Function TheClown.BombLauncher.Server_SwitchBombType
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void UBombLauncher::Server_SwitchBombType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.Server_SwitchBombType");

	UBombLauncher_Server_SwitchBombType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E259F0
//		Name   -> Function TheClown.BombLauncher.LocalLaunch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              percentThrowStrength                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBombLauncher::LocalLaunch(float percentThrowStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.LocalLaunch");

	UBombLauncher_LocalLaunch_Params params {};
	params.percentThrowStrength = percentThrowStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.BombLauncher.Local_SwitchBombType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBombLauncher::Local_SwitchBombType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.Local_SwitchBombType");

	UBombLauncher_Local_SwitchBombType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E259C0
//		Name   -> Function TheClown.BombLauncher.IsBombFullyCharged
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBombLauncher::IsBombFullyCharged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.IsBombFullyCharged");

	UBombLauncher_IsBombFullyCharged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E259A0
//		Name   -> Function TheClown.BombLauncher.GetPercentThrowStrenght
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBombLauncher::GetPercentThrowStrenght()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.GetPercentThrowStrenght");

	UBombLauncher_GetPercentThrowStrenght_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E25970
//		Name   -> Function TheClown.BombLauncher.GetCurrentBombType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheClown_EBombType                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheClown_EBombType UBombLauncher::GetCurrentBombType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.BombLauncher.GetCurrentBombType");

	UBombLauncher_GetCurrentBombType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              durationRemaining                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::UpdateAntidoteEffectVFX(float durationRemaining)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX");

	UGassedStatusEffect_UpdateAntidoteEffectVFX_Params params {};
	params.durationRemaining = durationRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26AB0
//		Name   -> Function TheClown.GassedStatusEffect.SetRemainingDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::SetRemainingDuration(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.SetRemainingDuration");

	UGassedStatusEffect_SetRemainingDuration_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26A30
//		Name   -> Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::SetRemainingAntidoteDuration(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration");

	UGassedStatusEffect_SetRemainingAntidoteDuration_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnToxinEffectEnd
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              durationSkipped                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnToxinEffectEnd(float durationSkipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinEffectEnd");

	UGassedStatusEffect_OnToxinEffectEnd_Params params {};
	params.durationSkipped = durationSkipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnToxinEffectBegin
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              effectDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnToxinEffectBegin(float effectDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinEffectBegin");

	UGassedStatusEffect_OnToxinEffectBegin_Params params {};
	params.effectDuration = effectDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnToxinCured
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGassedStatusEffect::OnToxinCured()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnToxinCured");

	UGassedStatusEffect_OnToxinCured_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26A10
//		Name   -> Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds
//		Flags  -> (Final, Native, Private)
void UGassedStatusEffect::OnRep_TotalTimesEnteringToxicClouds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds");

	UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E269F0
//		Name   -> Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
//		Flags  -> (Final, Native, Private)
void UGassedStatusEffect::OnRep_IsInAntidoteCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud");

	UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnDirectBottleHit
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TheClown_EBombType                                 bottleType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnDirectBottleHit(TheClown_EBombType bottleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnDirectBottleHit");

	UGassedStatusEffect_OnDirectBottleHit_Params params {};
	params.bottleType = bottleType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              durationSkipped                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnAntidoteEffectEnd(float durationSkipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd");

	UGassedStatusEffect_OnAntidoteEffectEnd_Params params {};
	params.durationSkipped = durationSkipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              effectDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::OnAntidoteEffectBegin(float effectDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin");

	UGassedStatusEffect_OnAntidoteEffectBegin_Params params {};
	params.effectDuration = effectDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E269C0
//		Name   -> Function TheClown.GassedStatusEffect.IsInCloud
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGassedStatusEffect::IsInCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.IsInCloud");

	UGassedStatusEffect_IsInCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26990
//		Name   -> Function TheClown.GassedStatusEffect.IsInAntidoteCloud
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGassedStatusEffect::IsInAntidoteCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.IsInAntidoteCloud");

	UGassedStatusEffect_IsInAntidoteCloud_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26960
//		Name   -> Function TheClown.GassedStatusEffect.GetRemainingDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetRemainingDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetRemainingDuration");

	UGassedStatusEffect_GetRemainingDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26930
//		Name   -> Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetRemainingAntidoteDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration");

	UGassedStatusEffect_GetRemainingAntidoteDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26900
//		Name   -> Function TheClown.GassedStatusEffect.GetCloudEffectDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetCloudEffectDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetCloudEffectDuration");

	UGassedStatusEffect_GetCloudEffectDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E268D0
//		Name   -> Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGassedStatusEffect::GetAntidoteCloudEffectDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration");

	UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26840
//		Name   -> Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_SetIsInCloud(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_SetIsInCloud");

	UGassedStatusEffect_Authority_SetIsInCloud_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E267B0
//		Name   -> Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_SetIsInAntidoteCloud(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud");

	UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E26730
//		Name   -> Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class ABaseGasCloudProjectile*                     cloud                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile* cloud)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud");

	UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params params {};
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E266B0
//		Name   -> Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class ABaseGasCloudProjectile*                     cloud                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGassedStatusEffect::Authority_AddOverlappingCloud(class ABaseGasCloudProjectile* cloud)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud");

	UGassedStatusEffect_Authority_AddOverlappingCloud_Params params {};
	params.cloud = cloud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E270C0
//		Name   -> Function TheClown.TheClownUtilities.IsGassed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_IsGassed(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.IsGassed");

	UTheClownUtilities_IsGassed_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E27040
//		Name   -> Function TheClown.TheClownUtilities.IsAffectedByAntidote
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_IsAffectedByAntidote(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.IsAffectedByAntidote");

	UTheClownUtilities_IsAffectedByAntidote_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26FC0
//		Name   -> Function TheClown.TheClownUtilities.GetGassedStatusEffect
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGassedStatusEffect*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGassedStatusEffect* UTheClownUtilities::STATIC_GetGassedStatusEffect(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.GetGassedStatusEffect");

	UTheClownUtilities_GetGassedStatusEffect_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26F40
//		Name   -> Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UActiveGasCloudTrackerComponent*             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UActiveGasCloudTrackerComponent* UTheClownUtilities::STATIC_GetActiveGasCloudTrackerComponent(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent");

	UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E26EC0
//		Name   -> Function TheClown.TheClownUtilities.CanBeGassed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTheClownUtilities::STATIC_CanBeGassed(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheClown.TheClownUtilities.CanBeGassed");

	UTheClownUtilities_CanBeGassed_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

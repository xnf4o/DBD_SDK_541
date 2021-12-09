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
//		Name   -> Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UFastTrack::Cosmetic_OnTokenCountDecreased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased");

	UFastTrack_Cosmetic_OnTokenCountDecreased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA8D0
//		Name   -> Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore
//		Flags  -> (Final, Native, Private, Const)
void UFlurryComboScoreComponent::OnRep_ComboScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore");

	UFlurryComboScoreComponent_OnRep_ComboScore_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAADE0
//		Name   -> Function TheK23.FlurryOfKnives.Server_StartThrowing
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UFlurryOfKnives::Server_StartThrowing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_StartThrowing");

	UFlurryOfKnives_Server_StartThrowing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAD90
//		Name   -> Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UFlurryOfKnives::Server_DecreaseConsecutiveKnivesStacks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks");

	UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAD70
//		Name   -> Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
//		Flags  -> (Final, Native, Private)
void UFlurryOfKnives::OnRep_NumOfStacksReduction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction");

	UFlurryOfKnives_OnRep_NumOfStacksReduction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E2B6E0
//		Name   -> Function TheK23.FlurryOfKnives.Multicast_StartThrowing
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UFlurryOfKnives::Multicast_StartThrowing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.FlurryOfKnives.Multicast_StartThrowing");

	UFlurryOfKnives_Multicast_StartThrowing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB910
//		Name   -> Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AKnifeProjectile::WasLaunchedDuringSuperMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode");

	AKnifeProjectile_WasLaunchedDuringSuperMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB8E0
//		Name   -> Function TheK23.KnifeProjectile.ShouldPlayRicochetSound
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AKnifeProjectile::ShouldPlayRicochetSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.ShouldPlayRicochetSound");

	AKnifeProjectile_ShouldPlayRicochetSound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB850
//		Name   -> Function TheK23.KnifeProjectile.SetKnifeAcquired
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               acquired                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeProjectile::SetKnifeAcquired(bool acquired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.SetKnifeAcquired");

	AKnifeProjectile_SetKnifeAcquired_Params params {};
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB680
//		Name   -> Function TheK23.KnifeProjectile.OnWorldColliderHit
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AKnifeProjectile::OnWorldColliderHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnWorldColliderHit");

	AKnifeProjectile_OnWorldColliderHit_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB560
//		Name   -> Function TheK23.KnifeProjectile.OnProjectileBounce
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		struct FHitResult                                  ImpactResult                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FVector                                     ImpactVelocity                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeProjectile::OnProjectileBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.OnProjectileBounce");

	AKnifeProjectile_OnProjectileBounce_Params params {};
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB530
//		Name   -> Function TheK23.KnifeProjectile.KnifeCanPierceCampers
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AKnifeProjectile::KnifeCanPierceCampers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.KnifeCanPierceCampers");

	AKnifeProjectile_KnifeCanPierceCampers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB500
//		Name   -> Function TheK23.KnifeProjectile.GetAddonExplosionRadius
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AKnifeProjectile::GetAddonExplosionRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.GetAddonExplosionRadius");

	AKnifeProjectile_GetAddonExplosionRadius_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.KnifeProjectile.BP_SetKnifeActive
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeProjectile::BP_SetKnifeActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_SetKnifeActive");

	AKnifeProjectile_BP_SetKnifeActive_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               hasImpactOnLaunch                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeProjectile::BP_OnLaunchCosmetic(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic");

	AKnifeProjectile_BP_OnLaunchCosmetic_Params params {};
	params.LaunchInfo = LaunchInfo;
	params.hasImpactOnLaunch = hasImpactOnLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
//		Flags  -> (BlueprintCosmetic, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeProjectile::BP_CosmeticOnAddonExplosion(const struct FVector& Location, const struct FVector& Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion");

	AKnifeProjectile_BP_CosmeticOnAddonExplosion_Params params {};
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.KnifeRack.OnReloadMontageStarted
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              actionSpeedMultiplier                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeRack::OnReloadMontageStarted(float actionSpeedMultiplier, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadMontageStarted");

	AKnifeRack_OnReloadMontageStarted_Params params {};
	params.actionSpeedMultiplier = actionSpeedMultiplier;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.KnifeRack.OnReloadEnded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AKnifeRack::OnReloadEnded(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnifeRack.OnReloadEnded");

	AKnifeRack_OnReloadEnded_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EABF50
//		Name   -> Function TheK23.KnivesLauncher.GetPower
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AThrowingKnives*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AThrowingKnives* UKnivesLauncher::GetPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetPower");

	UKnivesLauncher_GetPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EABF20
//		Name   -> Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UKnivesLauncher::GetLocallyPredictedAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo");

	UKnivesLauncher_GetLocallyPredictedAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAC810
//		Name   -> Function TheK23.LacerationComponent.OnRepLaceration
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              oldLaceration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::OnRepLaceration(float oldLaceration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.OnRepLaceration");

	ULacerationComponent_OnRepLaceration_Params params {};
	params.oldLaceration = oldLaceration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC660
//		Name   -> Function TheK23.LacerationComponent.Multicast_KnifeHit
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
//		float                                              newLaceration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               causedDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               causedKO                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     impactLocation                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ImpactNormal                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Multicast_KnifeHit(float newLaceration, bool causedDamage, bool causedKO, const struct FVector& impactLocation, const struct FVector& ImpactNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Multicast_KnifeHit");

	ULacerationComponent_Multicast_KnifeHit_Params params {};
	params.newLaceration = newLaceration;
	params.causedDamage = causedDamage;
	params.causedKO = causedKO;
	params.impactLocation = impactLocation;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnLocallyObservedChanged(bool IsLocallyObserved, float lacerationPercent, bool isDangerous)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged");

	ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Params params {};
	params.IsLocallyObserved = IsLocallyObserved;
	params.lacerationPercent = lacerationPercent;
	params.isDangerous = isDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnLacerationChanged(float lacerationPercent, bool isDangerous)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged");

	ULacerationComponent_Cosmetic_OnLacerationChanged_Params params {};
	params.lacerationPercent = lacerationPercent;
	params.isDangerous = isDangerous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		float                                              lacerationPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isDangerous                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               causedDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               causedKO                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ImpactNormal                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULacerationComponent::Cosmetic_OnKnifeHit(float lacerationPercent, bool isDangerous, bool causedDamage, bool causedKO, const struct FVector& ImpactNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit");

	ULacerationComponent_Cosmetic_OnKnifeHit_Params params {};
	params.lacerationPercent = lacerationPercent;
	params.isDangerous = isDangerous;
	params.causedDamage = causedDamage;
	params.causedKO = causedKO;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569E40
//		Name   -> Function TheK23.NoWayOut.Multicast_TriggerLoudNoise
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AEscapeDoor*                                 EscapeDoor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNoWayOut::Multicast_TriggerLoudNoise(class ADBDPlayer* Instigator, class AEscapeDoor* EscapeDoor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.NoWayOut.Multicast_TriggerLoudNoise");

	UNoWayOut_Multicast_TriggerLoudNoise_Params params {};
	params.Instigator = Instigator;
	params.EscapeDoor = EscapeDoor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EADAD0
//		Name   -> Function TheK23.ThrowingKnives.OnItemUsedStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AThrowingKnives::OnItemUsedStateChanged(bool Pressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.OnItemUsedStateChanged");

	AThrowingKnives_OnItemUsedStateChanged_Params params {};
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EADAB0
//		Name   -> Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
void AThrowingKnives::Multicast_OnUsePowerWhenOutOfAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo");

	AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E93C70
//		Name   -> Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
void AThrowingKnives::Multicast_OnUsePowerWhenInCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown");

	AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EADA80
//		Name   -> Function TheK23.ThrowingKnives.GetSlasher
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ASlasherPlayer*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASlasherPlayer* AThrowingKnives::GetSlasher()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetSlasher");

	AThrowingKnives_GetSlasher_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EADA50
//		Name   -> Function TheK23.ThrowingKnives.GetLauncher
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UKnivesLauncher*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UKnivesLauncher* AThrowingKnives::GetLauncher()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.GetLauncher");

	AThrowingKnives_GetLauncher_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AThrowingKnives::Cosmetic_OnUsePowerWhenOutOfAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo");

	AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AThrowingKnives::Cosmetic_OnUsePowerWhenInCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown");

	AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnLaunch
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AThrowingKnives::Cosmetic_OnLaunch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnLaunch");

	AThrowingKnives_Cosmetic_OnLaunch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              scoreNormalizedForAudio                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AThrowingKnives::Cosmetic_OnComboScoreChanged(float scoreNormalizedForAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged");

	AThrowingKnives_Cosmetic_OnComboScoreChanged_Params params {};
	params.scoreNormalizedForAudio = scoreNormalizedForAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               isSRankCombo                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AThrowingKnives::Cosmetic_OnComboFinished(bool isSRankCombo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished");

	AThrowingKnives_Cosmetic_OnComboFinished_Params params {};
	params.isSRankCombo = isSRankCombo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EADA30
//		Name   -> Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
//		Flags  -> (Final, Native, Public)
void AThrowingKnives::Authority_SpawnReloadInteractionOnLockers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers");

	AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.ShowWeapon
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void UTricksterCharacterVFXInterface::ShowWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.ShowWeapon");

	UTricksterCharacterVFXInterface_ShowWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetSuperModeActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive");

	UTricksterCharacterVFXInterface_SetSuperModeActive_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               leftKnife                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               rightKnife                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetKnivesVisibility(bool leftKnife, bool rightKnife)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility");

	UTricksterCharacterVFXInterface_SetKnivesVisibility_Params params {};
	params.leftKnife = leftKnife;
	params.rightKnife = rightKnife;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isSuperModeReady                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetIsSuperModeReady(bool isSuperModeReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady");

	UTricksterCharacterVFXInterface_SetIsSuperModeReady_Params params {};
	params.isSuperModeReady = isSuperModeReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isInCooldown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTricksterCharacterVFXInterface::SetIsInCooldown(bool isInCooldown)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown");

	UTricksterCharacterVFXInterface_SetIsInCooldown_Params params {};
	params.isInCooldown = isInCooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK23.TricksterCharacterVFXInterface.HideWeapon
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
void UTricksterCharacterVFXInterface::HideWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterCharacterVFXInterface.HideWeapon");

	UTricksterCharacterVFXInterface_HideWeapon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAE850
//		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
//		Flags  -> (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsSuperModeReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady");

	UTricksterSuperModeComponent_OnRepIsSuperModeReady_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAE830
//		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
//		Flags  -> (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsInSuperMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode");

	UTricksterSuperModeComponent_OnRepIsInSuperMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAE810
//		Name   -> Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
//		Flags  -> (Final, Native, Private)
void UTricksterSuperModeComponent::OnRepIsInCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown");

	UTricksterSuperModeComponent_OnRepIsInCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

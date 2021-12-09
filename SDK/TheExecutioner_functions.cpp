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
//		Offset -> 0x03E5A950
//		Name   -> Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ATormentMode*                                tormentModeComponent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivateTormentModeInteraction::SetTormentMode(class ATormentMode* tormentModeComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.ActivateTormentModeInteraction.SetTormentMode");

	UActivateTormentModeInteraction_SetTormentMode_Params params {};
	params.tormentModeComponent = tormentModeComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::ShowAgonyBarbWireFX_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.ShowAgonyBarbWireFX_Cosmetic");

	UAgonyComponent_ShowAgonyBarbWireFX_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnTrailEffectStop_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStop_Cosmetic");

	UAgonyComponent_OnTrailEffectStop_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnTrailEffectStart_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnTrailEffectStart_Cosmetic");

	UAgonyComponent_OnTrailEffectStart_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A2E0
//		Name   -> Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAgonyComponent::OnShowBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnShowBarbWireFXOnGameEvent");

	UAgonyComponent_OnShowBarbWireFXOnGameEvent_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A2A0
//		Name   -> Function TheExecutioner.AgonyComponent.OnRep_IsInAgony
//		Flags  -> (Final, Native, Private)
void UAgonyComponent::OnRep_IsInAgony()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnRep_IsInAgony");

	UAgonyComponent_OnRep_IsInAgony_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::OnLocallyObservedChanged(bool IsLocallyObserved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnLocallyObservedChanged");

	UAgonyComponent_OnLocallyObservedChanged_Params params {};
	params.IsLocallyObserved = IsLocallyObserved;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnHitInAgony_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitInAgony_Cosmetic");

	UAgonyComponent_OnHitInAgony_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::OnHitByTormentAttackTrail_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHitByTormentAttackTrail_Cosmetic");

	UAgonyComponent_OnHitByTormentAttackTrail_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A090
//		Name   -> Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAgonyComponent::OnHideBarbWireFXOnGameEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnHideBarbWireFXOnGameEvent");

	UAgonyComponent_OnHideBarbWireFXOnGameEvent_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsInAgony                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::OnAgonyChanged_Cosmetic(bool IsInAgony)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.OnAgonyChanged_Cosmetic");

	UAgonyComponent_OnAgonyChanged_Cosmetic_Params params {};
	params.IsInAgony = IsInAgony;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59E10
//		Name   -> Function TheExecutioner.AgonyComponent.IsInAgony
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAgonyComponent::IsInAgony()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.IsInAgony");

	UAgonyComponent_IsInAgony_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E59DE0
//		Name   -> Function TheExecutioner.AgonyComponent.IsAgonyMoriable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAgonyComponent::IsAgonyMoriable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.IsAgonyMoriable");

	UAgonyComponent_IsAgonyMoriable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAgonyComponent::HideAgonyBarbWireFX_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.HideAgonyBarbWireFX_Cosmetic");

	UAgonyComponent_HideAgonyBarbWireFX_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59AA0
//		Name   -> Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                DrainStage                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgonyComponent::Authority_OnDrainStageChanged(int DrainStage, class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnDrainStageChanged");

	UAgonyComponent_Authority_OnDrainStageChanged_Params params {};
	params.DrainStage = DrainStage;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59A80
//		Name   -> Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone
//		Flags  -> (Final, Native, Private)
void UAgonyComponent::Authority_OnAttackTrailDamageCooldownTimerDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.AgonyComponent.Authority_OnAttackTrailDamageCooldownTimerDone");

	UAgonyComponent_Authority_OnAttackTrailDamageCooldownTimerDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59CB0
//		Name   -> Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void ABaseTormentTrailPoint::EndOfDisapearCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.EndOfDisapearCosmetic");

	ABaseTormentTrailPoint_EndOfDisapearCosmetic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABaseTormentTrailPoint::DisappearCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.BaseTormentTrailPoint.DisappearCosmetic");

	ABaseTormentTrailPoint_DisappearCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59B60
//		Name   -> Function TheExecutioner.BloodPact.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBloodPact::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.BloodPact.Authority_OnInRangeChanged");

	UBloodPact_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UDeathBedAntiCampComponent::Multicast_TriggerDeathBedRelocate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedAntiCampComponent.Multicast_TriggerDeathBedRelocate");

	UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59BF0
//		Name   -> Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathBedAntiCampComponent::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedAntiCampComponent.Authority_OnInRangeChanged");

	UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A9D0
//		Name   -> Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed
//		Flags  -> (Final, Native, Private, BlueprintCallable)
void ADeathBedInteractable::TeleportCamperToDeathBed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.TeleportCamperToDeathBed");

	ADeathBedInteractable_TeleportCamperToDeathBed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround
//		Flags  -> (Event, Public, BlueprintEvent)
void ADeathBedInteractable::StartPlayerAbsorbedByGround()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.StartPlayerAbsorbedByGround");

	ADeathBedInteractable_StartPlayerAbsorbedByGround_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A8D0
//		Name   -> Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADeathBedInteractable::SetInDeathBedCamper(class ACamperPlayer* CamperPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.SetInDeathBedCamper");

	ADeathBedInteractable_SetInDeathBedCamper_Params params {};
	params.CamperPlayer = CamperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A610
//		Name   -> Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADeathBedInteractable::PlayerOverlapZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneEndOverlap");

	ADeathBedInteractable_PlayerOverlapZoneEndOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A410
//		Name   -> Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ADeathBedInteractable::PlayerOverlapZoneBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.PlayerOverlapZoneBeginOverlap");

	ADeathBedInteractable_PlayerOverlapZoneBeginOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
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
//		Name   -> Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ADeathBedInteractable::OnSkillCheckFailed_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed_Cosmetic");

	ADeathBedInteractable_OnSkillCheckFailed_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A3F0
//		Name   -> Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed
//		Flags  -> (Final, Native, Private)
void ADeathBedInteractable::OnSkillCheckFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnSkillCheckFailed");

	ADeathBedInteractable_OnSkillCheckFailed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.OnRescueCancelled
//		Flags  -> (Event, Protected, BlueprintEvent)
void ADeathBedInteractable::OnRescueCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRescueCancelled");

	ADeathBedInteractable_OnRescueCancelled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ADeathBedInteractable::OnRelocateStart_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnRelocateStart_Cosmetic");

	ADeathBedInteractable_OnRelocateStart_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A070
//		Name   -> Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ADeathBedInteractable::OnDeathBedDeathEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.OnDeathBedDeathEnd");

	ADeathBedInteractable_OnDeathBedDeathEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59F10
//		Name   -> Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADeathBedInteractable*                       deathBed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADeathBedInteractable::Multicast_RelocateToOtherDeathBed(class ADeathBedInteractable* deathBed, class ACamperPlayer* CamperPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.Multicast_RelocateToOtherDeathBed");

	ADeathBedInteractable_Multicast_RelocateToOtherDeathBed_Params params {};
	params.deathBed = deathBed;
	params.CamperPlayer = CamperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59D30
//		Name   -> Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ADeathBedInteractable::GetRescuerSnapPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetRescuerSnapPosition");

	ADeathBedInteractable_GetRescuerSnapPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E59D00
//		Name   -> Function TheExecutioner.DeathBedInteractable.GetMontagePlayer
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMontagePlayer*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMontagePlayer* ADeathBedInteractable::GetMontagePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetMontagePlayer");

	ADeathBedInteractable_GetMontagePlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E59CD0
//		Name   -> Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACamperPlayer*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACamperPlayer* ADeathBedInteractable::GetInDeathBedCamper()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.GetInDeathBedCamper");

	ADeathBedInteractable_GetInDeathBedCamper_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ADeathBedInteractable::FX_SurvivorSavedFromDeathBed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_SurvivorSavedFromDeathBed");

	ADeathBedInteractable_FX_SurvivorSavedFromDeathBed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ADeathBedInteractable::FX_DeathBedAppear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.FX_DeathBedAppear");

	ADeathBedInteractable_FX_DeathBedAppear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.DeathBedInteractable.DeathBedDisappear
//		Flags  -> (Event, Public, BlueprintEvent)
void ADeathBedInteractable::DeathBedDisappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.DeathBedDisappear");

	ADeathBedInteractable_DeathBedDisappear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59C80
//		Name   -> Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ADeathBedInteractable::CanRescueSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.CanRescueSurvivor");

	ADeathBedInteractable_CanRescueSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E599F0
//		Name   -> Function TheExecutioner.DeathBedInteractable.ActivateDeathBed
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ADeathBedInteractable::ActivateDeathBed(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedInteractable.ActivateDeathBed");

	ADeathBedInteractable_ActivateDeathBed_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59D70
//		Name   -> Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition
//		Flags  -> (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UDeathBedRescueInteraction::GetRescuerSnapPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.DeathBedRescueInteraction.GetRescuerSnapPosition");

	UDeathBedRescueInteraction_GetRescuerSnapPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E5A2C0
//		Name   -> Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal
//		Flags  -> (Final, Native, Private)
void UDeathbound::OnRep_SurvivorsToReveal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.OnRep_SurvivorsToReveal");

	UDeathbound_OnRep_SurvivorsToReveal_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.Deathbound.MakeSurvivorScream
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathbound::MakeSurvivorScream(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.MakeSurvivorScream");

	UDeathbound_MakeSurvivorScream_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59DB0
//		Name   -> Function TheExecutioner.Deathbound.GetRevealLocationDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDeathbound::GetRevealLocationDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.Deathbound.GetRevealLocationDuration");

	UDeathbound_GetRevealLocationDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E5A810
//		Name   -> Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExecutionerTormentAttack::Server_TormentTryHitTargetNotInCoolDown(class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Server_TormentTryHitTargetNotInCoolDown");

	UExecutionerTormentAttack_Server_TormentTryHitTargetNotInCoolDown_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59FE0
//		Name   -> Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExecutionerTormentAttack::Multicast_TormentHitTarget(class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.ExecutionerTormentAttack.Multicast_TormentHitTarget");

	UExecutionerTormentAttack_Multicast_TormentHitTarget_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D65A80
//		Name   -> Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class ABaseTormentTrailPoint*                      TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMobileTormentTrailRenderer::Multicast_RemoveInstance(class ABaseTormentTrailPoint* TrailPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_RemoveInstance");

	AMobileTormentTrailRenderer_Multicast_RemoveInstance_Params params {};
	params.TrailPoint = TrailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E59E40
//		Name   -> Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class ABaseTormentTrailPoint*                      TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isAttackTrailPoint                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMobileTormentTrailRenderer::Multicast_AddInstance(class ABaseTormentTrailPoint* TrailPoint, bool isAttackTrailPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.MobileTormentTrailRenderer.Multicast_AddInstance");

	AMobileTormentTrailRenderer_Multicast_AddInstance_Params params {};
	params.TrailPoint = TrailPoint;
	params.isAttackTrailPoint = isAttackTrailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A750
//		Name   -> Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::Server_OnActionInputPressed(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.Server_OnActionInputPressed");

	URepressedAlliance_Server_OnActionInputPressed_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A220
//		Name   -> Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UInteractionDefinition*                      oldRepairInteraction                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_CurrentRepairInteractionWithAbility");

	URepressedAlliance_OnRep_CurrentRepairInteractionWithAbility_Params params {};
	params.oldRepairInteraction = oldRepairInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5A1A0
//		Name   -> Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AGenerator*                                  oldGenerator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URepressedAlliance::OnRep_BlockedGenerator(class AGenerator* oldGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.RepressedAlliance.OnRep_BlockedGenerator");

	URepressedAlliance_OnRep_BlockedGenerator_Params params {};
	params.oldGenerator = oldGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DE50
//		Name   -> Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADeathBedInteractable*                       deathBed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USendToDeathBedInteraction::Multicast_SendCamperToDeathBed(class ADeathBedInteractable* deathBed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.Multicast_SendCamperToDeathBed");

	USendToDeathBedInteraction_Multicast_SendCamperToDeathBed_Params params {};
	params.deathBed = deathBed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DBE0
//		Name   -> Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACamperPlayer*                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACamperPlayer* USendToDeathBedInteraction::GetOwningSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.GetOwningSurvivor");

	USendToDeathBedInteraction_GetOwningSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USendToDeathBedInteraction::FX_InteractionStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionStart");

	USendToDeathBedInteraction_FX_InteractionStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USendToDeathBedInteraction::FX_InteractionCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SendToDeathBedInteraction.FX_InteractionCancel");

	USendToDeathBedInteraction_FX_InteractionCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX
//		Flags  -> (Event, Protected, BlueprintEvent)
void USoulGuard::Authority_ShowOnKOPreventedFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_ShowOnKOPreventedFX");

	USoulGuard_Authority_ShowOnKOPreventedFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DB10
//		Name   -> Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FCamperHealResult                           healResult                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USoulGuard::Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.SoulGuard.Authority_OnSurvivorHealed");

	USoulGuard_Authority_OnSurvivorHealed_Params params {};
	params.healResult = healResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTheExecutionerAnimInstance::NoInputFeedbackCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerAnimInstance.NoInputFeedbackCosmetic");

	UTheExecutionerAnimInstance_NoInputFeedbackCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C92FD0
//		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     localPlayerId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer(bool value, const struct FString& localPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer");

	UTheExecutionerCheatComponent_DBD_SetCanBeAgonyMoriedOnLocallyControlledPlayer_Params params {};
	params.value = value;
	params.localPlayerId = localPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C92FD0
//		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     localPlayerId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_SetAgonyOnLocallyControlledPlayer(bool value, const struct FString& localPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_SetAgonyOnLocallyControlledPlayer");

	UTheExecutionerCheatComponent_DBD_SetAgonyOnLocallyControlledPlayer_Params params {};
	params.value = value;
	params.localPlayerId = localPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed
//		Flags  -> (Final, Exec, Native, Public)
void UTheExecutionerCheatComponent::DBD_LocalKillSurvivorInDeathBed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_LocalKillSurvivorInDeathBed");

	UTheExecutionerCheatComponent_DBD_LocalKillSurvivorInDeathBed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C970
//		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheExecutionerCheatComponent::DBD_DisplayAllDeathBed(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DisplayAllDeathBed");

	UTheExecutionerCheatComponent_DBD_DisplayAllDeathBed_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction
//		Flags  -> (Final, Exec, Native, Public)
void UTheExecutionerCheatComponent::DBD_DeathBedPlayStruggleHitReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TheExecutionerCheatComponent.DBD_DeathBedPlayStruggleHitReaction");

	UTheExecutionerCheatComponent_DBD_DeathBedPlayStruggleHitReaction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E4D0
//		Name   -> Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void ATrailControllerBase::RemoveTormentTrailController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.RemoveTormentTrailController");

	ATrailControllerBase_RemoveTormentTrailController_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E3B0
//		Name   -> Function TheExecutioner.TrailControllerBase.OnTrailPointDeath
//		Flags  -> (Native, Protected)
// Parameters:
//		class ABaseTormentTrailPoint*                      baseTrailPoint                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATrailControllerBase::OnTrailPointDeath(class ABaseTormentTrailPoint* baseTrailPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnTrailPointDeath");

	ATrailControllerBase_OnTrailPointDeath_Params params {};
	params.baseTrailPoint = baseTrailPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E090
//		Name   -> Function TheExecutioner.TrailControllerBase.OnAcquireChanged
//		Flags  -> (Native, Protected)
// Parameters:
//		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATrailControllerBase::OnAcquireChanged(bool acquired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.OnAcquireChanged");

	ATrailControllerBase_OnAcquireChanged_Params params {};
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TrailControllerBase.ActivateCosmetic
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATrailControllerBase::ActivateCosmetic(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailControllerBase.ActivateCosmetic");

	ATrailControllerBase_ActivateCosmetic_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E440
//		Name   -> Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentAttackTrailController::OnTrailPointRemovedCosmetic(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnTrailPointRemovedCosmetic");

	ATormentAttackTrailController_OnTrailPointRemovedCosmetic_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E2A0
//		Name   -> Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone
//		Flags  -> (Final, Native, Private)
void ATormentAttackTrailController::OnStartTrailTimerDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnStartTrailTimerDone");

	ATormentAttackTrailController_OnStartTrailTimerDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E1E0
//		Name   -> Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone
//		Flags  -> (Final, Native, Private)
void ATormentAttackTrailController::OnIntervalBetweenPointsTimerDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnIntervalBetweenPointsTimerDone");

	ATormentAttackTrailController_OnIntervalBetweenPointsTimerDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ATormentAttackTrailController::OnAttackTrailStartCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.OnAttackTrailStartCosmetic");

	ATormentAttackTrailController_OnAttackTrailStartCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DEE0
//		Name   -> Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
//		float                                              serverTimeSpawn                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ATormentAttackTrailController::Multicast_StartAttackTrail(float serverTimeSpawn, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.Multicast_StartAttackTrail");

	ATormentAttackTrailController_Multicast_StartAttackTrail_Params params {};
	params.serverTimeSpawn = serverTimeSpawn;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DBC0
//		Name   -> Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void ATormentAttackTrailController::DisplayAttackTrailSpawnSign()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailController.DisplayAttackTrailSpawnSign");

	ATormentAttackTrailController_DisplayAttackTrailSpawnSign_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class USplineComponent*                            splinemesh                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentAttackTrailPoint::DisplayTrailSplineMesh(class USplineComponent* splinemesh, int indexInTrail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentAttackTrailPoint.DisplayTrailSplineMesh");

	ATormentAttackTrailPoint_DisplayTrailSplineMesh_Params params {};
	params.splinemesh = splinemesh;
	params.indexInTrail = indexInTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E540
//		Name   -> Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void ATormentMode::Server_RequestMoreActorInAttackPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.Server_RequestMoreActorInAttackPool");

	ATormentMode_Server_RequestMoreActorInAttackPool_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ATormentMode::OnTormentModeStop_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStop_Cosmetic");

	ATormentMode_OnTormentModeStop_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ATormentMode::OnTormentModeStart_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeStart_Cosmetic");

	ATormentMode_OnTormentModeStart_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E2C0
//		Name   -> Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty
//		Flags  -> (Final, Native, Private)
void ATormentMode::OnTormentModeChargeEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.OnTormentModeChargeEmpty");

	ATormentMode_OnTormentModeChargeEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DE20
//		Name   -> Function TheExecutioner.TormentMode.IsInTormentMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATormentMode::IsInTormentMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentMode.IsInTormentMode");

	ATormentMode_IsInTormentMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTormentor::GetTormentTrailSpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailSpawnPoint");

	UTormentor_GetTormentTrailSpawnPoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTormentor::GetTormentTrailAttackSpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.Tormentor.GetTormentTrailAttackSpawnPoint");

	UTormentor_GetTormentTrailAttackSpawnPoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E5E640
//		Name   -> Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
//		class ATormentTrailPoint*                          TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void ATormentTrailController::Server_SpawnTormentTrailPoint(class ATormentTrailPoint* TrailPoint, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailController.Server_SpawnTormentTrailPoint");

	ATormentTrailController_Server_SpawnTormentTrailPoint_Params params {};
	params.TrailPoint = TrailPoint;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E4F0
//		Name   -> Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void ATormentTrailPoint::Server_RemoveTrailPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Server_RemoveTrailPoint");

	ATormentTrailPoint_Server_RemoveTrailPoint_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		TheExecutioner_ETrailPointRefreshReason            trailPointRefreshReason                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentTrailPoint::RefreshTrailPointCosmetic(TheExecutioner_ETrailPointRefreshReason trailPointRefreshReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.RefreshTrailPointCosmetic");

	ATormentTrailPoint_RefreshTrailPointCosmetic_Params params {};
	params.trailPointRefreshReason = trailPointRefreshReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E000
//		Name   -> Function TheExecutioner.TormentTrailPoint.OnAcquireChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentTrailPoint::OnAcquireChanged(bool acquired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.OnAcquireChanged");

	ATormentTrailPoint_OnAcquireChanged_Params params {};
	params.acquired = acquired;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02B8A4E0
//		Name   -> Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void ATormentTrailPoint::Multicast_TriggerTrailPointDisappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.Multicast_TriggerTrailPointDisappear");

	ATormentTrailPoint_Multicast_TriggerTrailPointDisappear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5DC10
//		Name   -> Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USplineComponent*                            SplineComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outStartLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outStartTangent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outEndLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     outEndTangent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentTrailPoint::GetTrailLocationAndTangeant(int indexInTrail, class USplineComponent* SplineComponent, struct FVector* outStartLocation, struct FVector* outStartTangent, struct FVector* outEndLocation, struct FVector* outEndTangent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.GetTrailLocationAndTangeant");

	ATormentTrailPoint_GetTrailLocationAndTangeant_Params params {};
	params.indexInTrail = indexInTrail;
	params.SplineComponent = SplineComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outStartLocation != nullptr)
		*outStartLocation = params.outStartLocation;
	if (outStartTangent != nullptr)
		*outStartTangent = params.outStartTangent;
	if (outEndLocation != nullptr)
		*outEndLocation = params.outEndLocation;
	if (outEndTangent != nullptr)
		*outEndTangent = params.outEndTangent;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class USplineComponent*                            SplineComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      indexInTrail                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentTrailPoint::AddTrailCosmetic(class USplineComponent* SplineComponent, unsigned char indexInTrail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.AddTrailCosmetic");

	ATormentTrailPoint_AddTrailCosmetic_Params params {};
	params.SplineComponent = SplineComponent;
	params.indexInTrail = indexInTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheExecutioner.TormentTrailPoint.ActivateCosmetic
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATormentTrailPoint::ActivateCosmetic(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPoint.ActivateCosmetic");

	ATormentTrailPoint_ActivateCosmetic_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E2E0
//		Name   -> Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ATormentTrailPoint*                          TrailPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailPointCollectionComponent::OnTrailAcquireChanged(class ATormentTrailPoint* TrailPoint, bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailPointCollectionComponent.OnTrailAcquireChanged");

	UTormentTrailPointCollectionComponent_OnTrailAcquireChanged_Params params {};
	params.TrailPoint = TrailPoint;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E7B0
//		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
//		class ATormentTrailController*                     trailController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize10                       Location                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Rotation                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Sever_SpawnTrailController(class ATormentTrailController* trailController, const struct FVector_NetQuantize10& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Sever_SpawnTrailController");

	UTormentTrailSpawnerComponent_Sever_SpawnTrailController_Params params {};
	params.trailController = trailController;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CF8740
//		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		class ATormentTrailController*                     trailController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Server_StopTrailController(class ATormentTrailController* trailController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_StopTrailController");

	UTormentTrailSpawnerComponent_Server_StopTrailController_Params params {};
	params.trailController = trailController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E590
//		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		TheExecutioner_ETrailType                          trailType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::Server_RequestMoreActorInPool(TheExecutioner_ETrailType trailType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.Server_RequestMoreActorInPool");

	UTormentTrailSpawnerComponent_Server_RequestMoreActorInPool_Params params {};
	params.trailType = trailType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E200
//		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UTormentTrailSpawnerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnLevelReadyToPlay");

	UTormentTrailSpawnerComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E120
//		Name   -> Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTormentTrailSpawnerComponent::OnInRangeChanged(bool InRange, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TormentTrailSpawnerComponent.OnInRangeChanged");

	UTormentTrailSpawnerComponent_OnInRangeChanged_Params params {};
	params.InRange = InRange;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E5E220
//		Name   -> Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AGenerator*                                  _oldHighlightedGenerator                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrailOfTorment::OnRep_HighlightGenerator(class AGenerator* _oldHighlightedGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheExecutioner.TrailOfTorment.OnRep_HighlightGenerator");

	UTrailOfTorment_OnRep_HighlightGenerator_Params params {};
	params._oldHighlightedGenerator = _oldHighlightedGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

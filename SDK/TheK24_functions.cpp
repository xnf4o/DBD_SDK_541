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
//		Offset -> 0x03EDA060
//		Name   -> Function TheK24.ActivateK24PowerInteraction.SetK24Power
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivateK24PowerInteraction::SetK24Power(class AK24Power* K24Power)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ActivateK24PowerInteraction.SetK24Power");

	UActivateK24PowerInteraction_SetK24Power_Params params {};
	params.K24Power = K24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AGenerator*                                  trappedGenerator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::TrapDettachedToGenerator_Cosmetic(class AGenerator* trappedGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic");

	UBlastMine_TrapDettachedToGenerator_Cosmetic_Params params {};
	params.trappedGenerator = trappedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AGenerator*                                  trappedGenerator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::TrapAttachedToGenerator_Cosmetic(class AGenerator* trappedGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic");

	UBlastMine_TrapAttachedToGenerator_Cosmetic_Params params {};
	params.trappedGenerator = trappedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlastMine::ThrowBubbleIndicator_Cosmetic(const struct FTransform& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic");

	UBlastMine_ThrowBubbleIndicator_Cosmetic_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CE07E0
//		Name   -> Function TheK24.BlastMine.Server_OnActionInputPressed
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::Server_OnActionInputPressed(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.Server_OnActionInputPressed");

	UBlastMine_Server_OnActionInputPressed_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9D20
//		Name   -> Function TheK24.BlastMine.OnRep_TrappedGenerator
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AGenerator*                                  oldGenerator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnRep_TrappedGenerator(class AGenerator* oldGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnRep_TrappedGenerator");

	UBlastMine_OnRep_TrappedGenerator_Params params {};
	params.oldGenerator = oldGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9C20
//		Name   -> Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UInteractionDefinition*                      oldRepairInteraction                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility");

	UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Params params {};
	params.oldRepairInteraction = oldRepairInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.BlastMine.OnActivateExplosion
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FTransform                                  firecrackerTransform                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::OnActivateExplosion(const struct FTransform& firecrackerTransform, class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.OnActivateExplosion");

	UBlastMine_OnActivateExplosion_Params params {};
	params.firecrackerTransform = firecrackerTransform;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9810
//		Name   -> Function TheK24.BlastMine.Client_TrapActivatedLoudNotification
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, HasDefaults, NetClient)
// Parameters:
//		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBlastMine::Client_TrapActivatedLoudNotification(const struct FTransform& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.Client_TrapActivatedLoudNotification");

	UBlastMine_Client_TrapActivatedLoudNotification_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9470
//		Name   -> Function TheK24.BlastMine.Authority_OnRepairProgress
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlastMine::Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMine.Authority_OnRepairProgress");

	UBlastMine_Authority_OnRepairProgress_Params params {};
	params.individualChargeAmount = individualChargeAmount;
	params.totalChargeAmount = totalChargeAmount;
	params.chargeInstigator = chargeInstigator;
	params.wasCoop = wasCoop;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9CE0
//		Name   -> Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive
//		Flags  -> (Final, Native, Private)
void UBlastMineTrapComponent::OnRep_IsTrapActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive");

	UBlastMineTrapComponent_OnRep_IsTrapActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CE07E0
//		Name   -> Function TheK24.Counterforce.Multicast_ShowTotemAura
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCounterforce::Multicast_ShowTotemAura(class ATotem* Totem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Counterforce.Multicast_ShowTotemAura");

	UCounterforce_Multicast_ShowTotemAura_Params params {};
	params.Totem = Totem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9CC0
//		Name   -> Function TheK24.Eruption.OnRep_IsPerkEnabled
//		Flags  -> (Final, Native, Private)
void UEruption::OnRep_IsPerkEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.OnRep_IsPerkEnabled");

	UEruption_OnRep_IsPerkEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570A40
//		Name   -> Function TheK24.Eruption.Multicast_TriggerPerk
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TArray<class AGenerator*>                          explodingGenerators                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Multicast_TriggerPerk(TArray<class AGenerator*> explodingGenerators)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.Multicast_TriggerPerk");

	UEruption_Multicast_TriggerPerk_Params params {};
	params.explodingGenerators = explodingGenerators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CE0750
//		Name   -> Function TheK24.Eruption.Multicast_HighlightGenerator
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Multicast_HighlightGenerator(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.Multicast_HighlightGenerator");

	UEruption_Multicast_HighlightGenerator_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.Eruption.MakeSurvivorScreamCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  screamingSurvivor                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::MakeSurvivorScreamCosmetic(class ADBDPlayer* screamingSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.MakeSurvivorScreamCosmetic");

	UEruption_MakeSurvivorScreamCosmetic_Params params {};
	params.screamingSurvivor = screamingSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9980
//		Name   -> Function TheK24.Eruption.GetScreamRevealLocationDuration
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UEruption::GetScreamRevealLocationDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.GetScreamRevealLocationDuration");

	UEruption_GetScreamRevealLocationDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AGenerator*                                  highlightedGenerator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Cosmetic_OnGeneratorHighlightStart(class AGenerator* highlightedGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart");

	UEruption_Cosmetic_OnGeneratorHighlightStart_Params params {};
	params.highlightedGenerator = highlightedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AGenerator*                                  highlightedGenerator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEruption::Cosmetic_OnGeneratorHighlightEnd(class AGenerator* highlightedGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd");

	UEruption_Cosmetic_OnGeneratorHighlightEnd_Params params {};
	params.highlightedGenerator = highlightedGenerator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9CA0
//		Name   -> Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress
//		Flags  -> (Final, Native, Private)
void UFlashbang::OnRep_GeneratorsRepairProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress");

	UFlashbang_OnRep_GeneratorsRepairProgress_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UFlashbang::Cosmetic_OnGeneratorRepairProgressionTargetAchieved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved");

	UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570DC0
//		Name   -> Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
//		Flags  -> (Final, Net, Native, Event, Private, NetClient)
void UFlashbang::Client_OnGeneratorRepairProgressionTargetAchieved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved");

	UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9600
//		Name   -> Function TheK24.Flashbang.Authority_OnRepairProgressApplied
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlashbang::Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.Flashbang.Authority_OnRepairProgressApplied");

	UFlashbang_Authority_OnRepairProgressApplied_Params params {};
	params.individualChargeAmount = individualChargeAmount;
	params.totalChargeAmount = totalChargeAmount;
	params.chargeInstigator = chargeInstigator;
	params.wasCoop = wasCoop;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UInjectSerumInteraction::OnSurvivorCured_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic");

	UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9BA0
//		Name   -> Function TheK24.InjectSerumInteraction.OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInjectSerumInteraction::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.OnKillerSet");

	UInjectSerumInteraction_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9920
//		Name   -> Function TheK24.InjectSerumInteraction.GetInjectionTarget
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACamperPlayer*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACamperPlayer* UInjectSerumInteraction::GetInjectionTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.GetInjectionTarget");

	UInjectSerumInteraction_GetInjectionTarget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03ED93F0
//		Name   -> Function TheK24.InjectSerumInteraction.Authority_CureSurvivor
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInjectSerumInteraction::Authority_CureSurvivor(class ACamperPlayer* CamperPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.InjectSerumInteraction.Authority_CureSurvivor");

	UInjectSerumInteraction_Authority_CureSurvivor_Params params {};
	params.CamperPlayer = CamperPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9B20
//		Name   -> Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24AnimInstance::OnKillerPowerLevelChanged(int powerlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged");

	UK24AnimInstance_OnKillerPowerLevelChanged_Params params {};
	params.powerlevel = powerlevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9A10
//		Name   -> Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CharacterFXComponent::Local_OnKillerPowerLevelChanged(int powerlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged");

	UK24CharacterFXComponent_Local_OnKillerPowerLevelChanged_Params params {};
	params.powerlevel = powerlevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C93D70
//		Name   -> Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_TeleportZombiesTo(float X, float Y, float Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo");

	UK24CheatComponent_DBD_TeleportZombiesTo_Params params {};
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24ZombieFall
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              Zvalue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24ZombieFall(float Zvalue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24ZombieFall");

	UK24CheatComponent_DBD_K24ZombieFall_Params params {};
	params.Zvalue = Zvalue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24StopAllZombies
//		Flags  -> (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24StopAllZombies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24StopAllZombies");

	UK24CheatComponent_DBD_K24StopAllZombies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24StartAllZombies
//		Flags  -> (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24StartAllZombies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24StartAllZombies");

	UK24CheatComponent_DBD_K24StartAllZombies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9900
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
//		Flags  -> (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24SpawnZombieOnKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller");

	UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24SetPowerLevelPoints(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints");

	UK24CheatComponent_DBD_K24SetPowerLevelPoints_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C970
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24CheatComponent::DBD_K24SetContaminationOnSurvivor(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor");

	UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
//		Flags  -> (Final, Exec, Native, Public)
void UK24CheatComponent::DBD_K24ComeToMeMyZombies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies");

	UK24CheatComponent_DBD_K24ComeToMeMyZombies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9DA0
//		Name   -> Function TheK24.K24PounceAttack.Server_HitZombie
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		class AZombieCharacter*                            zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TargetLocationTimestamp                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PounceAttack::Server_HitZombie(class AZombieCharacter* zombie, float TargetLocationTimestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24PounceAttack.Server_HitZombie");

	UK24PounceAttack_Server_HitZombie_Params params {};
	params.zombie = zombie;
	params.TargetLocationTimestamp = TargetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.WhipAttackStart_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AK24Power::WhipAttackStart_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.WhipAttackStart_Cosmetic");

	AK24Power_WhipAttackStart_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.WhipAttackMove_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isFirstRayCast                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::WhipAttackMove_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation, bool isFirstRayCast)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.WhipAttackMove_Cosmetic");

	AK24Power_WhipAttackMove_Cosmetic_Params params {};
	params.whipStartLocation = whipStartLocation;
	params.whipEndLocation = whipEndLocation;
	params.isFirstRayCast = isFirstRayCast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.WhipAttackHit_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     impactPointLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isFirstHit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ImpactNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       phyMaterial                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               hitACharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::WhipAttackHit_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& impactPointLocation, const struct FVector& whipEndLocation, bool isFirstHit, const struct FVector& ImpactNormal, const struct FName& phyMaterial, bool hitACharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.WhipAttackHit_Cosmetic");

	AK24Power_WhipAttackHit_Cosmetic_Params params {};
	params.whipStartLocation = whipStartLocation;
	params.impactPointLocation = impactPointLocation;
	params.whipEndLocation = whipEndLocation;
	params.isFirstHit = isFirstHit;
	params.ImpactNormal = ImpactNormal;
	params.phyMaterial = phyMaterial;
	params.hitACharacter = hitACharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.WhipAttackEnd_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AK24Power::WhipAttackEnd_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.WhipAttackEnd_Cosmetic");

	AK24Power_WhipAttackEnd_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9FD0
//		Name   -> Function TheK24.K24Power.Server_PowerDestroyPallet
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Server_PowerDestroyPallet(class APallet* Pallet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Server_PowerDestroyPallet");

	AK24Power_Server_PowerDestroyPallet_Params params {};
	params.Pallet = Pallet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9F40
//		Name   -> Function TheK24.K24Power.Server_PowerDestroyBreakable
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class ABreakableBase*                              breakable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Server_PowerDestroyBreakable(class ABreakableBase* breakable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Server_PowerDestroyBreakable");

	AK24Power_Server_PowerDestroyBreakable_Params params {};
	params.breakable = breakable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9E70
//		Name   -> Function TheK24.K24Power.Server_KillAZombie
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class AZombieCharacter*                            zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_EAttackType                         attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Server_KillAZombie(class AZombieCharacter* zombie, DBDSharedTypes_EAttackType attackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Server_KillAZombie");

	AK24Power_Server_KillAZombie_Params params {};
	params.zombie = zombie;
	params.attackType = attackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.PowerHitStateEnd_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::PowerHitStateEnd_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.PowerHitStateEnd_Cosmetic");

	AK24Power_PowerHitStateEnd_Cosmetic_Params params {};
	params.whipStartLocation = whipStartLocation;
	params.whipEndLocation = whipEndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.PowerCooldownEnd_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AK24Power::PowerCooldownEnd_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.PowerCooldownEnd_Cosmetic");

	AK24Power_PowerCooldownEnd_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9D00
//		Name   -> Function TheK24.K24Power.OnRep_PowerLevelPoints
//		Flags  -> (Final, Native, Private)
void AK24Power::OnRep_PowerLevelPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.OnRep_PowerLevelPoints");

	AK24Power_OnRep_PowerLevelPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.OnPowerStop_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK24Power::OnPowerStop_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.OnPowerStop_Cosmetic");

	AK24Power_OnPowerStop_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.OnPowerStartCharge_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK24Power::OnPowerStartCharge_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.OnPowerStartCharge_Cosmetic");

	AK24Power_OnPowerStartCharge_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                powerlevel                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::OnPowerLevelChanged_Cosmetic(int powerlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic");

	AK24Power_OnPowerLevelChanged_Cosmetic_Params params {};
	params.powerlevel = powerlevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED9A90
//		Name   -> Function TheK24.K24Power.Multicast_PowerDestroyPallet
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Multicast_PowerDestroyPallet(class APallet* Pallet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Multicast_PowerDestroyPallet");

	AK24Power_Multicast_PowerDestroyPallet_Params params {};
	params.Pallet = Pallet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359E550
//		Name   -> Function TheK24.K24Power.Multicast_PowerDestroyBreakable
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABreakableBase*                              breakable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Multicast_PowerDestroyBreakable(class ABreakableBase* breakable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Multicast_PowerDestroyBreakable");

	AK24Power_Multicast_PowerDestroyBreakable_Params params {};
	params.breakable = breakable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03ED99E0
//		Name   -> Function TheK24.K24Power.IsInPower
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AK24Power::IsInPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.IsInPower");

	AK24Power_IsInPower_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03ED99B0
//		Name   -> Function TheK24.K24Power.GetWhipLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AK24Power::GetWhipLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.GetWhipLength");

	AK24Power_GetWhipLength_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03ED9950
//		Name   -> Function TheK24.K24Power.GetPowerLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AK24Power::GetPowerLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.GetPowerLevel");

	AK24Power_GetPowerLevel_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03ED9790
//		Name   -> Function TheK24.K24Power.Authority_OnSurvivorContaminated
//		Flags  -> (Final, Native, Public)
// Parameters:
//		TheK24_EContaminator                               contaminator                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK24Power::Authority_OnSurvivorContaminated(TheK24_EContaminator contaminator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24Power.Authority_OnSurvivorContaminated");

	AK24Power_Authority_OnSurvivorContaminated_Params params {};
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE680
//		Name   -> Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UK24PowerAnimInstance::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay");

	UK24PowerAnimInstance_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE600
//		Name   -> Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PowerAnimInstance::OnKillerPowerLevelChanged(int powerlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged");

	UK24PowerAnimInstance_OnKillerPowerLevelChanged_Params params {};
	params.powerlevel = powerlevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE5E0
//		Name   -> Function TheK24.K24PowerAnimInstance.OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void UK24PowerAnimInstance::OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24PowerAnimInstance.OnIntroCompleted");

	UK24PowerAnimInstance_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE9B0
//		Name   -> Function TheK24.k24PowerCooldownInteraction.SetK24Power
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void Uk24PowerCooldownInteraction::SetK24Power(class AK24Power* K24Power)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.k24PowerCooldownInteraction.SetK24Power");

	Uk24PowerCooldownInteraction_SetK24Power_Params params {};
	params.K24Power = K24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4ACC0
//		Name   -> Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24PowerPresentationItemProgressComponent::SetK24Power(class AK24Power* K24Power)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power");

	UK24PowerPresentationItemProgressComponent_SetK24Power_Params params {};
	params.K24Power = K24Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE8E0
//		Name   -> Function TheK24.K24WhipAttack.Server_ContaminatePlayer
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class ACamperPlayer*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TargetLocationTimestamp                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24WhipAttack::Server_ContaminatePlayer(class ACamperPlayer* Target, float TargetLocationTimestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24WhipAttack.Server_ContaminatePlayer");

	UK24WhipAttack_Server_ContaminatePlayer_Params params {};
	params.Target = Target;
	params.TargetLocationTimestamp = TargetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDE60
//		Name   -> Function TheK24.K24WhipAttack.Client_ContaminationResult
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsValid                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK24WhipAttack::Client_ContaminationResult(class ADBDPlayer* Target, bool IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.K24WhipAttack.Client_ContaminationResult");

	UK24WhipAttack_Client_ContaminationResult_Params params {};
	params.Target = Target;
	params.IsValid = IsValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570DC0
//		Name   -> Function TheK24.LethalPursuer.Server_ActivatePerk
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
void ULethalPursuer::Server_ActivatePerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.LethalPursuer.Server_ActivatePerk");

	ULethalPursuer_Server_ActivatePerk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE130
//		Name   -> Function TheK24.LethalPursuer.Local_OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void ULethalPursuer::Local_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.LethalPursuer.Local_OnIntroCompleted");

	ULethalPursuer_Local_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE720
//		Name   -> Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
//		Flags  -> (Final, Native, Private)
void URookieSpirit::OnRep_NumberOfGreatSkillChecksOnGeneratorRepair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair");

	URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE040
//		Name   -> Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URookieSpirit::HandleGeneratorIsDamagedChanged(class AGenerator* Generator, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged");

	URookieSpirit_HandleGeneratorIsDamagedChanged_Params params {};
	params.Generator = Generator;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE700
//		Name   -> Function TheK24.SupplyCrateInteractable.OnRep_IsOpen
//		Flags  -> (Final, Native, Private)
void ASupplyCrateInteractable::OnRep_IsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SupplyCrateInteractable.OnRep_IsOpen");

	ASupplyCrateInteractable_OnRep_IsOpen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE6C0
//		Name   -> Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing
//		Flags  -> (Final, Native, Private)
void ASupplyCrateInteractable::OnRep_IsAutoClosing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing");

	ASupplyCrateInteractable_OnRep_IsAutoClosing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE6E0
//		Name   -> Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
//		Flags  -> (Final, Native, Private)
void USurvivorContaminationComponent::OnRep_IsContaminated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated");

	USurvivorContaminationComponent_OnRep_IsContaminated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE6A0
//		Name   -> Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions
//		Flags  -> (Final, Native, Private)
void USurvivorContaminationComponent::OnRep_InjectSerumInteractions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions");

	USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USurvivorContaminationComponent::OnContaminationCured_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic");

	USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USurvivorContaminationComponent::OnContaminated_SFX_Stinger_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic");

	USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		TheK24_EContaminator                               contaminator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorContaminationComponent::OnContaminated_Cosmetic(TheK24_EContaminator contaminator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic");

	USurvivorContaminationComponent_OnContaminated_Cosmetic_Params params {};
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C85DD0
//		Name   -> Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
//		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
//		TheK24_EContaminator                               contaminator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorContaminationComponent::Multicast_OnContaminated_Cosmetic(TheK24_EContaminator contaminator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic");

	USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Params params {};
	params.contaminator = contaminator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE100
//		Name   -> Function TheK24.SurvivorContaminationComponent.IsContaminated
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorContaminationComponent::IsContaminated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.SurvivorContaminationComponent.IsContaminated");

	USurvivorContaminationComponent_IsContaminated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EDE7E0
//		Name   -> Function TheK24.ZombieAIController.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieAIController::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieAIController.OnSlasherSet");

	AZombieAIController_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDC50
//		Name   -> Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AZombieAIController::Authority_OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated");

	AZombieAIController_Authority_OnTargetPerceptionUpdated_Params params {};
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE520
//		Name   -> Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieAttractedByGeneratorBTService::OnInRangeChanged(bool InRange, class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged");

	UZombieAttractedByGeneratorBTService_OnInRangeChanged_Params params {};
	params.InRange = InRange;
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		DBDSharedTypes_EAttackType                         attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::ZombieKilledByKiller_Cosmetic(DBDSharedTypes_EAttackType attackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic");

	AZombieCharacter_ZombieKilledByKiller_Cosmetic_Params params {};
	params.attackType = attackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::SetCharacterActive_Cosmetic(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic");

	AZombieCharacter_SetCharacterActive_Cosmetic_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		TheK24_EZombieState                                ZombieState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::OnZombieStateChanged_Cosmetic(TheK24_EZombieState ZombieState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic");

	AZombieCharacter_OnZombieStateChanged_Cosmetic_Params params {};
	params.ZombieState = ZombieState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE860
//		Name   -> Function TheK24.ZombieCharacter.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnSlasherSet");

	AZombieCharacter_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE760
//		Name   -> Function TheK24.ZombieCharacter.OnRep_ZombieState
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheK24_EZombieState                                previousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::OnRep_ZombieState(TheK24_EZombieState previousState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnRep_ZombieState");

	AZombieCharacter_OnRep_ZombieState_Params params {};
	params.previousState = previousState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE740
//		Name   -> Function TheK24.ZombieCharacter.OnRep_ZombieGender
//		Flags  -> (Final, Native, Private)
void AZombieCharacter::OnRep_ZombieGender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnRep_ZombieGender");

	AZombieCharacter_OnRep_ZombieGender_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AZombieCharacter::OnFemaleGenderSet_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic");

	AZombieCharacter_OnFemaleGenderSet_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE3E0
//		Name   -> Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::OnEndOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector");

	AZombieCharacter_OnEndOverlapZombieAttackDetector_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE1D0
//		Name   -> Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AZombieCharacter::OnBeginOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector");

	AZombieCharacter_OnBeginOverlapZombieAttackDetector_Params params {};
	params.HitComponent = HitComponent;
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
//		Offset -> 0x03EDE150
//		Name   -> Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
//		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
// Parameters:
//		DBDSharedTypes_EAttackType                         attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::Multicast_ZombieKilledByKillerCosmetic(DBDSharedTypes_EAttackType attackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic");

	AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Params params {};
	params.attackType = attackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDE010
//		Name   -> Function TheK24.ZombieCharacter.GetZombieGender
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheK24_EZombieGender                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheK24_EZombieGender AZombieCharacter::GetZombieGender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetZombieGender");

	AZombieCharacter_GetZombieGender_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EDDFF0
//		Name   -> Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UOtherCharactersVerticalCollisionsHandler*   ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOtherCharactersVerticalCollisionsHandler* AZombieCharacter::GetOtherCharactersVerticalCollisionsHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler");

	AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EDDFB0
//		Name   -> Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAuthoritativeMovementComponent*             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAuthoritativeMovementComponent* AZombieCharacter::GetAuthoritativeMovementComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent");

	AZombieCharacter_GetAuthoritativeMovementComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EDDF30
//		Name   -> Function TheK24.ZombieCharacter.GetAudioSwitchState
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AZombieCharacter::GetAudioSwitchState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.GetAudioSwitchState");

	AZombieCharacter_GetAudioSwitchState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EDDDE0
//		Name   -> Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheK24_EZombieState                                ZombieState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::Authority_OnZombieStateChanged(TheK24_EZombieState ZombieState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged");

	AZombieCharacter_Authority_OnZombieStateChanged_Params params {};
	params.ZombieState = ZombieState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDBD0
//		Name   -> Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::Authority_OnFlashlightRemoved(class UFlashlightComponent* Flashlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved");

	AZombieCharacter_Authority_OnFlashlightRemoved_Params params {};
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDB50
//		Name   -> Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AZombieCharacter::Authority_OnFlashlightAdded(class UFlashlightComponent* Flashlight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded");

	AZombieCharacter_Authority_OnFlashlightAdded_Params params {};
	params.Flashlight = Flashlight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDAB0
//		Name   -> Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AZombieCharacter::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin");

	AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Params params {};
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDDA90
//		Name   -> Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
//		Flags  -> (Final, Native, Private)
void AZombieCharacter::Authority_DeactivateZombieAndStartRespawnTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer");

	AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C5C8E0
//		Name   -> Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieCustomizationComponent::Multicast_SetZombieCustomization(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization");

	UZombieCustomizationComponent_Multicast_SetZombieCustomization_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDFF70
//		Name   -> Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieFallDetectorComponent::Authority_OnMovementModeChange(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange");

	UZombieFallDetectorComponent_Authority_OnMovementModeChange_Params params {};
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDFD00
//		Name   -> Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombieResurrector::Authority_OnKillerPowerLevelChanged(int powerlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged");

	UZombieResurrector_Authority_OnKillerPowerLevelChanged_Params params {};
	params.powerlevel = powerlevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EDFD80
//		Name   -> Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class AActor*                                      originator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      instigatingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               shouldTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              audibleRange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isQuickAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UZombiesInterestEventManager::Authority_OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered");

	UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Params params {};
	params.originator = originator;
	params.instigatingActor = instigatingActor;
	params.Location = Location;
	params.shouldTrack = shouldTrack;
	params.isQuickAction = isQuickAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (audibleRange != nullptr)
		*audibleRange = params.audibleRange;

}


// Function:
//		Offset -> 0x03EDFCE0
//		Name   -> Function TheK24.ZombiesManagement.Authority_OnIntroComplete
//		Flags  -> (Final, Native, Private)
void AZombiesManagement::Authority_OnIntroComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK24.ZombiesManagement.Authority_OnIntroComplete");

	AZombiesManagement_Authority_OnIntroComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

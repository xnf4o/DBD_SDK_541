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
//		Offset -> 0x03563B80
//		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivatableExhaustedEffect::Authority_Start(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start");

	UActivatableExhaustedEffect_Authority_Start_Params params {};
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563580
//		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UActivatableExhaustedEffect::Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper");

	UActivatableExhaustedEffect_Authority_OnHookCamper_Params params {};
	params.GameEvent = GameEvent;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.Alert.OnPerkActivate_Cosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UAlert::OnPerkActivate_Cosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Alert.OnPerkActivate_Cosmetic");

	UAlert_OnPerkActivate_Cosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563E80
//		Name   -> Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnyActorPairQueryRangeIsTrue::OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged");

	UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035637D0
//		Name   -> Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted");

	UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035638E0
//		Name   -> Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAnyMeansNecessary::Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp");

	UAnyMeansNecessary_Authority_OnPalletPulledUp_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564500
//		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnySurvivorHasObjectState::OnSurvivorRemoved(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved");

	UAnySurvivorHasObjectState_OnSurvivorRemoved_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564480
//		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnySurvivorHasObjectState::OnSurvivorAdded(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded");

	UAnySurvivorHasObjectState_OnSurvivorAdded_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035647B0
//		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue");

	UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
	params.InteractionDefinition = InteractionDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035645F0
//		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBaseIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics");

	UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035646B0
//		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              lingerDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseLingeringStatusEffect::SetLingerDuration(float lingerDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration");

	UBaseLingeringStatusEffect_SetLingerDuration_Params params {};
	params.lingerDuration = lingerDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035634A0
//		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UBaseLingeringStatusEffect::Authority_DeactivateEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect");

	UBaseLingeringStatusEffect_Authority_DeactivateEffect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563480
//		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UBaseLingeringStatusEffect::Authority_ActivateEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect");

	UBaseLingeringStatusEffect_Authority_ActivateEffect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564370
//		Name   -> Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UBetterTogether::OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair");

	UBetterTogether_OnStartedGeneratorRepair_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
void UBlessedStatusEffect::OnExitBoonRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange");

	UBlessedStatusEffect_OnExitBoonRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
void UBlessedStatusEffect::OnEnterBoonRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange");

	UBlessedStatusEffect_OnEnterBoonRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563D10
//		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoundTotem
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ATotem*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATotem* UBlessedStatusEffect::GetBoundTotem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.GetBoundTotem");

	UBlessedStatusEffect_GetBoundTotem_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03563CE0
//		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBlessedStatusEffect::GetBoonTotemBlessingRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange");

	UBlessedStatusEffect_GetBoonTotemBlessingRange_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03563B00
//		Name   -> Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlessedStatusEffect::Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame");

	UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563A80
//		Name   -> Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBoonPerk::Authority_OnSurvivorRemoved(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved");

	UBoonPerk_Authority_OnSurvivorRemoved_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035642F0
//		Name   -> Function DBDCompetence.Breakout.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnSlasherSet");

	UBreakout_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564130
//		Name   -> Function DBDCompetence.Breakout.OnRep_IsPerkActive
//		Flags  -> (Final, Native, Private)
void UBreakout::OnRep_IsPerkActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.OnRep_IsPerkActive");

	UBreakout_OnRep_IsPerkActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035639F0
//		Name   -> Function DBDCompetence.Breakout.Authority_OnRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::Authority_OnRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_OnRangeChanged");

	UBreakout_Authority_OnRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035634E0
//		Name   -> Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBreakout::Authority_ImposeWiggleStatusEffect(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect");

	UBreakout_Authority_ImposeWiggleStatusEffect_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035634C0
//		Name   -> Function DBDCompetence.Camaraderie.Authority_EnablePerk
//		Flags  -> (Final, Native, Private)
void UCamaraderie::Authority_EnablePerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Camaraderie.Authority_EnablePerk");

	UCamaraderie_Authority_EnablePerk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035645A0
//		Name   -> Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UCorruptIntervention::Server_ActivatePerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Server_ActivatePerk");

	UCorruptIntervention_Server_ActivatePerk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035640F0
//		Name   -> Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
//		Flags  -> (Final, Native, Private)
void UCorruptIntervention::OnRep_BlockedGenerators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators");

	UCorruptIntervention_OnRep_BlockedGenerators_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563E60
//		Name   -> Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void UCorruptIntervention::Local_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted");

	UCorruptIntervention_Local_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563D40
//		Name   -> Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UIsPlayerPerformingInteraction*              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UIsPlayerPerformingInteraction* UDBDConditionFactory::STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction");

	UDBDConditionFactory_IsPlayerPerformingInteraction_Params params {};
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03563C00
//		Name   -> Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDoesPerkHaveToken*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDoesPerkHaveToken* UDBDConditionFactory::STATIC_DoesPerkHaveToken(class UPerk* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken");

	UDBDConditionFactory_DoesPerkHaveToken_Params params {};
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03564580
//		Name   -> Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
//		Flags  -> (Final, Native, Private)
void UDecisiveStrike::OnUnhookedTimerEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded");

	UDecisiveStrike_OnUnhookedTimerEnded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564190
//		Name   -> Function DBDCompetence.DecisiveStrike.OnSkillCheck
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnSkillCheck(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnSkillCheck");

	UDecisiveStrike_OnSkillCheck_Params params {};
	params.hadInput = hadInput;
	params.success = success;
	params.Bonus = Bonus;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564110
//		Name   -> Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
//		Flags  -> (Final, Native, Private)
void UDecisiveStrike::OnRep_HasBeenAttempted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted");

	UDecisiveStrike_OnRep_HasBeenAttempted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564050
//		Name   -> Function DBDCompetence.DecisiveStrike.OnPickUpEnded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnPickUpEnded(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnPickUpEnded");

	UDecisiveStrike_OnPickUpEnded_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563FD0
//		Name   -> Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDecisiveStrike::OnOwnerPickedUp(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp");

	UDecisiveStrike_OnOwnerPickedUp_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563750
//		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDelayedHealEffect::Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp");

	UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563690
//		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  before                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  after                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDelayedHealEffect::Authority_OnOwningCamperHealthChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged");

	UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params params {};
	params.before = before;
	params.after = after;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563560
//		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
//		Flags  -> (Final, Native, Private)
void UDelayedHealEffect::Authority_OnActivationTimerComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete");

	UDelayedHealEffect_Authority_OnActivationTimerComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035640D0
//		Name   -> Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
//		Flags  -> (Final, Native, Private)
void UDistortion::OnRep_AuraBlockIsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive");

	UDistortion_OnRep_AuraBlockIsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563450
//		Name   -> Function DBDCompetence.Distortion.AuraBlockCanBeActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDistortion::AuraBlockCanBeActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Distortion.AuraBlockCanBeActive");

	UDistortion_AuraBlockCanBeActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03564730
//		Name   -> Function DBDCompetence.DoesPerkHaveToken.SetPerk
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDoesPerkHaveToken::SetPerk(class UPerk* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.SetPerk");

	UDoesPerkHaveToken_SetPerk_Params params {};
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564150
//		Name   -> Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
//		Flags  -> (Final, Native, Private)
void UDoesPerkHaveToken::OnRep_Perk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk");

	UDoesPerkHaveToken_OnRep_Perk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03564170
//		Name   -> Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
//		Flags  -> (Final, Native, Private)
void UDownedByBasicAttack::OnRep_ReplicatedIsTrue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue");

	UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03563F10
//		Name   -> Function DBDCompetence.DyingLight.OnObsessionChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               newObsession                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               previousObsession                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDyingLight::OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.DyingLight.OnObsessionChanged");

	UDyingLight_OnObsessionChanged_Params params {};
	params.newObsession = newObsession;
	params.previousObsession = previousObsession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035699A0
//		Name   -> Function DBDCompetence.FlipFlop.Authority_OnPickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFlipFlop::Authority_OnPickedUp(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.FlipFlop.Authority_OnPickedUp");

	UFlipFlop_Authority_OnPickedUp_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356ACD0
//		Name   -> Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
//		Flags  -> (Final, Native, Protected)
void UGateBlockerEffect::RemoveCantEscapeFlag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag");

	UGateBlockerEffect_RemoveCantEscapeFlag_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A7C0
//		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
//		Flags  -> (Final, Native, Private)
void UHasPlayerReachedWiggleFillPercentCondition::OnRep_IsWigglePercentReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached");

	UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035698A0
//		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHasPlayerReachedWiggleFillPercentCondition::Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged");

	UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params params {};
	params.ChargeableComponent = ChargeableComponent;
	params.PercentCompletionChange = PercentCompletionChange;
	params.TotalPercentComplete = TotalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A5C0
//		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapExit
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadOn::OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapExit");

	UHeadOn_OnPawnOverlapExit_Params params {};
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
//		Offset -> 0x0356A3B0
//		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapEnter
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UHeadOn::OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnPawnOverlapEnter");

	UHeadOn_OnPawnOverlapEnter_Params params {};
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
//		Offset -> 0x0356A0D0
//		Name   -> Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UHeadOn::OnHeadOnAnimationComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete");

	UHeadOn_OnHeadOnAnimationComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569E40
//		Name   -> Function DBDCompetence.HeadOn.Multicast_StunPlayer
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class UStunnableComponent*                         StunnableComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  stunner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHeadOn::Multicast_StunPlayer(class UStunnableComponent* StunnableComponent, class ADBDPlayer* stunner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Multicast_StunPlayer");

	UHeadOn_Multicast_StunPlayer_Params params {};
	params.StunnableComponent = StunnableComponent;
	params.stunner = stunner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569B80
//		Name   -> Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHeadOn::CanApplyHeadOnInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction");

	UHeadOn_CanApplyHeadOnInteraction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03569860
//		Name   -> Function DBDCompetence.HeadOn.Authority_ActivatePerk
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UHeadOn::Authority_ActivatePerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HeadOn.Authority_ActivatePerk");

	UHeadOn_Authority_ActivatePerk_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356AEC0
//		Name   -> Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UHexPerk::UpdateCursedStatusViewOnLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer");

	UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356AB90
//		Name   -> Function DBDCompetence.HexPerk.ReceiveGameplayEvent
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		DeadByDaylight_EDBDScoreTypes                      gameplayEventType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::ReceiveGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.ReceiveGameplayEvent");

	UHexPerk_ReceiveGameplayEvent_Params params {};
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A820
//		Name   -> Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TArray<class ADBDPlayer*>                          oldPlayersWhoKnowCurse                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::OnRep_PlayersWhoKnowCurse(TArray<class ADBDPlayer*> oldPlayersWhoKnowCurse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse");

	UHexPerk_OnRep_PlayersWhoKnowCurse_Params params {};
	params.oldPlayersWhoKnowCurse = oldPlayersWhoKnowCurse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A0F0
//		Name   -> Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
//		Flags  -> (Final, Native, Public)
// Parameters:
//		DeadByDaylight_EDBDScoreTypes                      gameplayEventType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::OnHexPerkGameplayEvent(DeadByDaylight_EDBDScoreTypes gameplayEventType, float amount, class AActor* Instigator, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent");

	UHexPerk_OnHexPerkGameplayEvent_Params params {};
	params.gameplayEventType = gameplayEventType;
	params.amount = amount;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569DB0
//		Name   -> Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UHexPerk::IsCurseRevealedToPlayer(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer");

	UHexPerk_IsCurseRevealedToPlayer_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03569AB0
//		Name   -> Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               revealed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer");

	UHexPerk_Authority_SetCurseRevealedToPlayer_Params params {};
	params.Player = Player;
	params.revealed = revealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569A20
//		Name   -> Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               revealed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::Authority_RevealCurseToAllSurvivors(bool revealed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors");

	UHexPerk_Authority_RevealCurseToAllSurvivors_Params params {};
	params.revealed = revealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.HexPerk.Authority_Reactivate_BP
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHexPerk::Authority_Reactivate_BP(class ATotem* Totem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexPerk.Authority_Reactivate_BP");

	UHexPerk_Authority_Reactivate_BP_Params params {};
	params.Totem = Totem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569880
//		Name   -> Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
//		Flags  -> (Final, Native, Private)
void UHexRuin::Authority_ConstructActivationTimersMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap");

	UHexRuin_Authority_ConstructActivationTimersMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356AE40
//		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel");

	UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569C70
//		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       effectIDLevel1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       effectIDLevel2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       effectIDLevel3                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHighestLevelAndClosestEffectCondition::InitEffectArrays(const struct FName& effectIDLevel1, const struct FName& effectIDLevel2, const struct FName& effectIDLevel3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays");

	UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params params {};
	params.effectIDLevel1 = effectIDLevel1;
	params.effectIDLevel2 = effectIDLevel2;
	params.effectIDLevel3 = effectIDLevel3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356ACF0
//		Name   -> Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UImAllEars::Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise");

	UImAllEars_Server_OnCamperLoudNoise_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.OnEventBaseAddon.OnEventFired
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UOnEventBaseAddon::OnEventFired(const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.OnEventBaseAddon.OnEventFired");

	UOnEventBaseAddon_OnEventFired_Params params {};
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInfectiousFright::RevealSurvivorLocation(class ACamperPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.RevealSurvivorLocation");

	UInfectiousFright_RevealSurvivorLocation_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A7E0
//		Name   -> Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
//		Flags  -> (Final, Native, Private)
void UInfectiousFright::OnRep_PerkActivationCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount");

	UInfectiousFright_OnRep_PerkActivationCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A800
//		Name   -> Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
//		Flags  -> (Final, Native, Private)
void UInnerStrength::OnRep_PerkEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnRep_PerkEnabled");

	UInnerStrength_OnRep_PerkEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A700
//		Name   -> Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperImmobilizeState              newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInnerStrength::OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged");

	UInnerStrength_OnPlayerImmobilizeStateChanged_Params params {};
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A240
//		Name   -> Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UProveThyselfEffect*                         ProveThyselfEffect                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsBestProveThyselfEffectInRange::OnInRangeChanged(bool InRange, class UProveThyselfEffect* ProveThyselfEffect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged");

	UIsBestProveThyselfEffectInRange_OnInRangeChanged_Params params {};
	params.InRange = InRange;
	params.ProveThyselfEffect = ProveThyselfEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A920
//		Name   -> Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsHighestLevelAndClosestOriginatingEffect::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved");

	UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params params {};
	params.effect = effect;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356AAC0
//		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UGameplayModifierContainer*                  GameplayModifierContainer                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsApplicable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsHighestTierOriginatingPerk::OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged");

	UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Params params {};
	params.GameplayModifierContainer = GameplayModifierContainer;
	params.IsApplicable = IsApplicable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A9F0
//		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsHighestTierOriginatingPerk::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved");

	UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Params params {};
	params.effect = effect;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A900
//		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
//		Flags  -> (Final, Native, Private)
void UIsOriginatingPerkBoundToTotems::OnRep_TotemCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount");

	UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569BB0
//		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		GameplayUtilities_EComparisonOperation             comparisonOperator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                totemCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsOriginatingPerkBoundToTotems::Init(GameplayUtilities_EComparisonOperation comparisonOperator, int totemCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init");

	UIsOriginatingPerkBoundToTotems_Init_Params params {};
	params.comparisonOperator = comparisonOperator;
	params.totemCount = totemCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A300
//		Name   -> Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsOutRangeOfOriginatingPlayer::OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged");

	UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A390
//		Name   -> Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Protected)
void UIsOwningPlayerInRangeFromHook::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay");

	UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569F10
//		Name   -> Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerfInteractionWithNoItem::OnCollectableChargeStateChange(bool Empty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange");

	UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Params params {};
	params.Empty = Empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A050
//		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingItemInteraction::OnCollectablePickedUp(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp");

	UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0356A030
//		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
//		Flags  -> (Final, Native, Private)
void UIsPlayerPerformingItemInteraction::OnCollectableDropped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped");

	UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03569FA0
//		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingItemInteraction::OnCollectableChargeStateChange(bool Empty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange");

	UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params params {};
	params.Empty = Empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03571160
//		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue");

	UIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
	params.InteractionDefinition = InteractionDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035645F0
//		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics");

	UIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
	params.interactionSemantics = interactionSemantics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03571060
//		Name   -> Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKillerSubjectProvider::RegisterWhenKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet");

	UKillerSubjectProvider_RegisterWhenKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035710E0
//		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              lingerDuration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULingeringBlessedStatusEffect::SetLingerDuration(float lingerDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration");

	ULingeringBlessedStatusEffect_SetLingerDuration_Params params {};
	params.lingerDuration = lingerDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570570
//		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULingeringBlessedStatusEffect::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged");

	ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570DE0
//		Name   -> Function DBDCompetence.LuckyBreak.OnDamageStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULuckyBreak::OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.OnDamageStateChanged");

	ULuckyBreak_OnDamageStateChanged_Params params {};
	params.oldDamageState = oldDamageState;
	params.CurrentDamageState = CurrentDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035703C0
//		Name   -> Function DBDCompetence.LuckyBreak.ActivationTimerEnded
//		Flags  -> (Final, Native, Private)
void ULuckyBreak::ActivationTimerEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.LuckyBreak.ActivationTimerEnded");

	ULuckyBreak_ActivationTimerEnded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570B10
//		Name   -> Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNoOneLeftBehind::GetSpeedBoostEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect");

	UNoOneLeftBehind_GetSpeedBoostEffect_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03570F70
//		Name   -> Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Protected)
void UOwningPlayerInTotemRange::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay");

	UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03571040
//		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
//		Flags  -> (Final, Native, Private)
void UPlayerIsInExitArea::PlayerExitExitArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea");

	UPlayerIsInExitArea_PlayerExitExitArea_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03571020
//		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
//		Flags  -> (Final, Native, Private)
void UPlayerIsInExitArea::PlayerEnterExitArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea");

	UPlayerIsInExitArea_PlayerEnterExitArea_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570F90
//		Name   -> Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProveThyself::OnSurvivorInOwnerRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged");

	UProveThyself_OnSurvivorInOwnerRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570930
//		Name   -> Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoveOnOriginatingSurvivorGoneStatusEffect::Authority_OnSurvivorRemoved(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved");

	URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570EA0
//		Name   -> Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
//		Flags  -> (Native, Protected)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProveThyselfEffect::OnInRangeOfOriginatorChanged(bool InRange, class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged");

	UProveThyselfEffect_OnInRangeOfOriginatorChanged_Params params {};
	params.InRange = InRange;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.SmallGame.VFXTotemFound
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void USmallGame::VFXTotemFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.VFXTotemFound");

	USmallGame_VFXTotemFound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.SmallGame.SearchForTotems
//		Flags  -> (Event, Protected, BlueprintEvent)
void USmallGame::SearchForTotems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.SearchForTotems");

	USmallGame_SearchForTotems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570DC0
//		Name   -> Function DBDCompetence.SmallGame.Multicast_TotemFound
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
void USmallGame::Multicast_TotemFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Multicast_TotemFound");

	USmallGame_Multicast_TotemFound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570AE0
//		Name   -> Function DBDCompetence.SmallGame.GetDetectionConeAngle
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USmallGame::GetDetectionConeAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.GetDetectionConeAngle");

	USmallGame_GetDetectionConeAngle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x035709B0
//		Name   -> Function DBDCompetence.SmallGame.Authority_SetTotemDetected
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USmallGame::Authority_SetTotemDetected(bool value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SmallGame.Authority_SetTotemDetected");

	USmallGame_Authority_SetTotemDetected_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035708B0
//		Name   -> Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USoleSurvivor::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded");

	USoleSurvivor_Authority_OnSurvivorAdded_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570690
//		Name   -> Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_ESkillCheckCustomType               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ChargeChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USolidarity::Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, DBDSharedTypes_ESkillCheckCustomType Type, float ChargeChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse");

	USolidarity_Authority_OnSkillCheckResponse_Params params {};
	params.success = success;
	params.Bonus = Bonus;
	params.Player = Player;
	params.TriggerLoudNoise = TriggerLoudNoise;
	params.hadInput = hadInput;
	params.Type = Type;
	params.ChargeChange = ChargeChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035703E0
//		Name   -> Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
//		Flags  -> (Final, Native, Private)
// Parameters:
//		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USolidarity::Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied");

	USolidarity_Authority_OnHealthChargeApplied_Params params {};
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
//		Offset -> 0x03570600
//		Name   -> Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USprintBurst::Authority_OnIsRunningAndMovingChanged(bool IsRunningAndMoving)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged");

	USprintBurst_Authority_OnIsRunningAndMovingChanged_Params params {};
	params.IsRunningAndMoving = IsRunningAndMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03570C50
//		Name   -> Function DBDCompetence.StatsSystemUtilities.InitStatBP
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FTunableStat                                theStat                                                    (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStatsSystemUtilities::STATIC_InitStatBP(struct FTunableStat* theStat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.InitStatBP");

	UStatsSystemUtilities_InitStatBP_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (theStat != nullptr)
		*theStat = params.theStat;

}


// Function:
//		Offset -> 0x03570B40
//		Name   -> Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FTunableStat                                theStat                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UStatsSystemUtilities::STATIC_GetStatValueBP(const struct FTunableStat& theStat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.StatsSystemUtilities.GetStatValueBP");

	UStatsSystemUtilities_GetStatValueBP_Params params {};
	params.theStat = theStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03570A40
//		Name   -> Function DBDCompetence.Surge.Client_TriggerEffects
//		Flags  -> (Final, Net, Native, Event, Private, NetClient)
// Parameters:
//		TArray<class AGenerator*>                          generators                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurge::Client_TriggerEffects(TArray<class AGenerator*> generators)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.Surge.Client_TriggerEffects");

	USurge_Client_TriggerEffects_Params params {};
	params.generators = generators;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03572620
//		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
//		Flags  -> (Final, Native, Private)
void UTheMettleOfMan::OnRep_NumTokenSoFar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar");

	UTheMettleOfMan_OnRep_NumTokenSoFar_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03572600
//		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
//		Flags  -> (Final, Native, Private)
void UTheMettleOfMan::OnRep_CurrentPhase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase");

	UTheMettleOfMan_OnRep_CurrentPhase_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035725E0
//		Name   -> Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
//		Flags  -> (Final, Native, Private)
void UThrillingTremors::OnRep_BlockedGenerators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators");

	UThrillingTremors_OnRep_BlockedGenerators_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorToReveal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UYamaokaFamilyCrest::RevealSurvivor(class ACamperPlayer* survivorToReveal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor");

	UYamaokaFamilyCrest_RevealSurvivor_Params params {};
	params.survivorToReveal = survivorToReveal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x035725C0
//		Name   -> Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
//		Flags  -> (Final, Native, Private)
void UYamaokaFamilyCrest::OnRep_AddonActivationCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount");

	UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

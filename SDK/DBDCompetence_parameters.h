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

// Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
struct UActivatableExhaustedEffect_Authority_Start_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
struct UActivatableExhaustedEffect_Authority_OnHookCamper_Params
{
	struct FGameplayTag                                GameEvent;                                                 // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Alert.OnPerkActivate_Cosmetic
struct UAlert_OnPerkActivate_Cosmetic_Params
{
};

// Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
struct UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPullUpStarted
struct UAnyMeansNecessary_Authority_OnPalletPullUpStarted_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
struct UAnyMeansNecessary_Authority_OnPalletPulledUp_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
struct UAnySurvivorHasObjectState_OnSurvivorRemoved_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
struct UAnySurvivorHasObjectState_OnSurvivorAdded_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
struct UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
	class UInteractionDefinition*                      InteractionDefinition;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
struct UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer                       interactionSemantics;                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
struct UBaseLingeringStatusEffect_SetLingerDuration_Params
{
	float                                              lingerDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
struct UBaseLingeringStatusEffect_Authority_DeactivateEffect_Params
{
};

// Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
struct UBaseLingeringStatusEffect_Authority_ActivateEffect_Params
{
};

// Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
struct UBetterTogether_OnStartedGeneratorRepair_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange
struct UBlessedStatusEffect_OnExitBoonRange_Params
{
};

// Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
struct UBlessedStatusEffect_OnEnterBoonRange_Params
{
};

// Function DBDCompetence.BlessedStatusEffect.GetBoundTotem
struct UBlessedStatusEffect_GetBoundTotem_Params
{
	class ATotem*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
struct UBlessedStatusEffect_GetBoonTotemBlessingRange_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
struct UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
struct UBoonPerk_Authority_OnSurvivorRemoved_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.OnSlasherSet
struct UBreakout_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.OnRep_IsPerkActive
struct UBreakout_OnRep_IsPerkActive_Params
{
};

// Function DBDCompetence.Breakout.Authority_OnRangeChanged
struct UBreakout_Authority_OnRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
struct UBreakout_Authority_ImposeWiggleStatusEffect_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Camaraderie.Authority_EnablePerk
struct UCamaraderie_Authority_EnablePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.Server_ActivatePerk
struct UCorruptIntervention_Server_ActivatePerk_Params
{
};

// Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
struct UCorruptIntervention_OnRep_BlockedGenerators_Params
{
};

// Function DBDCompetence.CorruptIntervention.Local_OnIntroCompleted
struct UCorruptIntervention_Local_OnIntroCompleted_Params
{
};

// Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
struct UDBDConditionFactory_IsPlayerPerformingInteraction_Params
{
	struct FGameplayTagContainer                       interactionSemantics;                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UIsPlayerPerformingInteraction*              ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
struct UDBDConditionFactory_DoesPerkHaveToken_Params
{
	class UPerk*                                       Perk;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDoesPerkHaveToken*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
struct UDecisiveStrike_OnUnhookedTimerEnded_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnSkillCheck
struct UDecisiveStrike_OnSkillCheck_Params
{
	bool                                               hadInput;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bonus;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
struct UDecisiveStrike_OnRep_HasBeenAttempted_Params
{
};

// Function DBDCompetence.DecisiveStrike.OnPickUpEnded
struct UDecisiveStrike_OnPickUpEnded_Params
{
	class ADBDPlayer*                                  picker;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
struct UDecisiveStrike_OnOwnerPickedUp_Params
{
	class ADBDPlayer*                                  picker;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
struct UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params
{
	class ADBDPlayer*                                  picker;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
struct UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params
{
	DeadByDaylight_ECamperDamageState                  before;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  after;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
struct UDelayedHealEffect_Authority_OnActivationTimerComplete_Params
{
};

// Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
struct UDistortion_OnRep_AuraBlockIsActive_Params
{
};

// Function DBDCompetence.Distortion.AuraBlockCanBeActive
struct UDistortion_AuraBlockCanBeActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DoesPerkHaveToken.SetPerk
struct UDoesPerkHaveToken_SetPerk_Params
{
	class UPerk*                                       Perk;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
struct UDoesPerkHaveToken_OnRep_Perk_Params
{
};

// Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
struct UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params
{
};

// Function DBDCompetence.DyingLight.OnObsessionChanged
struct UDyingLight_OnObsessionChanged_Params
{
	class ACamperPlayer*                               newObsession;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               previousObsession;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.FlipFlop.Authority_OnPickedUp
struct UFlipFlop_Authority_OnPickedUp_Params
{
	class ADBDPlayer*                                  picker;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
struct UGateBlockerEffect_RemoveCantEscapeFlag_Params
{
};

// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
struct UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params
{
};

// Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
struct UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params
{
	class UChargeableComponent*                        ChargeableComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentCompletionChange;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalPercentComplete;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapExit
struct UHeadOn_OnPawnOverlapExit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnPawnOverlapEnter
struct UHeadOn_OnPawnOverlapEnter_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
struct UHeadOn_OnHeadOnAnimationComplete_Params
{
};

// Function DBDCompetence.HeadOn.Multicast_StunPlayer
struct UHeadOn_Multicast_StunPlayer_Params
{
	class UStunnableComponent*                         StunnableComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  stunner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
struct UHeadOn_CanApplyHeadOnInteraction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HeadOn.Authority_ActivatePerk
struct UHeadOn_Authority_ActivatePerk_Params
{
};

// Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
struct UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Params
{
};

// Function DBDCompetence.HexPerk.ReceiveGameplayEvent
struct UHexPerk_ReceiveGameplayEvent_Params
{
	DeadByDaylight_EDBDScoreTypes                      gameplayEventType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
struct UHexPerk_OnRep_PlayersWhoKnowCurse_Params
{
	TArray<class ADBDPlayer*>                          oldPlayersWhoKnowCurse;                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.OnHexPerkGameplayEvent
struct UHexPerk_OnHexPerkGameplayEvent_Params
{
	DeadByDaylight_EDBDScoreTypes                      gameplayEventType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amount;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
struct UHexPerk_IsCurseRevealedToPlayer_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
struct UHexPerk_Authority_SetCurseRevealedToPlayer_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               revealed;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
struct UHexPerk_Authority_RevealCurseToAllSurvivors_Params
{
	bool                                               revealed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexPerk.Authority_Reactivate_BP
struct UHexPerk_Authority_Reactivate_BP_Params
{
	class ATotem*                                      Totem;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HexRuin.Authority_ConstructActivationTimersMap
struct UHexRuin_Authority_ConstructActivationTimersMap_Params
{
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
struct UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
struct UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params
{
	struct FName                                       effectIDLevel1;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       effectIDLevel2;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       effectIDLevel3;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
struct UImAllEars_Server_OnCamperLoudNoise_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.OnEventBaseAddon.OnEventFired
struct UOnEventBaseAddon_OnEventFired_Params
{
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
struct UInfectiousFright_RevealSurvivorLocation_Params
{
	class ACamperPlayer*                               Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
struct UInfectiousFright_OnRep_PerkActivationCount_Params
{
};

// Function DBDCompetence.InnerStrength.OnRep_PerkEnabled
struct UInnerStrength_OnRep_PerkEnabled_Params
{
};

// Function DBDCompetence.InnerStrength.OnPlayerImmobilizeStateChanged
struct UInnerStrength_OnPlayerImmobilizeStateChanged_Params
{
	DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              newImmobilizeState;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
struct UIsBestProveThyselfEffectInRange_OnInRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProveThyselfEffect*                         ProveThyselfEffect;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
struct UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params
{
	class UStatusEffect*                               effect;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
struct UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Params
{
	class UGameplayModifierContainer*                  GameplayModifierContainer;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsApplicable;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
struct UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Params
{
	class UStatusEffect*                               effect;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Valid;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
struct UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Params
{
};

// Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init
struct UIsOriginatingPerkBoundToTotems_Init_Params
{
	GameplayUtilities_EComparisonOperation             comparisonOperator;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                totemCount;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsOutRangeOfOriginatingPlayer.OnInRangeChanged
struct UIsOutRangeOfOriginatingPlayer_OnInRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
struct UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params
{
};

// Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
struct UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Params
{
	bool                                               Empty;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
struct UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
struct UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params
{
};

// Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
struct UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params
{
	bool                                               Empty;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
struct UIsPlayerPerformingInteraction_UpdateIsTrue_Params
{
	class UInteractionDefinition*                      InteractionDefinition;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
struct UIsPlayerPerformingInteraction_SetInteractionSemantics_Params
{
	struct FGameplayTagContainer                       interactionSemantics;                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
struct UKillerSubjectProvider_RegisterWhenKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
struct ULingeringBlessedStatusEffect_SetLingerDuration_Params
{
	float                                              lingerDuration;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
struct ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LuckyBreak.OnDamageStateChanged
struct ULuckyBreak_OnDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldDamageState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  CurrentDamageState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.LuckyBreak.ActivationTimerEnded
struct ULuckyBreak_ActivationTimerEnded_Params
{
};

// Function DBDCompetence.NoOneLeftBehind.GetSpeedBoostEffect
struct UNoOneLeftBehind_GetSpeedBoostEffect_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
struct UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params
{
};

// Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
struct UPlayerIsInExitArea_PlayerExitExitArea_Params
{
};

// Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
struct UPlayerIsInExitArea_PlayerEnterExitArea_Params
{
};

// Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
struct UProveThyself_OnSurvivorInOwnerRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
struct URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
struct UProveThyselfEffect_OnInRangeOfOriginatorChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SmallGame.VFXTotemFound
struct USmallGame_VFXTotemFound_Params
{
};

// Function DBDCompetence.SmallGame.SearchForTotems
struct USmallGame_SearchForTotems_Params
{
};

// Function DBDCompetence.SmallGame.Multicast_TotemFound
struct USmallGame_Multicast_TotemFound_Params
{
};

// Function DBDCompetence.SmallGame.GetDetectionConeAngle
struct USmallGame_GetDetectionConeAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SmallGame.Authority_SetTotemDetected
struct USmallGame_Authority_SetTotemDetected_Params
{
	bool                                               value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
struct USoleSurvivor_Authority_OnSurvivorAdded_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
struct USolidarity_Authority_OnSkillCheckResponse_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bonus;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerLoudNoise;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hadInput;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeChange;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
struct USolidarity_Authority_OnHealthChargeApplied_Params
{
	float                                              individualChargeAmount;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalChargeAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      chargeInstigator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               wasCoop;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
struct USprintBurst_Authority_OnIsRunningAndMovingChanged_Params
{
	bool                                               IsRunningAndMoving;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.StatsSystemUtilities.InitStatBP
struct UStatsSystemUtilities_InitStatBP_Params
{
	struct FTunableStat                                theStat;                                                   // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
struct UStatsSystemUtilities_GetStatValueBP_Params
{
	struct FTunableStat                                theStat;                                                   // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.Surge.Client_TriggerEffects
struct USurge_Client_TriggerEffects_Params
{
	TArray<class AGenerator*>                          generators;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
struct UTheMettleOfMan_OnRep_NumTokenSoFar_Params
{
};

// Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
struct UTheMettleOfMan_OnRep_CurrentPhase_Params
{
};

// Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
struct UThrillingTremors_OnRep_BlockedGenerators_Params
{
};

// Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
struct UYamaokaFamilyCrest_RevealSurvivor_Params
{
	class ACamperPlayer*                               survivorToReveal;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
struct UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TheK25.ChainAttachedGateBlockerEffect.OnSurvivorDamageStateChanged
struct UChainAttachedGateBlockerEffect_OnSurvivorDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldState;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  NewState;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25AnimationFollowerActor.OnMontageStopped
struct AK25AnimationFollowerActor_OnMontageStopped_Params
{
	struct FAnimationMontageDescriptor                 ID;                                                        // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function TheK25.K25AnimationFollowerActor.OnMontageStarted
struct AK25AnimationFollowerActor_OnMontageStarted_Params
{
	struct FAnimationMontageDescriptor                 ID;                                                        // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                              Rate;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25AnimationFollowerActor.OnMontageEnd
struct AK25AnimationFollowerActor_OnMontageEnd_Params
{
	struct FAnimationMontageDescriptor                 Montage;                                                   // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               interrupted;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25AttackSubAnimInstance.OnAttackStart
struct UK25AttackSubAnimInstance_OnAttackStart_Params
{
	DBDSharedTypes_EAttackType                         attackType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.SetSplineComponent
struct AK25Chain_SetSplineComponent_Params
{
	class USplineComponent*                            Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.SetInstancedMeshComponent
struct AK25Chain_SetInstancedMeshComponent_Params
{
	class UInstancedStaticMeshComponent*               instancedMesh;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.IsAttachedToControlledProjectile
struct AK25Chain_IsAttachedToControlledProjectile_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.GetSurvivorChainAttachmentAnchor
struct AK25Chain_GetSurvivorChainAttachmentAnchor_Params
{
	class AK25SurvivorChainAttachmentAnchor*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.GetChainStartLocation
struct AK25Chain_GetChainStartLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.GetChainEndLocation
struct AK25Chain_GetChainEndLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.Cosmetic_OnSurvivorStoppedRemovingChainSFX
struct AK25Chain_Cosmetic_OnSurvivorStoppedRemovingChainSFX_Params
{
	bool                                               hasRemovedChainDueToInteraction;                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.Cosmetic_OnSurvivorStartedRemovingChainSFX
struct AK25Chain_Cosmetic_OnSurvivorStartedRemovingChainSFX_Params
{
};

// Function TheK25.K25Chain.Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX
struct AK25Chain_Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX_Params
{
};

// Function TheK25.K25Chain.Cosmetic_OnChainUnleashedWithProjectile
struct AK25Chain_Cosmetic_OnChainUnleashedWithProjectile_Params
{
};

// Function TheK25.K25Chain.Cosmetic_OnChainStartedToReelback
struct AK25Chain_Cosmetic_OnChainStartedToReelback_Params
{
};

// Function TheK25.K25Chain.Cosmetic_OnChainDisappears
struct AK25Chain_Cosmetic_OnChainDisappears_Params
{
};

// Function TheK25.K25Chain.Cosmetic_OnChainDetachedFromSurvivor
struct AK25Chain_Cosmetic_OnChainDetachedFromSurvivor_Params
{
	TheK25_EK25ChainDetachmentReason                   detachmentReason;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.Cosmetic_OnChainAttachedToSurvivor
struct AK25Chain_Cosmetic_OnChainAttachedToSurvivor_Params
{
	bool                                               wasReachingSurvivorAnchorPoint;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Chain.Cosmetic_OnChainAppears
struct AK25Chain_Cosmetic_OnChainAppears_Params
{
};

// Function TheK25.K25ChainAttachedStatusEffect.OnRep_ChainAttachementComponent
struct UK25ChainAttachedStatusEffect_OnRep_ChainAttachementComponent_Params
{
};

// Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_StartChainReelback
struct UK25ChainAttachmentReplicationComponent_Multicast_StartChainReelback_Params
{
	class AK25Chain*                                   chainToAttach;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_LaunchInstantHitChainTowardsSurvivor
struct UK25ChainAttachmentReplicationComponent_Multicast_LaunchInstantHitChainTowardsSurvivor_Params
{
	class AK25Chain*                                   newChainToAttach;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           targetAnchor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     startPosition;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_DetachChains
struct UK25ChainAttachmentReplicationComponent_Multicast_DetachChains_Params
{
	class UK25SurvivorChainAttachmentComponent*        chainAttachementComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AK25Chain*>                           chainsToDetach;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EK25ChainDetachmentReason                   detachmentReason;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AK25Chain*>                           chainsAttached;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainAttachmentReplicationComponent.Multicast_AttachChainToAnchor
struct UK25ChainAttachmentReplicationComponent_Multicast_AttachChainToAnchor_Params
{
	class UK25SurvivorChainAttachmentComponent*        chainAttachementComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25Chain*                                   chainToAttach;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           anchorPoint;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainHuntEffectsComponent.GetOwningPlayer
struct UK25ChainHuntEffectsComponent_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_TriggerChainHuntActivationSFX
struct UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Params
{
};

// Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_DeactivateChainHuntEffects
struct UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Params
{
};

// Function TheK25.K25ChainHuntEffectsComponent.Cosmetic_ActivateChainHuntEffects
struct UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Params
{
	bool                                               hasChainHuntStarted;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnRemoveChainChargePercentageChanged
struct UK25ChainLocomotionSurvivorAnimInstance_OnRemoveChainChargePercentageChanged_Params
{
	class UChargeableComponent*                        ChargeableComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              completionPercentage;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainDetached
struct UK25ChainLocomotionSurvivorAnimInstance_OnChainDetached_Params
{
	class AK25Chain*                                   chain;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EK25ChainDetachmentReason                   detachmentReason;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.OnChainAttached
struct UK25ChainLocomotionSurvivorAnimInstance_OnChainAttached_Params
{
	class AK25Chain*                                   chain;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.IsSolvingLamentConfiguration
struct UK25ChainLocomotionSurvivorAnimInstance_IsSolvingLamentConfiguration_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.HasChainsAttached
struct UK25ChainLocomotionSurvivorAnimInstance_HasChainsAttached_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetSurvivorChainAttachmentComponent
struct UK25ChainLocomotionSurvivorAnimInstance_GetSurvivorChainAttachmentComponent_Params
{
	class UK25SurvivorChainAttachmentComponent*        ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetDetachingChainAnchorData
struct UK25ChainLocomotionSurvivorAnimInstance_GetDetachingChainAnchorData_Params
{
	struct FK25SurvivorChainAttachmentData             ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.GetChainAttachmentAnchors
struct UK25ChainLocomotionSurvivorAnimInstance_GetChainAttachmentAnchors_Params
{
	TArray<class AK25SurvivorChainAttachmentAnchor*>   ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainDetached
struct UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainDetached_Params
{
	class AK25Chain*                                   chain;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainLocomotionSurvivorAnimInstance.BP_OnChainAttached
struct UK25ChainLocomotionSurvivorAnimInstance_BP_OnChainAttached_Params
{
	class AK25Chain*                                   chain;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25SurvivorChainAttachmentAnchor*           chainAttachmentAnchor;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeBaseState.GetPlayerOwner
struct UK25ChainStrikeBaseState_GetPlayerOwner_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeBaseState.GetK25Power
struct UK25ChainStrikeBaseState_GetK25Power_Params
{
	class AK25Power*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeBaseState.GetK25Gateway
struct UK25ChainStrikeBaseState_GetK25Gateway_Params
{
	class AK25Gateway*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Server_SetShouldIncrementChargeableComponent
struct UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Params
{
	bool                                               shouldIncrement;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Server_SetFallbackEndReason
struct UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Params
{
	TheK25_EChainStrikeEndReason                       chainStrikeEndReason;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Server_SetCameraViewTarget
struct UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Params
{
	TheK25_EChainStrikeCameraViewTarget                NewViewTarget;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Server_RemoveStateTagFromPlayer
struct UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Server_AddStateTagToPlayer
struct UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.OnRep_ChainStrikeCameraViewTarget
struct UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Params
{
};

// Function TheK25.K25ChainStrikeInteraction.Multicast_SetFallbackEndReason
struct UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Params
{
	TheK25_EChainStrikeEndReason                       chainStrikeEndReason;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Multicast_RemoveStateTagFromPlayer
struct UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Multicast_AddStateTagToPlayer
struct UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeOutEffects
struct UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               preventAudioTriggers;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerKillerRepossessionFadeInEffects
struct UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hasHitSurvivor;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               preventAudioTriggers;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerInvalidGatewayPlacementSFX
struct UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Cosmetic_TriggerGatewayPossessionEffects
struct UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Params
{
	float                                              TransitionTime;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeInteraction.Cosmetic_ResetAllVignetteValues
struct UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeReplicationComponent.Server_EndChainStrike
struct UK25ChainStrikeReplicationComponent_Server_EndChainStrike_Params
{
	class UK25ChainStrikeInteraction*                  Interaction;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EChainStrikeEndReason                       endReason;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ChainStrikeReplicationComponent.Multicast_EndChainStrike
struct UK25ChainStrikeReplicationComponent_Multicast_EndChainStrike_Params
{
	class UK25ChainStrikeInteraction*                  Interaction;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EChainStrikeEndReason                       endReason;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnLocalSurvivor
struct UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnLocalSurvivor_Params
{
	int                                                numbChains;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition
struct UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numbChains;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25TriggerUncontrolledChainsOnAllSurvivors
struct UK25CheatComponent_DBD_K25TriggerUncontrolledChainsOnAllSurvivors_Params
{
	int                                                numbChains;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25ForceRespawnLamentConfiguration
struct UK25CheatComponent_DBD_K25ForceRespawnLamentConfiguration_Params
{
};

// Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnLocalSurvivor
struct UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnLocalSurvivor_Params
{
};

// Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition
struct UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25ForceRemoveAllChainsOnAllSurvivors
struct UK25CheatComponent_DBD_K25ForceRemoveAllChainsOnAllSurvivors_Params
{
};

// Function TheK25.K25CheatComponent.DBD_K25ComeToPositionLamentConfiguration
struct UK25CheatComponent_DBD_K25ComeToPositionLamentConfiguration_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25CheatComponent.DBD_K25ComeToMeLamentConfiguration
struct UK25CheatComponent_DBD_K25ComeToMeLamentConfiguration_Params
{
};

// Function TheK25.K25Projectile.Server_RequestDisableProjectile
struct AK25Projectile_Server_RequestDisableProjectile_Params
{
	TheK25_EK25ProjectileDeactivateReason              deactivateReason;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Projectile.OnProjectileStopped
struct AK25Projectile_OnProjectileStopped_Params
{
	struct FHitResult                                  Result;                                                    // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Projectile.GetMovementComponent
struct AK25Projectile_GetMovementComponent_Params
{
	class UDBDProjectileMovementComponent*             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Projectile.GetChainAttachmentLocation
struct AK25Projectile_GetChainAttachmentLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Projectile.Cosmetic_OnProjectileDeactivated
struct AK25Projectile_Cosmetic_OnProjectileDeactivated_Params
{
	struct FK25ProjectileDeactivationData              deactivationData;                                          // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Projectile.Cosmetic_OnProjectileActivated
struct AK25Projectile_Cosmetic_OnProjectileActivated_Params
{
};

// Function TheK25.K25ControlledProjectile.Server_ProcessYawInput
struct AK25ControlledProjectile_Server_ProcessYawInput_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              scaledInput;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ControlledProjectile.Server_ProcessPitchInput
struct AK25ControlledProjectile_Server_ProcessPitchInput_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              scaledInput;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ControlledProjectile.OnRep_AngularVelocity
struct AK25ControlledProjectile_OnRep_AngularVelocity_Params
{
};

// Function TheK25.K25ControlledProjectile.Cosmetic_OnKillerPossessProjectileEffects
struct AK25ControlledProjectile_Cosmetic_OnKillerPossessProjectileEffects_Params
{
};

// Function TheK25.K25Gateway.Server_StartGatewayPossession
struct AK25Gateway_Server_StartGatewayPossession_Params
{
	struct FVector                                     possessionLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    gatewayRotation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Server_SetIsGatewayBeingPositionned
struct AK25Gateway_Server_SetIsGatewayBeingPositionned_Params
{
	bool                                               isBeingPositionned;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Server_SetGatewayTargetLocation
struct AK25Gateway_Server_SetGatewayTargetLocation_Params
{
	struct FVector                                     targetLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isValidLocation;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Server_SetGatewayOrientation
struct AK25Gateway_Server_SetGatewayOrientation_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Server_EndGatewayPossession
struct AK25Gateway_Server_EndGatewayPossession_Params
{
};

// Function TheK25.K25Gateway.OnRep_IsGatewayPossessed
struct AK25Gateway_OnRep_IsGatewayPossessed_Params
{
};

// Function TheK25.K25Gateway.OnRep_IsBeingPositionned
struct AK25Gateway_OnRep_IsBeingPositionned_Params
{
};

// Function TheK25.K25Gateway.Multicast_SetGatewayTargetLocation
struct AK25Gateway_Multicast_SetGatewayTargetLocation_Params
{
	struct FVector                                     targetLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isValidLocation;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Multicast_SetGatewayOrientation
struct AK25Gateway_Multicast_SetGatewayOrientation_Params
{
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Multicast_SetGatewayLocation
struct AK25Gateway_Multicast_SetGatewayLocation_Params
{
	struct FVector                                     possessionLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.IsGatewayPossessed
struct AK25Gateway_IsGatewayPossessed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.GetCameraComponent
struct AK25Gateway_GetCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Cosmetic_TriggerInvalidGatewayPlacementSFX
struct AK25Gateway_Cosmetic_TriggerInvalidGatewayPlacementSFX_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayUnpossessedEffects
struct AK25Gateway_Cosmetic_TriggerGatewayUnpossessedEffects_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessionCancel
struct AK25Gateway_Cosmetic_TriggerGatewayPossessionCancel_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPossessedEffects
struct AK25Gateway_Cosmetic_TriggerGatewayPossessedEffects_Params
{
	float                                              TransitionTime;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStop
struct AK25Gateway_Cosmetic_TriggerGatewayPlacementStop_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementStart
struct AK25Gateway_Cosmetic_TriggerGatewayPlacementStart_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_TriggerGatewayPlacementCancel
struct AK25Gateway_Cosmetic_TriggerGatewayPlacementCancel_Params
{
};

// Function TheK25.K25Gateway.Cosmetic_SetKillerVisualVisibility
struct AK25Gateway_Cosmetic_SetKillerVisualVisibility_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Gateway.Cosmetic_SetIsGatewayPositionValid
struct AK25Gateway_Cosmetic_SetIsGatewayPositionValid_Params
{
	bool                                               isGatewayPlacementValid;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Husk.Cosmetic_StartDisappearing
struct AK25Husk_Cosmetic_StartDisappearing_Params
{
};

// Function TheK25.K25Husk.Cosmetic_StartAppearing
struct AK25Husk_Cosmetic_StartAppearing_Params
{
};

// Function TheK25.K25Husk.Cosmetic_HideHusk
struct AK25Husk_Cosmetic_HideHusk_Params
{
};

// Function TheK25.K25LamentConfigurationTeleportIndicator.Cosmetic_UpdateIndicatorVisibility
struct AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25P01.OnRep_GeneratorsBlocked
struct UK25P01_OnRep_GeneratorsBlocked_Params
{
};

// Function TheK25.K25P01.Authority_OnBlockTimerDone
struct UK25P01_Authority_OnBlockTimerDone_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25P02.OnRep_CursedSurvivors
struct UK25P02_OnRep_CursedSurvivors_Params
{
};

// Function TheK25.K25P03.OnSurvivorRemoved
struct UK25P03_OnSurvivorRemoved_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25P03.OnDamageStateChanged
struct UK25P03_OnDamageStateChanged_Params
{
	struct FGameplayTag                                GameplayTag;                                               // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25P03.OnCamperUnhookedFromScourgeHook
struct UK25P03_OnCamperUnhookedFromScourgeHook_Params
{
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25PounceAttack.Multicast_DownedTargetHoldingLamentConfiguration
struct UK25PounceAttack_Multicast_DownedTargetHoldingLamentConfiguration_Params
{
};

// Function TheK25.K25PounceAttack.Client_InvalidateDownedTargetHoldingLamentConfiguration
struct UK25PounceAttack_Client_InvalidateDownedTargetHoldingLamentConfiguration_Params
{
};

// Function TheK25.K25Power.OnSurvivorAdded
struct AK25Power_OnSurvivorAdded_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Power.OnRep_LamentConfiguration
struct AK25Power_OnRep_LamentConfiguration_Params
{
};

// Function TheK25.K25Power.OnRep_K25Gateway
struct AK25Power_OnRep_K25Gateway_Params
{
};

// Function TheK25.K25Power.OnRep_K25ControlledProjectile
struct AK25Power_OnRep_K25ControlledProjectile_Params
{
};

// Function TheK25.K25Power.OnKillerAdded
struct AK25Power_OnKillerAdded_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ProjectileReplicationComponent.Multicast_SetAttachedChain
struct UK25ProjectileReplicationComponent_Multicast_SetAttachedChain_Params
{
	class AK25Projectile*                              Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25Chain*                                   chainToAttach;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25ProjectileReplicationComponent.Multicast_DeactivateProjectile
struct UK25ProjectileReplicationComponent_Multicast_DeactivateProjectile_Params
{
	class AK25Projectile*                              Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FK25ProjectileDeactivationData              deactivationData;                                          // 0x0000(0x0020)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SolveLamentConfigurationInteraction.Authority_OnSkillCheckResponseAuthority
struct UK25SolveLamentConfigurationInteraction_Authority_OnSkillCheckResponseAuthority_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bonus;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerLoudNoise;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.OnRep_AttachmentData
struct AK25SurvivorChainAttachmentAnchor_OnRep_AttachmentData_Params
{
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetNumberOfChainsAttached
struct AK25SurvivorChainAttachmentAnchor_GetNumberOfChainsAttached_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullLocation
struct AK25SurvivorChainAttachmentAnchor_GetChainsPullLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainsPullDirection
struct AK25SurvivorChainAttachmentAnchor_GetChainsPullDirection_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainPullDirectionAngle
struct AK25SurvivorChainAttachmentAnchor_GetChainPullDirectionAngle_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentLocation
struct AK25SurvivorChainAttachmentAnchor_GetChainAttachmentLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.GetChainAttachmentData
struct AK25SurvivorChainAttachmentAnchor_GetChainAttachmentData_Params
{
	struct FK25SurvivorChainAttachmentData             ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainDetached
struct AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainDetached_Params
{
	class AK25Chain*                                   chainToDetach;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentAnchor.Cosmetic_OnChainAttached
struct AK25SurvivorChainAttachmentAnchor_Cosmetic_OnChainAttached_Params
{
	class AK25Chain*                                   chainToAttach;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainAttachmentComponent.OnRep_RemoveChainChargeableComponent
struct UK25SurvivorChainAttachmentComponent_OnRep_RemoveChainChargeableComponent_Params
{
};

// Function TheK25.K25SurvivorChainAttachmentComponent.GetFirstChainToRelease
struct UK25SurvivorChainAttachmentComponent_GetFirstChainToRelease_Params
{
	class AK25Chain*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainHuntEffectsComponent.GetOwningSurvivor
struct UK25SurvivorChainHuntEffectsComponent_GetOwningSurvivor_Params
{
	class ACamperPlayer*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainTargetterComponent.Multicast_DebugPositionFind
struct UK25SurvivorChainTargetterComponent_Multicast_DebugPositionFind_Params
{
	struct FVector                                     startSweepPosition;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     endSweepPosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hasFoundPosition;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     foundPosition;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hasFoundCollision;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     collisionPosition;                                         // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25SurvivorChainTargetterComponent.Authority_OnSurvivorHealthStateChanged
struct UK25SurvivorChainTargetterComponent_Authority_OnSurvivorHealthStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldDamageState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  CurrentDamageState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25TeleportInteraction.Multicast_TeleportKillerToTargetPosition
struct UK25TeleportInteraction_Multicast_TeleportKillerToTargetPosition_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25TeleportInteraction.Multicast_InitializeHusk
struct UK25TeleportInteraction_Multicast_InitializeHusk_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25TeleportInteraction.Cosmetic_TeleportStartEffects
struct UK25TeleportInteraction_Cosmetic_TeleportStartEffects_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25TeleportInteraction.Cosmetic_TeleportEndEffects
struct UK25TeleportInteraction_Cosmetic_TeleportEndEffects_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25TeleportInteraction.Cosmetic_TeleportAbortedEffects
struct UK25TeleportInteraction_Cosmetic_TeleportAbortedEffects_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25UncontrolledProjectile.OnRep_TargetSurvivor
struct AK25UncontrolledProjectile_OnRep_TargetSurvivor_Params
{
};

// Function TheK25.K25UncontrolledProjectile.Cosmetic_TriggerUncontrolledProjectileSpawnSFX
struct AK25UncontrolledProjectile_Cosmetic_TriggerUncontrolledProjectileSpawnSFX_Params
{
};

// Function TheK25.K25UncontrolledProjectileReplicationComponent.Multicast_LaunchProjectile
struct UK25UncontrolledProjectileReplicationComponent_Multicast_LaunchProjectile_Params
{
	class AK25UncontrolledProjectile*                  Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Utilities.GetLamentConfiguration
struct UK25Utilities_GetLamentConfiguration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALamentConfiguration*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Utilities.GetK25Power
struct UK25Utilities_GetK25Power_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25Power*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Utilities.GetK25Husk
struct UK25Utilities_GetK25Husk_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25Husk*                                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Utilities.GetK25Gateway
struct UK25Utilities_GetK25Gateway_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25Gateway*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25Utilities.GetK25ControlledProjectile
struct UK25Utilities_GetK25ControlledProjectile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK25ControlledProjectile*                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.K25WeaponAnimInstance.OnAttackStart
struct UK25WeaponAnimInstance_OnAttackStart_Params
{
	DBDSharedTypes_EAttackType                         attackType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.TriggerKillerPickUpSFX
struct ALamentConfiguration_TriggerKillerPickUpSFX_Params
{
	TArray<class ACamperPlayer*>                       affectedSurvivors;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.OnRep_SurvivorHeldHostage
struct ALamentConfiguration_OnRep_SurvivorHeldHostage_Params
{
	class ACamperPlayer*                               oldSurvivorHeldHostage;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.OnRep_LamentConfigurationState
struct ALamentConfiguration_OnRep_LamentConfigurationState_Params
{
};

// Function TheK25.LamentConfiguration.OnCamperEscaped
struct ALamentConfiguration_OnCamperEscaped_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Multicast_TriggerSolvedSFX
struct ALamentConfiguration_Multicast_TriggerSolvedSFX_Params
{
};

// Function TheK25.LamentConfiguration.Multicast_TriggerKillerPickUpSFX
struct ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Params
{
	TArray<class ACamperPlayer*>                       affectedSurvivors;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Multicast_DownedSurvivorHoldingLamentConfiguration
struct ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Multicast_CorrectLamentConfigurationPosition
struct ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Params
{
	struct FVector                                     NewPosition;                                               // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.GetChainHuntProgressPercentage
struct ALamentConfiguration_GetChainHuntProgressPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_TriggerSurvivorPickUpSFX
struct ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_TriggerSpawnedSFX
struct ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_TriggerSolvedSFX
struct ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX
struct ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_TriggerDisappearsSFX
struct ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration
struct ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               survivorDowned;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageStart
struct ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Params
{
	float                                              hostageDuration;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_OnHoldingSurvivorHostageEnd
struct ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Params
{
	bool                                               hasEndedThroughKillerAttack;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntStartedEffects
struct ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntEndedEffects
struct ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeStart
struct ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Params
{
	float                                              chargeTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_OnChainHuntChargeEnd
struct ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Params
{
};

// Function TheK25.LamentConfiguration.Cosmetic_EndSolvingCubeSFX
struct ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Params
{
	bool                                               hasBeenSolved;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Cosmetic_BeginSolvingCubeSFX
struct ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Params
{
};

// Function TheK25.LamentConfiguration.Authority_RespawnLamentConfiguration
struct ALamentConfiguration_Authority_RespawnLamentConfiguration_Params
{
	bool                                               triggerChainHuntUponSpawning;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Authority_OnSurvivorHitByControlledProjectile
struct ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Authority_OnIntroCompletedOrLevelReadyToPlay
struct ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Params
{
};

// Function TheK25.LamentConfiguration.Authority_OnGameEnded
struct ALamentConfiguration_Authority_OnGameEnded_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfiguration.Authority_OnEndGameOver
struct ALamentConfiguration_Authority_OnEndGameOver_Params
{
	struct FGameplayTag                                gameEventType;                                             // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameEventData                              GameEventData;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfigurationChainHuntComponent.OnRep_ChainHuntStateData
struct ULamentConfigurationChainHuntComponent_OnRep_ChainHuntStateData_Params
{
};

// Function TheK25.LamentConfigurationChainHuntComponent.GetChainHuntProgressPercentage
struct ULamentConfigurationChainHuntComponent_GetChainHuntProgressPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK25.LamentConfigurationPlayerAnalyticsComponent.OnRep_AnalyticsCount
struct ULamentConfigurationPlayerAnalyticsComponent_OnRep_AnalyticsCount_Params
{
};

// Function TheK25.S28P01.OnRep_S28P01ChargeableComponent
struct US28P01_OnRep_S28P01ChargeableComponent_Params
{
};

// Function TheK25.S28P01.OnRep_IsPerkActive
struct US28P01_OnRep_IsPerkActive_Params
{
};

// Function TheK25.S28P01.OnRep_IsInteractionOngoing
struct US28P01_OnRep_IsInteractionOngoing_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

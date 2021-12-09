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

// Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged
struct UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Params
{
	bool                                               IsColliding;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators
struct UDeadMansSwitch_OnRep_BlockedGenerators_Params
{
};

// Function TheGunslinger.FireHarpoonRifleInteraction.Server_SetAimingSubstate
struct UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Params
{
	TheGunslinger_EFireHarpoonRifleAimingInteractionSubState NewState;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores
struct UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Params
{
	TArray<class ADBDPlayer*>                          nearMissedPlayers;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature
struct UFireHarpoonRifleInteraction_OnHitPlayer__DelegateSignature_Params
{
};

// DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature
struct UFireHarpoonRifleInteraction_OnFireHarpoon__DelegateSignature_Params
{
};

// Function TheGunslinger.ForThePeople.Server_OnActionInputPressed
struct UForThePeople_Server_OnActionInputPressed_Params
{
};

// Function TheGunslinger.ForThePeople.OnHealingAbilityUsed
struct UForThePeople_OnHealingAbilityUsed_Params
{
	class ACamperPlayer*                               healingSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               healedSurvivor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed
struct UForThePeople_Multicast_OnHealAbilityUsed_Params
{
	class ACamperPlayer*                               healingSurvivor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               healedSurvivor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.Gearhead.OnRep_RevealedGenerators
struct UGearhead_OnRep_RevealedGenerators_Params
{
};

// DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature
struct UGunslingerEffectsComponent_PlayOutOfAmmoSound__DelegateSignature_Params
{
};

// Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged
struct UGunslingerEffectsComponent_OnItemUsedStateChanged_Params
{
	bool                                               IsPressed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature
struct UGunslingerEffectsComponent_OnIsAimingChanged__DelegateSignature_Params
{
	bool                                               isAiming;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound
struct UGunslingerEffectsComponent_Multicast_PlayOutOfAmmoSound_Params
{
};

// Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle
struct UGunslingerUtilities_GetHarpoonRifle_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AHarpoonRifle*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected
struct UHarpoonChainPositioner_OnOwnerCollected_Params
{
	class ADBDPlayer*                                  collector;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged
struct UHarpoonChainPositioner_OnHarpoonTravelingChanged_Params
{
	bool                                               isTravelling;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle
struct UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Params
{
};

// Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged
struct UHarpoonChainPositioner_OnCurrentHarpoonChanged_Params
{
	class AActor*                                      currentHarpoon;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp
struct UHarpoonChainPositioner_GetHarpoonProp_Params
{
	class AHarpoonProp*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon
struct UHarpoonChainPositioner_GetCurrentHarpoon_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonChainPositioner.AttachToRifle
struct UHarpoonChainPositioner_AttachToRifle_Params
{
};

// Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket
struct UHarpoonChainPositioner_AttachToAnimSocket_Params
{
};

// Function TheGunslinger.HarpoonProjectile.OnHarpoonStop
struct AHarpoonProjectile_OnHarpoonStop_Params
{
	struct FHitResult                                  Result;                                                    // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonRifle.GetChain
struct AHarpoonRifle_GetChain_Params
{
	class ARifleChain*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon
struct AHarpoonRifle_Authority_OnFireHarpoon_Params
{
};

// Function TheGunslinger.RedHerring.OnRep_MarkedGenerator
struct URedHerring_OnRep_MarkedGenerator_Params
{
	class AGenerator*                                  oldMarkedGenerator;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RedHerring.OnLoudNoiseTriggered
struct URedHerring_OnLoudNoiseTriggered_Params
{
};

// Function TheGunslinger.RifleChain.UpdateChainMesh
struct ARifleChain_UpdateChainMesh_Params
{
	class UInstancedStaticMeshComponent*               Mesh;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                            spline;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              alpha;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.SpawnChainPoints
struct ARifleChain_SpawnChainPoints_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Stop;                                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 influenceCurve;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pointYPosition;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pointZPosition;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useOffset;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineComponent*                            spline;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnUnattachFromPlayer
struct ARifleChain_OnUnattachFromPlayer_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnReelBackToRifle
struct ARifleChain_OnReelBackToRifle_Params
{
};

// DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature
struct ARifleChain_OnProjectileSet__DelegateSignature_Params
{
	class AActor*                                      Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnLaunch
struct ARifleChain_OnLaunch_Params
{
};

// DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature
struct ARifleChain_OnIsCollidingChanged__DelegateSignature_Params
{
	bool                                               IsColliding;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.OnAttachToPlayer
struct ARifleChain_OnAttachToPlayer_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.IsColliding
struct ARifleChain_IsColliding_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetUnwindingSpeed
struct ARifleChain_GetUnwindingSpeed_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetRiflePlayerLinker
struct ARifleChain_GetRiflePlayerLinker_Params
{
	class URiflePlayerLinker*                          ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits
struct ARifleChain_GetFirstAndLastCollisionHits_Params
{
	TArray<struct FHitResult>                          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainTensionComponent
struct ARifleChain_GetChainTensionComponent_Params
{
	class URifleChainTensionComponent*                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainStart
struct ARifleChain_GetChainStart_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChain.GetChainEnd
struct ARifleChain_GetChainEnd_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged
struct URifleChainTensionComponent_OnTensionChargeableCompletionChanged_Params
{
	bool                                               COMPLETED;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              instigatorsForCompletion;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension
struct URifleChainTensionComponent_OnRep_IsBuildingTension_Params
{
};

// DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature
struct URifleChainTensionComponent_OnIsBuildingTensionChanged__DelegateSignature_Params
{
	bool                                               IsBuildingTension;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.IsBuildingTension
struct URifleChainTensionComponent_IsBuildingTension_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RifleChainTensionComponent.GetProgress
struct URifleChainTensionComponent_GetProgress_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain
struct URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature
struct URiflePlayerLinker_OnLinkedPlayerSet__DelegateSignature_Params
{
	class ADBDPlayer*                                  linkedPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink
struct URiflePlayerLinker_Multicast_Unlink_Params
{
};

// Function TheGunslinger.RiflePlayerLinker.Multicast_Link
struct URiflePlayerLinker_Multicast_Link_Params
{
	class ADBDPlayer*                                  linkedPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.GetLinkOwner
struct URiflePlayerLinker_GetLinkOwner_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer
struct URiflePlayerLinker_GetLinkedPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain
struct URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy
struct USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Params
{
};

// Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet
struct USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

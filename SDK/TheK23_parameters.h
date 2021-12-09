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

// Function TheK23.FastTrack.Cosmetic_OnTokenCountDecreased
struct UFastTrack_Cosmetic_OnTokenCountDecreased_Params
{
};

// Function TheK23.FlurryComboScoreComponent.OnRep_ComboScore
struct UFlurryComboScoreComponent_OnRep_ComboScore_Params
{
};

// Function TheK23.FlurryOfKnives.Server_StartThrowing
struct UFlurryOfKnives_Server_StartThrowing_Params
{
};

// Function TheK23.FlurryOfKnives.Server_DecreaseConsecutiveKnivesStacks
struct UFlurryOfKnives_Server_DecreaseConsecutiveKnivesStacks_Params
{
};

// Function TheK23.FlurryOfKnives.OnRep_NumOfStacksReduction
struct UFlurryOfKnives_OnRep_NumOfStacksReduction_Params
{
};

// Function TheK23.FlurryOfKnives.Multicast_StartThrowing
struct UFlurryOfKnives_Multicast_StartThrowing_Params
{
};

// Function TheK23.KnifeProjectile.WasLaunchedDuringSuperMode
struct AKnifeProjectile_WasLaunchedDuringSuperMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.ShouldPlayRicochetSound
struct AKnifeProjectile_ShouldPlayRicochetSound_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.SetKnifeAcquired
struct AKnifeProjectile_SetKnifeAcquired_Params
{
	bool                                               acquired;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.OnWorldColliderHit
struct AKnifeProjectile_OnWorldColliderHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.OnProjectileBounce
struct AKnifeProjectile_OnProjectileBounce_Params
{
	struct FHitResult                                  ImpactResult;                                              // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.KnifeCanPierceCampers
struct AKnifeProjectile_KnifeCanPierceCampers_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.GetAddonExplosionRadius
struct AKnifeProjectile_GetAddonExplosionRadius_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_SetKnifeActive
struct AKnifeProjectile_BP_SetKnifeActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_OnLaunchCosmetic
struct AKnifeProjectile_BP_OnLaunchCosmetic_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               hasImpactOnLaunch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeProjectile.BP_CosmeticOnAddonExplosion
struct AKnifeProjectile_BP_CosmeticOnAddonExplosion_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeRack.OnReloadMontageStarted
struct AKnifeRack_OnReloadMontageStarted_Params
{
	float                                              actionSpeedMultiplier;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnifeRack.OnReloadEnded
struct AKnifeRack_OnReloadEnded_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnivesLauncher.GetPower
struct UKnivesLauncher_GetPower_Params
{
	class AThrowingKnives*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.KnivesLauncher.GetLocallyPredictedAmmo
struct UKnivesLauncher_GetLocallyPredictedAmmo_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.OnRepLaceration
struct ULacerationComponent_OnRepLaceration_Params
{
	float                                              oldLaceration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Multicast_KnifeHit
struct ULacerationComponent_Multicast_KnifeHit_Params
{
	float                                              newLaceration;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedDamage;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedKO;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     impactLocation;                                            // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactNormal;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnLocallyObservedChanged
struct ULacerationComponent_Cosmetic_OnLocallyObservedChanged_Params
{
	bool                                               IsLocallyObserved;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              lacerationPercent;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDangerous;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnLacerationChanged
struct ULacerationComponent_Cosmetic_OnLacerationChanged_Params
{
	float                                              lacerationPercent;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDangerous;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.LacerationComponent.Cosmetic_OnKnifeHit
struct ULacerationComponent_Cosmetic_OnKnifeHit_Params
{
	float                                              lacerationPercent;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isDangerous;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedDamage;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               causedKO;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactNormal;                                              // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.NoWayOut.Multicast_TriggerLoudNoise
struct UNoWayOut_Multicast_TriggerLoudNoise_Params
{
	class ADBDPlayer*                                  Instigator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEscapeDoor*                                 EscapeDoor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.OnItemUsedStateChanged
struct AThrowingKnives_OnItemUsedStateChanged_Params
{
	bool                                               Pressed;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenOutOfAmmo
struct AThrowingKnives_Multicast_OnUsePowerWhenOutOfAmmo_Params
{
};

// Function TheK23.ThrowingKnives.Multicast_OnUsePowerWhenInCooldown
struct AThrowingKnives_Multicast_OnUsePowerWhenInCooldown_Params
{
};

// Function TheK23.ThrowingKnives.GetSlasher
struct AThrowingKnives_GetSlasher_Params
{
	class ASlasherPlayer*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.GetLauncher
struct AThrowingKnives_GetLauncher_Params
{
	class UKnivesLauncher*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenOutOfAmmo
struct AThrowingKnives_Cosmetic_OnUsePowerWhenOutOfAmmo_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnUsePowerWhenInCooldown
struct AThrowingKnives_Cosmetic_OnUsePowerWhenInCooldown_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnLaunch
struct AThrowingKnives_Cosmetic_OnLaunch_Params
{
};

// Function TheK23.ThrowingKnives.Cosmetic_OnComboScoreChanged
struct AThrowingKnives_Cosmetic_OnComboScoreChanged_Params
{
	float                                              scoreNormalizedForAudio;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Cosmetic_OnComboFinished
struct AThrowingKnives_Cosmetic_OnComboFinished_Params
{
	bool                                               isSRankCombo;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.ThrowingKnives.Authority_SpawnReloadInteractionOnLockers
struct AThrowingKnives_Authority_SpawnReloadInteractionOnLockers_Params
{
};

// Function TheK23.TricksterCharacterVFXInterface.ShowWeapon
struct UTricksterCharacterVFXInterface_ShowWeapon_Params
{
};

// Function TheK23.TricksterCharacterVFXInterface.SetSuperModeActive
struct UTricksterCharacterVFXInterface_SetSuperModeActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetKnivesVisibility
struct UTricksterCharacterVFXInterface_SetKnivesVisibility_Params
{
	bool                                               leftKnife;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               rightKnife;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetIsSuperModeReady
struct UTricksterCharacterVFXInterface_SetIsSuperModeReady_Params
{
	bool                                               isSuperModeReady;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.SetIsInCooldown
struct UTricksterCharacterVFXInterface_SetIsInCooldown_Params
{
	bool                                               isInCooldown;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK23.TricksterCharacterVFXInterface.HideWeapon
struct UTricksterCharacterVFXInterface_HideWeapon_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsSuperModeReady
struct UTricksterSuperModeComponent_OnRepIsSuperModeReady_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsInSuperMode
struct UTricksterSuperModeComponent_OnRepIsInSuperMode_Params
{
};

// Function TheK23.TricksterSuperModeComponent.OnRepIsInCooldown
struct UTricksterSuperModeComponent_OnRepIsInCooldown_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated
struct UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Params
{
};

// Function TheClown.BaseGasCloudProjectile.SetIsDissipating
struct ABaseGasCloudProjectile_SetIsDissipating_Params
{
	bool                                               IsDissipating;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
struct ABaseGasCloudProjectile_SetIgnoredActors_Params
{
};

// Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
struct ABaseGasCloudProjectile_SetGasAudioActive_Params
{
	bool                                               activated;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
struct ABaseGasCloudProjectile_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         hitComp;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
struct ABaseGasCloudProjectile_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         hitComp;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
struct ABaseGasCloudProjectile_OnDelayedActivationStart_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
struct ABaseGasCloudProjectile_OnAcquiredChanged_Params
{
	bool                                               acquired;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
struct ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Params
{
};

// Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
struct ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.IsDissipating
struct ABaseGasCloudProjectile_IsDissipating_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.GetGasType
struct ABaseGasCloudProjectile_GetGasType_Params
{
	TheClown_EBombType                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
struct ABaseGasCloudProjectile_DissipateGasCloud_Params
{
};

// Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
struct ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params
{
	float                                              value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
struct ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
struct ABaseGasCloudProjectile_ActivateCosmetic_BP_Params
{
};

// Function TheClown.BombLauncher.SetProjectileSpeedCurve
struct UBombLauncher_SetProjectileSpeedCurve_Params
{
	class UCurveFloat*                                 newProjectileSpeedCurve;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.SetProjectilePitchCurve
struct UBombLauncher_SetProjectilePitchCurve_Params
{
	class UCurveFloat*                                 newProjectilePitchCurve;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.SetPercentThrowStrength
struct UBombLauncher_SetPercentThrowStrength_Params
{
	float                                              throwStrength;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.Server_SwitchBombType
struct UBombLauncher_Server_SwitchBombType_Params
{
};

// Function TheClown.BombLauncher.LocalLaunch
struct UBombLauncher_LocalLaunch_Params
{
	float                                              percentThrowStrength;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.Local_SwitchBombType
struct UBombLauncher_Local_SwitchBombType_Params
{
};

// Function TheClown.BombLauncher.IsBombFullyCharged
struct UBombLauncher_IsBombFullyCharged_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.GetPercentThrowStrenght
struct UBombLauncher_GetPercentThrowStrenght_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.BombLauncher.GetCurrentBombType
struct UBombLauncher_GetCurrentBombType_Params
{
	TheClown_EBombType                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
struct UGassedStatusEffect_UpdateAntidoteEffectVFX_Params
{
	float                                              durationRemaining;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.SetRemainingDuration
struct UGassedStatusEffect_SetRemainingDuration_Params
{
	float                                              value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
struct UGassedStatusEffect_SetRemainingAntidoteDuration_Params
{
	float                                              value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinEffectEnd
struct UGassedStatusEffect_OnToxinEffectEnd_Params
{
	float                                              durationSkipped;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinEffectBegin
struct UGassedStatusEffect_OnToxinEffectBegin_Params
{
	float                                              effectDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnToxinCured
struct UGassedStatusEffect_OnToxinCured_Params
{
};

// Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds
struct UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Params
{
};

// Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
struct UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params
{
};

// Function TheClown.GassedStatusEffect.OnDirectBottleHit
struct UGassedStatusEffect_OnDirectBottleHit_Params
{
	TheClown_EBombType                                 bottleType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
struct UGassedStatusEffect_OnAntidoteEffectEnd_Params
{
	float                                              durationSkipped;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
struct UGassedStatusEffect_OnAntidoteEffectBegin_Params
{
	float                                              effectDuration;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.IsInCloud
struct UGassedStatusEffect_IsInCloud_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.IsInAntidoteCloud
struct UGassedStatusEffect_IsInAntidoteCloud_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetRemainingDuration
struct UGassedStatusEffect_GetRemainingDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
struct UGassedStatusEffect_GetRemainingAntidoteDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetCloudEffectDuration
struct UGassedStatusEffect_GetCloudEffectDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
struct UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
struct UGassedStatusEffect_Authority_SetIsInCloud_Params
{
	bool                                               value;                                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
struct UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params
{
	bool                                               value;                                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
struct UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params
{
	class ABaseGasCloudProjectile*                     cloud;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
struct UGassedStatusEffect_Authority_AddOverlappingCloud_Params
{
	class ABaseGasCloudProjectile*                     cloud;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.IsGassed
struct UTheClownUtilities_IsGassed_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.IsAffectedByAntidote
struct UTheClownUtilities_IsAffectedByAntidote_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.GetGassedStatusEffect
struct UTheClownUtilities_GetGassedStatusEffect_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGassedStatusEffect*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
struct UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveGasCloudTrackerComponent*             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheClown.TheClownUtilities.CanBeGassed
struct UTheClownUtilities_CanBeGassed_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

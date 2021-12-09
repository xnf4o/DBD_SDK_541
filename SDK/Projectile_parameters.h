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

// Function Projectile.BaseProjectile.SphereTraceSingle
struct ABaseProjectile_SphereTraceSingle_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                            Sphere;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  outHitResult;                                              // 0x0000(0x0090)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnSetActive
struct ABaseProjectile_OnSetActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnLaunch
struct ABaseProjectile_OnLaunch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               hasImpactOnLaunch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnDetectPlayer
struct ABaseProjectile_OnDetectPlayer_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.OnDetectCollision
struct ABaseProjectile_OnDetectCollision_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_TryDetectCollision
struct ABaseProjectile_Local_TryDetectCollision_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               force;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_SweepImpactCollision
struct ABaseProjectile_Local_SweepImpactCollision_Params
{
	struct FVector                                     Start;                                                     // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    colliderRotation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                                  OutHit;                                                    // 0x0000(0x0090)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Local_OnPlayerDetected
struct ABaseProjectile_Local_OnPlayerDetected_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     projectileLocation;                                        // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsValidPlayerDetection
struct ABaseProjectile_IsValidPlayerDetection_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsValidImpactDetection
struct ABaseProjectile_IsValidImpactDetection_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled
struct ABaseProjectile_IsOwningPawnLocallyControlled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetLauncher
struct ABaseProjectile_GetLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
struct ABaseProjectile_GetImpactPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor
struct ABaseProjectile_GetAddLauncherVeloctyFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectile.Authority_TryDetectCollision
struct ABaseProjectile_Authority_TryDetectCollision_Params
{
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               force;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.SetProjectileVar
struct UBaseProjectileLauncher_SetProjectileVar_Params
{
	struct FName                                       VarName;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.SetProjectileProvider
struct UBaseProjectileLauncher_SetProjectileProvider_Params
{
};

// Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact
struct UBaseProjectileLauncher_Server_LaunchWithImpact_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Server_Launch
struct UBaseProjectileLauncher_Server_Launch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo
struct UBaseProjectileLauncher_OnRep_MaxAmmo_Params
{
	int                                                oldMaxAmmo;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnRep_Ammo
struct UBaseProjectileLauncher_OnRep_Ammo_Params
{
	int                                                oldAmmo;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.OnLaunch
struct UBaseProjectileLauncher_OnLaunch_Params
{
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Local_Launch
struct UBaseProjectileLauncher_Local_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.IsLocallyControlled
struct UBaseProjectileLauncher_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.IsAmmoFull
struct UBaseProjectileLauncher_IsAmmoFull_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.HasProjectile
struct UBaseProjectileLauncher_HasProjectile_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.HasAuthority
struct UBaseProjectileLauncher_HasAuthority_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
struct UBaseProjectileLauncher_GetProjectileToLaunch_Params
{
	class ABaseProjectile*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetOwningPawn
struct UBaseProjectileLauncher_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio
struct UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Params
{
	float                                              throwPowerRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
struct UBaseProjectileLauncher_GetLaunchSpeed_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchPosition
struct UBaseProjectileLauncher_GetLaunchPosition_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio
struct UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Params
{
	struct FRotator                                    ViewRotation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              throwPowerRatio;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetLaunchDirection
struct UBaseProjectileLauncher_GetLaunchDirection_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.GetAmmo
struct UBaseProjectileLauncher_GetAmmo_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo
struct UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo
struct UBaseProjectileLauncher_Authority_SetMaxAmmo_Params
{
	int                                                newMaxAmmo;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isMaxAmmoImmutable;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Authority_ReturnAmmoUnits
struct UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Params
{
	int                                                amountOfAmmoUnitsReturned;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileLauncher.Authority_Reload
struct UBaseProjectileLauncher_Authority_Reload_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_Launch
struct UBaseProjectileLauncher_Authority_Launch_Params
{
};

// Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
struct UBaseProjectileLauncher_Authority_AddMaxAmmo_Params
{
	int                                                ammoToAdd;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Projectile.DBDProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature
struct UDBDProjectileMovementComponent_OnComponentToSweepCollisionBP__DelegateSignature_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.DBDProjectileMovementComponent.GetPreviousLocation
struct UDBDProjectileMovementComponent_GetPreviousLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.DBDProjectileMovementComponent.AddComponentToSweep
struct UDBDProjectileMovementComponent_AddComponentToSweep_Params
{
	class UPrimitiveComponent*                         Component;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile
struct USingleProjectileProviderComponent_OnRep_Projectile_Params
{
};

// Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer
struct UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      projectileLocation;                                        // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       projectileRotation;                                        // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetLocationTimestamp;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_SendAuthorityDetectPlayer
struct UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact
struct UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch
struct UBaseProjectileReplicationComponent_Multicast_OnLaunch_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLaunchInfo                                 LaunchInfo;                                                // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer
struct UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact
struct UBaseProjectileReplicationComponent_Multicast_DetectImpact_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactInfo                                 ImpactInfo;                                                // 0x0000(0x0030)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation
struct UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer
struct UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Params
{
	class ABaseProjectile*                             Projectile;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init
struct UAuthoritativePoolProjectileProviderAdapter_Init_Params
{
	class UAuthoritativeActorPoolComponent*            pool;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

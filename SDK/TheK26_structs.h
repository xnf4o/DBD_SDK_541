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
// Enums
//---------------------------------------------------------------------------

// Enum TheK26.EK26ProjectileState
enum class TheK26_EK26ProjectileState : uint8_t
{
	EK26ProjectileState__Invalid   = 0,
	EK26ProjectileState__Summoning = 1,
	EK26ProjectileState__Idle      = 2,
	EK26ProjectileState__FollowingPath = 3,
	EK26ProjectileState__OffPath   = 4,
	EK26ProjectileState__Destroyed = 5,
	EK26ProjectileState__EK26ProjectileState_MAX = 6,

};

// Enum TheK26.EK26AmmoState
enum class TheK26_EK26AmmoState : uint8_t
{
	EK26AmmoState__Available       = 0,
	EK26AmmoState__Expiring        = 1,
	EK26AmmoState__Recharging      = 2,
	EK26AmmoState__EK26AmmoState_MAX = 3,

};

// Enum TheK26.EK26AmmoCooldownReason
enum class TheK26_EK26AmmoCooldownReason : uint8_t
{
	EK26AmmoCooldownReason__Expired = 0,
	EK26AmmoCooldownReason__Fired  = 1,
	EK26AmmoCooldownReason__EK26AmmoCooldownReason_MAX = 2,

};

// Enum TheK26.FK26AttachedCrowRemovalReason
enum class TheK26_EFK26AttachedCrowRemovalReason : uint8_t
{
	FK26AttachedCrowRemovalReason__Invalid = 0,
	FK26AttachedCrowRemovalReason__LockerEnter = 1,
	FK26AttachedCrowRemovalReason__SurvivorDamagedByCrow = 2,
	FK26AttachedCrowRemovalReason__SurvivorDowned = 3,
	FK26AttachedCrowRemovalReason__SurvivorPickedUp = 4,
	FK26AttachedCrowRemovalReason__CrowFlashlighted = 5,
	FK26AttachedCrowRemovalReason__RemoveInteraction = 6,
	FK26AttachedCrowRemovalReason__FK26AttachedCrowRemovalReason_MAX = 7,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TheK26.K26AttachmentStatus
// 0x0002
struct FK26AttachmentStatus
{
	TheK26_EFK26AttachedCrowRemovalReason              LastRemovalReason;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAttached;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK26.K26Path
// 0x0018
struct FK26Path
{
	class AK26PathPart*                                PathEndArrow;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AK26PathPart*>                        PathParts;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK26.K26PathData
// 0x0040
struct FK26PathData
{
	bool                                               IsInUse;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsVisibleToKiller;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsVisibleForSurvivors;                                     // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F01H[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxVisibleIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathPartLocations;                                         // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRotator>                            PathPartRotations;                                         // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PathEndLocation;                                           // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PathEndRotation;                                           // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK26.K26ProjectileStateDetails
// 0x0108
struct FK26ProjectileStateDetails
{
	struct FDBDTunableRowHandle                        VisualScaleX;                                              // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        VisualScaleY;                                              // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        VisualScaleZ;                                              // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        HitboxScaleX;                                              // 0x0078(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        HitboxScaleY;                                              // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        HitboxScaleZ;                                              // 0x00C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 HitBoxStaticMesh;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugColor;                                                // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK26.K26SurvivorStatus
// 0x0048
struct FK26SurvivorStatus
{
	bool                                               IsPowerAttached;                                           // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAttachementAuraOn;                                       // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUFL[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastAttachmentTime;                                        // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastDetachmentTime;                                        // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastRemovalStarted;                                        // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastRemovalStopped;                                        // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastHitTime;                                               // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK26AttachedCrow*                            statusIndicator;                                           // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACamperPlayer*                               OwningSurvivor;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UK26KillerInstinctStatusEffect*              K26KillerInstinctStatusEffect;                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IdleCrowsBeingTouched;                                     // 0x0030(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                                KillerInstinctTimeHandler;                                 // 0x0040(0x0008) (Transient, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK26.ActorPairQueryCrowPair
// 0x0028
struct FActorPairQueryCrowPair
{
	unsigned char                                      UnknownData_JE6S[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TheTrapper.BearTrap.TrySetTrappedPlayer
struct ABearTrap_TrySetTrappedPlayer_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.SetTrappedPlayerSinceMoved
struct ABearTrap_SetTrappedPlayerSinceMoved_Params
{
	bool                                               didTrap;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.SetTrappedPlayer
struct ABearTrap_SetTrappedPlayer_Params
{
	class ADBDPlayer*                                  trappedPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.PlayMontage
struct ABearTrap_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnTrappedPlayerPickedUp
struct ABearTrap_OnTrappedPlayerPickedUp_Params
{
	class ADBDPlayer*                                  picker;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd
struct ABearTrap_OnTrapDetectionZoneOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin
struct ABearTrap_OnTrapDetectionZoneOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnSlasherSet
struct ABearTrap_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap
struct ABearTrap_OnSafetyZoneEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation
struct ABearTrap_OnLevelReadyToPlay_Implementation_Params
{
};

// Function TheTrapper.BearTrap.OnCollectUpdateStart
struct ABearTrap_OnCollectUpdateStart_Params
{
};

// Function TheTrapper.BearTrap.OnCollectUpdateEnd
struct ABearTrap_OnCollectUpdateEnd_Params
{
};

// Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
struct ABearTrap_IsTrapperOutOfSafetyZone_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.InitializeTrapSurvivorInteraction
struct ABearTrap_InitializeTrapSurvivorInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.InitializeTrapKillerInteraction
struct ABearTrap_InitializeTrapKillerInteraction_Params
{
	class UInteractionDefinition*                      Interaction;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.InitializeMainInteractor
struct ABearTrap_InitializeMainInteractor_Params
{
	class UInteractor*                                 Interactor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.HasTrappedPlayerSinceMoved
struct ABearTrap_HasTrappedPlayerSinceMoved_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.HasTrappedPlayer
struct ABearTrap_HasTrappedPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.GetTrappedPlayer
struct ABearTrap_GetTrappedPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.GetAnimInstance
struct ABearTrap_GetAnimInstance_Params
{
	class UBearTrapAnimInstance*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.GetAkAudioComponent
struct ABearTrap_GetAkAudioComponent_Params
{
	class UAkComponent*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped
struct ABearTrap_Cosmetic_OnPlayerTrapped_Params
{
	class ADBDPlayer*                                  trappedPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
struct UBearTrapAnimInstance_SetWasJustDisarmed_Params
{
	bool                                               wasJustDisarmed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
struct UBearTrapAnimInstance_SetIsTrapSet_Params
{
	bool                                               IsTrapSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
struct UBearTrapAnimInstance_SetIsBeingCollected_Params
{
	bool                                               isBeingCollected;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
struct UBearTrapAnimInstance_SetContainsSurvivor_Params
{
	bool                                               containsSurvivor;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap
struct UBearTrapKillerComponent_Server_TryDisarmTrap_Params
{
	class ABearTrap*                                   trapToDisarm;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap
struct UBearTrapKillerComponent_Multicast_DisarmTrap_Params
{
	class ABearTrap*                                   trapToDisarm;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheTrapper.Untrap.GetTrap
struct UUntrap_GetTrap_Params
{
	class ABearTrap*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

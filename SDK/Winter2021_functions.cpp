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
//		Offset -> 0x03F55940
//		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_StopControllingSnowman
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideInSnowmanInteraction::Multicast_StopControllingSnowman(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_StopControllingSnowman");

	UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55E10
//		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_StartControllingSnowman
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHideInSnowmanInteraction::Multicast_StartControllingSnowman(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_StartControllingSnowman");

	UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDA7A0
//		Name   -> Function Winter2021.HideInSnowmanInteraction.Multicast_OnAbleToRunAndExitSnowmanStart
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UHideInSnowmanInteraction::Multicast_OnAbleToRunAndExitSnowmanStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.HideInSnowmanInteraction.Multicast_OnAbleToRunAndExitSnowmanStart");

	UHideInSnowmanInteraction_Multicast_OnAbleToRunAndExitSnowmanStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDBA50
//		Name   -> Function Winter2021.Snowman.OnRep_SurvivorUsingSnowman
//		Flags  -> (Final, Native, Private)
void ASnowman::OnRep_SurvivorUsingSnowman()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SurvivorUsingSnowman");

	ASnowman_OnRep_SurvivorUsingSnowman_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDBA30
//		Name   -> Function Winter2021.Snowman.OnRep_SnowmanState
//		Flags  -> (Final, Native, Private)
void ASnowman::OnRep_SnowmanState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SnowmanState");

	ASnowman_OnRep_SnowmanState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDBA10
//		Name   -> Function Winter2021.Snowman.OnRep_SnowmanDestructionType
//		Flags  -> (Final, Native, Private)
void ASnowman::OnRep_SnowmanDestructionType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_SnowmanDestructionType");

	ASnowman_OnRep_SnowmanDestructionType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB9F0
//		Name   -> Function Winter2021.Snowman.OnRep_IsMoving
//		Flags  -> (Final, Native, Private)
void ASnowman::OnRep_IsMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.OnRep_IsMoving");

	ASnowman_OnRep_IsMoving_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB8E0
//		Name   -> Function Winter2021.Snowman.Multicast_StartSnowmanDestruction
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		Winter2021_ESnowmanDestructionType                 snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               unlockRequirementsSatisfiedForSurvivor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               unlockRequirementsSatisfiedForKiller                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_StartSnowmanDestruction(Winter2021_ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_StartSnowmanDestruction");

	ASnowman_Multicast_StartSnowmanDestruction_Params params {};
	params.snowmanDestructionType = snowmanDestructionType;
	params.unlockRequirementsSatisfiedForSurvivor = unlockRequirementsSatisfiedForSurvivor;
	params.unlockRequirementsSatisfiedForKiller = unlockRequirementsSatisfiedForKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB840
//		Name   -> Function Winter2021.Snowman.Multicast_SpawnSnowman
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		struct FSnowmanSpawnData                           spawnData                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void ASnowman::Multicast_SpawnSnowman(const struct FSnowmanSpawnData& spawnData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SpawnSnowman");

	ASnowman_Multicast_SpawnSnowman_Params params {};
	params.spawnData = spawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB7B0
//		Name   -> Function Winter2021.Snowman.Multicast_SetSnowmanMaterialVariant
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		int                                                materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_SetSnowmanMaterialVariant(int materialVariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SetSnowmanMaterialVariant");

	ASnowman_Multicast_SetSnowmanMaterialVariant_Params params {};
	params.materialVariantIndex = materialVariantIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB720
//		Name   -> Function Winter2021.Snowman.Multicast_SetSnowmanHiddenInGame
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		bool                                               IsHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_SetSnowmanHiddenInGame(bool IsHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_SetSnowmanHiddenInGame");

	ASnowman_Multicast_SetSnowmanHiddenInGame_Params params {};
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4A510
//		Name   -> Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor");

	ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB690
//		Name   -> Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor");

	ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDB5C0
//		Name   -> Function Winter2021.Snowman.Multicast_DrawDebugCollisionCheck
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, Const)
// Parameters:
//		struct FVector                                     BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              debugLifetime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Multicast_DrawDebugCollisionCheck(const struct FVector& BoxExtent, float debugLifetime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Multicast_DrawDebugCollisionCheck");

	ASnowman_Multicast_DrawDebugCollisionCheck_Params params {};
	params.BoxExtent = BoxExtent;
	params.debugLifetime = debugLifetime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_SetSnowmanMaterialVariant
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_SetSnowmanMaterialVariant(int materialVariantIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_SetSnowmanMaterialVariant");

	ASnowman_Cosmetic_SetSnowmanMaterialVariant_Params params {};
	params.materialVariantIndex = materialVariantIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor");

	ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor");

	ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanSpawned
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ASnowman::Cosmetic_OnSnowmanSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanSpawned");

	ASnowman_Cosmetic_OnSnowmanSpawned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit");

	ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty");

	ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Params params {};
	params.killerAttackingSnowman = killerAttackingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled");

	ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;
	params.killerAttackingSnowman = killerAttackingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor");

	ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Params params {};
	params.survivorUsingSnowman = survivorUsingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller");

	ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Params params {};
	params.killerAttackingSnowman = killerAttackingSnowman;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Winter2021.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Winter2021_ESnowmanDestructionType                 snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USnowmanAnimInstance::Cosmetic_OnSnowmanDestroyedEvent(Winter2021_ESnowmanDestructionType snowmanDestructionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent");

	USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Params params {};
	params.snowmanDestructionType = snowmanDestructionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FDC110
//		Name   -> Function Winter2021.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void USnowmanSpawnPlacementStrategy::Authority_OnIntroCompletedOrLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay");

	USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
//		Flags  -> (Final, Exec, Native, Private)
// Parameters:
//		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWinter2021EventComponent::DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021VisualizeCalculatedSpawnData");

	UWinter2021EventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Params params {};
	params.numberOfSeconds = numberOfSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
//		Flags  -> (Final, Exec, Native, Private)
// Parameters:
//		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWinter2021EventComponent::DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks");

	UWinter2021EventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Params params {};
	params.numberOfSeconds = numberOfSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021RecalculateSpawnPoints
//		Flags  -> (Final, Exec, Native, Private)
void UWinter2021EventComponent::DBD_Winter2021RecalculateSpawnPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021RecalculateSpawnPoints");

	UWinter2021EventComponent_DBD_Winter2021RecalculateSpawnPoints_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function Winter2021.Winter2021EventComponent.DBD_Winter2021ForceRespawnAllSnowmen
//		Flags  -> (Final, Exec, Native, Private)
void UWinter2021EventComponent::DBD_Winter2021ForceRespawnAllSnowmen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021EventComponent.DBD_Winter2021ForceRespawnAllSnowmen");

	UWinter2021EventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function Winter2021.Winter2021PlayerComponent.Client_UnlockCosmetic
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UWinter2021PlayerComponent::Client_UnlockCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Winter2021.Winter2021PlayerComponent.Client_UnlockCosmetic");

	UWinter2021PlayerComponent_Client_UnlockCosmetic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Offset -> 0x03F95C70
//		Name   -> Function TheTrapper.BearTrap.TrySetTrappedPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::TrySetTrappedPlayer(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.TrySetTrappedPlayer");

	ABearTrap_TrySetTrappedPlayer_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95BE0
//		Name   -> Function TheTrapper.BearTrap.SetTrappedPlayerSinceMoved
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               didTrap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::SetTrappedPlayerSinceMoved(bool didTrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.SetTrappedPlayerSinceMoved");

	ABearTrap_SetTrappedPlayerSinceMoved_Params params {};
	params.didTrap = didTrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95B60
//		Name   -> Function TheTrapper.BearTrap.SetTrappedPlayer
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		class ADBDPlayer*                                  trappedPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::SetTrappedPlayer(class ADBDPlayer* trappedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.SetTrappedPlayer");

	ABearTrap_SetTrappedPlayer_Params params {};
	params.trappedPlayer = trappedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95AE0
//		Name   -> Function TheTrapper.BearTrap.PlayMontage
//		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::PlayMontage(class UAnimMontage* Montage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.PlayMontage");

	ABearTrap_PlayMontage_Params params {};
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95A60
//		Name   -> Function TheTrapper.BearTrap.OnTrappedPlayerPickedUp
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::OnTrappedPlayerPickedUp(class ADBDPlayer* picker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnTrappedPlayerPickedUp");

	ABearTrap_OnTrappedPlayerPickedUp_Params params {};
	params.picker = picker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95920
//		Name   -> Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::OnTrapDetectionZoneOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapEnd");

	ABearTrap_OnTrapDetectionZoneOverlapEnd_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95710
//		Name   -> Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ABearTrap::OnTrapDetectionZoneOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnTrapDetectionZoneOverlapBegin");

	ABearTrap_OnTrapDetectionZoneOverlapBegin_Params params {};
	params.OverlappedComponent = OverlappedComponent;
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
//		Offset -> 0x03F95690
//		Name   -> Function TheTrapper.BearTrap.OnSlasherSet
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnSlasherSet");

	ABearTrap_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95550
//		Name   -> Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::OnSafetyZoneEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnSafetyZoneEndOverlap");

	ABearTrap_OnSafetyZoneEndOverlap_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95530
//		Name   -> Function TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation
//		Flags  -> (Final, Native, Private)
void ABearTrap::OnLevelReadyToPlay_Implementation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnLevelReadyToPlay_Implementation");

	ABearTrap_OnLevelReadyToPlay_Implementation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95510
//		Name   -> Function TheTrapper.BearTrap.OnCollectUpdateStart
//		Flags  -> (Final, Native, Private)
void ABearTrap::OnCollectUpdateStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnCollectUpdateStart");

	ABearTrap_OnCollectUpdateStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F954F0
//		Name   -> Function TheTrapper.BearTrap.OnCollectUpdateEnd
//		Flags  -> (Final, Native, Private)
void ABearTrap::OnCollectUpdateEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.OnCollectUpdateEnd");

	ABearTrap_OnCollectUpdateEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F954C0
//		Name   -> Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABearTrap::IsTrapperOutOfSafetyZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.IsTrapperOutOfSafetyZone");

	ABearTrap_IsTrapperOutOfSafetyZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F95440
//		Name   -> Function TheTrapper.BearTrap.InitializeTrapSurvivorInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UInteractionDefinition*                      Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::InitializeTrapSurvivorInteraction(class UInteractionDefinition* Interaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.InitializeTrapSurvivorInteraction");

	ABearTrap_InitializeTrapSurvivorInteraction_Params params {};
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F953C0
//		Name   -> Function TheTrapper.BearTrap.InitializeTrapKillerInteraction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UInteractionDefinition*                      Interaction                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::InitializeTrapKillerInteraction(class UInteractionDefinition* Interaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.InitializeTrapKillerInteraction");

	ABearTrap_InitializeTrapKillerInteraction_Params params {};
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95340
//		Name   -> Function TheTrapper.BearTrap.InitializeMainInteractor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UInteractor*                                 Interactor                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::InitializeMainInteractor(class UInteractor* Interactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.InitializeMainInteractor");

	ABearTrap_InitializeMainInteractor_Params params {};
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95310
//		Name   -> Function TheTrapper.BearTrap.HasTrappedPlayerSinceMoved
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABearTrap::HasTrappedPlayerSinceMoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.HasTrappedPlayerSinceMoved");

	ABearTrap_HasTrappedPlayerSinceMoved_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F952E0
//		Name   -> Function TheTrapper.BearTrap.HasTrappedPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABearTrap::HasTrappedPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.HasTrappedPlayer");

	ABearTrap_HasTrappedPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F952B0
//		Name   -> Function TheTrapper.BearTrap.GetTrappedPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDPlayer* ABearTrap::GetTrappedPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.GetTrappedPlayer");

	ABearTrap_GetTrappedPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F95280
//		Name   -> Function TheTrapper.BearTrap.GetAnimInstance
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UBearTrapAnimInstance*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBearTrapAnimInstance* ABearTrap::GetAnimInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.GetAnimInstance");

	ABearTrap_GetAnimInstance_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTrapper.BearTrap.GetAkAudioComponent
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UAkComponent*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* ABearTrap::GetAkAudioComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.GetAkAudioComponent");

	ABearTrap_GetAkAudioComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  trappedPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABearTrap::Cosmetic_OnPlayerTrapped(class ADBDPlayer* trappedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrap.Cosmetic_OnPlayerTrapped");

	ABearTrap_Cosmetic_OnPlayerTrapped_Params params {};
	params.trappedPlayer = trappedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F960F0
//		Name   -> Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               wasJustDisarmed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetWasJustDisarmed(bool wasJustDisarmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetWasJustDisarmed");

	UBearTrapAnimInstance_SetWasJustDisarmed_Params params {};
	params.wasJustDisarmed = wasJustDisarmed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F96060
//		Name   -> Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsTrapSet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetIsTrapSet(bool IsTrapSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetIsTrapSet");

	UBearTrapAnimInstance_SetIsTrapSet_Params params {};
	params.IsTrapSet = IsTrapSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95FD0
//		Name   -> Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isBeingCollected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetIsBeingCollected(bool isBeingCollected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetIsBeingCollected");

	UBearTrapAnimInstance_SetIsBeingCollected_Params params {};
	params.isBeingCollected = isBeingCollected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F95F40
//		Name   -> Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               containsSurvivor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapAnimInstance::SetContainsSurvivor(bool containsSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapAnimInstance.SetContainsSurvivor");

	UBearTrapAnimInstance_SetContainsSurvivor_Params params {};
	params.containsSurvivor = containsSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C5C8E0
//		Name   -> Function TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
//		class ABearTrap*                                   trapToDisarm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapKillerComponent::Server_TryDisarmTrap(class ABearTrap* trapToDisarm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapKillerComponent.Server_TryDisarmTrap");

	UBearTrapKillerComponent_Server_TryDisarmTrap_Params params {};
	params.trapToDisarm = trapToDisarm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CF8740
//		Name   -> Function TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABearTrap*                                   trapToDisarm                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBearTrapKillerComponent::Multicast_DisarmTrap(class ABearTrap* trapToDisarm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.BearTrapKillerComponent.Multicast_DisarmTrap");

	UBearTrapKillerComponent_Multicast_DisarmTrap_Params params {};
	params.trapToDisarm = trapToDisarm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F97970
//		Name   -> Function TheTrapper.Untrap.GetTrap
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ABearTrap*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABearTrap* UUntrap::GetTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTrapper.Untrap.GetTrap");

	UUntrap_GetTrap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

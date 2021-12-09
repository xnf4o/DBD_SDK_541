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
//		Offset -> 0x03FC6D30
//		Name   -> Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAddon_K22Power_18::Authority_OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.Addon_K22Power_18.Authority_OnTwinSet");

	UAddon_K22Power_18_Authority_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessPlayer::Cosmetic_OnPossessStart(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessStart");

	UPossessPlayer_Cosmetic_OnPossessStart_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessPlayer::Cosmetic_OnPossessCancelled(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessPlayer.Cosmetic_OnPossessCancelled");

	UPossessPlayer_Cosmetic_OnPossessCancelled_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCBA0
//		Name   -> Function TheTwins.PossessTheConjoinedTwin.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessTheConjoinedTwin::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnTwinSet");

	UPossessTheConjoinedTwin_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC850
//		Name   -> Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessTheConjoinedTwin::OnPowerCollected(class ADBDPlayer* collector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessTheConjoinedTwin.OnPowerCollected");

	UPossessTheConjoinedTwin_OnPowerCollected_Params params {};
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6FA0
//		Name   -> Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UBeingPossessedInteraction::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.BeingPossessedInteraction.OnLevelReadyToPlay");

	UBeingPossessedInteraction_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Ready                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChargeTwinJumpInteraction::Cosmetic_OnJumpReadyChanged(class ADBDPlayer* twin, bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ChargeTwinJumpInteraction.Cosmetic_OnJumpReadyChanged");

	UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Params params {};
	params.twin = twin;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC71B0
//		Name   -> Function TheTwins.ConjoinedTwin.Server_SendAttackInput
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		bool                                               Pressed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AConjoinedTwin::Server_SendAttackInput(bool Pressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Server_SendAttackInput");

	AConjoinedTwin_Server_SendAttackInput_Params params {};
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6E70
//		Name   -> Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AConjoinedTwin::OnFinishedPlayingEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.OnFinishedPlayingEvent");

	AConjoinedTwin_OnFinishedPlayingEvent_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               onGroundAndUncontrolled                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AConjoinedTwin::Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Cosmetic_OnOnGroundUncontrolledChanged");

	AConjoinedTwin_Cosmetic_OnOnGroundUncontrolledChanged_Params params {};
	params.onGroundAndUncontrolled = onGroundAndUncontrolled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6B90
//		Name   -> Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AConjoinedTwin::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwin.Authority_OnFirecrackerInRangeBegin");

	AConjoinedTwin_Authority_OnFirecrackerInRangeBegin_Params params {};
	params.effectData = effectData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6E10
//		Name   -> Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AConjoinedTwin*                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AConjoinedTwin* UConjoinedTwinAnimInstance::GetOwningConjoinedTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ConjoinedTwinAnimInstance.GetOwningConjoinedTwin");

	UConjoinedTwinAnimInstance_GetOwningConjoinedTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UDeception::OnOwningPlayerFakedEnteringLockerCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.Deception.OnOwningPlayerFakedEnteringLockerCosmetic");

	UDeception_OnOwningPlayerFakedEnteringLockerCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.Hoarder.Local_ThrowBubbleIndicator
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TheTwins_EPerkInteractionObjectType                camperInteractionType                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      objectActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               interactingCamperPlayer                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHoarder::Local_ThrowBubbleIndicator(TheTwins_EPerkInteractionObjectType camperInteractionType, class AActor* objectActor, class ACamperPlayer* interactingCamperPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.Hoarder.Local_ThrowBubbleIndicator");

	UHoarder_Local_ThrowBubbleIndicator_Params params {};
	params.camperInteractionType = camperInteractionType;
	params.objectActor = objectActor;
	params.interactingCamperPlayer = interactingCamperPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6DB0
//		Name   -> Function TheTwins.Hoarder.GetBubbleIndicatorLifetime
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UHoarder::GetBubbleIndicatorLifetime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.Hoarder.GetBubbleIndicatorLifetime");

	UHoarder_GetBubbleIndicatorLifetime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03FC6FC0
//		Name   -> Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UIsTwinRecallReady::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.IsTwinRecallReady.OnLevelReadyToPlay");

	UIsTwinRecallReady_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7020
//		Name   -> Function TheTwins.K22Power.OnRep_ConjoinedTwin
//		Flags  -> (Final, Native, Private)
void AK22Power::OnRep_ConjoinedTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnRep_ConjoinedTwin");

	AK22Power_OnRep_ConjoinedTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7000
//		Name   -> Function TheTwins.K22Power.OnPowerChargeEmpty
//		Flags  -> (Final, Native, Private)
void AK22Power::OnPowerChargeEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnPowerChargeEmpty");

	AK22Power_OnPowerChargeEmpty_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6F80
//		Name   -> Function TheTwins.K22Power.OnFirstAttachmentToSister
//		Flags  -> (Final, Native, Private)
void AK22Power::OnFirstAttachmentToSister()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.OnFirstAttachmentToSister");

	AK22Power_OnFirstAttachmentToSister_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6DE0
//		Name   -> Function TheTwins.K22Power.GetConjoinedTwin
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AConjoinedTwin*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AConjoinedTwin* AK22Power::GetConjoinedTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.GetConjoinedTwin");

	AK22Power_GetConjoinedTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03FC6C30
//		Name   -> Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK22Power::Authority_OnPossessTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnPossessTwinChargePercentChanged");

	AK22Power_Authority_OnPossessTwinChargePercentChanged_Params params {};
	params.ChargeableComponent = ChargeableComponent;
	params.PercentCompletionChange = PercentCompletionChange;
	params.TotalPercentComplete = TotalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6A90
//		Name   -> Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK22Power::Authority_OnDestroyTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22Power.Authority_OnDestroyTwinChargePercentChanged");

	AK22Power_Authority_OnDestroyTwinChargePercentChanged_Params params {};
	params.ChargeableComponent = ChargeableComponent;
	params.PercentCompletionChange = PercentCompletionChange;
	params.TotalPercentComplete = TotalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7060
//		Name   -> Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK22PowerChargePresentationItemProgressComponent::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.K22PowerChargePresentationItemProgressComponent.OnTwinSet");

	UK22PowerChargePresentationItemProgressComponent_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7270
//		Name   -> Function TheTwins.PossessionComponent.Server_StartPossessionOf
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		class ADBDPlayer*                                  playerToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               shouldStartBeingPossessedInteraction                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Server_StartPossessionOf(class ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_StartPossessionOf");

	UPossessionComponent_Server_StartPossessionOf_Params params {};
	params.playerToPossess = playerToPossess;
	params.shouldStartBeingPossessedInteraction = shouldStartBeingPossessedInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7160
//		Name   -> Function TheTwins.PossessionComponent.Server_NotifyPossessionDone
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UPossessionComponent::Server_NotifyPossessionDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Server_NotifyPossessionDone");

	UPossessionComponent_Server_NotifyPossessionDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6FE0
//		Name   -> Function TheTwins.PossessionComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UPossessionComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.OnLevelReadyToPlay");

	UPossessionComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F559D0
//		Name   -> Function TheTwins.PossessionComponent.Multicast_StartPossessionOf
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADBDPlayer*                                  playerToPossess                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Multicast_StartPossessionOf(class ADBDPlayer* playerToPossess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_StartPossessionOf");

	UPossessionComponent_Multicast_StartPossessionOf_Params params {};
	params.playerToPossess = playerToPossess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UPossessionComponent::Multicast_NotifyPossessionDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Multicast_NotifyPossessionDone");

	UPossessionComponent_Multicast_NotifyPossessionDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC6E40
//		Name   -> Function TheTwins.PossessionComponent.IsPossessed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPossessionComponent::IsPossessed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsPossessed");

	UPossessionComponent_IsPossessed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D6F750
//		Name   -> Function TheTwins.PossessionComponent.IsDormant
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPossessionComponent::IsDormant()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.IsDormant");

	UPossessionComponent_IsDormant_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::CosmeticLocal_OnUncontrolled(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnUncontrolled");

	UPossessionComponent_CosmeticLocal_OnUncontrolled_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::CosmeticLocal_OnControlled(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.CosmeticLocal_OnControlled");

	UPossessionComponent_CosmeticLocal_OnControlled_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsControlled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPossessionComponent::Cosmetic_OnControlledChanged(class ADBDPlayer* Player, bool IsControlled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Cosmetic_OnControlledChanged");

	UPossessionComponent_Cosmetic_OnControlledChanged_Params params {};
	params.Player = Player;
	params.IsControlled = IsControlled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C5DCC0
//		Name   -> Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UPossessionComponent::Client_StartStateMachineDriverChangeProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessionComponent.Client_StartStateMachineDriverChangeProcess");

	UPossessionComponent_Client_StartStateMachineDriverChangeProcess_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC7040
//		Name   -> Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors
//		Flags  -> (Final, Native, Private)
void UKillerPossessionComponent::OnRep_ShouldDeactivateCollisionsWithSurvivors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.KillerPossessionComponent.OnRep_ShouldDeactivateCollisionsWithSurvivors");

	UKillerPossessionComponent_OnRep_ShouldDeactivateCollisionsWithSurvivors_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UPossessNegationEffectComponent::PlayCantPossessSound__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction TheTwins.PossessNegationEffectComponent.PlayCantPossessSound__DelegateSignature");

	UPossessNegationEffectComponent_PlayCantPossessSound__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay
//		Flags  -> (Native, Protected)
void UPossessNegationEffectComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PossessNegationEffectComponent.OnLevelReadyToPlay");

	UPossessNegationEffectComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FC70E0
//		Name   -> Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKillerPossessNegationEffectComponent::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.KillerPossessNegationEffectComponent.OnTwinSet");

	UKillerPossessNegationEffectComponent_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCC20
//		Name   -> Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPushTwinOnLockerInteraction::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnTwinSet");

	UPushTwinOnLockerInteraction_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCB40
//		Name   -> Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable
//		Flags  -> (Final, Native, Private)
void UPushTwinOnLockerInteraction::OnRep_PushTwinOnLockerChargeable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.OnRep_PushTwinOnLockerChargeable");

	UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBBD0
//		Name   -> Function TheTwins.PushTwinOnLockerInteraction.Authority_OnSurvivorInLockerChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  oldSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  newSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPushTwinOnLockerInteraction::Authority_OnSurvivorInLockerChanged(class ADBDPlayer* oldSurvivor, class ADBDPlayer* newSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.PushTwinOnLockerInteraction.Authority_OnSurvivorInLockerChanged");

	UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Params params {};
	params.oldSurvivor = oldSurvivor;
	params.newSurvivor = newSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCCA0
//		Name   -> Function TheTwins.RecallTwin.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URecallTwin::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.RecallTwin.OnTwinSet");

	URecallTwin_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCD20
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnTwinSet");

	UReleaseConjoinedTwin_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCB60
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd
//		Flags  -> (Final, Native, Private)
void UReleaseConjoinedTwin::OnRep_ReleaseAnimationWentToTheEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnRep_ReleaseAnimationWentToTheEnd");

	UReleaseConjoinedTwin_OnRep_ReleaseAnimationWentToTheEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC8D0
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnPowerCollected(class ADBDPlayer* collector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnPowerCollected");

	UReleaseConjoinedTwin_OnPowerCollected_Params params {};
	params.collector = collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC5E0
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::OnKillerStunned(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.OnKillerStunned");

	UReleaseConjoinedTwin_OnKillerStunned_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdateStart(class ADBDPlayer* sister, class AConjoinedTwin* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdateStart");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdateStart_Params params {};
	params.sister = sister;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseTwinInteractionUpdate(class ADBDPlayer* sister, class AConjoinedTwin* brother, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseTwinInteractionUpdate");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseTwinInteractionUpdate_Params params {};
	params.sister = sister;
	params.brother = brother;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseChargeComplete(class ADBDPlayer* sister, class AConjoinedTwin* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseChargeComplete");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseChargeComplete_Params params {};
	params.sister = sister;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UReleaseConjoinedTwin::Cosmetic_OnReleaseCancelled(class ADBDPlayer* sister, class AConjoinedTwin* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.ReleaseConjoinedTwin.Cosmetic_OnReleaseCancelled");

	UReleaseConjoinedTwin_Cosmetic_OnReleaseCancelled_Params params {};
	params.sister = sister;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC950
//		Name   -> Function TheTwins.RemoveTwin.OnRemoveMontageEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  destroyingPlayer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URemoveTwin::OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted, class ADBDPlayer* destroyingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.RemoveTwin.OnRemoveMontageEnd");

	URemoveTwin_OnRemoveMontageEnd_Params params {};
	params.Montage = Montage;
	params.interrupted = interrupted;
	params.destroyingPlayer = destroyingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCDA0
//		Name   -> Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USisterBlindFlashlightableLightingStrategy::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.SisterBlindFlashlightableLightingStrategy.OnTwinSet");

	USisterBlindFlashlightableLightingStrategy_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CF8740
//		Name   -> Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class UTwinPossessionComponent*                    TwinPossessionComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTheTwinsCheatComponent::Multicast_TrySendThePlayerBackInKiller(class UTwinPossessionComponent* TwinPossessionComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.Multicast_TrySendThePlayerBackInKiller");

	UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Params params {};
	params.TwinPossessionComponent = TwinPossessionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin
//		Flags  -> (Final, Exec, Native, Public)
void UTheTwinsCheatComponent::DBD_TwinDestroyTheTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TheTwinsCheatComponent.DBD_TwinDestroyTheTwin");

	UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCB9B0
//		Name   -> Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAOELingeringStatusEffect::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAOELingeringStatusEffect.Authority_OnInRangeChanged");

	UTwinAOELingeringStatusEffect_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCAC0
//		Name   -> Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  oldAttachedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnRep_AttachedPlayer(class ADBDPlayer* oldAttachedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnRep_AttachedPlayer");

	UTwinAttachmentComponent_OnRep_AttachedPlayer_Params params {};
	params.oldAttachedPlayer = oldAttachedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC710
//		Name   -> Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnMoriMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnMoriMontageEnd");

	UTwinAttachmentComponent_OnMoriMontageEnd_Params params {};
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC6F0
//		Name   -> Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UTwinAttachmentComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnLevelReadyToPlay");

	UTwinAttachmentComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC520
//		Name   -> Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperImmobilizeState              newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnImmobilizedStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnImmobilizedStateChanged");

	UTwinAttachmentComponent_OnImmobilizedStateChanged_Params params {};
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC320
//		Name   -> Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  oldState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::OnAttachedSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.OnAttachedSurvivorDamageStateChanged");

	UTwinAttachmentComponent_OnAttachedSurvivorDamageStateChanged_Params params {};
	params.oldState = oldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UTwinAttachmentComponent::Multicast_QuickDestroyTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Multicast_QuickDestroyTwin");

	UTwinAttachmentComponent_Multicast_QuickDestroyTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBDF0
//		Name   -> Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinAttachmentComponent::IsAttachedToSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSurvivor");

	UTwinAttachmentComponent_IsAttachedToSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03FCBDC0
//		Name   -> Function TheTwins.TwinAttachmentComponent.IsAttachedToSister
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinAttachmentComponent::IsAttachedToSister()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.IsAttachedToSister");

	UTwinAttachmentComponent_IsAttachedToSister_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSurvivor");

	UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSurvivor_Params params {};
	params.survivor = survivor;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinDetachedFromSister(class ADBDPlayer* sister, class ADBDPlayer* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinDetachedFromSister");

	UTwinAttachmentComponent_Cosmetic_OnTwinDetachedFromSister_Params params {};
	params.sister = sister;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSurvivor");

	UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSurvivor_Params params {};
	params.survivor = survivor;
	params.brother = brother;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  sister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  brother                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isFirstAttachment                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Cosmetic_OnTwinAttachedToSister(class ADBDPlayer* sister, class ADBDPlayer* brother, bool isFirstAttachment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Cosmetic_OnTwinAttachedToSister");

	UTwinAttachmentComponent_Cosmetic_OnTwinAttachedToSister_Params params {};
	params.sister = sister;
	params.brother = brother;
	params.isFirstAttachment = isFirstAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBAD0
//		Name   -> Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinAttachmentComponent::Authority_OnRemoveTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinAttachmentComponent.Authority_OnRemoveTwinChargePercentChanged");

	UTwinAttachmentComponent_Authority_OnRemoveTwinChargePercentChanged_Params params {};
	params.ChargeableComponent = ChargeableComponent;
	params.PercentCompletionChange = PercentCompletionChange;
	params.TotalPercentComplete = TotalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBCB0
//		Name   -> Function TheTwins.TwinBaseAddon.Authority_OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinBaseAddon::Authority_OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinBaseAddon.Authority_OnTwinSet");

	UTwinBaseAddon_Authority_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBA40
//		Name   -> Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinBaseKillerInstinctEffect::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinBaseKillerInstinctEffect.Authority_OnInRangeChanged");

	UTwinBaseKillerInstinctEffect_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::OnTwinQuickDestroy(class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnTwinQuickDestroy");

	UTwinDestructionComponent_OnTwinQuickDestroy_Params params {};
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC3E0
//		Name   -> Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 Montage                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::OnDyingMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.OnDyingMontageEnd");

	UTwinDestructionComponent_OnDyingMontageEnd_Params params {};
	params.Montage = Montage;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromSurvivorRemove(class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromSurvivorRemove");

	UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Params params {};
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromKick(class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Cosmetic_OnTwinDestroyedFromKick");

	UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Params params {};
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBC90
//		Name   -> Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
void UTwinDestructionComponent::Authority_OnTwinQuickDestroyOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinDestructionComponent.Authority_OnTwinQuickDestroyOver");

	UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CD5270
//		Name   -> Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinHuskStateComponent::IsDeadFromSurvivorBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinHuskStateComponent.IsDeadFromSurvivorBack");

	UTwinHuskStateComponent_IsDeadFromSurvivorBack_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03FCCE70
//		Name   -> Function TheTwins.TwinJumpAttack.Server_StopJump
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UTwinJumpAttack::Server_StopJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_StopJump");

	UTwinJumpAttack_Server_StopJump_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCE20
//		Name   -> Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UTwinJumpAttack::Server_OnJumpStartTwin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Server_OnJumpStartTwin");

	UTwinJumpAttack_Server_OnJumpStartTwin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCCB80
//		Name   -> Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType
//		Flags  -> (Final, Native, Private)
void UTwinJumpAttack::OnRep_ShouldTwinHaveJumpObjectType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.OnRep_ShouldTwinHaveJumpObjectType");

	UTwinJumpAttack_OnRep_ShouldTwinHaveJumpObjectType_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC290
//		Name   -> Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		bool                                               isForbiddenLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_SetIsForbiddenLandingLocation");

	UTwinJumpAttack_Multicast_SetIsForbiddenLandingLocation_Params params {};
	params.isForbiddenLocation = isForbiddenLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D6F9B0
//		Name   -> Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UTwinJumpAttack::Multicast_DestroyTwinOnWrongLanding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_DestroyTwinOnWrongLanding");

	UTwinJumpAttack_Multicast_DestroyTwinOnWrongLanding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCC200
//		Name   -> Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ADBDPlayer*                                  survivorToAttachTo                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Multicast_AttachToSurvivor(class ADBDPlayer* survivorToAttachTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Multicast_AttachToSurvivor");

	UTwinJumpAttack_Multicast_AttachToSurvivor_Params params {};
	params.survivorToAttachTo = survivorToAttachTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpStarted(class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpStarted");

	UTwinJumpAttack_Cosmetic_OnJumpStarted_Params params {};
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed
//		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPhysicalMaterial*                           PhysicalMaterial                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpObstructed(class AConjoinedTwin* owningTwin, class UPhysicalMaterial* PhysicalMaterial, const struct FVector& Position, const struct FVector& Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpObstructed");

	UTwinJumpAttack_Cosmetic_OnJumpObstructed_Params params {};
	params.owningTwin = owningTwin;
	params.PhysicalMaterial = PhysicalMaterial;
	params.Position = Position;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpLanded(class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpLanded");

	UTwinJumpAttack_Cosmetic_OnJumpLanded_Params params {};
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               isInJumpCooldown                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              owningTwin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, class AConjoinedTwin* owningTwin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnJumpCooldownChanged");

	UTwinJumpAttack_Cosmetic_OnJumpCooldownChanged_Params params {};
	params.isInJumpCooldown = isInJumpCooldown;
	params.owningTwin = owningTwin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               isForbiddenLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Cosmetic_OnIsForbiddenLandingLocationChanged");

	UTwinJumpAttack_Cosmetic_OnIsForbiddenLandingLocationChanged_Params params {};
	params.isForbiddenLocation = isForbiddenLocation;
	params.twin = twin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBD30
//		Name   -> Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
//		bool                                               foundPath                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpAttack::Client_Debug_PrintFinalDecisionOnScreen(bool foundPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttack.Client_Debug_PrintFinalDecisionOnScreen");

	UTwinJumpAttack_Client_Debug_PrintFinalDecisionOnScreen_Params params {};
	params.foundPath = foundPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBFF0
//		Name   -> Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UTwinJumpAttackOpenSubstate::Local_OnTwinOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinOverlapEnter");

	UTwinJumpAttackOpenSubstate_Local_OnTwinOverlapEnter_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCBE20
//		Name   -> Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit
//		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UTwinJumpAttackOpenSubstate::Local_OnTwinCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAttackOpenSubstate.Local_OnTwinCapsuleHit");

	UTwinJumpAttackOpenSubstate_Local_OnTwinCapsuleHit_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinUnmuted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinUnmuted");

	UTwinJumpAudioMutedEffect_Cosmetic_OnTwinUnmuted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UTwinJumpAudioMutedEffect::Cosmetic_OnTwinMuted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpAudioMutedEffect.Cosmetic_OnTwinMuted");

	UTwinJumpAudioMutedEffect_Cosmetic_OnTwinMuted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE460
//		Name   -> Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick
//		Flags  -> (Final, Native, Private, HasDefaults)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinJumpTargetVisibleEffect::OnJumpTargetTick(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnJumpTargetTick");

	UTwinJumpTargetVisibleEffect_OnJumpTargetTick_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE440
//		Name   -> Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition
//		Flags  -> (Final, Native, Private)
void UTwinJumpTargetVisibleEffect::OnHideTargetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinJumpTargetVisibleEffect.OnHideTargetPosition");

	UTwinJumpTargetVisibleEffect_OnHideTargetPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE860
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnSurvivorInLockerChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  oldSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  newSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnSurvivorInLockerChanged(class ADBDPlayer* oldSurvivor, class ADBDPlayer* newSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnSurvivorInLockerChanged");

	UTwinLockerBlockerComponent_OnSurvivorInLockerChanged_Params params {};
	params.oldSurvivor = oldSurvivor;
	params.newSurvivor = newSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE760
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStopped");

	UTwinLockerBlockerComponent_OnPushedMontageStopped_Params params {};
	params.montageDescriptor = montageDescriptor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE630
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
//		float                                              Rate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float Rate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageStarted");

	UTwinLockerBlockerComponent_OnPushedMontageStarted_Params params {};
	params.montageDescriptor = montageDescriptor;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE4F0
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FAnimationMontageDescriptor                 montageDescriptor                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               interrupted                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.OnPushedMontageEnded");

	UTwinLockerBlockerComponent_OnPushedMontageEnded_Params params {};
	params.montageDescriptor = montageDescriptor;
	params.interrupted = interrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4F4D0
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwinLockerBlockerComponent::IsTwinAttachedToLocker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.IsTwinAttachedToLocker");

	UTwinLockerBlockerComponent_IsTwinAttachedToLocker_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               isOnLocker                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinLockerBlockerComponent::Cosmetic_OnTwinOnLockerChanged(bool isOnLocker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Cosmetic_OnTwinOnLockerChanged");

	UTwinLockerBlockerComponent_Cosmetic_OnTwinOnLockerChanged_Params params {};
	params.isOnLocker = isOnLocker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE3A0
//		Name   -> Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UTwinLockerBlockerComponent::Authority_OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinLockerBlockerComponent.Authority_OnLevelReadyToPlay");

	UTwinLockerBlockerComponent_Authority_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03571060
//		Name   -> Function TheTwins.TwinSubjectProvider.OnTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AConjoinedTwin*                              twin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinSubjectProvider::OnTwinSet(class AConjoinedTwin* twin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.OnTwinSet");

	UTwinSubjectProvider_OnTwinSet_Params params {};
	params.twin = twin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03FCE3C0
//		Name   -> Function TheTwins.TwinSubjectProvider.ListenToTwinSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwinSubjectProvider::ListenToTwinSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheTwins.TwinSubjectProvider.ListenToTwinSet");

	UTwinSubjectProvider_ListenToTwinSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

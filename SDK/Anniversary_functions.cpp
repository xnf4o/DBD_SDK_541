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
//		Offset -> 0x033E4240
//		Name   -> Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void ACrownPillarInteractable::Local_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Local_OnIntroCompleted");

	ACrownPillarInteractable_Local_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x033E4210
//		Name   -> Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ACrownPillarInteractable::IsLocallyObservedPlayerEquippedWithAnniversaryOffering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.IsLocallyObservedPlayerEquippedWithAnniversaryOffering");

	ACrownPillarInteractable_IsLocallyObservedPlayerEquippedWithAnniversaryOffering_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ACrownPillarInteractable::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStoppedInteracting");

	ACrownPillarInteractable_Cosmetic_OnStoppedInteracting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACrownPillarInteractable::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnStartedInteracting");

	ACrownPillarInteractable_Cosmetic_OnStartedInteracting_Params params {};
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ACrownPillarInteractable::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCompleted");

	ACrownPillarInteractable_Cosmetic_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ACrownPillarInteractable::Cosmetic_OnInteractionCancelled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPillarInteractable.Cosmetic_OnInteractionCancelled");

	ACrownPillarInteractable_Cosmetic_OnInteractionCancelled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x033E4710
//		Name   -> Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame
//		Flags  -> (Final, Native, Private)
void UCrownPlayerComponent::OnRep_hasInteractedWithCrownPillarThisGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.OnRep_hasInteractedWithCrownPillarThisGame");

	UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCrownPlayerComponent::Cosmetic_OnInteractedWithCrownPillar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary.CrownPlayerComponent.Cosmetic_OnInteractedWithCrownPillar");

	UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

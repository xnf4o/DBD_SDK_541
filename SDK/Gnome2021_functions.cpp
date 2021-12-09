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
//		Offset -> 0x04330860
//		Name   -> Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AGnome::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStoppedInteracting");

	AGnome_Cosmetic_OnStoppedInteracting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGnome::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnStartedInteracting");

	AGnome_Cosmetic_OnStartedInteracting_Params params {};
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGnome::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gnome2021.Gnome.Cosmetic_OnInteractionCompleted");

	AGnome_Cosmetic_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DC2500
//		Name   -> Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGnomeEventComponent::Authority_OnEndGameStarted(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Gnome2021.GnomeEventComponent.Authority_OnEndGameStarted");

	UGnomeEventComponent_Authority_OnEndGameStarted_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

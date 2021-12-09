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
//		Name   -> Function Halloween2021.Pumpkin.OnInteractionCompleted
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APumpkin::OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Halloween2021.Pumpkin.OnInteractionCompleted");

	APumpkin_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void APumpkin::Cosmetic_OnStoppedInteracting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Halloween2021.Pumpkin.Cosmetic_OnStoppedInteracting");

	APumpkin_Cosmetic_OnStoppedInteracting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APumpkin::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Halloween2021.Pumpkin.Cosmetic_OnStartedInteracting");

	APumpkin_Cosmetic_OnStartedInteracting_Params params {};
	params.interactingPlayer = interactingPlayer;
	params.interactionDuration = interactionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void APumpkin::Cosmetic_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Halloween2021.Pumpkin.Cosmetic_OnIntroCompleted");

	APumpkin_Cosmetic_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APumpkin::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Halloween2021.Pumpkin.Cosmetic_OnInteractionCompleted");

	APumpkin_Cosmetic_OnInteractionCompleted_Params params {};
	params.interactingPlayer = interactingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

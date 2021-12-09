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
//		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden
//		Flags  -> (Event, Protected, BlueprintEvent)
void ARespawnableInteractable::OnUnhidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden");

	ARespawnableInteractable_OnUnhidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE9C40
//		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden
//		Flags  -> (Final, Native, Private)
void ARespawnableInteractable::OnRep_IsHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden");

	ARespawnableInteractable_OnRep_IsHidden_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnHidden
//		Flags  -> (Event, Protected, BlueprintEvent)
void ARespawnableInteractable::OnHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.OnHidden");

	ARespawnableInteractable_OnHidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE9C10
//		Name   -> Function SpecialEventUtilities.RespawnableInteractable.IsHidden
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARespawnableInteractable::IsHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnableInteractable.IsHidden");

	ARespawnableInteractable_IsHidden_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
//		Flags  -> (Final, Exec, Native, Private)
void URespawningEventComponent::DBD_ForceRespawnSpecialEventObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject");

	URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DEA5A0
//		Name   -> Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
//		Flags  -> (Native, Protected)
// Parameters:
//		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URespawningEventComponent::Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged");

	URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params params {};
	params.RespawnableInteractable = RespawnableInteractable;
	params.IsInteracting = IsInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE97E0
//		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ARespawnableInteractable*                    newRespawnableInteractable                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionRespawnableTrigger::Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed");

	UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params params {};
	params.newRespawnableInteractable = newRespawnableInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE9760
//		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInteractionRespawnableTrigger::Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded");

	UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params params {};
	params.RespawnableInteractable = RespawnableInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE9F10
//		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URespawnablePositioner::Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent");

	URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params params {};
	params.RespawnableInteractable = RespawnableInteractable;
	params.IsInteracting = IsInteracting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03DE9E80
//		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class ARespawnableInteractable*>            ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class ARespawnableInteractable*> URespawnablePositioner::Authority_GetRespawnables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables");

	URespawnablePositioner_Authority_GetRespawnables_Params params {};

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

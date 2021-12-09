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
//		Offset -> 0x061EC640
//		Name   -> Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       scoreEventID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UDBDGameplayTagUtilities::STATIC_GetScoreModifierName(const struct FName& scoreEventID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTagUtilities.DBDGameplayTagUtilities.GetScoreModifierName");

	UDBDGameplayTagUtilities_GetScoreModifierName_Params params {};
	params.scoreEventID = scoreEventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x061EC5A0
//		Name   -> Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       TagName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDGameplayTagUtilities::STATIC_GameplayTagExists(const struct FName& TagName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTagUtilities.DBDGameplayTagUtilities.GameplayTagExists");

	UDBDGameplayTagUtilities_GameplayTagExists_Params params {};
	params.TagName = TagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x061ECEF0
//		Name   -> Function GameplayTagUtilities.GameplayTagContainerComponent.Remove
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTagContainerComponent::Remove(const struct FGameplayTag& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTagUtilities.GameplayTagContainerComponent.Remove");

	UGameplayTagContainerComponent_Remove_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x061ECE50
//		Name   -> Function GameplayTagUtilities.GameplayTagContainerComponent.Add
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTagContainerComponent::Add(const struct FGameplayTag& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTagUtilities.GameplayTagContainerComponent.Add");

	UGameplayTagContainerComponent_Add_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

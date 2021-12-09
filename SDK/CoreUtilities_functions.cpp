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
//		Offset -> 0x061D9550
//		Name   -> Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<int>                                        Values                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                numberOfDesiredValues                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<int> UCoreUtilities::STATIC_GetRandomValuesFromArray(TArray<int> Values, int numberOfDesiredValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoreUtilities.CoreUtilities.GetRandomValuesFromArray");

	UCoreUtilities_GetRandomValuesFromArray_Params params {};
	params.Values = Values;
	params.numberOfDesiredValues = numberOfDesiredValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x061D94D0
//		Name   -> Function CoreUtilities.CoreUtilities.GetGameInstance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameInstance*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameInstance* UCoreUtilities::STATIC_GetGameInstance(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoreUtilities.CoreUtilities.GetGameInstance");

	UCoreUtilities_GetGameInstance_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x061D9AE0
//		Name   -> Function CoreUtilities.PropertyParser.CopyProperties
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActorComponent*                             Dest                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UActorComponent*                             Origin                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               copyTransform                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FName>                               propertiesToExclude                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPropertyParser::STATIC_CopyProperties(class UActorComponent* Dest, class UActorComponent* Origin, bool copyTransform, TArray<struct FName> propertiesToExclude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoreUtilities.PropertyParser.CopyProperties");

	UPropertyParser_CopyProperties_Params params {};
	params.Dest = Dest;
	params.Origin = Origin;
	params.copyTransform = copyTransform;
	params.propertiesToExclude = propertiesToExclude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Offset -> 0x06356CF0
//		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDistanceBasedTickDisabler::UnregisterComponent(class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent");

	UDistanceBasedTickDisabler_UnregisterComponent_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06356C70
//		Name   -> Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDistanceBasedTickDisabler::RegisterComponent(class UActorComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent");

	UDistanceBasedTickDisabler_RegisterComponent_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

﻿// Name: DeadB, Version: 5

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
//		Name   -> Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.OnKillerSoundbankLoaded
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		AkAudio_EAkResult                                  Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_10_C::OnKillerSoundbankLoaded(AkAudio_EAkResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_11.BP_Audio_KLR_10_C.OnKillerSoundbankLoaded");

	UBP_Audio_KLR_10_C_OnKillerSoundbankLoaded_Params params {};
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Audio_KLR_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveBeginPlay");

	UBP_Audio_KLR_01_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_01_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveEndPlay");

	UBP_Audio_KLR_01_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ExecuteUbergraph_BP_Audio_KLR_01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Audio_KLR_01_C::ExecuteUbergraph_BP_Audio_KLR_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Audio_KLR_01.BP_Audio_KLR_01_C.ExecuteUbergraph_BP_Audio_KLR_01");

	UBP_Audio_KLR_01_C_ExecuteUbergraph_BP_Audio_KLR_01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

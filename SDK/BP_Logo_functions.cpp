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
//		Name   -> Function BP_Logo.BP_Logo_C.Anim__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Logo_C::Anim__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Anim__FinishedFunc");

	ABP_Logo_C_Anim__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Logo.BP_Logo_C.Anim__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Logo_C::Anim__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Anim__UpdateFunc");

	ABP_Logo_C_Anim__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Logo_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc");

	ABP_Logo_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Logo_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc");

	ABP_Logo_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Logo.BP_Logo_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Logo_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.ReceiveBeginPlay");

	ABP_Logo_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Logo_C::ExecuteUbergraph_BP_Logo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo");

	ABP_Logo_C_ExecuteUbergraph_BP_Logo_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

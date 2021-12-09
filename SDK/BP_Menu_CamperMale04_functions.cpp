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
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Menu_CamperMale04_C::Cigarette__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__FinishedFunc");

	ABP_Menu_CamperMale04_C_Cigarette__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Menu_CamperMale04_C::Cigarette__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.Cigarette__UpdateFunc");

	ABP_Menu_CamperMale04_C_Cigarette__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_CamperMale04_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveBeginPlay");

	ABP_Menu_CamperMale04_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_CamperMale04_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ReceiveTick");

	ABP_Menu_CamperMale04_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_CamperMale04_C::BeginDestroySequence_Internal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.BeginDestroySequence_Internal");

	ABP_Menu_CamperMale04_C_BeginDestroySequence_Internal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_CamperMale04_C::ExecuteUbergraph_BP_Menu_CamperMale04(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_CamperMale04.BP_Menu_CamperMale04_C.ExecuteUbergraph_BP_Menu_CamperMale04");

	ABP_Menu_CamperMale04_C_ExecuteUbergraph_BP_Menu_CamperMale04_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

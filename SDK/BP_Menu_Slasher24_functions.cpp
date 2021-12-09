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
//		Name   -> Function BP_Menu_Slasher24.BP_Menu_Slasher24_C._cast_AB_Menu_Slasher24
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Menu_Slasher24_C::_cast_AB_Menu_Slasher24()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher24.BP_Menu_Slasher24_C._cast_AB_Menu_Slasher24");

	ABP_Menu_Slasher24_C__cast_AB_Menu_Slasher24_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_Slasher24_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveBeginPlay");

	ABP_Menu_Slasher24_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher24_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ReceiveTick");

	ABP_Menu_Slasher24_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ExecuteUbergraph_BP_Menu_Slasher24
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher24_C::ExecuteUbergraph_BP_Menu_Slasher24(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher24.BP_Menu_Slasher24_C.ExecuteUbergraph_BP_Menu_Slasher24");

	ABP_Menu_Slasher24_C_ExecuteUbergraph_BP_Menu_Slasher24_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

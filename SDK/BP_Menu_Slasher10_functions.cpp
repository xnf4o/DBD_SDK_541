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
//		Name   -> Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_Slasher10_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ReceiveBeginPlay");

	ABP_Menu_Slasher10_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher10_C::ExecuteUbergraph_BP_Menu_Slasher10(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher10.BP_Menu_Slasher10_C.ExecuteUbergraph_BP_Menu_Slasher10");

	ABP_Menu_Slasher10_C_ExecuteUbergraph_BP_Menu_Slasher10_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_Menu_Slasher22.BP_Menu_Slasher22_C._get_ab_menu_slasher22
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Menu_Slasher22_C::_get_ab_menu_slasher22()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher22.BP_Menu_Slasher22_C._get_ab_menu_slasher22");

	ABP_Menu_Slasher22_C__get_ab_menu_slasher22_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Menu_Slasher22_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ReceiveBeginPlay");

	ABP_Menu_Slasher22_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher22_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ReceiveTick");

	ABP_Menu_Slasher22_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ExecuteUbergraph_BP_Menu_Slasher22
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Menu_Slasher22_C::ExecuteUbergraph_BP_Menu_Slasher22(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Menu_Slasher22.BP_Menu_Slasher22_C.ExecuteUbergraph_BP_Menu_Slasher22");

	ABP_Menu_Slasher22_C_ExecuteUbergraph_BP_Menu_Slasher22_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

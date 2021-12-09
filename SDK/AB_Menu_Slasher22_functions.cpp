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
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher22_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimGraph");

	UAB_Menu_Slasher22_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher22_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher22_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Idle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher22_C::AnimNotify_Idle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Idle");

	UAB_Menu_Slasher22_C_AnimNotify_Idle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Release
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher22_C::AnimNotify_Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Release");

	UAB_Menu_Slasher22_C_AnimNotify_Release_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Pickup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher22_C::AnimNotify_Pickup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.AnimNotify_Pickup");

	UAB_Menu_Slasher22_C_AnimNotify_Pickup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.ExecuteUbergraph_AB_Menu_Slasher22
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher22_C::ExecuteUbergraph_AB_Menu_Slasher22(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher22.AB_Menu_Slasher22_C.ExecuteUbergraph_AB_Menu_Slasher22");

	UAB_Menu_Slasher22_C_ExecuteUbergraph_AB_Menu_Slasher22_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

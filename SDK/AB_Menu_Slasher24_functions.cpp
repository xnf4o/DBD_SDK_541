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
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher24_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimGraph");

	UAB_Menu_Slasher24_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher24_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher24_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher24_C::AnimNotify_K24_Inter_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Start");

	UAB_Menu_Slasher24_C_AnimNotify_K24_Inter_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Stop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher24_C::AnimNotify_K24_Inter_Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Inter_Stop");

	UAB_Menu_Slasher24_C_AnimNotify_K24_Inter_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_IdleMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher24_C::AnimNotify_K24_IdleMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_IdleMenu");

	UAB_Menu_Slasher24_C_AnimNotify_K24_IdleMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Menu_Interrupt01
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher24_C::AnimNotify_K24_Menu_Interrupt01()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.AnimNotify_K24_Menu_Interrupt01");

	UAB_Menu_Slasher24_C_AnimNotify_K24_Menu_Interrupt01_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher24_C::ExecuteUbergraph_AB_Menu_Slasher24(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher24.AB_Menu_Slasher24_C.ExecuteUbergraph_AB_Menu_Slasher24");

	UAB_Menu_Slasher24_C_ExecuteUbergraph_AB_Menu_Slasher24_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

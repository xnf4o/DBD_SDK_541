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
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_Menu_Slasher20_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimGraph");

	UAB_Menu_Slasher20_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher20_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.BlueprintUpdateAnimation");

	UAB_Menu_Slasher20_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_DemonMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_SwitchClub_DemonMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_DemonMode");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_SwitchClub_DemonMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_NormalMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_SwitchClub_NormalMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_SwitchClub_NormalMode");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_SwitchClub_NormalMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FK_SK_ShowKatana
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FK_SK_ShowKatana()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FK_SK_ShowKatana");

	UAB_Menu_Slasher20_C_AnimNotify_FK_SK_ShowKatana_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_HideKatana()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_HideKatana_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_ShowDemonCosmetic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_ShowDemonCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_ShowDemonCosmetic");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_ShowDemonCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideDemonCosmetic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_HideDemonCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideDemonCosmetic");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_HideDemonCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana_TPV
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_Slasher20_C::AnimNotify_FX_SK_HideKatana_TPV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.AnimNotify_FX_SK_HideKatana_TPV");

	UAB_Menu_Slasher20_C_AnimNotify_FX_SK_HideKatana_TPV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.ExecuteUbergraph_AB_Menu_Slasher20
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_Slasher20_C::ExecuteUbergraph_AB_Menu_Slasher20(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher20.AB_Menu_Slasher20_C.ExecuteUbergraph_AB_Menu_Slasher20");

	UAB_Menu_Slasher20_C_ExecuteUbergraph_AB_Menu_Slasher20_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

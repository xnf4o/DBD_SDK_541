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
//		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_S28_C::AnimNotify_FX_ShowProps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_ShowProps");

	UAB_Menu_S28_C_AnimNotify_FX_ShowProps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_S28_C::AnimNotify_FX_HideProps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_FX_HideProps");

	UAB_Menu_S28_C_AnimNotify_FX_HideProps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UAB_Menu_S28_C::AnimNotify_IsPlayingMenuInterruptFromTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.AnimNotify_IsPlayingMenuInterruptFromTransition");

	UAB_Menu_S28_C_AnimNotify_IsPlayingMenuInterruptFromTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_Menu_S28_C::ExecuteUbergraph_AB_Menu_S28(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_Menu_S28.AB_Menu_S28_C.ExecuteUbergraph_AB_Menu_S28");

	UAB_Menu_S28_C_ExecuteUbergraph_AB_Menu_S28_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void USlasherAnimSlaveFemale_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.AnimGraph");

	USlasherAnimSlaveFemale_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B
//		Flags  -> (BlueprintEvent)
void USlasherAnimSlaveFemale_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B");

	USlasherAnimSlaveFemale_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SlasherAnimSlaveFemale_AnimGraphNode_CopyPoseFromMesh_30155F1641177EFE332135805253A82B_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.ExecuteUbergraph_SlasherAnimSlaveFemale
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USlasherAnimSlaveFemale_C::ExecuteUbergraph_SlasherAnimSlaveFemale(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlasherAnimSlaveFemale.SlasherAnimSlaveFemale_C.ExecuteUbergraph_SlasherAnimSlaveFemale");

	USlasherAnimSlaveFemale_C_ExecuteUbergraph_SlasherAnimSlaveFemale_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

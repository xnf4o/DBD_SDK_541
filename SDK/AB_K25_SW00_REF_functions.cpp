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
//		Name   -> Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_K25_SW00_REF_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.AnimGraph");

	UAB_K25_SW00_REF_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.ExecuteUbergraph_AB_K25_SW00_REF
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K25_SW00_REF_C::ExecuteUbergraph_AB_K25_SW00_REF(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AB_K25_SW00_REF.AB_K25_SW00_REF_C.ExecuteUbergraph_AB_K25_SW00_REF");

	UAB_K25_SW00_REF_C_ExecuteUbergraph_AB_K25_SW00_REF_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

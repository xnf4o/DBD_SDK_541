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
//		Name   -> Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_DBDRegionFinder_C::ConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript");

	UBP_DBDRegionFinder_C_ConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Effect_Environment_C::KNY_StartSnowstorm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm");

	UBPI_Effect_Environment_C_KNY_StartSnowstorm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

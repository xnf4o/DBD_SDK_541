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
//		Name   -> Function BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.IsPlayingMenuInterrupt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPlayingAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SurvivorMenu_Anim_C::IsPlayingMenuInterrupt(bool IsPlayingAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.IsPlayingMenuInterrupt");

	UBPI_SurvivorMenu_Anim_C_IsPlayingMenuInterrupt_Params params {};
	params.IsPlayingAnimation = IsPlayingAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

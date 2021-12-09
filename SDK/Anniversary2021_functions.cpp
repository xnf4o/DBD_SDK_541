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
//		Offset -> 0x033E5060
//		Name   -> Function Anniversary2021.Anniversary2021EventComponent.Authority_OnIntroComplete
//		Flags  -> (Final, Native, Private)
void UAnniversary2021EventComponent::Authority_OnIntroComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Anniversary2021.Anniversary2021EventComponent.Authority_OnIntroComplete");

	UAnniversary2021EventComponent_Authority_OnIntroComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

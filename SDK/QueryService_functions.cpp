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
//		Offset -> 0x06347430
//		Name   -> Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AActorPairQueryEvaluatorSubscriberTest::OnRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function QueryService.ActorPairQueryEvaluatorSubscriberTest.OnRangeChanged");

	AActorPairQueryEvaluatorSubscriberTest_OnRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

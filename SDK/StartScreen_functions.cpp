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
//		Name   -> Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent
//		Flags  -> (BlueprintEvent)
void AStartScreen_C::K2Node_MatineeController_1_FadedOutEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_FadedOutEvent");

	AStartScreen_C_K2Node_MatineeController_1_FadedOutEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished
//		Flags  -> (BlueprintEvent)
void AStartScreen_C::K2Node_MatineeController_1_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.K2Node_MatineeController_1_Finished");

	AStartScreen_C_K2Node_MatineeController_1_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function StartScreen.StartScreen_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AStartScreen_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ReceiveBeginPlay");

	AStartScreen_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function StartScreen.StartScreen_C.BeginDestroyTravelSequence
//		Flags  -> (Event, Public, BlueprintEvent)
void AStartScreen_C::BeginDestroyTravelSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.BeginDestroyTravelSequence");

	AStartScreen_C_BeginDestroyTravelSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStartScreen_C::ExecuteUbergraph_StartScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen");

	AStartScreen_C_ExecuteUbergraph_StartScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

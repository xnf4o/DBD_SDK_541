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
//		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ALevelTransition_LightsEffects_C::Fade_Out__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc");

	ALevelTransition_LightsEffects_C_Fade_Out__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ALevelTransition_LightsEffects_C::Fade_Out__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc");

	ALevelTransition_LightsEffects_C_Fade_Out__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ALevelTransition_LightsEffects_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay");

	ALevelTransition_LightsEffects_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALevelTransition_LightsEffects_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick");

	ALevelTransition_LightsEffects_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALevelTransition_LightsEffects_C::ExecuteUbergraph_LevelTransition_LightsEffects(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects");

	ALevelTransition_LightsEffects_C_ExecuteUbergraph_LevelTransition_LightsEffects_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

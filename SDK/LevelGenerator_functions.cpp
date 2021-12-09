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
//		Name   -> Function LevelGenerator.LevelGenerator_C.RemoveMist
//		Flags  -> (Event, Public, BlueprintEvent)
void ALevelGenerator_C::RemoveMist()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.RemoveMist");

	ALevelGenerator_C_RemoveMist_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelGenerator.LevelGenerator_C.ApplyMist
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALevelGenerator_C::ApplyMist(float Modifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.ApplyMist");

	ALevelGenerator_C_ApplyMist_Params params {};
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALevelGenerator_C::ExecuteUbergraph_LevelGenerator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator");

	ALevelGenerator_C_ExecuteUbergraph_LevelGenerator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

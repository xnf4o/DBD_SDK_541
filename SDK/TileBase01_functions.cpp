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
//		Name   -> Function TileBase01.TileBase01_C.SelectSpawnpoint
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UTileSpawnPoint*>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void ATileBase01_C::SelectSpawnpoint(TArray<class UTileSpawnPoint*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SelectSpawnpoint");

	ATileBase01_C_SelectSpawnpoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      GeneratorSpawnPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UChildActorComponent*>                GeneratorDrivenElements                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void ATileBase01_C::SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements");

	ATileBase01_C_SetupGeneratorDrivenElements_Params params {};
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratorDrivenElements != nullptr)
		*GeneratorDrivenElements = params.GeneratorDrivenElements;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATileBase01_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ReceiveTick");

	ATileBase01_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.OnLevelLoaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATileBase01_C::OnLevelLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.OnLevelLoaded");

	ATileBase01_C_OnLevelLoaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTileSpawnPoint*                             SpawnPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      spawnedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATileBase01_C::SetGeneratorDrivenObjects(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects");

	ATileBase01_C_SetGeneratorDrivenObjects_Params params {};
	params.SpawnPoint = SpawnPoint;
	params.spawnedObject = spawnedObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
//		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class AActor*>                              generators                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ATileBase01_C::SetGeneratorDrivenScoreEvent(TArray<class AActor*> generators)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent");

	ATileBase01_C_SetGeneratorDrivenScoreEvent_Params params {};
	params.generators = generators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.KNY_StartSnowstorm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATileBase01_C::KNY_StartSnowstorm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.KNY_StartSnowstorm");

	ATileBase01_C_KNY_StartSnowstorm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATileBase01_C::ExecuteUbergraph_TileBase01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01");

	ATileBase01_C_ExecuteUbergraph_TileBase01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

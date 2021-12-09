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
//		Name   -> Function TileUtilities.TileUtilities_C.CheckBasement
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTileSpawnPoint*                             SpawnPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      spawnedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CheckBasement(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CheckBasement");

	UTileUtilities_C_CheckBasement_Params params {};
	params.SpawnPoint = SpawnPoint;
	params.spawnedObject = spawnedObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.CheckGenerator
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTileSpawnPoint*                             SpawnPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      spawnedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CheckGenerator(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CheckGenerator");

	UTileUtilities_C_CheckGenerator_Params params {};
	params.SpawnPoint = SpawnPoint;
	params.spawnedObject = spawnedObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.CallForSpawn
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UActorSpawner*                               ActorSpawner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.CallForSpawn");

	UTileUtilities_C_CallForSpawn_Params params {};
	params.ActorSpawner = ActorSpawner;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.SelectSpawners
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UActorSpawner*>                       Spawners                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		int                                                MinCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRandomStream                               Stream                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawners(TArray<class UActorSpawner*>* Spawners, int MinCount, int MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawners");

	UTileUtilities_C_SelectSpawners_Params params {};
	params.MinCount = MinCount;
	params.MaxCount = MaxCount;
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.SelectSpawner
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UActorSpawner*>                       Spawners                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		struct FRandomStream                               Stream                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawner(TArray<class UActorSpawner*>* Spawners, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawner");

	UTileUtilities_C_SelectSpawner_Params params {};
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Spawners != nullptr)
		*Spawners = params.Spawners;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UChildActorComponent*>                SpawnPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class AActor*                                      GeneratorSpawnPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                generatorId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>* SpawnPoints, class AActor* GeneratorSpawnPoint, int generatorId, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements");

	UTileUtilities_C_SetupGeneratorDrivenElements_Params params {};
	params.GeneratorSpawnPoint = GeneratorSpawnPoint;
	params.generatorId = generatorId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TileUtilities.TileUtilities_C.SelectSpawnpoint
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UTileSpawnPoint*>                     SpawnPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		struct FRandomStream                               Stream                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTileUtilities_C::STATIC_SelectSpawnpoint(TArray<class UTileSpawnPoint*>* SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TileUtilities.TileUtilities_C.SelectSpawnpoint");

	UTileUtilities_C_SelectSpawnpoint_Params params {};
	params.Stream = Stream;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoints != nullptr)
		*SpawnPoints = params.SpawnPoints;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

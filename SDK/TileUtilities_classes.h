#pragma once

// Name: DeadB, Version: 5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TileUtilities.TileUtilities_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTileUtilities_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TileUtilities.TileUtilities_C");
		return ptr;
	}



	void STATIC_CheckBasement(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);
	void STATIC_CheckGenerator(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);
	void STATIC_CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext);
	void STATIC_SelectSpawners(TArray<class UActorSpawner*>* Spawners, int MinCount, int MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext);
	void STATIC_SelectSpawner(TArray<class UActorSpawner*>* Spawners, const struct FRandomStream& Stream, class UObject* __WorldContext);
	void STATIC_SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>* SpawnPoints, class AActor* GeneratorSpawnPoint, int generatorId, class UObject* __WorldContext);
	void STATIC_SelectSpawnpoint(TArray<class UTileSpawnPoint*>* SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

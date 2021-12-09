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
// Parameters
//---------------------------------------------------------------------------

// Function TileBase01.TileBase01_C.SelectSpawnpoint
struct ATileBase01_C_SelectSpawnpoint_Params
{
	TArray<class UTileSpawnPoint*>                     Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
struct ATileBase01_C_SetupGeneratorDrivenElements_Params
{
	class AActor*                                      GeneratorSpawnPoint;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>                GeneratorDrivenElements;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.ReceiveTick
struct ATileBase01_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.OnLevelLoaded
struct ATileBase01_C_OnLevelLoaded_Params
{
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
struct ATileBase01_C_SetGeneratorDrivenObjects_Params
{
	class UTileSpawnPoint*                             SpawnPoint;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      spawnedObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
struct ATileBase01_C_SetGeneratorDrivenScoreEvent_Params
{
	TArray<class AActor*>                              generators;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function TileBase01.TileBase01_C.KNY_StartSnowstorm
struct ATileBase01_C_KNY_StartSnowstorm_Params
{
};

// Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
struct ATileBase01_C_ExecuteUbergraph_TileBase01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

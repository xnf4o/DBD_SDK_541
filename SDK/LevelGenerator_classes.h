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

// BlueprintGeneratedClass LevelGenerator.LevelGenerator_C
// 0x0014 (FullSize[0x0E8C] - InheritedSize[0x0E78])
class ALevelGenerator_C : public AProceduralLevelBuilder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              initialMistDensity;                                        // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LevelGenerator.LevelGenerator_C");
		return ptr;
	}



	void RemoveMist();
	void ApplyMist(float Modifier);
	void ExecuteUbergraph_LevelGenerator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

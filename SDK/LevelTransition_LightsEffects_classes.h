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

// BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class ALevelTransition_LightsEffects_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Fade_Out_Intensity_Multiplier__23A1AA444F5E07D5215601B3AED70035; // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Fade_Out__Direction_23A1AA444F5E07D5215601B3AED70035;      // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RIZG[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Fade_Out;                                                  // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Fog_Densities;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C");
		return ptr;
	}



	void Fade_Out__FinishedFunc();
	void Fade_Out__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_LevelTransition_LightsEffects(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

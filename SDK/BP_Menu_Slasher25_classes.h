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

// BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C
// 0x0034 (FullSize[0x06C0] - InheritedSize[0x068C])
class ABP_Menu_Slasher25_C : public ABP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_F5HP[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      LamentConfMesh;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      ChainsMesh;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Audio_KLR_25_C*                          BP_Audio_KLR_26;                                           // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TM_LamentBoxVisibility_Dissolve_A56755B4431C0BE684B0688D2A09C847; // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TM_LamentBoxVisibility__Direction_A56755B4431C0BE684B0688D2A09C847; // 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RNT7[0x3];                                     // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TM_LamentBoxVisibility;                                    // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C");
		return ptr;
	}



	void TM_LamentBoxVisibility__FinishedFunc();
	void TM_LamentBoxVisibility__UpdateFunc();
	void ReceiveBeginPlay();
	void MakeLamentBoxDisappear();
	void MakeLamentBoxAppear();
	void ExecuteUbergraph_BP_Menu_Slasher25(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

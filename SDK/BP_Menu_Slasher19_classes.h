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

// BlueprintGeneratedClass BP_Menu_Slasher19.BP_Menu_Slasher19_C
// 0x001C (FullSize[0x06A8] - InheritedSize[0x068C])
class ABP_Menu_Slasher19_C : public ABP_Menu_BaseSlasher_C
{
public:
	unsigned char                                      UnknownData_DPNH[0x4];                                     // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Audio_KLR_19_C*                          BP_Audio_KLR_20;                                           // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HarpoonMesh;                                               // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_Slasher19.BP_Menu_Slasher19_C");
		return ptr;
	}



	void UpdateHarpoonOnRifle(class USkeletalMeshComponent* Rifle_Mesh);
	void ReceiveBeginPlay();
	void OnMeshSwitchBP(DeadByDaylight_ECustomizationCategory Category, class USkeletalMeshComponent* Mesh);
	void ExecuteUbergraph_BP_Menu_Slasher19(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

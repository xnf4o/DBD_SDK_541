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

// BlueprintGeneratedClass BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C
// 0x0027 (FullSize[0x0690] - InheritedSize[0x0669])
class ABP_Menu_CamperFemale15_C : public ABP_Menu_Base_Camper_C
{
public:
	unsigned char                                      UnknownData_6QRA[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      S28Book;                                                   // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAB_S28_Book_C*                              AB_S28_Book;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_Menu_S28_C*                              AB_Menu_S28;                                               // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C");
		return ptr;
	}



	void GoToAddMoriVomitStain();
	void GoToAddVomitDecal();
	void StartEndGameDissolve();
	void CK_StartSacrificeDissolve();
	void AddBloodOnCamper();
	void ReceiveBeginPlay();
	void ShowProps();
	void HideProps();
	void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
	void ExecuteUbergraph_BP_Menu_CamperFemale15(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

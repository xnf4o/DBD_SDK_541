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

// BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
// 0x001F (FullSize[0x0688] - InheritedSize[0x0669])
class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
{
public:
	unsigned char                                      UnknownData_K7ET[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;     // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Cigarette__Direction_97E71C104E36EF0B3195F484D090F427;     // 0x067C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2YE0[0x3];                                     // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Cigarette;                                                 // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C");
		return ptr;
	}



	void Cigarette__FinishedFunc();
	void Cigarette__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BeginDestroySequence_Internal();
	void ExecuteUbergraph_BP_Menu_CamperMale04(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

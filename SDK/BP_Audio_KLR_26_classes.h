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

// BlueprintGeneratedClass BP_Audio_KLR_26.BP_Audio_KLR_25_C
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UBP_Audio_KLR_25_C : public UBP_Audio_KLR_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             starsCharacter;                                            // 0x0100(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_26.BP_Audio_KLR_25_C");
		return ptr;
	}



	void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<struct FString>* characterName, bool* IsCharacter);
	void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
	void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool isWeaponHit);
	void ExecuteUbergraph_BP_Audio_KLR_26(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

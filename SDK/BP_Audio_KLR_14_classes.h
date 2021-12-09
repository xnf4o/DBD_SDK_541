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

// BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_13_C
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UBP_Audio_KLR_13_C : public UBP_Audio_KLR_Base_C
{
public:
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                 // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_14.BP_Audio_KLR_13_C");
		return ptr;
	}



	void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** AudioEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

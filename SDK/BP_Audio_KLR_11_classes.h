﻿#pragma once

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

// BlueprintGeneratedClass BP_Audio_KLR_11.BP_Audio_KLR_10_C
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UBP_Audio_KLR_10_C : public UBP_Audio_KLR_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_KLR_11.BP_Audio_KLR_10_C");
		return ptr;
	}



	void OnKillerSoundbankLoaded(AkAudio_EAkResult Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

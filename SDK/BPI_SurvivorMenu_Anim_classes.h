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

// BlueprintGeneratedClass BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBPI_SurvivorMenu_Anim_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C");
		return ptr;
	}



	void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

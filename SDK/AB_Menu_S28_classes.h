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

// AnimBlueprintGeneratedClass AB_Menu_S28.AB_Menu_S28_C
// 0x0008 (FullSize[0x1AA0] - InheritedSize[0x1A98])
class UAB_Menu_S28_C : public UAB_Menu_Camper_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_S28.AB_Menu_S28_C");
		return ptr;
	}



	void AnimNotify_FX_ShowProps();
	void AnimNotify_FX_HideProps();
	void AnimNotify_IsPlayingMenuInterruptFromTransition();
	void ExecuteUbergraph_AB_Menu_S28(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

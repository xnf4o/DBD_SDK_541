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

// BlueprintGeneratedClass LuckProficiency.LuckProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class ULuckProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass LuckProficiency.LuckProficiency_C");
		return ptr;
	}



	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class SubscriptionSubsystem.SubscriptionSubsystem
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class USubscriptionSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_JX34[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SubscriptionSubsystem.SubscriptionSubsystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class ProvingGround.ProvingGroundManager
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UProvingGroundManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_V7VF[0x80];                                    // 0x0038(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ProvingGround.ProvingGroundManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

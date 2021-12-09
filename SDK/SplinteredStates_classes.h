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

// Class SplinteredStates.SplinteredStatesSubsystem
// 0x04B8 (FullSize[0x04F0] - InheritedSize[0x0038])
class USplinteredStatesSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_S9DG[0x4B8];                                   // 0x0038(0x04B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SplinteredStates.SplinteredStatesSubsystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

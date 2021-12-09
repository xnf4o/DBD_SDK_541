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

// Class AtlantaBloodMarket.AtlantaBloodMarketManager
// 0x0130 (FullSize[0x0168] - InheritedSize[0x0038])
class UAtlantaBloodMarketManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_GEQC[0x130];                                   // 0x0038(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AtlantaBloodMarket.AtlantaBloodMarketManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

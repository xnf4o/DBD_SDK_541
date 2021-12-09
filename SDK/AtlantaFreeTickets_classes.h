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

// Class AtlantaFreeTickets.AtlantaFreeTicketsManager
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UAtlantaFreeTicketsManager : public UObject
{
public:
	unsigned char                                      UnknownData_WIDY[0xC0];                                    // 0x0030(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AtlantaFreeTickets.AtlantaFreeTicketsManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

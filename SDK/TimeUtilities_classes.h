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

// Class TimeUtilities.DBDTimeUtilities
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UDBDTimeUtilities : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_FHQU[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TimeUtilities.DBDTimeUtilities");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class GameFlow.GameFlowHandler
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UGameFlowHandler : public UAbstractGameFlowHandler
{
public:
	unsigned char                                      UnknownData_1F0R[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameFlow.GameFlowHandler");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

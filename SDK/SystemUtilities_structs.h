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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SystemUtilities.DateTimerArray
// 0x0010
struct FDateTimerArray
{
	unsigned char                                      UnknownData_FP6P[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct SystemUtilities.DateTimer
// 0x0028
struct FDateTimer
{
	unsigned char                                      UnknownData_34PG[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct SystemUtilities.DateTimerHandle
// 0x0008
struct FDateTimerHandle
{
	unsigned char                                      UnknownData_3HFC[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct SystemUtilities.FastTimer
// 0x0030
struct FFastTimer
{
	unsigned char                                      UnknownData_917W[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

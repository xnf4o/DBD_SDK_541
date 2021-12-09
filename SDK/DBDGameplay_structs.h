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

// ScriptStruct DBDGameplay.AimDirection
// 0x0024
struct FAimDirection
{
	unsigned char                                      UnknownData_AVZ8[0x24];                                    // 0x0000(0x0024) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.BlindTargetViewData
// 0x0040
struct FBlindTargetViewData
{
	unsigned char                                      UnknownData_11SO[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDGameplay.TestableStatModifier
// 0x0000 (0x0030 - 0x0030)
struct FTestableStatModifier : public FStatModifier
{

};

// ScriptStruct DBDGameplay.TestableStat
// 0x0008 (0x0088 - 0x0080)
struct FTestableStat : public FTunableStat
{
	unsigned char                                      UnknownData_G36H[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

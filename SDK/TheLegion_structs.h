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

// ScriptStruct TheLegion.LegionSurvivorAnalytics
// 0x0020 (0x00B8 - 0x0098)
struct FLegionSurvivorAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeepWoundCount;                                            // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FrenzyEffectivements;                                      // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeepWoundDying;                                            // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DeepWoundEscape;                                           // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TR8P[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct TheLegion.LegionKillerAnalytics
// 0x0018 (0x00B0 - 0x0098)
struct FLegionKillerAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Pallet;                                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G64M[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

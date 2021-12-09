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
// Enums
//---------------------------------------------------------------------------

// Enum Winter2021.ESnowmanDestructionType
enum class Winter2021_ESnowmanDestructionType : uint8_t
{
	ESnowmanDestructionType__None  = 0,
	ESnowmanDestructionType__SurvivorRunExit = 1,
	ESnowmanDestructionType__KillerAttackWhileControlled = 2,
	ESnowmanDestructionType__KillerAttackWhileEmpty = 3,
	ESnowmanDestructionType__ESnowmanDestructionType_MAX = 4,

};

// Enum Winter2021.ESnowmanState
enum class Winter2021_ESnowmanState : uint8_t
{
	ESnowmanState__Idle            = 0,
	ESnowmanState__BeingEntered    = 1,
	ESnowmanState__Controlled      = 2,
	ESnowmanState__Destroyed       = 3,
	ESnowmanState__ESnowmanState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Winter2021.SnowmanSpawnLocationData
// 0x0028
struct FSnowmanSpawnLocationData
{
	struct FVector                                     OriginLocation;                                            // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MQEJ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             NavmeshLocations;                                          // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EUST[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Winter2021.SnowmanSpawnData
// 0x0018
struct FSnowmanSpawnData
{
	struct FVector                                     SpawnLocation;                                             // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SpawnRotation;                                             // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

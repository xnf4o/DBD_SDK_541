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
// Parameters
//---------------------------------------------------------------------------

// Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged
struct UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Params
{
	DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperImmobilizeState              newImmobilizeState;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged
struct UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Params
{
	DeadByDaylight_ECamperDamageState                  oldDamageState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DeadByDaylight_ECamperDamageState                  CurrentDamageState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
struct UOwningPlayerInSpiritHuskRange_OnKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
struct URancor_SpawnBubbleAtSurvivorsLocation_Params
{
};

// Function TheSpirit.Rancor.GetSurvivorRevealDuration
struct URancor_GetSurvivorRevealDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
struct USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.SetScalarParameterOnAllChildrenMeshes
struct ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.SetPassivePhaseWalkHuskVisibility
struct ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Params
{
	bool                                               visible;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.InitializeSpiritPassivePhaseWalkHusk
struct ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Params
{
	class UCustomizedSkeletalMesh*                     customizedSkeletalMeshToCopy;                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_StartFadeOutPassivePhaseWalkHusk
struct ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Params
{
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_InitializeSpiritPassivePhaseWalkHusk
struct ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Params
{
};

// Function TheSpirit.SpiritPassivePhaseWalkHusk.CaptureSpiritPose
struct ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

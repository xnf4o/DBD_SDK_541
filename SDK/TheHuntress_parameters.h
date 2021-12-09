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

// Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
struct UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
struct AHatchetRack_SetMovableHatchetVisibility_Params
{
	bool                                               visible;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
struct UHatchetThrow_GetOwningHatchetSpawner_Params
{
	class ATheHuntressPower*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
struct UReloadHatchet_IsInteractionPossible_Shared_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
struct ATheHuntressPower_StartHatchetShineCosmetic_Params
{
};

// Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
struct ATheHuntressPower_SetPercentThrowStrength_Params
{
	float                                              percentStrength;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.SetHatchetVisible
struct ATheHuntressPower_SetHatchetVisible_Params
{
	bool                                               visible;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
struct ATheHuntressPower_PrintDebugThrowInfo_Params
{
};

// Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
struct ATheHuntressPower_IsHatchetThrowFullyCharged_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.HasHatchet
struct ATheHuntressPower_HasHatchet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetOwningKiller
struct ATheHuntressPower_GetOwningKiller_Params
{
	class ASlasherPlayer*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
struct ATheHuntressPower_GetHatchetProjectileLauncher_Params
{
	class UBaseProjectileLauncher*                     ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetHatchetCooldown
struct ATheHuntressPower_GetHatchetCooldown_Params
{
	class UHatchetCooldown*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
struct ATheHuntressPower_GetAkAudioHatchetSpawner_Params
{
	class UAkComponent*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
struct ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Params
{
};

// Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
struct ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

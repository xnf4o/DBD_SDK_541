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

// Function TheNightmare.DreamInducerComponent.Authority_OnLevelReadyToPlay
struct UDreamInducerComponent_Authority_OnLevelReadyToPlay_Params
{
};

// Function TheNightmare.GeneratorDreamworldComponent.OnRepairSkillCheckFailed
struct UGeneratorDreamworldComponent_OnRepairSkillCheckFailed_Params
{
	bool                                               success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bonus;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerLoudNoise;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hadInput;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ESkillCheckCustomType               Type;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeChange;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorDreamworldComponent.Cosmetic_OnPlayerFailSkillCheck
struct UGeneratorDreamworldComponent_Cosmetic_OnPlayerFailSkillCheck_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.StopBloodSpurts
struct UGeneratorTeleportInteraction_StopBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.StartBloodSpurts
struct UGeneratorTeleportInteraction_StartBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.ShowBloodSpurtsVFX
struct UGeneratorTeleportInteraction_ShowBloodSpurtsVFX_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Server_SetSelectedGenerator
struct UGeneratorTeleportInteraction_Server_SetSelectedGenerator_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportReady
struct UGeneratorTeleportInteraction_OnTeleportReady_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_OnTeleportLocationChosen_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnTeleported
struct UGeneratorTeleportInteraction_OnTeleported_Params
{
	struct FTransform                                  transformBeforeTeleport;                                   // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnSelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnSelectedGeneratorSet_Params
{
	class AGenerator*                                  selectedGenerator;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_TeleportCooldownTimer
struct UGeneratorTeleportInteraction_OnRep_TeleportCooldownTimer_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnRep_SelectedGenerator
struct UGeneratorTeleportInteraction_OnRep_SelectedGenerator_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnLocallySelectedGeneratorSet
struct UGeneratorTeleportInteraction_OnLocallySelectedGeneratorSet_Params
{
	class AGenerator*                                  selectedGenerator;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.OnIntroCompleted
struct UGeneratorTeleportInteraction_OnIntroCompleted_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.OnBloodSpurts
struct UGeneratorTeleportInteraction_OnBloodSpurts_Params
{
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_TeleportPlayer
struct UGeneratorTeleportInteraction_Multicast_TeleportPlayer_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Multicast_OnTeleportLocationChosen
struct UGeneratorTeleportInteraction_Multicast_OnTeleportLocationChosen_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.IsTeleportAvailable
struct UGeneratorTeleportInteraction_IsTeleportAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.InitializeTunableValues
struct UGeneratorTeleportInteraction_InitializeTunableValues_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetOwningPlayer
struct UGeneratorTeleportInteraction_GetOwningPlayer_Params
{
	class ADBDPlayer*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.GetInlineGenerator
struct UGeneratorTeleportInteraction_GetInlineGenerator_Params
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGenerator*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.CanTeleportAtGenerator
struct UGeneratorTeleportInteraction_CanTeleportAtGenerator_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_TeleportPlayerToGenerator
struct UGeneratorTeleportInteraction_Authority_TeleportPlayerToGenerator_Params
{
	class ADBDPlayer*                                  playerToTeleport;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.GeneratorTeleportInteraction.Authority_StartTeleportCooldown
struct UGeneratorTeleportInteraction_Authority_StartTeleportCooldown_Params
{
	bool                                               teleported;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.SpawnDreamPallet
struct UPlaceDreamPalletInteraction_SpawnDreamPallet_Params
{
	class APalletTracker*                              trackerAtLocation;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.InitializeTunableValues
struct UPlaceDreamPalletInteraction_InitializeTunableValues_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.GetTargetedPallet
struct UPlaceDreamPalletInteraction_GetTargetedPallet_Params
{
	class APalletTracker*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.PlaceDreamPalletInteraction.CanSpawnDreamPalletAtTracker
struct UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Params
{
	class APalletTracker*                              tracker;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.SetDreamSnareInteraction.HasCancelledDreamSnare
struct USetDreamSnareInteraction_HasCancelledDreamSnare_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheNightmare.SetDreamSnareInteraction.GetTrapDistanceFromControlRotation
struct USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

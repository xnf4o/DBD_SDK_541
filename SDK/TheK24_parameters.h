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

// Function TheK24.ActivateK24PowerInteraction.SetK24Power
struct UActivateK24PowerInteraction_SetK24Power_Params
{
	class AK24Power*                                   K24Power;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.TrapDettachedToGenerator_Cosmetic
struct UBlastMine_TrapDettachedToGenerator_Cosmetic_Params
{
	class AGenerator*                                  trappedGenerator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
struct UBlastMine_TrapAttachedToGenerator_Cosmetic_Params
{
	class AGenerator*                                  trappedGenerator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
struct UBlastMine_ThrowBubbleIndicator_Cosmetic_Params
{
	struct FTransform                                  Location;                                                  // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Server_OnActionInputPressed
struct UBlastMine_Server_OnActionInputPressed_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnRep_TrappedGenerator
struct UBlastMine_OnRep_TrappedGenerator_Params
{
	class AGenerator*                                  oldGenerator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnRep_CurrentRepairInteractionWithAbility
struct UBlastMine_OnRep_CurrentRepairInteractionWithAbility_Params
{
	class UInteractionDefinition*                      oldRepairInteraction;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.OnActivateExplosion
struct UBlastMine_OnActivateExplosion_Params
{
	struct FTransform                                  firecrackerTransform;                                      // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Client_TrapActivatedLoudNotification
struct UBlastMine_Client_TrapActivatedLoudNotification_Params
{
	struct FTransform                                  Location;                                                  // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMine.Authority_OnRepairProgress
struct UBlastMine_Authority_OnRepairProgress_Params
{
	float                                              individualChargeAmount;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalChargeAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      chargeInstigator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               wasCoop;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.BlastMineTrapComponent.OnRep_IsTrapActive
struct UBlastMineTrapComponent_OnRep_IsTrapActive_Params
{
};

// Function TheK24.Counterforce.Multicast_ShowTotemAura
struct UCounterforce_Multicast_ShowTotemAura_Params
{
	class ATotem*                                      Totem;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.OnRep_IsPerkEnabled
struct UEruption_OnRep_IsPerkEnabled_Params
{
};

// Function TheK24.Eruption.Multicast_TriggerPerk
struct UEruption_Multicast_TriggerPerk_Params
{
	TArray<class AGenerator*>                          explodingGenerators;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Multicast_HighlightGenerator
struct UEruption_Multicast_HighlightGenerator_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.MakeSurvivorScreamCosmetic
struct UEruption_MakeSurvivorScreamCosmetic_Params
{
	class ADBDPlayer*                                  screamingSurvivor;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.GetScreamRevealLocationDuration
struct UEruption_GetScreamRevealLocationDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
struct UEruption_Cosmetic_OnGeneratorHighlightStart_Params
{
	class AGenerator*                                  highlightedGenerator;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
struct UEruption_Cosmetic_OnGeneratorHighlightEnd_Params
{
	class AGenerator*                                  highlightedGenerator;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress
struct UFlashbang_OnRep_GeneratorsRepairProgress_Params
{
};

// Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
struct UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Params
{
};

// Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
struct UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Params
{
};

// Function TheK24.Flashbang.Authority_OnRepairProgressApplied
struct UFlashbang_Authority_OnRepairProgressApplied_Params
{
	float                                              individualChargeAmount;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              totalChargeAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      chargeInstigator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               wasCoop;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
struct UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Params
{
};

// Function TheK24.InjectSerumInteraction.OnKillerSet
struct UInjectSerumInteraction_OnKillerSet_Params
{
	class ASlasherPlayer*                              killer;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.GetInjectionTarget
struct UInjectSerumInteraction_GetInjectionTarget_Params
{
	class ACamperPlayer*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.InjectSerumInteraction.Authority_CureSurvivor
struct UInjectSerumInteraction_Authority_CureSurvivor_Params
{
	class ACamperPlayer*                               CamperPlayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged
struct UK24AnimInstance_OnKillerPowerLevelChanged_Params
{
	int                                                powerlevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
struct UK24CharacterFXComponent_Local_OnKillerPowerLevelChanged_Params
{
	int                                                powerlevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo
struct UK24CheatComponent_DBD_TeleportZombiesTo_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24ZombieFall
struct UK24CheatComponent_DBD_K24ZombieFall_Params
{
	float                                              Zvalue;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24StopAllZombies
struct UK24CheatComponent_DBD_K24StopAllZombies_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24StartAllZombies
struct UK24CheatComponent_DBD_K24StartAllZombies_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
struct UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Params
{
};

// Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
struct UK24CheatComponent_DBD_K24SetPowerLevelPoints_Params
{
	float                                              value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
struct UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Params
{
	bool                                               value;                                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
struct UK24CheatComponent_DBD_K24ComeToMeMyZombies_Params
{
};

// Function TheK24.K24PounceAttack.Server_HitZombie
struct UK24PounceAttack_Server_HitZombie_Params
{
	class AZombieCharacter*                            zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetLocationTimestamp;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.WhipAttackStart_Cosmetic
struct AK24Power_WhipAttackStart_Cosmetic_Params
{
};

// Function TheK24.K24Power.WhipAttackMove_Cosmetic
struct AK24Power_WhipAttackMove_Cosmetic_Params
{
	struct FVector                                     whipStartLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     whipEndLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstRayCast;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.WhipAttackHit_Cosmetic
struct AK24Power_WhipAttackHit_Cosmetic_Params
{
	struct FVector                                     whipStartLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     impactPointLocation;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     whipEndLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isFirstHit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactNormal;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       phyMaterial;                                               // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               hitACharacter;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.WhipAttackEnd_Cosmetic
struct AK24Power_WhipAttackEnd_Cosmetic_Params
{
};

// Function TheK24.K24Power.Server_PowerDestroyPallet
struct AK24Power_Server_PowerDestroyPallet_Params
{
	class APallet*                                     Pallet;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.Server_PowerDestroyBreakable
struct AK24Power_Server_PowerDestroyBreakable_Params
{
	class ABreakableBase*                              breakable;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.Server_KillAZombie
struct AK24Power_Server_KillAZombie_Params
{
	class AZombieCharacter*                            zombie;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EAttackType                         attackType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.PowerHitStateEnd_Cosmetic
struct AK24Power_PowerHitStateEnd_Cosmetic_Params
{
	struct FVector                                     whipStartLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     whipEndLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.PowerCooldownEnd_Cosmetic
struct AK24Power_PowerCooldownEnd_Cosmetic_Params
{
};

// Function TheK24.K24Power.OnRep_PowerLevelPoints
struct AK24Power_OnRep_PowerLevelPoints_Params
{
};

// Function TheK24.K24Power.OnPowerStop_Cosmetic
struct AK24Power_OnPowerStop_Cosmetic_Params
{
};

// Function TheK24.K24Power.OnPowerStartCharge_Cosmetic
struct AK24Power_OnPowerStartCharge_Cosmetic_Params
{
};

// Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic
struct AK24Power_OnPowerLevelChanged_Cosmetic_Params
{
	int                                                powerlevel;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.Multicast_PowerDestroyPallet
struct AK24Power_Multicast_PowerDestroyPallet_Params
{
	class APallet*                                     Pallet;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.Multicast_PowerDestroyBreakable
struct AK24Power_Multicast_PowerDestroyBreakable_Params
{
	class ABreakableBase*                              breakable;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.IsInPower
struct AK24Power_IsInPower_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.GetWhipLength
struct AK24Power_GetWhipLength_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.GetPowerLevel
struct AK24Power_GetPowerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24Power.Authority_OnSurvivorContaminated
struct AK24Power_Authority_OnSurvivorContaminated_Params
{
	TheK24_EContaminator                               contaminator;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
struct UK24PowerAnimInstance_OnLevelReadyToPlay_Params
{
};

// Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
struct UK24PowerAnimInstance_OnKillerPowerLevelChanged_Params
{
	int                                                powerlevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerAnimInstance.OnIntroCompleted
struct UK24PowerAnimInstance_OnIntroCompleted_Params
{
};

// Function TheK24.k24PowerCooldownInteraction.SetK24Power
struct Uk24PowerCooldownInteraction_SetK24Power_Params
{
	class AK24Power*                                   K24Power;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
struct UK24PowerPresentationItemProgressComponent_SetK24Power_Params
{
	class AK24Power*                                   K24Power;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24WhipAttack.Server_ContaminatePlayer
struct UK24WhipAttack_Server_ContaminatePlayer_Params
{
	class ACamperPlayer*                               Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetLocationTimestamp;                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.K24WhipAttack.Client_ContaminationResult
struct UK24WhipAttack_Client_ContaminationResult_Params
{
	class ADBDPlayer*                                  Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsValid;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.LethalPursuer.Server_ActivatePerk
struct ULethalPursuer_Server_ActivatePerk_Params
{
};

// Function TheK24.LethalPursuer.Local_OnIntroCompleted
struct ULethalPursuer_Local_OnIntroCompleted_Params
{
};

// Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
struct URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Params
{
};

// Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
struct URookieSpirit_HandleGeneratorIsDamagedChanged_Params
{
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SupplyCrateInteractable.OnRep_IsOpen
struct ASupplyCrateInteractable_OnRep_IsOpen_Params
{
};

// Function TheK24.SupplyCrateInteractable.OnRep_IsAutoClosing
struct ASupplyCrateInteractable_OnRep_IsAutoClosing_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
struct USurvivorContaminationComponent_OnRep_IsContaminated_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions
struct USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
struct USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
struct USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Params
{
};

// Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
struct USurvivorContaminationComponent_OnContaminated_Cosmetic_Params
{
	TheK24_EContaminator                               contaminator;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
struct USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Params
{
	TheK24_EContaminator                               contaminator;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.SurvivorContaminationComponent.IsContaminated
struct USurvivorContaminationComponent_IsContaminated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAIController.OnSlasherSet
struct AZombieAIController_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
struct AZombieAIController_Authority_OnTargetPerceptionUpdated_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                                 Stimulus;                                                  // 0x0000(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
struct UZombieAttractedByGeneratorBTService_OnInRangeChanged_Params
{
	bool                                               InRange;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGenerator*                                  Generator;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
struct AZombieCharacter_ZombieKilledByKiller_Cosmetic_Params
{
	DBDSharedTypes_EAttackType                         attackType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
struct AZombieCharacter_SetCharacterActive_Cosmetic_Params
{
	bool                                               value;                                                     // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
struct AZombieCharacter_OnZombieStateChanged_Cosmetic_Params
{
	TheK24_EZombieState                                ZombieState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnSlasherSet
struct AZombieCharacter_OnSlasherSet_Params
{
	class ASlasherPlayer*                              Slasher;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnRep_ZombieState
struct AZombieCharacter_OnRep_ZombieState_Params
{
	TheK24_EZombieState                                previousState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnRep_ZombieGender
struct AZombieCharacter_OnRep_ZombieGender_Params
{
};

// Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
struct AZombieCharacter_OnFemaleGenderSet_Cosmetic_Params
{
};

// Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
struct AZombieCharacter_OnEndOverlapZombieAttackDetector_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
struct AZombieCharacter_OnBeginOverlapZombieAttackDetector_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
struct AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Params
{
	DBDSharedTypes_EAttackType                         attackType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetZombieGender
struct AZombieCharacter_GetZombieGender_Params
{
	TheK24_EZombieGender                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
struct AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Params
{
	class UOtherCharactersVerticalCollisionsHandler*   ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
struct AZombieCharacter_GetAuthoritativeMovementComponent_Params
{
	class UAuthoritativeMovementComponent*             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.GetAudioSwitchState
struct AZombieCharacter_GetAudioSwitchState_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged
struct AZombieCharacter_Authority_OnZombieStateChanged_Params
{
	TheK24_EZombieState                                ZombieState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
struct AZombieCharacter_Authority_OnFlashlightRemoved_Params
{
	class UFlashlightComponent*                        Flashlight;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded
struct AZombieCharacter_Authority_OnFlashlightAdded_Params
{
	class UFlashlightComponent*                        Flashlight;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
struct AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Params
{
	struct FFirecrackerEffectData                      effectData;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
struct AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Params
{
};

// Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
struct UZombieCustomizationComponent_Multicast_SetZombieCustomization_Params
{
	class ACamperPlayer*                               survivor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
struct UZombieFallDetectorComponent_Authority_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
struct UZombieResurrector_Authority_OnKillerPowerLevelChanged_Params
{
	int                                                powerlevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
struct UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Params
{
	class AActor*                                      originator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      instigatingActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               shouldTrack;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              audibleRange;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isQuickAction;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TheK24.ZombiesManagement.Authority_OnIntroComplete
struct AZombiesManagement_Authority_OnIntroComplete_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

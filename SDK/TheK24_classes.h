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
// Classes
//---------------------------------------------------------------------------

// Class TheK24.ActivateK24PowerInteraction
// 0x0098 (FullSize[0x0770] - InheritedSize[0x06D8])
class UActivateK24PowerInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_V6FJ[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_M8MV[0x8];                                     // 0x06E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _interactionViewPitchMax;                                  // 0x06E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMin;                                  // 0x0710(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maximumTimeToTriggerRegularAttack;                        // 0x0738(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UVUZ[0x10];                                    // 0x0760(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ActivateK24PowerInteraction");
		return ptr;
	}



	void SetK24Power(class AK24Power* K24Power);
};

// Class TheK24.Addon_K24_04
// 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
class UAddon_K24_04 : public UOnEventBaseAddon
{
public:
	float                                              _effectTime;                                               // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                OutlineColor;                                              // 0x02AC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W2AL[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Addon_K24_04");
		return ptr;
	}



};

// Class TheK24.Addon_K24_19
// 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
class UAddon_K24_19 : public UImposeStatusEffectOnEventAddon
{
public:
	class UClass*                                      _zombieEscapeDoorPointsActor;                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Addon_K24_19");
		return ptr;
	}



};

// Class TheK24.AISkill_FindCollectable_SupplyCrate
// 0x0010 (FullSize[0x0148] - InheritedSize[0x0138])
class UAISkill_FindCollectable_SupplyCrate : public UAISkill_FindCollectable_Searchable
{
public:
	struct FAITunableParameter                         UrgencyGoalWeight;                                         // 0x0138(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.AISkill_FindCollectable_SupplyCrate");
		return ptr;
	}



};

// Class TheK24.AISkill_InteractionUseItem_Serum
// 0x0000 (FullSize[0x0178] - InheritedSize[0x0178])
class UAISkill_InteractionUseItem_Serum : public UAISkill_InteractionUseItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.AISkill_InteractionUseItem_Serum");
		return ptr;
	}



};

// Class TheK24.BiteTheBullet
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class UBiteTheBullet : public UPerk
{
public:
	class ADBDPlayer*                                  _server_healTarget;                                        // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BiteTheBullet");
		return ptr;
	}



};

// Class TheK24.BiteTheBulletEffect
// 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
class UBiteTheBulletEffect : public UBaseLingeringStatusEffect
{
public:
	unsigned char                                      UnknownData_VQP5[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BiteTheBulletEffect");
		return ptr;
	}



};

// Class TheK24.BlastMine
// 0x00E0 (FullSize[0x04B0] - InheritedSize[0x03D0])
class UBlastMine : public UPerk
{
public:
	float                                              _firecrackerHeight;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IGBP[0x4];                                     // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSecondaryInteractionProperties             _secondaryActionProperties;                                // 0x03D8(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              _secondsToActivatePerk;                                    // 0x0410(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _kickChargePercentMin;                                     // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _kickChargePercentMax;                                     // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressPercentRequirementLevels[0x3];                    // 0x041C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              __generatorTrapDurationLevels[0x3];                        // 0x0428(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canBeReusedOnTimerExpire;                                 // 0x0434(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canBeReusedAfterTrapActivation;                           // 0x0435(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XK97[0x2];                                     // 0x0436(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractionDefinition*                      _currentRepairInteractionWithAbility;                      // 0x0438(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGenerator*                                  _trappedGenerator;                                         // 0x0440(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _progressPercent;                                          // 0x0448(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _trapActivated;                                            // 0x044C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _repairTimerDone;                                          // 0x044D(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0Y49[0x2];                                     // 0x044E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASlasherPlayer*                              _kickInteractionPlayerOwner;                               // 0x0450(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableInteractionDefinition*            _kickInteraction;                                          // 0x0458(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGenerator*                                  _repairProgressGenerator;                                  // 0x0460(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9I6I[0x48];                                    // 0x0468(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BlastMine");
		return ptr;
	}



	void TrapDettachedToGenerator_Cosmetic(class AGenerator* trappedGenerator);
	void TrapAttachedToGenerator_Cosmetic(class AGenerator* trappedGenerator);
	void ThrowBubbleIndicator_Cosmetic(const struct FTransform& Location);
	void Server_OnActionInputPressed(class AGenerator* Generator);
	void OnRep_TrappedGenerator(class AGenerator* oldGenerator);
	void OnRep_CurrentRepairInteractionWithAbility(class UInteractionDefinition* oldRepairInteraction);
	void OnActivateExplosion(const struct FTransform& firecrackerTransform, class AGenerator* Generator);
	void Client_TrapActivatedLoudNotification(const struct FTransform& Location);
	void Authority_OnRepairProgress(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
};

// Class TheK24.BlastMineTrapComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UBlastMineTrapComponent : public UActorComponent
{
public:
	bool                                               _isTrapActive;                                             // 0x00B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J9ZP[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BlastMineTrapComponent");
		return ptr;
	}



	void OnRep_IsTrapActive();
};

// Class TheK24.BlindZombieFlashlightableLightingStrategy
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBlindZombieFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BlindZombieFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class TheK24.BTTask_MoveToAbortIfStuck
// 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo
{
public:
	unsigned char                                      UnknownData_08LI[0x4];                                     // 0x00C0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _deltaConsideredStuck;                                     // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FZ3D[0xC];                                     // 0x00C8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _maxTimeStuck;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.BTTask_MoveToAbortIfStuck");
		return ptr;
	}



};

// Class TheK24.ChangeZombieStateBTTask
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UChangeZombieStateBTTask : public UBTTask_BlueprintBase
{
public:
	TheK24_EZombieState                                _zombieState;                                              // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K16C[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ChangeZombieStateBTTask");
		return ptr;
	}



};

// Class TheK24.CollectSerumInCrateInteraction
// 0x0018 (FullSize[0x05F0] - InheritedSize[0x05D8])
class UCollectSerumInCrateInteraction : public UCollectItemInteraction
{
public:
	class ASupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UT7B[0x10];                                    // 0x05E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.CollectSerumInCrateInteraction");
		return ptr;
	}



};

// Class TheK24.ContaminationSerumCollectable
// 0x0018 (FullSize[0x0528] - InheritedSize[0x0510])
class AContaminationSerumCollectable : public ABaseCamperCollectable
{
public:
	unsigned char                                      UnknownData_JTSP[0x18];                                    // 0x0510(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ContaminationSerumCollectable");
		return ptr;
	}



};

// Class TheK24.ContaminationSubAnimInstance
// 0x0030 (FullSize[0x0520] - InheritedSize[0x04F0])
class UContaminationSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isContaminated;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjectingSerumSelf;                                     // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInjectingSerumOther;                                    // 0x04F2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingInjectedWithSerum;                                 // 0x04F3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingHealed;                                            // 0x04F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFirstContaminationHit;                                  // 0x04F5(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LH96[0x2A];                                    // 0x04F6(0x002A) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ContaminationSubAnimInstance");
		return ptr;
	}



};

// Class TheK24.Counterforce
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class UCounterforce : public UPerk
{
public:
	unsigned char                                      UnknownData_LYAC[0x4];                                     // 0x03D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _totemAuraVisibleDuration[0x3];                            // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _startingTotemCleanseSpeedBonus[0x3];                      // 0x03E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _stackableTotemCleanseSpeedBonus[0x3];                     // 0x03EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Counterforce");
		return ptr;
	}



	void Multicast_ShowTotemAura(class ATotem* Totem);
};

// Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryContext_ZombiePatrolAreaPoint : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint");
		return ptr;
	}



};

// Class TheK24.Eruption
// 0x0048 (FullSize[0x0418] - InheritedSize[0x03D0])
class UEruption : public UPerk
{
public:
	TArray<class AGenerator*>                          _server_highlightedGenerators;                             // 0x03D0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkEnabled;                                            // 0x03E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SX0X[0x3];                                     // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorRegressPercentage[0x3];                          // 0x03E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorImposedStatusEffectDuration[0x3];                 // 0x03F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03FC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _screamRevealLocationDuration;                             // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HN58[0xC];                                     // 0x040C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Eruption");
		return ptr;
	}



	void OnRep_IsPerkEnabled();
	void Multicast_TriggerPerk(TArray<class AGenerator*> explodingGenerators);
	void Multicast_HighlightGenerator(class AGenerator* Generator);
	void MakeSurvivorScreamCosmetic(class ADBDPlayer* screamingSurvivor);
	float GetScreamRevealLocationDuration();
	void Cosmetic_OnGeneratorHighlightStart(class AGenerator* highlightedGenerator);
	void Cosmetic_OnGeneratorHighlightEnd(class AGenerator* highlightedGenerator);
};

// Class TheK24.Flashbang
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class UFlashbang : public UPerk
{
public:
	unsigned char                                      UnknownData_OG05[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGenerator*                                  _generatorBeingRepaired;                                   // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorsRepairTargetProgression;                        // 0x03E0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _generatorRepairPercentToCraftFlashbang[0x3];              // 0x03E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Flashbang");
		return ptr;
	}



	void OnRep_GeneratorsRepairProgress();
	void Cosmetic_OnGeneratorRepairProgressionTargetAchieved();
	void Client_OnGeneratorRepairProgressionTargetAchieved();
	void Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
};

// Class TheK24.Hysteria
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class UHysteria : public UPerk
{
public:
	float                                              _obliviousEffectDuration[0x3];                             // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FLZD[0x58];                                    // 0x03E8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Hysteria");
		return ptr;
	}



};

// Class TheK24.HysteriaObliviousEffect
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UHysteriaObliviousEffect : public UTimedObliviousEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.HysteriaObliviousEffect");
		return ptr;
	}



};

// Class TheK24.IncreaseZombiesSpeedStatusEffect
// 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect
{
public:
	float                                              _zombieSpeedAdditive;                                      // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W1MO[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.IncreaseZombiesSpeedStatusEffect");
		return ptr;
	}



};

// Class TheK24.InjectSerumInteraction
// 0x00C8 (FullSize[0x07A0] - InheritedSize[0x06D8])
class UInjectSerumInteraction : public UChargeableInteractionDefinition
{
public:
	struct FTunableStat                                _injectSerumKillerInstinctTime;                            // 0x06D8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RFJA[0x8];                                     // 0x0758(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                _scoreEvent;                                               // 0x0760(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_58GX[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _serumApplyHeal;                                           // 0x0770(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LGUD[0x8];                                     // 0x0798(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.InjectSerumInteraction");
		return ptr;
	}



	void OnSurvivorCured_Cosmetic();
	void OnKillerSet(class ASlasherPlayer* killer);
	class ACamperPlayer* GetInjectionTarget();
	void Authority_CureSurvivor(class ACamperPlayer* CamperPlayer);
};

// Class TheK24.InjectSerumOther
// 0x0000 (FullSize[0x07A0] - InheritedSize[0x07A0])
class UInjectSerumOther : public UInjectSerumInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.InjectSerumOther");
		return ptr;
	}



};

// Class TheK24.InjectSerumSelf
// 0x0000 (FullSize[0x07A0] - InheritedSize[0x07A0])
class UInjectSerumSelf : public UInjectSerumInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.InjectSerumSelf");
		return ptr;
	}



};

// Class TheK24.K24AnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UK24AnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_ZWOG[0x4];                                     // 0x05A8(0x0004) Fix Super Size
	int                                                _powerLevel;                                               // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JNCX[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24AnimInstance");
		return ptr;
	}



	void OnKillerPowerLevelChanged(int powerlevel);
};

// Class TheK24.K24CharacterFXComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UK24CharacterFXComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerLevelChangedFx;                                     // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Local_OnKillerHitZombie;                                   // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Local_OnKillerContaminatedSurvivor;                        // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTFS[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24CharacterFXComponent");
		return ptr;
	}



	void Local_OnKillerPowerLevelChanged(int powerlevel);
};

// Class TheK24.K24CheatComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UK24CheatComponent : public UActorComponent
{
public:
	class UClass*                                      _zombieManagementClass;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AZombiesManagement*                          _zombiesManagement;                                        // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24CheatComponent");
		return ptr;
	}



	void DBD_TeleportZombiesTo(float X, float Y, float Z);
	void DBD_K24ZombieFall(float Zvalue);
	void DBD_K24StopAllZombies();
	void DBD_K24StartAllZombies();
	void DBD_K24SpawnZombieOnKiller();
	void DBD_K24SetPowerLevelPoints(float value);
	void DBD_K24SetContaminationOnSurvivor(bool value);
	void DBD_K24ComeToMeMyZombies();
};

// Class TheK24.K24PounceAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UK24PounceAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24PounceAttack");
		return ptr;
	}



	void Server_HitZombie(class AZombieCharacter* zombie, float TargetLocationTimestamp);
};

// Class TheK24.K24Power
// 0x0430 (FullSize[0x08F8] - InheritedSize[0x04C8])
class AK24Power : public ACollectable
{
public:
	unsigned char                                      UnknownData_ELR4[0x88];                                    // 0x04C8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerWalkSpeed;                                           // 0x0550(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerWalkSpeedLevel3;                                     // 0x0578(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _normalWalkSpeed;                                          // 0x05A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerMouseYawScale;                                       // 0x05C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerYawAdjustTime;                                       // 0x05F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerGamePadYawScale;                                     // 0x0618(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _activateK24PowerCharge;                                   // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _activateK24PowerSecondsToCharge;                          // 0x0648(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _activatePowerChargeSpeedCurve;                            // 0x0670(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _activatePowerChargeLvl3SpeedCurve;                        // 0x0678(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3TOT[0x8];                                     // 0x0680(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractionDefinition*                      _k24PowerCooldownInteraction;                              // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel1;                                         // 0x0690(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel2;                                         // 0x06B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _whipLengthLevel3;                                         // 0x06E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _contaminationComponentBP;                                 // 0x0708(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VVON[0x8];                                     // 0x0710(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _powerChargeSurvivorContaminatedPoint;                     // 0x0718(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _powerChargeZombieKilledPoint;                             // 0x0798(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _powerChargeSurvivorHitPoint;                              // 0x0818(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _powerLevelPoints;                                         // 0x0898(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NKX7[0x4];                                     // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerLevelPointsToLevel2;                                 // 0x08A0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerLevelPointsToLevel3;                                 // 0x08C8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RQOX[0x8];                                     // 0x08F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24Power");
		return ptr;
	}



	void WhipAttackStart_Cosmetic();
	void WhipAttackMove_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation, bool isFirstRayCast);
	void WhipAttackHit_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& impactPointLocation, const struct FVector& whipEndLocation, bool isFirstHit, const struct FVector& ImpactNormal, const struct FName& phyMaterial, bool hitACharacter);
	void WhipAttackEnd_Cosmetic();
	void Server_PowerDestroyPallet(class APallet* Pallet);
	void Server_PowerDestroyBreakable(class ABreakableBase* breakable);
	void Server_KillAZombie(class AZombieCharacter* zombie, DBDSharedTypes_EAttackType attackType);
	void PowerHitStateEnd_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation);
	void PowerCooldownEnd_Cosmetic();
	void OnRep_PowerLevelPoints();
	void OnPowerStop_Cosmetic();
	void OnPowerStartCharge_Cosmetic();
	void OnPowerLevelChanged_Cosmetic(int powerlevel);
	void Multicast_PowerDestroyPallet(class APallet* Pallet);
	void Multicast_PowerDestroyBreakable(class ABreakableBase* breakable);
	bool IsInPower();
	float GetWhipLength();
	int GetPowerLevel();
	void Authority_OnSurvivorContaminated(TheK24_EContaminator contaminator);
};

// Class TheK24.K24PowerAnimInstance
// 0x0030 (FullSize[0x02A0] - InheritedSize[0x0270])
class UK24PowerAnimInstance : public UAnimInstance
{
public:
	class AK24Power*                                   _k24Power;                                                 // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASlasherPlayer*                              _owningKiller;                                             // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInPowerMode;                                            // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChargingPower;                                          // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isK24PowerAttacking;                                      // 0x0282(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isRequestingPowerAttack;                                  // 0x0283(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _tentacleLength;                                           // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFirstPersonView;                                        // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EAttackSubstate                     _attackSubstate;                                           // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIntroCompleted;                                         // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isLevelReadyToPlay;                                       // 0x028B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _powerLevel;                                               // 0x028C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _forwardVelocity;                                          // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralVelocity;                                          // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isKilling;                                                // 0x0298(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YAH5[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24PowerAnimInstance");
		return ptr;
	}



	void OnLevelReadyToPlay();
	void OnKillerPowerLevelChanged(int powerlevel);
	void OnIntroCompleted();
};

// Class TheK24.k24PowerCooldownInteraction
// 0x0050 (FullSize[0x0600] - InheritedSize[0x05B0])
class Uk24PowerCooldownInteraction : public UInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _k24PowerCooldownTime;                                     // 0x05B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _cooldownSpeedCurve;                                       // 0x05D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _cooldownLvl3SpeedCurve;                                   // 0x05E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _playedCooldownSpeedCurve;                                 // 0x05E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FBI3[0x10];                                    // 0x05F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.k24PowerCooldownInteraction");
		return ptr;
	}



	void SetK24Power(class AK24Power* K24Power);
};

// Class TheK24.K24PowerPresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UK24PowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	unsigned char                                      UnknownData_3KC3[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24PowerPresentationItemProgressComponent");
		return ptr;
	}



	void SetK24Power(class AK24Power* K24Power);
};

// Class TheK24.K24SlashAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UK24SlashAttack : public UK24PounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24SlashAttack");
		return ptr;
	}



};

// Class TheK24.K24WhipAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UK24WhipAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_NT63[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttack");
		return ptr;
	}



	void Server_ContaminatePlayer(class ACamperPlayer* Target, float TargetLocationTimestamp);
	void Client_ContaminationResult(class ADBDPlayer* Target, bool IsValid);
};

// Class TheK24.K24WhipAttackOpenSubstate
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UK24WhipAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	class UCurveFloat*                                 _lvl3SpeedCurve;                                           // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttackOpenSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackHittingSubstate
// 0x00C0 (FullSize[0x0260] - InheritedSize[0x01A0])
class UK24WhipAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:
	struct FDBDTunableRowHandle                        _attackSphereTraceRadius;                                  // 0x01A0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerAttackBreakObjectLevel;                              // 0x01C8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerCanBreakObjectAfterAPlayerDamage;                    // 0x01F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _whipMovementFromOffset;                                   // 0x0218(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _whipMovementToOffset;                                     // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _whipMovementCurve;                                        // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _lvl3SpeedCurve;                                           // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _whipGroundDetectionOffset;                                // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BJAN[0x1C];                                    // 0x0244(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttackHittingSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UK24WhipAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UK24WhipAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttackMissSubstate");
		return ptr;
	}



};

// Class TheK24.K24WhipAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UK24WhipAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.K24WhipAttackObstructSubstate");
		return ptr;
	}



};

// Class TheK24.LethalPursuer
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class ULethalPursuer : public UPerk
{
public:
	float                                              _survivorRevealDuration[0x3];                              // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7OS8[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.LethalPursuer");
		return ptr;
	}



	void Server_ActivatePerk();
	void Local_OnIntroCompleted();
};

// Class TheK24.OpenSupplyCrateInteraction
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class UOpenSupplyCrateInteraction : public UChargeableInteractionDefinition
{
public:
	class ASupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x06D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _interactionWasComplete;                                   // 0x06E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HW90[0x7];                                     // 0x06E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSequence*                               _successExitTimeAnimSequenceReference;                     // 0x06E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.OpenSupplyCrateInteraction");
		return ptr;
	}



};

// Class TheK24.Resurgence
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class UResurgence : public UPerk
{
public:
	float                                              _healRegainPercentage[0x3];                                // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HOPZ[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.Resurgence");
		return ptr;
	}



};

// Class TheK24.RookieSpirit
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class URookieSpirit : public UPerk
{
public:
	int                                                _numberOfGreatSkillChecksOnGeneratorRepair;                // 0x03D0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _numberOfGeneratorRepairGreatSkillChecksRequired[0x3];     // 0x03D4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.RookieSpirit");
		return ptr;
	}



	void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();
	void HandleGeneratorIsDamagedChanged(class AGenerator* Generator, class ADBDPlayer* Player);
};

// Class TheK24.SerumOutlineUpdateStrategy
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class USerumOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.SerumOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.SupplyCrateAnimInstance
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class USupplyCrateAnimInstance : public USleepingAnimInstance
{
public:
	class ASupplyCrateInteractable*                    _owningSupplyCrate;                                        // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOpen;                                                   // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingPriedOpen;                                         // 0x0289(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAutoClosing;                                            // 0x028A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6LYH[0x5];                                     // 0x028B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.SupplyCrateAnimInstance");
		return ptr;
	}



};

// Class TheK24.SupplyCrateInteractable
// 0x0118 (FullSize[0x0440] - InheritedSize[0x0328])
class ASupplyCrateInteractable : public AInteractable
{
public:
	unsigned char                                      UnknownData_H8TT[0x38];                                    // 0x0328(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _chargeableComponent;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _contamainationSerumCollectable;                           // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _openInteractionSecondsToCharge;                           // 0x0370(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACollectable*                                _itemInSupplyCrate;                                        // 0x0398(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _itemSpawnPoint;                                           // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _itemDropPoint;                                            // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isOpen;                                                   // 0x03B0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isAutoClosing;                                            // 0x03B1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JSHU[0x3E];                                    // 0x03B2(0x003E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _crateSelfClosingTime;                                     // 0x03F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _crateAutoCloseAnimationTime;                              // 0x0418(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.SupplyCrateInteractable");
		return ptr;
	}



	void OnRep_IsOpen();
	void OnRep_IsAutoClosing();
};

// Class TheK24.SupplyCrateOutlineUpdateStrategy
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class USupplyCrateOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.SupplyCrateOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.SurvivorContaminationComponent
// 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
class USurvivorContaminationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_H89C[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagStateBool                               _isContaminated;                                           // 0x00D0(0x0030) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _injectSerumChargeable;                                    // 0x0100(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _injectSerumSecondsToCharge;                               // 0x0108(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _contaminationHinderedSeconds;                             // 0x0130(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _contaminationHinderedValue;                               // 0x01B0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J27Y[0x8];                                     // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              _injectSerumInteractionsClasses;                           // 0x01E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UInteractionDefinition*>              _injectSerumInteractions;                                  // 0x01F0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.SurvivorContaminationComponent");
		return ptr;
	}



	void OnRep_IsContaminated();
	void OnRep_InjectSerumInteractions();
	void OnContaminationCured_Cosmetic();
	void OnContaminated_SFX_Stinger_Cosmetic();
	void OnContaminated_Cosmetic(TheK24_EContaminator contaminator);
	void Multicast_OnContaminated_Cosmetic(TheK24_EContaminator contaminator);
	bool IsContaminated();
};

// Class TheK24.TheK24Utilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTheK24Utilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.TheK24Utilities");
		return ptr;
	}



};

// Class TheK24.ZombieAcquirePatrolAreaBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieAcquirePatrolAreaBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAcquirePatrolAreaBTService");
		return ptr;
	}



};

// Class TheK24.ZombieAcquireTargetBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieAcquireTargetBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAcquireTargetBTService");
		return ptr;
	}



};

// Class TheK24.ZombieAIController
// 0x02E0 (FullSize[0x0620] - InheritedSize[0x0340])
class AZombieAIController : public AAIController
{
public:
	unsigned char                                      UnknownData_XCV1[0x18];                                    // 0x0340(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               _zombieBehaviorTree;                                       // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAIPerceptionComponent*                      _aiPerceptionComponent;                                    // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D4X4[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACamperPlayer*>                       _survivorInVision;                                         // 0x0370(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACamperPlayer*                               _chaseTargetSurvivor;                                      // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _goToLocation;                                             // 0x0388(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9IRQ[0xC];                                     // 0x0394(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACamperPlayer*>                       _survivorsInAttackDetector;                                // 0x03A0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackHitTime;                                      // 0x03B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackOpenTime;                                     // 0x03D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAnimSpawnTime;                                      // 0x0400(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAnimDyingTime;                                      // 0x0428(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieSightRadius;                                        // 0x0450(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieLoseSightRadius;                                    // 0x04D0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieVisionHalfAngle;                                    // 0x0550(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieFallSmashTime;                                      // 0x05D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _zombieAttackCooldownTime;                                 // 0x05F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAIController");
		return ptr;
	}



	void OnSlasherSet(class ASlasherPlayer* Slasher);
	void Authority_OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
};

// Class TheK24.ZombieAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UZombieAnimInstance : public UAnimInstance
{
public:
	float                                              _speed;                                                    // 0x0270(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK24_EZombieState                                _zombieState;                                              // 0x0274(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JGQX[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZombieCharacter*                            _zombieCharacter;                                          // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isFalling;                                                // 0x0280(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK24_EZombieGender                               _zombieGender;                                             // 0x0281(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6YIW[0xE];                                     // 0x0282(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAnimInstance");
		return ptr;
	}



};

// Class TheK24.ZombieAttackSurvivorBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieAttackSurvivorBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAttackSurvivorBTTask");
		return ptr;
	}



};

// Class TheK24.ZombieAttractedByGeneratorBTService
// 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase
{
public:
	float                                              _genRepairingHearingRange;                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T8QT[0x2C];                                    // 0x00A4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieAttractedByGeneratorBTService");
		return ptr;
	}



	void OnInRangeChanged(bool InRange, class AGenerator* Generator);
};

// Class TheK24.ZombieBlindableComponent
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class UZombieBlindableComponent : public UBlindableBaseComponent
{
public:
	class UGameplayTagContainerComponent*              _ownerObjectState;                                         // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieBlindableComponent");
		return ptr;
	}



};

// Class TheK24.ZombieBlindingFXComponent
// 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
class UZombieBlindingFXComponent : public UKillerBlindingFXComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieBlindingFXComponent");
		return ptr;
	}



};

// Class TheK24.ZombieCharacter
// 0x0330 (FullSize[0x0800] - InheritedSize[0x04D0])
class AZombieCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_TAOZ[0x20];                                    // 0x04D0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _zombieWalkSpeed;                                          // 0x04F0(0x0080) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KRYL[0x8];                                     // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativePoolableActorComponent*        _poolableComponent;                                        // 0x0578(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            _zombieAttackDetector;                                     // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _attackDamageZone;                                         // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK24_EZombieState                                _zombieState;                                              // 0x0590(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IWA7[0x3F];                                    // 0x0591(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _zombieRespawnTimeKilledBySlasher;                         // 0x05D0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _zombieRespawnTimeKilledBySurvivor;                        // 0x0650(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8HHH[0x10];                                    // 0x06D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  _respawnPositionBehindGate;                                // 0x06E0(0x0030) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TheK24_EZombieGender                               _zombieGender;                                             // 0x0710(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UAQJ[0x7];                                     // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               _femaleSkeletalMesh;                                       // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _audioSwitchState;                                         // 0x0720(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZombieBlindableComponent*                   _blindableComponent;                                       // 0x0730(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _blindingChargeableComponent;                              // 0x0738(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x0740(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashlightableComponent*                    _flashLightableComponent;                                  // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HPKN[0x38];                                    // 0x0750(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _zombieStunBaseTime;                                       // 0x0788(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayTagContainerComponent*              _objectState;                                              // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9QZC[0x8];                                     // 0x07B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterPositionRecorderComponent*         _positionRecorder;                                         // 0x07C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeMovementComponent*             _authoritativeMovementComponent;                           // 0x07C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOtherCharactersVerticalCollisionsHandler*   _otherCharactersVerticalCollisionsHandler;                 // 0x07D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              _ignoreActors;                                             // 0x07D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W14Y[0x4];                                     // 0x07E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _zombieStunnedCapsuleRadius;                               // 0x07EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minFallHeight;                                            // 0x07F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IPTB[0x8];                                     // 0x07F4(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _afterInAirAttackCooldown;                                 // 0x07FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieCharacter");
		return ptr;
	}



	void ZombieKilledByKiller_Cosmetic(DBDSharedTypes_EAttackType attackType);
	void SetCharacterActive_Cosmetic(bool value);
	void OnZombieStateChanged_Cosmetic(TheK24_EZombieState ZombieState);
	void OnSlasherSet(class ASlasherPlayer* Slasher);
	void OnRep_ZombieState(TheK24_EZombieState previousState);
	void OnRep_ZombieGender();
	void OnFemaleGenderSet_Cosmetic();
	void OnEndOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Multicast_ZombieKilledByKillerCosmetic(DBDSharedTypes_EAttackType attackType);
	TheK24_EZombieGender GetZombieGender();
	class UOtherCharactersVerticalCollisionsHandler* GetOtherCharactersVerticalCollisionsHandler();
	class UAuthoritativeMovementComponent* GetAuthoritativeMovementComponent();
	struct FString GetAudioSwitchState();
	void Authority_OnZombieStateChanged(TheK24_EZombieState ZombieState);
	void Authority_OnFlashlightRemoved(class UFlashlightComponent* Flashlight);
	void Authority_OnFlashlightAdded(class UFlashlightComponent* Flashlight);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
	void Authority_DeactivateZombieAndStartRespawnTimer();
};

// Class TheK24.ZombieChaseStateBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieChaseStateBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieChaseStateBTService");
		return ptr;
	}



};

// Class TheK24.ZombieChaseSurvivorTargetBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieChaseSurvivorTargetBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieChaseSurvivorTargetBTTask");
		return ptr;
	}



};

// Class TheK24.ZombieCustomizationComponent
// 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
{
public:
	TWeakObjectPtr<class ACamperPlayer>                _survivorSource;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieCustomizationComponent");
		return ptr;
	}



	void Multicast_SetZombieCustomization(class ACamperPlayer* survivor);
};

// Class TheK24.ZombieEscapeDoorPointsActor
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class AZombieEscapeDoorPointsActor : public AActor
{
public:
	TArray<class UArrowComponent*>                     _availablePoints;                                          // 0x0230(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieEscapeDoorPointsActor");
		return ptr;
	}



};

// Class TheK24.ZombieEvaluateEnterChaseBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieEvaluateEnterChaseBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieEvaluateEnterChaseBTService");
		return ptr;
	}



};

// Class TheK24.ZombieEvaluteEnterAttackBTService
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UZombieEvaluteEnterAttackBTService : public UBTService_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieEvaluteEnterAttackBTService");
		return ptr;
	}



};

// Class TheK24.ZombieFallDetectorComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UZombieFallDetectorComponent : public UActorComponent
{
public:
	struct FDBDTunableRowHandle                        _zombieDistanceConsideredSmashFall;                        // 0x00B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RI38[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieFallDetectorComponent");
		return ptr;
	}



	void Authority_OnMovementModeChange(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
};

// Class TheK24.ZombieOutlineUpdateStrategy
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UZombieOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
public:
	class AZombieCharacter*                            _zombieCharacter;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheK24.ZombieResurrector
// 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
class UZombieResurrector : public UActorComponent
{
public:
	unsigned char                                      UnknownData_5X4M[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerLevelToSpawnZombie;                                  // 0x00D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TF4V[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AZombieCharacter*>                    _delayedSpawnZombies;                                      // 0x0108(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FG5L[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieResurrector");
		return ptr;
	}



	void Authority_OnKillerPowerLevelChanged(int powerlevel);
};

// Class TheK24.ZombieRotateTowardsTargetBTTask
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UZombieRotateTowardsTargetBTTask : public UBTTask_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieRotateTowardsTargetBTTask");
		return ptr;
	}



};

// Class TheK24.ZombiesInterestEventManager
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UZombiesInterestEventManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_YN4N[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTag>                        _zombieInterestEvents;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_40T7[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombiesInterestEventManager");
		return ptr;
	}



	void Authority_OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction);
};

// Class TheK24.ZombiesManagement
// 0x00B8 (FullSize[0x02E8] - InheritedSize[0x0230])
class AZombiesManagement : public AActor
{
public:
	unsigned char                                      UnknownData_Z9PO[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativeActorPoolComponent*            _zombiePool;                                               // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZombiesPatrolAreaManager*                   _zombiesPatrolAreaManager;                                 // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AZombieCharacter*>                    _spawnedZombiesArray;                                      // 0x0248(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RJ11[0x30];                                    // 0x0258(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _firstZombieSpawnTime;                                     // 0x0288(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _numberOfZombieToSpawnAtStart;                             // 0x02B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AZombieEscapeDoorPointsActor*>        _zombieEscapeDoorPoints;                                   // 0x02D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombiesManagement");
		return ptr;
	}



	void Authority_OnIntroComplete();
};

// Class TheK24.ZombiesPatrolAreaManager
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UZombiesPatrolAreaManager : public UActorComponent
{
public:
	TArray<class AMeatHook*>                           _availablePatrolAreas;                                     // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AMeatHook*>                           _usedPatrolAreas;                                          // 0x00C8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maxDistanceBetweenMeatHookAndPlayers;                     // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U49U[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombiesPatrolAreaManager");
		return ptr;
	}



};

// Class TheK24.ZombieStunnableComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UZombieStunnableComponent : public UStunnableComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK24.ZombieStunnableComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

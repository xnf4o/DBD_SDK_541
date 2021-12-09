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

// Class TheK26.AISkill_Interaction_DismissCrow
// 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
class UAISkill_Interaction_DismissCrow : public UAISkill_Interaction
{
public:
	struct FDBDTunableRowHandle                        _dismissCrowMaxCharge;                                     // 0x0170(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.AISkill_Interaction_DismissCrow");
		return ptr;
	}



};

// Class TheK26.CorrectiveAction
// 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
class UCorrectiveAction : public UPerk
{
public:
	float                                              _startingTokens[0x3];                                      // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _statusEffectName;                                         // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       _allowedInteractionSemanticsForToken;                      // 0x03E8(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IKH8[0x18];                                    // 0x0408(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.CorrectiveAction");
		return ptr;
	}



};

// Class TheK26.HexPentimento
// 0x0070 (FullSize[0x04B0] - InheritedSize[0x0440])
class UHexPentimento : public UHexPerk
{
public:
	unsigned char                                      _statusEffectNames[0x50];                                  // 0x0440(0x0050) UNKNOWN PROPERTY: SetProperty
	class UClass*                                      _rekindleInteractionClass;                                 // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ATotem*>                              _blockedTotems;                                            // 0x0498(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_66OF[0x8];                                     // 0x04A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.HexPentimento");
		return ptr;
	}



};

// Class TheK26.HinderOnCrowAttachStatusEffect
// 0x00B8 (FullSize[0x0410] - InheritedSize[0x0358])
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FGameplayTag                                _onCrowAttachStateTag;                                     // 0x0358(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0X8Q[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _hinderOnIdleLingerTime;                                   // 0x0368(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VQCF[0x28];                                    // 0x03E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.HinderOnCrowAttachStatusEffect");
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheK26.HinderOnIdleAndAttachStatusEffect
// 0x0038 (FullSize[0x03C8] - InheritedSize[0x0390])
class UHinderOnIdleAndAttachStatusEffect : public ULingeringStateTagStatusEffect
{
public:
	struct FGameplayTag                                _onCrowAttachStateTag;                                     // 0x0390(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XWPC[0x2C];                                    // 0x039C(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.HinderOnIdleAndAttachStatusEffect");
		return ptr;
	}



};

// Class TheK26.K26AbilitySubAnimInstance
// 0x0098 (FullSize[0x0590] - InheritedSize[0x04F8])
class UK26AbilitySubAnimInstance : public UBaseKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_5PQW[0x8];                                     // 0x04F8(0x0008) Fix Super Size
	struct FTunableStat                                _fireInteractionCooldownTimeTunable;                       // 0x0500(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasChargingStarted;                                       // 0x0580(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasProjectileBeenSummoned;                                // 0x0581(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasChargingEnded;                                         // 0x0582(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasProjectileFired;                                       // 0x0583(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_STKF[0xC];                                     // 0x0584(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26AbilitySubAnimInstance");
		return ptr;
	}



	void OnHasProjectileFired();
	void OnHasProjectileBeenSummoned(int remainingAmmo, int maxAmmo);
	void ConsumeHasProjectileFired();
	void ConsumeHasProjectileBeenSummoned();
};

// Class TheK26.K26AimingGuide
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class AK26AimingGuide : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26AimingGuide");
		return ptr;
	}



};

// Class TheK26.K26AmmoHandlerComponent
// 0x0398 (FullSize[0x0450] - InheritedSize[0x00B8])
class UK26AmmoHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_X3L4[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCurrentAmmoStateChanged;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTagStateBool                               _isAmmoOnCooldown;                                         // 0x00D8(0x0030) (Net, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onMaxAmmoSet;                                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	float                                              _rechargeEndTime;                                          // 0x0118(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isTunableInit;                                            // 0x011C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1EKU[0x3];                                     // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _projectileClass;                                          // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _expirationCooldownTime;                                   // 0x0128(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FDBDTunableRowHandle>                _firedCooldownTimesPerCrow;                                // 0x01A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _cooldownReductionPerCrowFired;                            // 0x01B8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _expirationTime;                                           // 0x0238(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _expirationWarningBufferTime;                              // 0x02B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _maxAmmo;                                                  // 0x02E0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _currentAmmo;                                              // 0x0360(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK26_EK26AmmoCooldownReason                      _lastCooldownReason;                                       // 0x0364(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK26_EK26AmmoState                               _currentAmmoState;                                         // 0x0365(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7VRS[0x2];                                     // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UK26PathHandlerComponent*                    _pathHandler;                                              // 0x0368(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                            // 0x0370(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _authoritativeActorPoolComponent;                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTagStateBool                               _isOutOfAmmo;                                              // 0x0380(0x0030) (Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _fallbackFireCooldown;                                     // 0x03B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PTIG[0x9C];                                    // 0x03B4(0x009C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26AmmoHandlerComponent");
		return ptr;
	}



	void SetDependencies(class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent);
	void SendHasExpiredDelegate();
	void OnMaxAmmoSetDelegate__DelegateSignature(int maxAmmo);
	void OnLevelReadyToPlay();
	void OnKillerSet(class ASlasherPlayer* killer);
	void Multicast_StartRecharging(TheK26_EK26AmmoCooldownReason lastCooldownReason);
	void Multicast_StartExpiring();
	void Multicast_OnCurrentAmmoStateChanged(TheK26_EK26AmmoState NewState, int currentAmmo, int maxAmmo);
	void Multicast_OnAmmoHasBeenFired();
	void Multicast_OnAmmoExpired();
	int GetMaxAmmo();
	TheK26_EK26AmmoCooldownReason GetCurrentCooldownReason();
	TheK26_EK26AmmoState GetCurrentAmmoState();
	int GetCurrentAmmo();
	void Cosmetic_OnExpiringWarning();
	void Cosmetic_OnAmmoHasBeenFired();
	void Cosmetic_OnAmmoExpired();
	void CallOnMaxAmmoSet(const struct FScriptDelegate& Callback);
	void Authority_OnAmmoInit(class AActor* initAmmo);
	void Authority_InitializePoolComponent(int maxAmmo);
};

// Class TheK26.K26AnimInstance
// 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
class UK26AnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_OOU1[0x8];                                     // 0x05A8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26AnimInstance");
		return ptr;
	}



};

// Class TheK26.K26AttachedCrow
// 0x0208 (FullSize[0x0438] - InheritedSize[0x0230])
class AK26AttachedCrow : public AActor
{
public:
	unsigned char                                      UnknownData_V9Y3[0x30];                                    // 0x0230(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFlashlightableComponent*                    _flashLightableComponent;                                  // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULightBurnable*                              _lightBurnableComponent;                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _flashlightDestroyChargeable;                              // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1SOC[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _requiredFlashlightTimeToDestroy;                          // 0x0290(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _lingerTime;                                               // 0x02B8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _infectionDelay;                                           // 0x0338(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _infectRadius;                                             // 0x0360(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                    // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        _visualStaticMeshComponent;                                // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _rootComponent;                                            // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                            // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _authority_isInfecting;                                    // 0x03B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FK26AttachmentStatus                        _attachmentStatus;                                         // 0x03B1(0x0002) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2BGI[0x85];                                    // 0x03B3(0x0085) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26AttachedCrow");
		return ptr;
	}



	void OnRep_AttachmentStatus();
	void Multicast_OnStopDetaching();
	void Multicast_OnStartDetaching();
	void HideOutline();
	void Cosmetic_OnStopDetaching();
	void Cosmetic_OnStartDetaching();
	void Cosmetic_OnCrowAttached();
	void Cosmetic_OnAuraShown();
	void Cosmetic_OnAuraHidden();
	void Cosmetic_OnAttachedCrowRemoved(TheK26_EFK26AttachedCrowRemovalReason removalReason);
	void Authority_OnSurvivorWasUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* survivor, class AK26AttachedCrow* attachedCrow);
	void Authority_OnSurvivorExitLocker(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Authority_OnSurvivorDroppedEnd();
	void Authority_OnSurvivorAdded(class ACamperPlayer* survivor);
	void Authority_OnPlayerLeftGame(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Authority_OnOtherSurvivorPerkFlagsChanged(const struct FGameplayTag& GameplayTag, bool isAdded);
	void Authority_OnOtherSurvivorGuidedActionChanged();
	void Authority_OnOtherSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after);
	void Authority_OnKillerSet(class ASlasherPlayer* killer);
	void Authority_OnIsWithinOtherSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);
	void Authority_OnDestroyAttempt(TArray<class AActor*> instigatorsForCompletion);
	void Authority_DeactivateInfection();
	void Authority_ActivateInfection();
};

// Class TheK26.K26CooldownInteractionDefinition
// 0x0080 (FullSize[0x0630] - InheritedSize[0x05B0])
class UK26CooldownInteractionDefinition : public UInteractionDefinition
{
public:
	struct FTunableStat                                _cooldownTime;                                             // 0x05B0(0x0080) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CooldownInteractionDefinition");
		return ptr;
	}



	void OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheK26.K26CrowAttachmentSubAnimInstance
// 0x0010 (FullSize[0x0500] - InheritedSize[0x04F0])
class UK26CrowAttachmentSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _hasCrowAttached;                                          // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isRemovingCrow;                                           // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3ESL[0xE];                                     // 0x04F2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CrowAttachmentSubAnimInstance");
		return ptr;
	}



};

// Class TheK26.K26CrowPlacementValidatorComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UK26CrowPlacementValidatorComponent : public UActorComponent
{
public:
	class UObjectPlacementValidationWithRestrictionStrategy* _objectPlacementValidationStrategyWithRestrictions;        // 0x00B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CrowPlacementValidatorComponent");
		return ptr;
	}



};

// Class TheK26.K26CrowProjectile
// 0x05A8 (FullSize[0x07D8] - InheritedSize[0x0230])
class AK26CrowProjectile : public AActor
{
public:
	unsigned char                                      UnknownData_T10M[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCrowProjectileStateChanged;                              // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsBeingFlashlightedChanged;                              // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                                     _originalFireLocation;                                     // 0x0260(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_468G[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TheK26_EK26ProjectileState, struct FK26ProjectileStateDetails> _projectileStateDetails;                                   // 0x0270(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _summonTime;                                               // 0x02C0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _detectionRadiusScaleX;                                    // 0x02E8(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _detectionRadiusScaleY;                                    // 0x0368(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _detectionRadiusScaleZ;                                    // 0x03E8(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _crowFireAuraVisibilityForSurvivorsTime;                   // 0x0468(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _crowSummonAuraVisibilityForSurvivorsTime;                 // 0x0490(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _detectionRadiusFromAbove;                                 // 0x04B8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _baseSpeed;                                                // 0x04E0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _selfDestructTimeOnDestroyed;                              // 0x0508(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _requiredFlashlightTimeToDestroy;                          // 0x0530(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _flashlightablePointScale;                                 // 0x0558(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _rangeToTriggerNearSurvivorSFX;                            // 0x0580(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _flashlightDisableTime;                                    // 0x05A8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _onPathMovementSpeedModifierCurve;                         // 0x05D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _offPathMovementSpeedModifierCurve;                        // 0x05D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _projectileOffPathCurveDuration;                           // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4P7W[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             _path;                                                     // 0x05E8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _pooledPathIndex;                                          // 0x05F8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK26_EK26ProjectileState                         _currentProjectileState;                                   // 0x05FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5789[0x3];                                     // 0x05FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                    // 0x0600(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK26PowerOutlineUpdateStrategy*              _crowFlockOutlineUpdateStrategy;                           // 0x0608(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0610(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineComponent*                            _pathSplineComponent;                                      // 0x0618(0x0008) (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        _collisionStaticMeshComponent;                             // 0x0620(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        _killerInstinctStaticMeshComponent;                        // 0x0628(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      _visualSkeletalMeshComponent;                              // 0x0630(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             _rootComponent;                                            // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x0640(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFlashlightableComponent*                    _flashLightableComponent;                                  // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULightBurnable*                              _lightBurnableComponent;                                   // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDNavModifierComponent*                    _dangerNavModifierComponent;                               // 0x0658(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             flashlightPointCenter;                                     // 0x0660(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             flashlightPointNorth;                                      // 0x0668(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             flashlightPointEast;                                       // 0x0670(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             flashlightPointSouth;                                      // 0x0678(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             flashlightPointWest;                                       // 0x0680(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _k26ProjectileStateChangeDelegate;                         // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAcquiredChanged;                                         // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EJPU[0x10];                                    // 0x06A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _forwardDirection;                                         // 0x06B8(0x000C) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isBeingFlashlighted;                                      // 0x06C4(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R1WJ[0x3];                                     // 0x06C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _lastFlashlightProgress;                                   // 0x06C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lastTimeFlashlightValueIncreased;                         // 0x06CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _fireTime;                                                 // 0x06D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _currentDistanceAlongSpline;                               // 0x06D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _offPathTime;                                              // 0x06D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JB3Q[0x4];                                     // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UK26PowerStatusHandlerComponent*             _statusHandlerComponent;                                   // 0x06E0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26AmmoHandlerComponent*                    _ammoHandlerComponent;                                     // 0x06E8(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PathHandlerComponent*                    _pathHandlerComponent;                                     // 0x06F0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _flashlightDestroyChargeable;                              // 0x06F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JTY6[0xD8];                                    // 0x0700(0x00D8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CrowProjectile");
		return ptr;
	}



	void Server_OnSurvivorHit(TheK26_EK26ProjectileState stateOnHit, class ACamperPlayer* hitSurvivor);
	void ProjectileWentOutOfBoundsEvent();
	void OnSurvivorAdded(class ACamperPlayer* survivorAdded);
	void OnRep_Path();
	void OnLevelReadyToPlay();
	void OnIsWithinSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange);
	void OnIntroCompleted();
	void Multicast_SetState(TheK26_EK26ProjectileState NewState, int pooledPathIndex);
	void Multicast_SetStartingPosition(const struct FVector& Position, const struct FRotator& Angle);
	void Multicast_OnExpiration();
	void Local_OnSummonComplete();
	void Local_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
	bool IsHitboxBeingShown();
	bool IsBeingFlashlighted();
	void HideOutlineFromSurvivor();
	float GetFlashlightProgress();
	float GetDistanceFromFirePosition();
	void Cosmetic_OnExpiration();
	void Cosmetic_OnEnteredNearAudioRangeOfSurvivor(class ACamperPlayer* survivor);
	void Client_LocalKillerStartSummonTimer(float killerLocalSummonTime);
	void Authority_OnSummonComplete();
	void Authority_OnScoutingOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
	void Authority_OnDestroyTimerExpired();
	void Authority_OnDestroyAttempt(TArray<class AActor*> instigatorsForCompletion);
	void Authority_OnCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Authority_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult);
};

// Class TheK26.K26CrowProjectileAnimInstance
// 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
class UK26CrowProjectileAnimInstance : public UAnimInstance
{
public:
	bool                                               _isInInvalidState;                                         // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInSummonState;                                          // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInIdleState;                                            // 0x0272(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInFollowPathState;                                      // 0x0273(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInOffPathState;                                         // 0x0274(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInDestroyedState;                                       // 0x0275(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingFlashlighted;                                      // 0x0276(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2OMZ[0x1];                                     // 0x0277(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _flashlightProgress;                                       // 0x0278(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IOO1[0x24];                                    // 0x027C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK26CrowProjectile*                          _owningCrowProjectile;                                     // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QP25[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CrowProjectileAnimInstance");
		return ptr;
	}



};

// Class TheK26.K26CrowProjectilePlacementValidationStrategy
// 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
class UK26CrowProjectilePlacementValidationStrategy : public URestrictedPlacementAreaStrategy
{
public:
	unsigned char                                      UnknownData_2NRV[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26CrowProjectilePlacementValidationStrategy");
		return ptr;
	}



};

// Class TheK26.K26DismissCrowChargeableInteractionDefinition
// 0x0098 (FullSize[0x0770] - InheritedSize[0x06D8])
class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
public:
	struct FTunableStat                                _chargeTime;                                               // 0x06D8(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK26PowerStatusHandlerComponent*             _k26PowerStatusHandlerComponent;                           // 0x0758(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isLevelReadyToPlay;                                       // 0x0760(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RONU[0xF];                                     // 0x0761(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26DismissCrowChargeableInteractionDefinition");
		return ptr;
	}



	void OnLevelReadyToPlay();
	void OnKillerSet(class ASlasherPlayer* killer, class UChargeableComponent* ChargeableComponent);
	void OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState);
};

// Class TheK26.K26FireCrowProjectileInteractionDefinition
// 0x0030 (FullSize[0x05E0] - InheritedSize[0x05B0])
class UK26FireCrowProjectileInteractionDefinition : public UInteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnProjectileFired;                                         // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UK26CooldownInteractionDefinition*           _cooldownInteraction;                                      // 0x05C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                              // 0x05C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PathHandlerComponent*                    _pathHandler;                                              // 0x05D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QCBC[0x8];                                     // 0x05D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26FireCrowProjectileInteractionDefinition");
		return ptr;
	}



	void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26CooldownInteractionDefinition* cooldownInteraction);
	void Server_RequestFireOnAmmo(class ASlasherPlayer* killer);
	void Multicast_OnProjectileFired(class ASlasherPlayer* killer);
};

// Class TheK26.K26IsLastCrowRemovalReasonDueToInteraction
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition
{
public:
	class AK26AttachedCrow*                            _owningAttachedCrow;                                       // 0x00E8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PowerStatusHandlerComponent*             _statusHandlerComponent;                                   // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7RR8[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26IsLastCrowRemovalReasonDueToInteraction");
		return ptr;
	}



	void OnSurvivorStatusIndicatorSet(class AK26AttachedCrow* attachedCrow);
	void OnRep_OwningAttachedCrow();
	void OnLastRemovalReasonSet(TheK26_EFK26AttachedCrowRemovalReason lastCrowRemovalReason);
	void Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* survivor, class AK26AttachedCrow* attachedCrow);
	void Authority_OnKillerSet(class ASlasherPlayer* killer);
};

// Class TheK26.K26IsSurvivorInRangeOfAnyIdleCrow
// 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
class UK26IsSurvivorInRangeOfAnyIdleCrow : public UEventDrivenModifierCondition
{
public:
	struct FScriptMulticastDelegate                    OnIsTrueChanged;                                           // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJI3[0x20];                                    // 0x00F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26IsSurvivorInRangeOfAnyIdleCrow");
		return ptr;
	}



	void Multicast_SetIsTrue(bool isTrue);
	void Authority_SetVariables(class ACamperPlayer* trackedSurvivor, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent, float Range);
	void Authority_OnInRangeChanged(bool InRange);
	void Authority_OnCrowProjectileStateChanged(class AK26CrowProjectile* crowProjectile);
	void Authority_OnCrowAddedToPool(class AActor* crowProjectileActor);
};

// Class TheK26.K26KillerInstinctStatusEffect
// 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
class UK26KillerInstinctStatusEffect : public UStatusEffect
{
public:
	struct FTunableStat                                _lingerDuration;                                           // 0x0350(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _openExitGateInteractionClass;                             // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasInitializedLingerDuration;                             // 0x03D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KZ10[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26KillerInstinctStatusEffect");
		return ptr;
	}



};

// Class TheK26.K26OnCrowAttachLingeringStatusEffectBase
// 0x0060 (FullSize[0x03B0] - InheritedSize[0x0350])
class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect
{
public:
	struct FGameplayTag                                _onCrowAttachStateTag;                                     // 0x0350(0x000C) (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ZLH[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _lingerTime;                                               // 0x0360(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_70UC[0x28];                                    // 0x0388(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26OnCrowAttachLingeringStatusEffectBase");
		return ptr;
	}



	float GetLingerTime();
};

// Class TheK26.K26P01
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class UK26P01 : public UPerk
{
public:
	float                                              _generatorBlockDuration[0x3];                              // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _auraRevealDuration[0x3];                                  // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _survivorsToBeHooked;                                      // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5BO1[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGenerator*>                          _blockedGenerators;                                        // 0x0400(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              _hookedSurvivors;                                          // 0x0410(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFastTimer>                          _generatorBlockingTimers;                                  // 0x0420(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UYRQ[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26P01");
		return ptr;
	}



	void OnRep_BlockedGenerators();
	void Authority_OnBlockTimerDone(class AGenerator* Generator);
};

// Class TheK26.K26P02
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class UK26P02 : public UPerk
{
public:
	unsigned char                                      UnknownData_HBHF[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _generatorRegressPercentage[0x3];                          // 0x03D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _screamRevealLocationDuration;                             // 0x03E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26P02");
		return ptr;
	}



	void Multicast_TriggerPerk(class AGenerator* explodingGenerator);
	float GetScreamRevealLocationDuration();
	void Cosmetic_MakeSurvivorScream(class ADBDPlayer* screamingSurvivor);
	void Authority_OnSurvivorHookedOnScourgeHook(const struct FGameEventData& GameEventData);
};

// Class TheK26.K26PathHandlerComponent
// 0x0178 (FullSize[0x0230] - InheritedSize[0x00B8])
class UK26PathHandlerComponent : public UActorComponent
{
public:
	struct FDBDTunableRowHandle                        _maxPathDistance;                                          // 0x00B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _survivorPathVisibilityTimeOnFire;                         // 0x00E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _defaultProjectileDistanceFromFloor;                       // 0x0108(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxPathIterations;                                        // 0x0130(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxGroundSearchingDistance;                               // 0x0158(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _visualPathPart;                                           // 0x0180(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _visualPathEndArrow;                                       // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _projectileSummonDistance;                                 // 0x0190(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                              // 0x01B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26CrowPlacementValidatorComponent*         _placementValidator;                                       // 0x01C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FK26PathData>                        _availablePathData;                                        // 0x01C8(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FK26Path>                            _availablePaths;                                           // 0x01D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P8UZ[0x48];                                    // 0x01E8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PathHandlerComponent");
		return ptr;
	}



	void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26CrowPlacementValidatorComponent* placementValidator);
	void OnRep_AvailablePathData();
	void OnIterativeAvailablePathUpdate();
	void Multicast_FillAvailablePathArray(int maxAmmo);
	void Authority_OnMaxAmmoSet(int maxAmmo);
};

// Class TheK26.K26PathPart
// 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
class AK26PathPart : public AActor
{
public:
	class UStaticMeshComponent*                        _mesh;                                                     // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                           _visualEffectKiller;                                       // 0x0240(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                           _visualEffectSurvivor;                                     // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK26PowerOutlineUpdateStrategy*              _outlineUpdateStrategy;                                    // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             _rootComponent;                                            // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVisibleForSurvivor;                                     // 0x0260(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isVisibleForKiller;                                       // 0x0261(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UBZW[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PathPart");
		return ptr;
	}



};

// Class TheK26.K26PowerChargePresentationItemProgressComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UK26PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                              // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PowerChargePresentationItemProgressComponent");
		return ptr;
	}



	void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);
};

// Class TheK26.K26PowerChargePresentationPowerFadeComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UK26PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{
public:
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                              // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PowerChargePresentationPowerFadeComponent");
		return ptr;
	}



	void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler);
};

// Class TheK26.K26PowerOutlineUpdateStrategy
// 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
class UK26PowerOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _k26ProjectileOutlineColour;                               // 0x00C0(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOutlineEnabled;                                         // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isOnlyVisibleForKiller;                                   // 0x00D1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XQL4[0x6];                                     // 0x00D2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PowerOutlineUpdateStrategy");
		return ptr;
	}



	void SetOutlineVisibility(bool IsActive);
	bool IsOutlineVisible();
};

// Class TheK26.K26PowerStatusHandlerComponent
// 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
class UK26PowerStatusHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_42NZ[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              _interactionsDuringWhichTheCrowIsIgnored;                  // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CRA9[0x18];                                    // 0x00D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _invincibilityTime;                                        // 0x00F0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _killerInstinctDelay;                                      // 0x0118(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _killerInstinctGracePeriod;                                // 0x0140(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _statusIndicatorClass;                                     // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _k26KillerInstinctStatusEffectName;                        // 0x0170(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZKBQ[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FK26SurvivorStatus>                  _survivorStatusList;                                       // 0x0180(0x0010) (Net, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26PowerStatusHandlerComponent");
		return ptr;
	}



	void Multicast_OnStopRemovingCrow(class ACamperPlayer* survivor);
	void Multicast_OnStartRemovingCrow(class ACamperPlayer* survivor);
	void Multicast_OnIdleCrowInterrupt(class ACamperPlayer* survivor);
	void Multicast_OnCrowDetached(class ACamperPlayer* survivor);
	void Multicast_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* survivor);
	void Multicast_OnCrowAttached(class ACamperPlayer* survivor);
	void Cosmetic_OnCrowIdleInterrupt(class ACamperPlayer* survivor);
	void Cosmetic_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* survivor);
	void Authority_OnSurvivorAdded(class ACamperPlayer* survivor);
	void Authority_OnKillerInstinctTimePassed(class ACamperPlayer* survivor);
	void Authority_OnIntroCompleted();
};

// Class TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition
// 0x0218 (FullSize[0x08F0] - InheritedSize[0x06D8])
class UK26SpawnCrowProjectileChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
public:
	struct FScriptMulticastDelegate                    OnChargingStarted;                                         // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargingStopped;                                         // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnProjectileSummoned;                                      // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _chargeCooldownTime;                                       // 0x0708(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _summonCooldownTime;                                       // 0x0730(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _pathLength;                                               // 0x0758(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _projectileHeight;                                         // 0x0780(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _projectileSummonDistance;                                 // 0x07A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _cooldownGracePeriodPercentage;                            // 0x07D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _globalSpawnCooldownTime;                                  // 0x07F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _pathDistanceCheckAttempts;                                // 0x0820(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _aimingGuideClass;                                         // 0x0848(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AK26AimingGuide*                             _local_aimingGuide;                                        // 0x0850(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isConfirmButtonPressed;                                   // 0x0858(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FNUP[0x7];                                     // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UK26AmmoHandlerComponent*                    _ammoHandler;                                              // 0x0860(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PathHandlerComponent*                    _pathHandler;                                              // 0x0868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK26PowerStatusHandlerComponent*             _statusHandler;                                            // 0x0870(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _firedFullyChargedEvent;                                   // 0x0878(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isWaitingForSummonAcknowledgement;                        // 0x0879(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GUAL[0x6];                                     // 0x087A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _globalCooldownMovementSpeedCurve;                         // 0x0880(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IZ1N[0x68];                                    // 0x0888(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition");
		return ptr;
	}



	void SetSummonCooldown();
	void SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler);
	void Server_PlaceProjectileWithPath(class ASlasherPlayer* killer, const struct FVector& projectileSpawnPoint, float killerLocalTime);
	void OnSummonCooldownComplete();
	void OnConfirmButtonPressed(class ASlasherPlayer* killer);
	void Multicast_OnK26CrowSummoned(class ASlasherPlayer* killer, int remainingAmmo, int maxAmmo);
	void Multicast_OnK26CrowSummonAttemptAcknowledged();
	void Local_OnGlobalCooldownDone(class ADBDPlayer* Player);
	bool IsSummonOnCooldown();
	void Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible();
	void Cosmetic_OnFullyCharged(class ADBDPlayer* Player);
	void Cosmetic_LocalOnSummonCooldownComplete(int amountOfAmmoLeft, bool isInteractionActive);
	bool CanSummonCrowOnceFullyCharged();
	bool CanSummonCrow();
};

// Class TheK26.Overcome
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class UOvercome : public UPerk
{
public:
	float                                              _exhaustionDuration[0x3];                                  // 0x03D0(0x000C) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FAWT[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActivatableExhaustedEffect*                 _exhaustedEffect;                                          // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.Overcome");
		return ptr;
	}



};

// Class TheK26.RekindledTotem
// 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
class ARekindledTotem : public AStaticMeshActor
{
public:
	struct FLinearColor                                _auraColor;                                                // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USourceBasedOutlineUpdateStrategy*           _outlineStrategy;                                          // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GLIL[0x28];                                    // 0x0260(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.RekindledTotem");
		return ptr;
	}



	void RebuildTotem(class ATotem* Totem);
	void OnParentTotemEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Cosmetic_ShowShadowTotem(bool instant);
	void Cosmetic_HideShadowTotem(bool instant);
	void CleanseTotem(class ATotem* Totem, DeadByDaylight_ETotemState oldTotemState);
};

// Class TheK26.RekindleTotemInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class URekindleTotemInteraction : public UInteractionDefinition
{
public:
	float                                              _slasherFacingTolerance;                                   // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PUX8[0x4];                                     // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _rekindledTotemClass;                                      // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ARekindledTotem*                             _rekindledTotem;                                           // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AK5U[0x8];                                     // 0x05C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.RekindleTotemInteraction");
		return ptr;
	}



};

// Class TheK26.S29P03
// 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
class US29P03 : public UBoonPerk
{
public:
	float                                              _recoverSpeedPercentage[0x3];                              // 0x0488(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5OA1[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK26.S29P03");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

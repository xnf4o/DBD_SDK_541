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

// Class TheOni.AbsorbBloodOrbsInteraction
// 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
class UAbsorbBloodOrbsInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData_N6G6[0x40];                                    // 0x05B0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.AbsorbBloodOrbsInteraction");
		return ptr;
	}



	void SetPlayerOwner(class ADBDPlayer* Player);
};

// Class TheOni.BloodOrb
// 0x0060 (FullSize[0x0290] - InheritedSize[0x0230])
class ABloodOrb : public AActor
{
public:
	struct FFloatInterval                              _randomMoveDelayInterval;                                  // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                             _absorbReference;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _despawnDelay;                                             // 0x0248(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TXW8[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ADBDPlayer>                   _droppingPlayer;                                           // 0x0250(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheOni_EBloodOrbState                              _state;                                                    // 0x0258(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2M06[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBloodOrbFadeComponent*                      _fadeComponent;                                            // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CCDH[0x28];                                    // 0x0268(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrb");
		return ptr;
	}



	void UpdateAttracted_Cosmetic(const struct FVector& destination, class ADBDPlayer* absorber, float DeltaTime);
	void UpdateAbsorbed_Cosmetic(const struct FVector& destination, class ADBDPlayer* absorber, float DeltaTime);
	void OnRep_State(TheOni_EBloodOrbState oldState);
	void OnIsAttractedChangedCosmetic(bool isAttracted);
	void OnDestroyedCosmetic();
	void OnAbsorbedCosmetic();
	class ADBDPlayer* GetDroppingPlayer();
	void Authority_OnDropped(class ADBDPlayer* droppedBy, float ImpulseFactor);
	void Authority_OnDropFinished();
	void Authority_DestroyBloodOrb();
	void Authority_Despawn();
};

// Class TheOni.BloodOrbAbsorberComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UBloodOrbAbsorberComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    Authority_OnBloodOrbAbsorbed;                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsAbsorbingChanged;                                      // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                                     AbsorbLocationOffset;                                      // 0x00D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8YV0[0x1C];                                    // 0x00E4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBloodOrbDropperComponent*>           _camperBloodOrbDropperComponents;                          // 0x0100(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbAbsorberComponent");
		return ptr;
	}



	void SetInAbsorbMode(bool inAbsorptionMode);
	bool IsInAbsorbMode();
};

// Class TheOni.BloodOrbCollection
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UBloodOrbCollection : public UActorComponent
{
public:
	TArray<class ABloodOrb*>                           _bloodOrbs;                                                // 0x00B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z2DE[0x38];                                    // 0x00C8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbCollection");
		return ptr;
	}



};

// Class TheOni.BloodOrbConfiguratorComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UBloodOrbConfiguratorComponent : public UActorComponent
{
public:
	class UClass*                                      _bloodOrbClass;                                            // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGameEventBloodOrbDropParams>        _bloodOrbDropGameEvents;                                   // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _fadeDuration;                                             // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _initialFadeOutDelay;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _bloodOrbAuraColor;                                        // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _bloodOrbAttractedAuraColor;                               // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _bloodOrbVisibilityRangeInterpolationSpeed;                // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_675E[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _mobileBloodOrbRendererClass;                              // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOZ7[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbConfiguratorComponent");
		return ptr;
	}



	void UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer);
	void UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer);
	void UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, class ADBDPlayer* killer);
	void OnLevelReadyToPlay();
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer* killer);
};

// Class TheOni.BloodOrbDropperComponent
// 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
class UBloodOrbDropperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_TC2E[0x80];                                    // 0x00B8(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbDropperComponent");
		return ptr;
	}



	void DBD_DropBloodOrbs(int numOrbs);
	void Authority_SetPaused(bool paused);
	void Authority_OnOwningCamperDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState);
	void Authority_OnDropOrbsGameEvent(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData, const struct FBloodOrbDropParams& dropParams);
	void Authority_OnCamperUnhooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
	void Authority_OnCamperHooked(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
	void Authority_OnCamperCrouched(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
};

// Class TheOni.BloodOrbFadeComponent
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UBloodOrbFadeComponent : public UFadeComponent
{
public:
	unsigned char                                      UnknownData_8PLP[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbFadeComponent");
		return ptr;
	}



};

// Class TheOni.BloodOrbOverlapComponent
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UBloodOrbOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_1N5M[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _currentOverlappingOrbs;                                   // 0x00C0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VWKC[0x34];                                    // 0x00C4(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbOverlapComponent");
		return ptr;
	}



	void OnRep_CurrentOverlappingOrbs(int previousOverlappingOrbs);
	void Authority_OnDestroyedBloodOrb(class AActor* DestroyedActor);
	void Authority_OnBloodOrbVisibilityModeChanged(TheOni_EBloodOrbVisibilityMode visibilityMode);
	void Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class TheOni.BloodOrbOverlapRevealToKiller
// 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
class UBloodOrbOverlapRevealToKiller : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_N6CW[0x28];                                    // 0x0350(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _revealTimer;                                              // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbOverlapRevealToKiller");
		return ptr;
	}



	class UTimerObject* GetRevealTimer();
};

// Class TheOni.BloodOrbStateMonitorComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UBloodOrbStateMonitorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBloodOrbAbsorbedCosmetic;                                // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZ3H[0x60];                                    // 0x00C8(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbStateMonitorComponent");
		return ptr;
	}



	void OnBloodOrbStateChanged(TheOni_EBloodOrbState oldState, TheOni_EBloodOrbState NewState, class ABloodOrb* BloodOrb);
	void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);
	void OnBloodOrbDestroyed(class ABloodOrb* BloodOrb);
};

// Class TheOni.BloodOrbUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBloodOrbUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbUtilities");
		return ptr;
	}



	TArray<class ABloodOrb*> STATIC_GetAllBloodOrbs(class UObject* WorldContextObject);
};

// Class TheOni.BloodOrbVisibilityComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UBloodOrbVisibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GUJ7[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.BloodOrbVisibilityComponent");
		return ptr;
	}



	void SetVisibilityRange(float visibilityRange);
	void SetVisibilityMode(TheOni_EBloodOrbVisibilityMode visibilityMode);
	void SetShowAttractedBloodOrbsAuras(bool Show);
	void SetAuraVisibilityRange(float auraVisibilityRange);
	void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);
};

// Class TheOni.DemonModeComponent
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class UDemonModeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnDemonModeReady;                                          // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeStarted;                                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeEnded;                                          // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeInterruptedDuringStartup;                       // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDemonModeInterruptedDuringEnding;                        // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterAttackCosmetic;                         // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChargeGainedAfterLockerGrabCosmetic;                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x0128(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x0130(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionStarterComponent*                _authority_demonModeCooldownStarterComponent;              // 0x0138(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractionDefinition*                      _demonModeCooldownInteraction;                             // 0x0140(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5UUM[0x34];                                    // 0x0148(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TheOni_EDemonModeState                             _demonModeState;                                           // 0x017C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AA0J[0x53];                                    // 0x017D(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.DemonModeComponent");
		return ptr;
	}



	bool ShouldLoseDemonModeOnStun();
	void OnPowerChargeFull();
	void OnPowerChargeEmpty();
	void OnIsPowerChanged(bool IsInPower);
	void Multicast_DemonModeInterruptedOnStartup();
	void Multicast_DemonModeInterruptedOnEnding();
	bool IsInDemonMode();
	TheOni_EDemonModeState GetDemonModeState();
	float GetCurrentCharge();
	float GetChargePercent();
	void DBD_DemonModeForever(bool forever);
	bool CanStartDemonMode();
	void Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition* Interaction);
	void Authority_OnLevelReadyToPlay();
	void Authority_OnChargeChanged(float currentChargePercent);
	void Authority_InterruptedMontage(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
	void Authority_AddCharge(float ChargeAmount);
};

// Class TheOni.DemonModeCooldownInteraction
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class UDemonModeCooldownInteraction : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData_ZLWS[0x20];                                    // 0x05B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.DemonModeCooldownInteraction");
		return ptr;
	}



	void SetPlayerOwner(class ADBDPlayer* Owner);
	void OnLevelReadyToPlay();
};

// Class TheOni.DemonModeMenuComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UDemonModeMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Z5UR[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.DemonModeMenuComponent");
		return ptr;
	}



	void SetInMenuDemonMode(bool inMenuDemonMode);
};

// Class TheOni.IsPlayerAbsorbingBloodOrbsCondition
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UIsPlayerAbsorbingBloodOrbsCondition : public UIsPlayerPerformingInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.IsPlayerAbsorbingBloodOrbsCondition");
		return ptr;
	}



};

// Class TheOni.MobileBloodOrbRenderer
// 0x0090 (FullSize[0x02C0] - InheritedSize[0x0230])
class AMobileBloodOrbRenderer : public AActor
{
public:
	class UMaterialInstance*                           OrbMaterialInstance;                                       // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           OutlineMaterialInstance;                                   // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullInterval;                                              // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUSE[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInstancedStaticMeshComponent*               _ismComponent;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _outlineIsmComponent;                                      // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ABloodOrb*, struct FBloodOrbInfo>       _instanceMap;                                              // 0x0258(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _outlineMaterialInstanceDynamic;                           // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _orbMaterialInstanceDynamic;                               // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBloodOrbVisibilityComponent*                _bloodOrbVisibilityComponent;                              // 0x02B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.MobileBloodOrbRenderer");
		return ptr;
	}



};

// Class TheOni.OniAttackPicker
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UOniAttackPicker : public USlasherAttackPickerComponent
{
public:
	unsigned char                                      UnknownData_TYXV[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniAttackPicker");
		return ptr;
	}



};

// Class TheOni.OniBasicAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UOniBasicAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_4BOM[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniBasicAttack");
		return ptr;
	}



};

// Class TheOni.OniBasicAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UOniBasicAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniBasicAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheOni.OniCustomizationItemAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UOniCustomizationItemAnimInstance : public UAnimInstance
{
public:
	bool                                               _isInDemonMode;                                            // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q901[0x1F];                                    // 0x0271(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniCustomizationItemAnimInstance");
		return ptr;
	}



	void SetIsInDemonMode(bool IsInDemonMode);
};

// Class TheOni.OniDashInteraction
// 0x0048 (FullSize[0x0720] - InheritedSize[0x06D8])
class UOniDashInteraction : public UChargeableInteractionDefinition
{
public:
	class UCurveFloat*                                 _chargingSpeedCurve;                                       // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _dashingSpeedCurve;                                        // 0x06E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _yawAdjustTime;                                            // 0x06E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VA6R[0x4];                                     // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _cooldownSpeedCurve;                                       // 0x06F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_71LW[0x28];                                    // 0x06F8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDashInteraction");
		return ptr;
	}



	void SetPlayerOwner(class ADBDPlayer* Player);
	void OnLevelReadyToPlay();
	void OnDashEnd(class ADBDPlayer* Player);
	void OnDashBegin(class ADBDPlayer* Player);
	void OnChargeEnd(class ADBDPlayer* Player, bool chargeCompleted);
	void OnChargeBegin(class ADBDPlayer* Player);
};

// Class TheOni.OniDemonBasicAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UOniDemonBasicAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonBasicAttack");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttack
// 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
class UOniDemonPowerAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_MIDZ[0x20];                                    // 0x0360(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttack");
		return ptr;
	}



};

// Class TheOni.OniDemonDashAttack
// 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
class UOniDemonDashAttack : public UOniDemonPowerAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonDashAttack");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackOpenSubstate
// 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
class UOniDemonPowerAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_DC3I[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttackOpenSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonDashAttackOpenSubstate
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UOniDemonDashAttackOpenSubstate : public UOniDemonPowerAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonDashAttackOpenSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UOniDemonPowerAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttackHittingSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackSuccessSubstate
// 0x0030 (FullSize[0x0148] - InheritedSize[0x0118])
class UOniDemonPowerAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	unsigned char                                      UnknownData_MVY9[0x30];                                    // 0x0118(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UOniDemonPowerAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttackMissSubstate");
		return ptr;
	}



};

// Class TheOni.OniDemonPowerAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UOniDemonPowerAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniDemonPowerAttackObstructSubstate");
		return ptr;
	}



};

// Class TheOni.OniPounceInteraction
// 0x0028 (FullSize[0x0700] - InheritedSize[0x06D8])
class UOniPounceInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_TBJL[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_XUBL[0x8];                                     // 0x06E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOniDemonModeAttackStateComponent*           _chargedAttackState;                                       // 0x06E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemonModeComponent*                         _demonModeComponent;                                       // 0x06F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASlasherPlayer*                              _owningSlasher;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.OniPounceInteraction");
		return ptr;
	}



};

// Class TheOni.RenjirosBloodyGlove
// 0x00B0 (FullSize[0x0348] - InheritedSize[0x0298])
class URenjirosBloodyGlove : public UItemAddon
{
public:
	unsigned char                                      UnknownData_ZOZB[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealTime;                                               // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GLFJ[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class ACamperPlayer*, class UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;                                    // 0x02A8(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5EXL[0x50];                                    // 0x02F8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.RenjirosBloodyGlove");
		return ptr;
	}



	void Authority_OnBloodOrbOverlapBegin(class AActor* overlappingActor, class ABloodOrb* BloodOrb);
};

// Class TheOni.StartDemonModeInteraction
// 0x0048 (FullSize[0x0720] - InheritedSize[0x06D8])
class UStartDemonModeInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_LPE0[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	struct FAnimationMontageDescriptor                 DemonModeActivationMontage;                                // 0x06E0(0x0020) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RT0B[0x20];                                    // 0x0700(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheOni.StartDemonModeInteraction");
		return ptr;
	}



	void SetPlayerOwner(class ADBDPlayer* Owner);
	void OnLevelReadyToPlay();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class TheTwins.Addon_K22Power_11
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UAddon_K22Power_11 : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_11");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_12
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_12 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _increaseRemoveTwinTime;                                   // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OE1T[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_12");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_15
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_15 : public UOnEventBaseAddon
{
public:
	float                                              _brokenDuration;                                           // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GYG8[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_15");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_17
// 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
class UAddon_K22Power_17 : public UOnEventBaseAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_17");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_18
// 0x0030 (FullSize[0x02D8] - InheritedSize[0x02A8])
class UAddon_K22Power_18 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	unsigned char                                      UnknownData_X6FN[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _lingerDuration;                                           // 0x02B0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_18");
		return ptr;
	}



	void Authority_OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.Addon_K22Power_19
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_19 : public UOnEventBaseAddon
{
public:
	float                                              _auraRevealedDuration;                                     // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFIM[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_19");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_20
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_20 : public UOnEventBaseAddon
{
public:
	float                                              _undetectableDuration;                                     // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ETWI[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_20");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_21
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_21 : public UOnEventBaseAddon
{
public:
	float                                              _exposedDuration;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VDW6[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_21");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_9
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_9 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
public:
	float                                              _increaseDestroyTwinTime;                                  // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9R47[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_9");
		return ptr;
	}



};

// Class TheTwins.Addon_K22Power_10
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_K22Power_10 : public UOnEventBaseAddon
{
public:
	float                                              _blindnessDuration;                                        // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O22L[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Addon_K22Power_10");
		return ptr;
	}



};

// Class TheTwins.AISkill_FindInteractable_CrushTwin
// 0x0068 (FullSize[0x0180] - InheritedSize[0x0118])
class UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable
{
public:
	unsigned char                                      UnknownData_Y6VH[0xC];                                     // 0x0118(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAITunableParameter                         _crushVictorGoalWeight;                                    // 0x0124(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAITunableParameter                         _recoveringTimeEstimationErrorMin;                         // 0x0134(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FAITunableParameter                         _recoveringTimeEstimationErrorMax;                         // 0x0144(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7OVR[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _destroyTwinMaxCharge;                                     // 0x0158(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.AISkill_FindInteractable_CrushTwin");
		return ptr;
	}



};

// Class TheTwins.AISkill_Interaction_RemoveTwin
// 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
class UAISkill_Interaction_RemoveTwin : public UAISkill_Interaction
{
public:
	struct FDBDTunableRowHandle                        _removeTwinMaxCharge;                                      // 0x0170(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.AISkill_Interaction_RemoveTwin");
		return ptr;
	}



};

// Class TheTwins.Appraisal
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class UAppraisal : public UPerk
{
public:
	float                                              _chestSearchSpeedMultiplier[0x3];                          // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7QR4[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Appraisal");
		return ptr;
	}



};

// Class TheTwins.PossessPlayer
// 0x0038 (FullSize[0x0710] - InheritedSize[0x06D8])
class UPossessPlayer : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _possessThePlayerMaxCharge;                                // 0x06D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_46XI[0x10];                                    // 0x0700(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PossessPlayer");
		return ptr;
	}



	void Cosmetic_OnPossessStart(class ADBDPlayer* Player);
	void Cosmetic_OnPossessCancelled(class ADBDPlayer* Player);
};

// Class TheTwins.PossessTheConjoinedTwin
// 0x0050 (FullSize[0x0760] - InheritedSize[0x0710])
class UPossessTheConjoinedTwin : public UPossessPlayer
{
public:
	unsigned char                                      UnknownData_7PZ7[0x50];                                    // 0x0710(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PossessTheConjoinedTwin");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
	void OnPowerCollected(class ADBDPlayer* collector);
};

// Class TheTwins.AutoPossessTheConjoinedTwin
// 0x0000 (FullSize[0x0760] - InheritedSize[0x0760])
class UAutoPossessTheConjoinedTwin : public UPossessTheConjoinedTwin
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.AutoPossessTheConjoinedTwin");
		return ptr;
	}



};

// Class TheTwins.BaseTwinInspectLocker
// 0x0038 (FullSize[0x05F0] - InheritedSize[0x05B8])
class UBaseTwinInspectLocker : public UBaseLockerInteraction
{
public:
	struct FDBDTunableRowHandle                        _inspectInteractionTime;                                   // 0x05B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6MTO[0x10];                                    // 0x05E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.BaseTwinInspectLocker");
		return ptr;
	}



};

// Class TheTwins.BeingPossessedInteraction
// 0x0080 (FullSize[0x0630] - InheritedSize[0x05B0])
class UBeingPossessedInteraction : public UInteractionDefinition
{
public:
	struct FTunableStat                                _beingPossessedMaxCharge;                                  // 0x05B0(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.BeingPossessedInteraction");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class TheTwins.BrotherBlindFlashlightableLightingStrategy
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UBrotherBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
public:
	unsigned char                                      UnknownData_6CYN[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.BrotherBlindFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class TheTwins.ChargeTwinJumpInteraction
// 0x0148 (FullSize[0x0820] - InheritedSize[0x06D8])
class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_2OLD[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_HCBF[0x40];                                    // 0x06E0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _chargeJumpMaxCharge;                                      // 0x0720(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMax;                                  // 0x0748(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _interactionViewPitchMin;                                  // 0x0770(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GIKC[0x28];                                    // 0x0798(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _cancelCooldownTime;                                       // 0x07C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G09D[0x38];                                    // 0x07E8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ChargeTwinJumpInteraction");
		return ptr;
	}



	void Cosmetic_OnJumpReadyChanged(class ADBDPlayer* twin, bool Ready);
};

// Class TheTwins.ConjoinedTwin
// 0x0178 (FullSize[0x1230] - InheritedSize[0x10B8])
class AConjoinedTwin : public ADBDPlayer
{
public:
	class URangeToActorsTrackerComponent*              _restrictedPossessionAreaTracker;                          // 0x10B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinOutlineUpdateStrategy*                  _twinOutlineUpdateStrategy;                                // 0x10C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkComponent*                                _twinLullabyAudioComponent;                                // 0x10C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKillerBlindingFXComponent*                  _twinBlindingFX;                                           // 0x10D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCustomizedAudioComponent*                   _customizedAudio;                                          // 0x10D8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDAttackerComponent*                       _attackerComponent;                                        // 0x10E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _maxWalkSpeed;                                             // 0x10E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitValidatorComponent*                      _hitValidator;                                             // 0x1110(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitValidatorConfigurator*                   _hitValidationConfigurator;                                // 0x1118(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _gravityScale;                                             // 0x1120(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimationMontageSlave*                      _animationFollower;                                        // 0x1148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8FAK[0x18];                                    // 0x1150(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _revealDurationOnAttached;                                 // 0x1168(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinFirstPersonViewComponent*               _firstPersonViewComponent;                                 // 0x1190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashlightableComponent*                    _eyesFlashlightable;                                       // 0x1198(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlindFlashlightTargetFXComponent*           _blindFlashlightTargetFXComponent;                         // 0x11A0(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandlerComponent;                        // 0x11A8(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EGTN[0x8];                                     // 0x11B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFastTimer                                  _flashlightBlindEvasionScoreTimer;                         // 0x11B8(0x0030) (Transient, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _flashlightEvasionScoreCooldown;                           // 0x11E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinPossessNegationEffectComponent*         _twinPossessNegationEffectComponent;                       // 0x1210(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2NNI[0x18];                                    // 0x1218(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ConjoinedTwin");
		return ptr;
	}



	void Server_SendAttackInput(bool Pressed);
	void OnFinishedPlayingEvent(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Cosmetic_OnOnGroundUncontrolledChanged(bool onGroundAndUncontrolled);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
};

// Class TheTwins.ConjoinedTwinAnimInstance
// 0x00B8 (FullSize[0x05A0] - InheritedSize[0x04E8])
class UConjoinedTwinAnimInstance : public UPlayerAnimInstance
{
public:
	class AConjoinedTwin*                              _owningConjoinedTwin;                                      // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _firstPersonView;                                          // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KPQK[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _forwardVelocity;                                          // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralVelocity;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EInteractionAnimation               _interactionType;                                          // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInAir;                                                  // 0x04FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isIdle;                                                   // 0x04FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H6Z8[0x1];                                     // 0x04FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _idleTime;                                                 // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttacking;                                              // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E4RD[0x3];                                     // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDAttackerComponent*                       _attackerComponent;                                        // 0x0508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinAttachmentComponent*                    _twinAttachmentComponent;                                  // 0x0510(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwinLockerBlockerComponent*                 _twinLockerBlockerComponent;                               // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animYaw;                                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animPitch;                                                // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSpectator;                                              // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ONY2[0x3];                                     // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _animDirection;                                            // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _animSpeed;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToSister;                                       // 0x0534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToSurvivor;                                     // 0x0535(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToFemaleSurvivor;                               // 0x0536(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isChargingTwinJump;                                       // 0x0537(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isPossessing;                                             // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isWakingUpFromPossess;                                    // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDormant;                                                // 0x053A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingAutoPossessedAfterRelease;                         // 0x053B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAttachedToLocker;                                       // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EAttackSubstate                     _attackState;                                              // 0x053D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LF35[0x62];                                    // 0x053E(0x0062) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinAnimInstance");
		return ptr;
	}



	class AConjoinedTwin* GetOwningConjoinedTwin();
};

// Class TheTwins.ConjoinedTwinInteractable
// 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
class AConjoinedTwinInteractable : public APlayerInteractable
{
public:
	class UChargeableComponent*                        _possessKillerChargeable;                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _chargeTwinJumpChargeable;                                 // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _removeTwinChargeable;                                     // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _destroyTwinChargeable;                                    // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinInteractable");
		return ptr;
	}



};

// Class TheTwins.ConjoinedTwinStateMachine
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UConjoinedTwinStateMachine : public UPlayerStateMachine
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ConjoinedTwinStateMachine");
		return ptr;
	}



};

// Class TheTwins.CoupDeGrace
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class UCoupDeGrace : public UPerk
{
public:
	float                                              _lungeAttackAddDurationMultiplier[0x3];                    // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NZRC[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGenerator*>                          _completedGenerators;                                      // 0x03E0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.CoupDeGrace");
		return ptr;
	}



};

// Class TheTwins.Deception
// 0x0038 (FullSize[0x0408] - InheritedSize[0x03D0])
class UDeception : public UPerk
{
public:
	float                                              _noScratchMarksDuration[0x3];                              // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _perkCooldownDuration[0x3];                                // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStatusEffect*                               _statusEffect;                                             // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9BP8[0x8];                                     // 0x03F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UManualIconStrategy*                         _iconStrategy;                                             // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JOBX[0x8];                                     // 0x0400(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Deception");
		return ptr;
	}



	void OnOwningPlayerFakedEnteringLockerCosmetic();
};

// Class TheTwins.DestroyTwin
// 0x0078 (FullSize[0x0750] - InheritedSize[0x06D8])
class UDestroyTwin : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_L6V2[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_WJKP[0x38];                                    // 0x06E0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _destroyTwinMaxCharge;                                     // 0x0718(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JVH4[0x10];                                    // 0x0740(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.DestroyTwin");
		return ptr;
	}



};

// Class TheTwins.Hoarder
// 0x0050 (FullSize[0x0420] - InheritedSize[0x03D0])
class UHoarder : public UPerk
{
public:
	unsigned char                                      UnknownData_QONL[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASearchable*>                         _chests;                                                   // 0x03D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _camperInteractItemPickupRevealRange[0x3];                 // 0x03E8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _extraChestsSpawned[0x3];                                  // 0x03F4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _bubbleIndicatorLifetime[0x3];                             // 0x0400(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _showUniqueChestVisualPerState;                            // 0x040C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XPA2[0x13];                                    // 0x040D(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Hoarder");
		return ptr;
	}



	void Local_ThrowBubbleIndicator(TheTwins_EPerkInteractionObjectType camperInteractionType, class AActor* objectActor, class ACamperPlayer* interactingCamperPlayer);
	float GetBubbleIndicatorLifetime();
};

// Class TheTwins.IsTwinRecallReady
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UIsTwinRecallReady : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_7YT4[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.IsTwinRecallReady");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class TheTwins.K22AchievementTagTeam
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22AchievementTagTeam : public UActorComponent
{
public:
	unsigned char                                      UnknownData_L4KM[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.K22AchievementTagTeam");
		return ptr;
	}



};

// Class TheTwins.K22Power
// 0x0168 (FullSize[0x0630] - InheritedSize[0x04C8])
class AK22Power : public ACollectable
{
public:
	unsigned char                                      UnknownData_UQ9C[0x18];                                    // 0x04C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _releaseConjoinedTwinChargeable;                           // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _possessConjoinedTwinChargeable;                           // 0x04E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6QJY[0x18];                                    // 0x04F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AConjoinedTwin*                              _conjoinedTwin;                                            // 0x0508(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AConjoinedTwin*                              _conjoinedTwinParadise;                                    // 0x0510(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _powerCharge;                                              // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK22PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;                      // 0x0520(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _powerMaxCharge;                                           // 0x0528(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _conjoinedTwinClass;                                       // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AC5P[0x18];                                    // 0x0558(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _powerRechargeRate;                                        // 0x0570(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeBeforeAutoDestroy;                                    // 0x0598(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeBeforeRecallAvailable;                                // 0x05C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MHNW[0x48];                                    // 0x05E8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.K22Power");
		return ptr;
	}



	void OnRep_ConjoinedTwin();
	void OnPowerChargeEmpty();
	void OnFirstAttachmentToSister();
	class AConjoinedTwin* GetConjoinedTwin();
	void Authority_OnPossessTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
	void Authority_OnDestroyTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
};

// Class TheTwins.K22PowerChargePresentationItemProgressComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8EFV[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.K22PowerChargePresentationItemProgressComponent");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.K22ScoreComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UK22ScoreComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_6JGN[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.K22ScoreComponent");
		return ptr;
	}



};

// Class TheTwins.KillerBeingPossessedInteraction
// 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction
{
public:
	class UCurveFloat*                                 _wakeUpSpeedCurve;                                         // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JZ07[0x8];                                     // 0x0638(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.KillerBeingPossessedInteraction");
		return ptr;
	}



};

// Class TheTwins.PossessionComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UPossessionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_XV53[0x61];                                    // 0x00B8(0x0061) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _startPossessed;                                           // 0x0119(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8EQ7[0x6];                                     // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               _emptyController;                                          // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X23Z[0x18];                                    // 0x0128(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PossessionComponent");
		return ptr;
	}



	void Server_StartPossessionOf(class ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);
	void Server_NotifyPossessionDone();
	void OnLevelReadyToPlay();
	void Multicast_StartPossessionOf(class ADBDPlayer* playerToPossess);
	void Multicast_NotifyPossessionDone();
	bool IsPossessed();
	bool IsDormant();
	void CosmeticLocal_OnUncontrolled(class ADBDPlayer* Player);
	void CosmeticLocal_OnControlled(class ADBDPlayer* Player);
	void Cosmetic_OnControlledChanged(class ADBDPlayer* Player, bool IsControlled);
	void Client_StartStateMachineDriverChangeProcess();
};

// Class TheTwins.KillerPossessionComponent
// 0x0060 (FullSize[0x01A0] - InheritedSize[0x0140])
class UKillerPossessionComponent : public UPossessionComponent
{
public:
	bool                                               _shouldDeactivateCollisionsWithSurvivors;                  // 0x0140(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MSB7[0x37];                                    // 0x0141(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _timeBeforeCollisionsDeactivation;                         // 0x0178(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.KillerPossessionComponent");
		return ptr;
	}



	void OnRep_ShouldDeactivateCollisionsWithSurvivors();
};

// Class TheTwins.PossessNegationEffectComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPossessNegationEffectComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    PlayCantPossessSound;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6KQ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PossessNegationEffectComponent");
		return ptr;
	}



	void PlayCantPossessSound__DelegateSignature();
	void OnLevelReadyToPlay();
};

// Class TheTwins.KillerPossessNegationEffectComponent
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UKillerPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
public:
	unsigned char                                      UnknownData_P11C[0x20];                                    // 0x00D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.KillerPossessNegationEffectComponent");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.Oppression
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class UOppression : public UPerk
{
public:
	int                                                _nbGeneratorsAffectedByPerk[0x3];                          // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _perkCooldown[0x3];                                        // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.Oppression");
		return ptr;
	}



};

// Class TheTwins.PossessTheKiller
// 0x0030 (FullSize[0x0740] - InheritedSize[0x0710])
class UPossessTheKiller : public UPossessPlayer
{
public:
	unsigned char                                      UnknownData_OA5F[0x30];                                    // 0x0710(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PossessTheKiller");
		return ptr;
	}



};

// Class TheTwins.PowerStruggle
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class UPowerStruggle : public UPerk
{
public:
	float                                              _wigglePercentToActivatePerk[0x3];                         // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VGUW[0x4];                                     // 0x03DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PowerStruggle");
		return ptr;
	}



};

// Class TheTwins.PushTwinOnLockerInteraction
// 0x0068 (FullSize[0x0740] - InheritedSize[0x06D8])
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition
{
public:
	class UChargeableComponent*                        _pushTwinOnLockerChargeable;                               // 0x06D8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _pushTwinOnLockerMaxCharge;                                // 0x06E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E6C9[0x38];                                    // 0x0708(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.PushTwinOnLockerInteraction");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
	void OnRep_PushTwinOnLockerChargeable();
	void Authority_OnSurvivorInLockerChanged(class ADBDPlayer* oldSurvivor, class ADBDPlayer* newSurvivor);
};

// Class TheTwins.RecallTwin
// 0x0030 (FullSize[0x05E0] - InheritedSize[0x05B0])
class URecallTwin : public UInteractionDefinition
{
public:
	unsigned char                                      UnknownData_JGJA[0x30];                                    // 0x05B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.RecallTwin");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.ReleaseConjoinedTwin
// 0x0168 (FullSize[0x0840] - InheritedSize[0x06D8])
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
{
public:
	struct FDBDTunableRowHandle                        _releaseMaxCharge;                                         // 0x06D8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _releaseExitTime;                                          // 0x0700(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RSSV[0x34];                                    // 0x0780(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _releaseAnimationWentToTheEnd;                             // 0x07B4(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JV45[0x8B];                                    // 0x07B5(0x008B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.ReleaseConjoinedTwin");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
	void OnRep_ReleaseAnimationWentToTheEnd();
	void OnPowerCollected(class ADBDPlayer* collector);
	void OnKillerStunned(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Cosmetic_OnReleaseTwinInteractionUpdateStart(class ADBDPlayer* sister, class AConjoinedTwin* brother);
	void Cosmetic_OnReleaseTwinInteractionUpdate(class ADBDPlayer* sister, class AConjoinedTwin* brother, float DeltaTime);
	void Cosmetic_OnReleaseChargeComplete(class ADBDPlayer* sister, class AConjoinedTwin* brother);
	void Cosmetic_OnReleaseCancelled(class ADBDPlayer* sister, class AConjoinedTwin* brother);
};

// Class TheTwins.RemoveTwin
// 0x0098 (FullSize[0x0770] - InheritedSize[0x06D8])
class URemoveTwin : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_THZ9[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_WM94[0x28];                                    // 0x06E0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _removeTwinMaxCharge;                                      // 0x0708(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _removeTwinExitTime;                                       // 0x0730(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _brotherRemoveDistanceFromSurvivor;                        // 0x0758(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HEDE[0x14];                                    // 0x075C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.RemoveTwin");
		return ptr;
	}



	void OnRemoveMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted, class ADBDPlayer* destroyingPlayer);
};

// Class TheTwins.SisterBlindFlashlightableLightingStrategy
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class USisterBlindFlashlightableLightingStrategy : public UBlindFlashlightableLightingStrategy
{
public:
	unsigned char                                      UnknownData_GAUF[0x30];                                    // 0x0040(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.SisterBlindFlashlightableLightingStrategy");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.TheTwinsCheatComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTheTwinsCheatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TheTwinsCheatComponent");
		return ptr;
	}



	void Multicast_TrySendThePlayerBackInKiller(class UTwinPossessionComponent* TwinPossessionComponent);
	void DBD_TwinDestroyTheTwin();
};

// Class TheTwins.TwinAOELingeringStatusEffect
// 0x00A0 (FullSize[0x03F8] - InheritedSize[0x0358])
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect
{
public:
	struct FTunableStat                                _shriekingRange;                                           // 0x0358(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CV4C[0x20];                                    // 0x03D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinAOELingeringStatusEffect");
		return ptr;
	}



	void Authority_OnInRangeChanged(bool InRange);
};

// Class TheTwins.TwinAttachmentComponent
// 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
class UTwinAttachmentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_85WT[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADBDPlayer*                                  _attachedPlayer;                                           // 0x0100(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IDP0[0x58];                                    // 0x0108(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusEffect*                               _gateBlockerStatusEffect;                                  // 0x0160(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3B4B[0x12];                                    // 0x0168(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _hasBeenDetachedBySurvivorDamageChanged;                   // 0x017A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GK3P[0x5];                                     // 0x017B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _cantEscapeByGateLingerDuration;                           // 0x0180(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class ADBDPlayer*, struct FFastTimer>         _escapeBlockerLingerTimers;                                // 0x01A8(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinAttachmentComponent");
		return ptr;
	}



	void OnRep_AttachedPlayer(class ADBDPlayer* oldAttachedPlayer);
	void OnMoriMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
	void OnLevelReadyToPlay();
	void OnImmobilizedStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState);
	void OnAttachedSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState);
	void Multicast_QuickDestroyTwin();
	bool IsAttachedToSurvivor();
	bool IsAttachedToSister();
	void Cosmetic_OnTwinDetachedFromSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother);
	void Cosmetic_OnTwinDetachedFromSister(class ADBDPlayer* sister, class ADBDPlayer* brother);
	void Cosmetic_OnTwinAttachedToSurvivor(class ADBDPlayer* survivor, class ADBDPlayer* brother);
	void Cosmetic_OnTwinAttachedToSister(class ADBDPlayer* sister, class ADBDPlayer* brother, bool isFirstAttachment);
	void Authority_OnRemoveTwinChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
};

// Class TheTwins.TwinBaseAddon
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UTwinBaseAddon : public UItemAddon
{
public:
	struct FName                                       _statusEffectId;                                           // 0x0298(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _customParam;                                              // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinBaseAddon");
		return ptr;
	}



	void Authority_OnTwinSet(class AConjoinedTwin* twin);
};

// Class TheTwins.TwinBaseKillerInstinctEffect
// 0x0148 (FullSize[0x0498] - InheritedSize[0x0350])
class UTwinBaseKillerInstinctEffect : public UStatusEffect
{
public:
	struct FTunableStat                                _lullabyRange;                                             // 0x0350(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _lingerDuration;                                           // 0x03D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EWMJ[0xA0];                                    // 0x03F8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinBaseKillerInstinctEffect");
		return ptr;
	}



	void Authority_OnInRangeChanged(bool InRange);
};

// Class TheTwins.TwinBeingPossessedInteraction
// 0x0000 (FullSize[0x0630] - InheritedSize[0x0630])
class UTwinBeingPossessedInteraction : public UBeingPossessedInteraction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinBeingPossessedInteraction");
		return ptr;
	}



};

// Class TheTwins.TwinCharacterMovementComponent
// 0x0014 (FullSize[0x0900] - InheritedSize[0x08EC])
class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData_Z27T[0x4];                                     // 0x08EC(0x0004) Fix Super Size
	unsigned char                                      UnknownData_IZY9[0x10];                                    // 0x08F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinCharacterMovementComponent");
		return ptr;
	}



};

// Class TheTwins.TwinDestructionComponent
// 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
class UTwinDestructionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_5U4T[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _huskClass;                                                // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                                  _dyingTransform;                                           // 0x00F0(0x0030) (Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E6NJ[0x18];                                    // 0x0120(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _diedFromSurvivorRemovingTwin;                             // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R03B[0x57];                                    // 0x0139(0x0057) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _dyingFromSurvivorTranslation;                             // 0x0190(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UF4F[0xC];                                     // 0x0194(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinDestructionComponent");
		return ptr;
	}



	void OnTwinQuickDestroy(class AConjoinedTwin* owningTwin);
	void OnDyingMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
	void Cosmetic_OnTwinDestroyedFromSurvivorRemove(class AConjoinedTwin* owningTwin);
	void Cosmetic_OnTwinDestroyedFromKick(class AConjoinedTwin* owningTwin);
	void Authority_OnTwinQuickDestroyOver();
};

// Class TheTwins.TwinFirstPersonViewComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UTwinFirstPersonViewComponent : public UFirstPersonViewComponent
{
public:
	unsigned char                                      UnknownData_6W08[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinFirstPersonViewComponent");
		return ptr;
	}



};

// Class TheTwins.TwinHuskAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class UTwinHuskAnimInstance : public UAnimInstance
{
public:
	bool                                               _isDeadFromSurvivorBack;                                   // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CJ22[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       _owningPawn;                                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwinHuskStateComponent*                     _twinHuskStateComponent;                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z92A[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinHuskAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinHuskStateComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTwinHuskStateComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LHGV[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinHuskStateComponent");
		return ptr;
	}



	bool IsDeadFromSurvivorBack();
};

// Class TheTwins.TwinInspectEmptyLocker
// 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
class UTwinInspectEmptyLocker : public UBaseTwinInspectLocker
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinInspectEmptyLocker");
		return ptr;
	}



};

// Class TheTwins.TwinInspectOccupiedLocker
// 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
class UTwinInspectOccupiedLocker : public UBaseTwinInspectLocker
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinInspectOccupiedLocker");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttack
// 0x00F0 (FullSize[0x0450] - InheritedSize[0x0360])
class UTwinJumpAttack : public UPounceAttack
{
public:
	struct FDBDTunableRowHandle                        _jumpVelocity;                                             // 0x0360(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _jumpAngleCurve;                                           // 0x0388(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GOGH[0x30];                                    // 0x0390(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _upDownObstructionAnglePrecision;                          // 0x03C0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _leftRightObstructionAnglePrecision;                       // 0x03E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _authorizedLandingHeight;                                  // 0x0410(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8BMV[0x9];                                     // 0x0438(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _shouldTwinHaveJumpObjectType;                             // 0x0441(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N44L[0xE];                                     // 0x0442(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAttack");
		return ptr;
	}



	void Server_StopJump();
	void Server_OnJumpStartTwin();
	void OnRep_ShouldTwinHaveJumpObjectType();
	void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);
	void Multicast_DestroyTwinOnWrongLanding();
	void Multicast_AttachToSurvivor(class ADBDPlayer* survivorToAttachTo);
	void Cosmetic_OnJumpStarted(class AConjoinedTwin* owningTwin);
	void Cosmetic_OnJumpObstructed(class AConjoinedTwin* owningTwin, class UPhysicalMaterial* PhysicalMaterial, const struct FVector& Position, const struct FVector& Normal);
	void Cosmetic_OnJumpLanded(class AConjoinedTwin* owningTwin);
	void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, class AConjoinedTwin* owningTwin);
	void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, class AConjoinedTwin* twin);
	void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);
};

// Class TheTwins.TwinJumpAttackOpenSubstate
// 0x00A0 (FullSize[0x01D0] - InheritedSize[0x0130])
class UTwinJumpAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:
	unsigned char                                      UnknownData_N8SJ[0xA0];                                    // 0x0130(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackOpenSubstate");
		return ptr;
	}



	void Local_OnTwinOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& Hit);
	void Local_OnTwinCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

// Class TheTwins.TwinJumpAttackSuccessSubstate
// 0x0050 (FullSize[0x0168] - InheritedSize[0x0118])
class UTwinJumpAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	struct FDBDTunableRowHandle                        _jumpSucceedAttachedCooldownTime;                          // 0x0118(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _jumpSucceedNotAttachedCooldownTime;                       // 0x0140(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UTwinJumpAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackMissSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UTwinJumpAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAttackObstructSubstate");
		return ptr;
	}



};

// Class TheTwins.TwinJumpAudioMutedEffect
// 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
class UTwinJumpAudioMutedEffect : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpAudioMutedEffect");
		return ptr;
	}



	void Cosmetic_OnTwinUnmuted();
	void Cosmetic_OnTwinMuted();
};

// Class TheTwins.TwinJumpTargetVisibleEffect
// 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
class UTwinJumpTargetVisibleEffect : public UStatusEffect
{
public:
	class UClass*                                      _twinJumpTargetObject;                                     // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      _twinJumpTarget;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USelectiveVisibilityComponent*               _jumpTargetVisibility;                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinJumpTargetVisibleEffect");
		return ptr;
	}



	void OnJumpTargetTick(const struct FVector& Location);
	void OnHideTargetPosition();
};

// Class TheTwins.TwinLockerBlockerComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UTwinLockerBlockerComponent : public UActorComponent
{
public:
	TArray<class UClass*>                              _interactionClasses;                                       // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GWZY[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              _interactionsToDisableOnLockerClasses;                     // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T8NX[0x40];                                    // 0x00E8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinLockerBlockerComponent");
		return ptr;
	}



	void OnSurvivorInLockerChanged(class ADBDPlayer* oldSurvivor, class ADBDPlayer* newSurvivor);
	void OnPushedMontageStopped(const struct FAnimationMontageDescriptor& montageDescriptor);
	void OnPushedMontageStarted(const struct FAnimationMontageDescriptor& montageDescriptor, float Rate);
	void OnPushedMontageEnded(const struct FAnimationMontageDescriptor& montageDescriptor, bool interrupted);
	bool IsTwinAttachedToLocker();
	void Cosmetic_OnTwinOnLockerChanged(bool isOnLocker);
	void Authority_OnLevelReadyToPlay();
};

// Class TheTwins.TwinLullabyRangeAdditiveEffect
// 0x0150 (FullSize[0x04A0] - InheritedSize[0x0350])
class UTwinLullabyRangeAdditiveEffect : public UStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _defaultTwinLullabyDormantRange;                           // 0x0350(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _twinLullabyDormantRange;                                  // 0x0378(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _twinLullabyAttachedRange;                                 // 0x03F8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OGF4[0x28];                                    // 0x0478(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinLullabyRangeAdditiveEffect");
		return ptr;
	}



};

// Class TheTwins.TwinOutlineUpdateStrategy
// 0x0050 (FullSize[0x0110] - InheritedSize[0x00C0])
class UTwinOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _visibleColorForKiller;                                    // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FFVY[0x40];                                    // 0x00D0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinOutlineUpdateStrategy");
		return ptr;
	}



};

// Class TheTwins.TwinPlacerComponent
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTwinPlacerComponent : public UObjectPlacerComponent
{
public:
	unsigned char                                      UnknownData_HGIL[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinPlacerComponent");
		return ptr;
	}



};

// Class TheTwins.TwinPossessionComponent
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UTwinPossessionComponent : public UPossessionComponent
{
public:
	unsigned char                                      UnknownData_B8KA[0x20];                                    // 0x0140(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinPossessionComponent");
		return ptr;
	}



};

// Class TheTwins.TwinPossessNegationEffectComponent
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UTwinPossessNegationEffectComponent : public UPossessNegationEffectComponent
{
public:
	unsigned char                                      UnknownData_0IIN[0x20];                                    // 0x00D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinPossessNegationEffectComponent");
		return ptr;
	}



};

// Class TheTwins.TwinsAnimInstance
// 0x0098 (FullSize[0x0640] - InheritedSize[0x05A8])
class UTwinsAnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_5BHZ[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_3QW6[0x90];                                    // 0x05B0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinsAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinsSurvivorSubAnimInstance
// 0x0040 (FullSize[0x0530] - InheritedSize[0x04F0])
class UTwinsSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _isRemovingTwin;                                           // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LK8Q[0x3F];                                    // 0x04F1(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinsSurvivorSubAnimInstance");
		return ptr;
	}



};

// Class TheTwins.TwinStateHelperComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UTwinStateHelperComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_11JN[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinStateHelperComponent");
		return ptr;
	}



};

// Class TheTwins.TwinStunnableComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UTwinStunnableComponent : public UStunnableComponent
{
public:
	unsigned char                                      UnknownData_3SRJ[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinStunnableComponent");
		return ptr;
	}



};

// Class TheTwins.TwinSubjectProvider
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UTwinSubjectProvider : public UModifierSubjectProvider
{
public:
	unsigned char                                      UnknownData_PFEP[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheTwins.TwinSubjectProvider");
		return ptr;
	}



	void OnTwinSet(class AConjoinedTwin* twin);
	void ListenToTwinSet(class ASlasherPlayer* killer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

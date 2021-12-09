﻿#pragma once

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

// Class TheBlight.ActivateBlightPower
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UActivateBlightPower : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_SHF6[0x8];                                     // 0x06D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.ActivateBlightPower");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_14
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UAddon_TheBlight_14 : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BJFY[0xC];                                     // 0x029C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_14");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_15
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_TheBlight_15 : public UOnEventBaseAddon
{
public:
	float                                              _palletPulldownBlockRange;                                 // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _palletPulldownBlockSeconds;                               // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_15");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_18
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UAddon_TheBlight_18 : public UOnEventBaseAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _hinderedSeconds;                                          // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_18");
		return ptr;
	}



	void SpawnParticleOnSurvivor(class ACamperPlayer* CamperPlayer);
	void Multicast_SpawnParticleOnSurvivors(TArray<class ACamperPlayer*> survivors);
};

// Class TheBlight.Addon_TheBlight_19
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UAddon_TheBlight_19 : public UItemAddon
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_19");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_20
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UAddon_TheBlight_20 : public UItemAddon
{
public:
	float                                              _survivorInRangeDistance;                                  // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _survivorRevealTime;                                       // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_20");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_21
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UAddon_TheBlight_21 : public UItemAddon
{
public:
	class UStatusEffect*                               _forceKoStatusEffect;                                      // 0x0298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_21");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
{
public:
	float                                              _speedIncreasePerDash;                                     // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GGOZ[0xC];                                     // 0x029C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_ConsecutiveDashSpeedBonus");
		return ptr;
	}



};

// Class TheBlight.Addon_TheBlight_SoulChemical
// 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
class UAddon_TheBlight_SoulChemical : public UItemAddon
{
public:
	float                                              _triggerDistance;                                          // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_ESkillCheckCustomType               _skillCheckType;                                           // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5DZY[0x3];                                     // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _interactionSemantics;                                     // 0x02A0(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                       _blightPowerStateTag;                                      // 0x02C0(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_57H0[0x20];                                    // 0x02E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Addon_TheBlight_SoulChemical");
		return ptr;
	}



};

// Class TheBlight.BlightAnimInstance
// 0x0018 (FullSize[0x05C0] - InheritedSize[0x05A8])
class UBlightAnimInstance : public UKillerAnimInstance
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheBlight_EWallGrabState                           _powerState;                                               // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PJJJ[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _stateTimeRemaining;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lookAngle;                                                // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FB4B[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightAnimInstance");
		return ptr;
	}



};

// Class TheBlight.BlightAttackPicker
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBlightAttackPicker : public USlasherAttackPickerComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightAttackPicker");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UBlightDashAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightDashAttack");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackOpenSubstate
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightDashAttackOpenSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackSuccessSubstate
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightDashAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackMissSubstate
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightDashAttackMissSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightDashAttackObstructSubstate
// 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
class UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightDashAttackObstructSubstate");
		return ptr;
	}



};

// Class TheBlight.BlightPower
// 0x0158 (FullSize[0x0620] - InheritedSize[0x04C8])
class ABlightPower : public ACollectable
{
public:
	class UPowerChargeComponent*                       _blightPowerCharge;                                        // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerToggleComponent*                       _blightPowerToggle;                                        // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _blightPowerActivateChargeable;                            // 0x04D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x04E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerActivateMaxCharge;                             // 0x04E8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _blightPowerMaxCharge;                                     // 0x0510(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerDechargeRate;                                  // 0x0590(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _blightPowerRechargeRate;                                  // 0x05B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QRMI[0x40];                                    // 0x05E0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPower");
		return ptr;
	}



	void OnPowerStateChanged(TheBlight_EWallGrabState previousState, TheBlight_EWallGrabState NewState);
};

// Class TheBlight.BlightPowerEstimatedCollisionIndicator
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ABlightPowerEstimatedCollisionIndicator : public AActor
{
public:
	unsigned char                                      UnknownData_5Y5E[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerEstimatedCollisionIndicator");
		return ptr;
	}



	void OnShowIndicator_Cosmetic();
	void OnHideIndicator_Cosmetic();
};

// Class TheBlight.BlightPowerState
// 0x0150 (FullSize[0x0180] - InheritedSize[0x0030])
class UBlightPowerState : public UObject
{
public:
	unsigned char                                      UnknownData_DYDW[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _stateSpeedCurve;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _stateDuration;                                            // 0x0048(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraPitchRecenterTime;                                  // 0x00C8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRadius;                                  // 0x00F0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionHeight;                                  // 0x0118(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _wallDashCollisionRange;                                   // 0x0140(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _playerCanCancelEarly;                                     // 0x0168(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_37TB[0xF];                                     // 0x0169(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _displayCollisionIndicator;                                // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DJOD[0x7];                                     // 0x0179(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerState");
		return ptr;
	}



	float GetStateDuration();
};

// Class TheBlight.BlightPowerStateAdjusting
// 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
class UBlightPowerStateAdjusting : public UBlightPowerState
{
public:
	bool                                               _adjustRotationOnCollision;                                // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _bounceAwayFromCollision;                                  // 0x0181(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x0182(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x0183(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PMQ3[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _maxDistanceForSurvivorFacing;                             // 0x0188(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TR8J[0x10];                                    // 0x01B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateAdjusting");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateDash
// 0x00D0 (FullSize[0x0250] - InheritedSize[0x0180])
class UBlightPowerStateDash : public UBlightPowerState
{
public:
	unsigned char                                      UnknownData_2F2Q[0x8];                                     // 0x0180(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _vectorInterpToSpeed;                                      // 0x0188(0x0080) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _noDashTimeLimitSpeedCurve;                                // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                       // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                            // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _lookAngleToMaxTurnRateCurveMouse;                         // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QBXB[0x28];                                    // 0x0228(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateAttack
// 0x0028 (FullSize[0x0278] - InheritedSize[0x0250])
class UBlightPowerStateAttack : public UBlightPowerStateDash
{
public:
	unsigned char                                      UnknownData_IG32[0x28];                                    // 0x0250(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateAttack");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateComponent
// 0x0258 (FullSize[0x0310] - InheritedSize[0x00B8])
class UBlightPowerStateComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Y05I[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPowerCollided;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              _blightPowerStateClasses;                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRadius;                              // 0x00F0(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionHeight;                              // 0x0118(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _canDashCheckCollisionRange;                               // 0x0140(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _blightLethalDashDodgeRadius;                              // 0x0168(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInteractionDefinition*                      _powerInteractionDefinition;                               // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RWS4[0x18];                                    // 0x0198(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimerObject*                                _stateTimer;                                               // 0x01B0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBlightPowerState*>                   _blightPowerStates;                                        // 0x01B8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlightPowerState*                           _currentBlightPowerState;                                  // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _dashTokens;                                               // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_30I2[0x7];                                     // 0x01D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _maximumDashTokens;                                        // 0x01D8(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTunableStat                                _tokenChargeRate;                                          // 0x0258(0x0080) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UBNM[0x38];                                    // 0x02D8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateComponent");
		return ptr;
	}



	void Server_SetWallGrabState(TheBlight_EWallGrabState NewState);
	void ResetDashTokens();
	void OnRep_StateTimer();
	void OnRep_DashTokens();
	void OnLevelReadyToPlay();
	void Multicast_SetWallGrabState(TheBlight_EWallGrabState NewState);
	float GetStateTimeRemaining();
	class UTimerObject* GetStateTimer();
	float GetStateTimeElapsed();
	class UBlightPowerState* GetPowerStateByEnum(TheBlight_EWallGrabState StateEnum);
	TheBlight_EWallGrabState GetPowerState();
	float GetLookAngleDegrees();
	unsigned char GetDashTokensRemaining();
	class UBlightPowerState* GetCurrentPowerState();
	bool CanDash();
};

// Class TheBlight.BlightPowerStateCooldown
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UBlightPowerStateCooldown : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateCooldown");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateHolding
// 0x0040 (FullSize[0x01C0] - InheritedSize[0x0180])
class UBlightPowerStateHolding : public UBlightPowerState
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x0180(0x0038) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _allowNavigation;                                          // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4VN4[0x3];                                     // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _dashSpeedForProjection;                                   // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateHolding");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlightPowerStateInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateInterface");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateLethalDash
// 0x0040 (FullSize[0x0290] - InheritedSize[0x0250])
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{
public:
	struct FSecondaryInteractionProperties             _secondaryInteractionProperties;                           // 0x0250(0x0038) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _smashBreakables;                                          // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6L8R[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateNonLethalDash
// 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{
public:
	bool                                               _smashBreakables;                                          // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S53S[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateNonLethalDash");
		return ptr;
	}



};

// Class TheBlight.BlightPowerStateReady
// 0x0000 (FullSize[0x0180] - InheritedSize[0x0180])
class UBlightPowerStateReady : public UBlightPowerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BlightPowerStateReady");
		return ptr;
	}



};

// Class TheBlight.BuiltToLast
// 0x0028 (FullSize[0x03F8] - InheritedSize[0x03D0])
class UBuiltToLast : public UPerk
{
public:
	float                                              _refillPercentage[0x3];                                    // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _hideDuration[0x3];                                        // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _numberOfTimesPerkTriggered;                               // 0x03E8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S4LU[0xF];                                     // 0x03E9(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.BuiltToLast");
		return ptr;
	}



	void OnBuiltToLastTrigger_Cosmetic();
};

// Class TheBlight.DesperateMeasures
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class UDesperateMeasures : public UPerk
{
public:
	float                                              _healAndUnhookMultiplier[0x3];                             // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _nbInjuredHookedOrDyingSurvivors;                          // 0x03DC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.DesperateMeasures");
		return ptr;
	}



};

// Class TheBlight.DragonsGrip
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class UDragonsGrip : public UPerk
{
public:
	class AGenerator*                                  _kickedGenerator;                                          // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _activationDuration[0x3];                                  // 0x03D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownDuration[0x3];                                    // 0x03E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _exposedEffectDuration[0x3];                               // 0x03F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _onlyExposeFirstSurvivor;                                  // 0x03FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TRWK[0xB];                                     // 0x03FD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _loudNoiseRange;                                           // 0x0408(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.DragonsGrip");
		return ptr;
	}



	void OnRevealSurvivor(class ADBDPlayer* Instigator);
	void Multicast_OnRevealSurvivor(class ADBDPlayer* survivor);
};

// Class TheBlight.HexBloodFavor
// 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
class UHexBloodFavor : public UHexPerk
{
public:
	float                                              _palletInRange[0x3];                                       // 0x0440(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _palletPulldownBlockTime[0x3];                             // 0x044C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.HexBloodFavor");
		return ptr;
	}



};

// Class TheBlight.HexUndying
// 0x0068 (FullSize[0x04A8] - InheritedSize[0x0440])
class UHexUndying : public UHexPerk
{
public:
	unsigned char                                      UnknownData_WZS7[0x58];                                    // 0x0440(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _revealAuraDistanceFromTotem[0x3];                         // 0x0498(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3CUT[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.HexUndying");
		return ptr;
	}



	void Authority_UpdateHexPerkStatusView(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable);
	void Authority_OnSurvivorAdded(class ACamperPlayer* survivor);
	void Authority_OnCamperCleansedHexPerk(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
};

// Class TheBlight.Visionary
// 0x0018 (FullSize[0x03E8] - InheritedSize[0x03D0])
class UVisionary : public UPerk
{
public:
	float                                              _auraVisibilityRange[0x3];                                 // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _cooldownDuration[0x3];                                    // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.Visionary");
		return ptr;
	}



};

// Class TheBlight.WallGrabInteractionDefinition
// 0x0040 (FullSize[0x05F0] - InheritedSize[0x05B0])
class UWallGrabInteractionDefinition : public UInteractionDefinition
{
public:
	class UBlightPowerStateComponent*                  _blightPowerStateComponent;                                // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _wallDashAccelerationMultiplier;                           // 0x05B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABlightPowerEstimatedCollisionIndicator*     _blightPowerCollisionIndicator;                            // 0x05E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _collisionIndicatorActorClass;                             // 0x05E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheBlight.WallGrabInteractionDefinition");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

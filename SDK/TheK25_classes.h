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

// Class TheK25.Addon_K25Power_17
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
class UAddon_K25Power_17 : public UItemAddon
{
public:
	unsigned char                                      UnknownData_SG2A[0x18];                                    // 0x0298(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.Addon_K25Power_17");
		return ptr;
	}



};

// Class TheK25.AISkill_FindCollectable_LamentConfiguration
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
class UAISkill_FindCollectable_LamentConfiguration : public UAISkill_FindCollectable
{
public:
	struct FAITunableParameter                         StopChainHuntGoalWeight;                                   // 0x0120(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAITunableParameter                         PreemptiveFindLamentGoalWeight;                            // 0x0130(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.AISkill_FindCollectable_LamentConfiguration");
		return ptr;
	}



};

// Class TheK25.AISkill_InteractionBreakFreeFromChains
// 0x0028 (FullSize[0x0198] - InheritedSize[0x0170])
class UAISkill_InteractionBreakFreeFromChains : public UAISkill_Interaction
{
public:
	struct FDBDTunableRowHandle                        _breakFreeFromChainsMaxCharge;                             // 0x0170(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.AISkill_InteractionBreakFreeFromChains");
		return ptr;
	}



};

// Class TheK25.AISkill_InteractionUseItem_LamentConfiguration
// 0x0028 (FullSize[0x01A0] - InheritedSize[0x0178])
class UAISkill_InteractionUseItem_LamentConfiguration : public UAISkill_InteractionUseItem
{
public:
	struct FDBDTunableRowHandle                        _solveLamentMaxCharge;                                     // 0x0178(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.AISkill_InteractionUseItem_LamentConfiguration");
		return ptr;
	}



};

// Class TheK25.ChainAttachedGateBlockerEffect
// 0x0028 (FullSize[0x03B0] - InheritedSize[0x0388])
class UChainAttachedGateBlockerEffect : public UGateBlockerEffect
{
public:
	struct FDBDTunableRowHandle                        _blockGateLingeringTimeDyingState;                         // 0x0388(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.ChainAttachedGateBlockerEffect");
		return ptr;
	}



	void OnSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState oldState, DeadByDaylight_ECamperDamageState NewState);
};

// Class TheK25.IsChainHuntActive
// 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
class UIsChainHuntActive : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_W3WN[0x28];                                    // 0x00E8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.IsChainHuntActive");
		return ptr;
	}



};

// Class TheK25.K25AnimationFollowerActor
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class AK25AnimationFollowerActor : public AActor
{
public:
	class USkeletalMeshComponent*                      _skeletalMesh;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimationMontageSlave*                      _montageFollower;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9LRZ[0x28];                                    // 0x0248(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25AnimationFollowerActor");
		return ptr;
	}



	void OnMontageStopped(const struct FAnimationMontageDescriptor& ID);
	void OnMontageStarted(const struct FAnimationMontageDescriptor& ID, float Rate);
	void OnMontageEnd(const struct FAnimationMontageDescriptor& Montage, bool interrupted);
};

// Class TheK25.K25AnimInstance
// 0x0098 (FullSize[0x0640] - InheritedSize[0x05A8])
class UK25AnimInstance : public UKillerAnimInstance
{
public:
	unsigned char                                      UnknownData_71MF[0x8];                                     // 0x05A8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_1MFS[0x90];                                    // 0x05B0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25AnimInstance");
		return ptr;
	}



};

// Class TheK25.K25AttackSubAnimInstance
// 0x0020 (FullSize[0x05E0] - InheritedSize[0x05C0])
class UK25AttackSubAnimInstance : public UKillerAttackSubAnimInstance
{
public:
	bool                                               _hasDownedTargetHoldingLamentConfiguration;                // 0x05C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z5WR[0x1F];                                    // 0x05C1(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25AttackSubAnimInstance");
		return ptr;
	}



	void OnAttackStart(DBDSharedTypes_EAttackType attackType);
};

// Class TheK25.K25Chain
// 0x0200 (FullSize[0x0430] - InheritedSize[0x0230])
class AK25Chain : public AActor
{
public:
	unsigned char                                      UnknownData_H5AJ[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAcquiredChanged;                                         // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 _attachedToProjectileInfluenceCurve;                       // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 _reelbackInfluenceCurve;                                   // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 _offsetMultiplierInfluenceCurve;                           // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CQT2[0x50];                                    // 0x0260(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _reelingBackSpeed;                                         // 0x02B0(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _chainOffsetMinValue;                                      // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _chainOffsetMaxValue;                                      // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _reelbackChainOffsetMinValue;                              // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _reelbackChainOffsetMaxValue;                              // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _chainInstanceSpacing;                                     // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _quickChainOffsetTimerLength;                              // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _reachingSurvivorAnchorTime;                               // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     _chainScale;                                               // 0x02F4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _chainOffsetTimerLength;                                   // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ESDS[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             _currentChainPoints;                                       // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isAcquiredFromPool;                                       // 0x0318(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L5ZS[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _sphereTraceRadius;                                        // 0x031C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _chainStartPosition;                                       // 0x0320(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _reelBackPosition;                                         // 0x032C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _reelbackStartPosition;                                    // 0x0338(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ORL7[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25Projectile*                              _projectileAttachedTo;                                     // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AK25SurvivorChainAttachmentAnchor> _survivorAnchorAttachedTo;                                 // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AK25SurvivorChainAttachmentAnchor> _targetAnchorToReach;                                      // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                            _chainSplineComponent;                                     // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInstancedStaticMeshComponent*               _chainInstancedMesh;                                       // 0x0368(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _currentInfluenceCurve;                                    // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _chainCurveOffset;                                         // 0x0378(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK25_EK25ChainState                              _chainState;                                               // 0x0384(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VQI9[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFastTimer                                  _curveOffsetStrengthTimer;                                 // 0x0388(0x0030) (Transient, NativeAccessSpecifierPrivate)
	struct FFastTimer                                  _reelbackTimer;                                            // 0x03B8(0x0030) (Transient, NativeAccessSpecifierPrivate)
	struct FFastTimer                                  _reachSurvivorAnchorPositionTimer;                         // 0x03E8(0x0030) (Transient, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             _forcedPositions;                                          // 0x0418(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK25_EK25ChainCreationStrategy                   _chainCreationStrategy;                                    // 0x0428(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QZ6U[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Chain");
		return ptr;
	}



	void SetSplineComponent(class USplineComponent* Component);
	void SetInstancedMeshComponent(class UInstancedStaticMeshComponent* instancedMesh);
	bool IsAttachedToControlledProjectile();
	class AK25SurvivorChainAttachmentAnchor* GetSurvivorChainAttachmentAnchor();
	struct FVector GetChainStartLocation();
	struct FVector GetChainEndLocation();
	void Cosmetic_OnSurvivorStoppedRemovingChainSFX(bool hasRemovedChainDueToInteraction);
	void Cosmetic_OnSurvivorStartedRemovingChainSFX();
	void Cosmetic_OnInstantChainUnleashedTowardsAttachmentPointFX();
	void Cosmetic_OnChainUnleashedWithProjectile();
	void Cosmetic_OnChainStartedToReelback();
	void Cosmetic_OnChainDisappears();
	void Cosmetic_OnChainDetachedFromSurvivor(TheK25_EK25ChainDetachmentReason detachmentReason);
	void Cosmetic_OnChainAttachedToSurvivor(bool wasReachingSurvivorAnchorPoint);
	void Cosmetic_OnChainAppears();
};

// Class TheK25.K25ChainAttachedStatusEffect
// 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
class UK25ChainAttachedStatusEffect : public UStatusEffect
{
public:
	class UCurveFloat*                                 _percentageReductionSpeedPerChainCurve;                    // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25SurvivorChainAttachmentComponent*        _chainAttachmentComponent;                                 // 0x0358(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _cachedNumberOfChainsAttached;                             // 0x0360(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2HCX[0x4];                                     // 0x0364(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainAttachedStatusEffect");
		return ptr;
	}



	void OnRep_ChainAttachementComponent();
};

// Class TheK25.K25ChainAttachmentReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK25ChainAttachmentReplicationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainAttachmentReplicationComponent");
		return ptr;
	}



	void Multicast_StartChainReelback(class AK25Chain* chainToAttach);
	void Multicast_LaunchInstantHitChainTowardsSurvivor(class AK25Chain* newChainToAttach, class AK25SurvivorChainAttachmentAnchor* targetAnchor, const struct FVector& startPosition);
	void Multicast_DetachChains(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, TArray<class AK25Chain*> chainsToDetach, TheK25_EK25ChainDetachmentReason detachmentReason, TArray<class AK25Chain*> chainsAttached);
	void Multicast_AttachChainToAnchor(class UK25SurvivorChainAttachmentComponent* chainAttachementComponent, class AK25Chain* chainToAttach, class AK25SurvivorChainAttachmentAnchor* anchorPoint);
};

// Class TheK25.K25ChainHuntEffectsComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UK25ChainHuntEffectsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DLWS[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainHuntEffectsComponent");
		return ptr;
	}



	class ADBDPlayer* GetOwningPlayer();
	void Cosmetic_TriggerChainHuntActivationSFX();
	void Cosmetic_DeactivateChainHuntEffects();
	void Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted);
};

// Class TheK25.K25ChainLocomotionSurvivorAnimInstance
// 0x0190 (FullSize[0x0680] - InheritedSize[0x04F0])
class UK25ChainLocomotionSurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
public:
	bool                                               _hasChainsAttached;                                        // 0x04F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AUVU[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _breakChainInteractionCompletionPercentage;                // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isPerformingBreakChainInteraction;                        // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SAJL[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _forwardDirectionDotProductResult;                         // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _lateralDirectionDotProductResult;                         // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0O8P[0x4];                                     // 0x0504(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25Chain*                                   _currentChainBeingDetached;                                // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _leftHandAttachmentData;                                   // 0x0510(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _rightHandAttachmentData;                                  // 0x0528(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _leftShoulderAttachmentData;                               // 0x0540(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _rightShoulderAttachmentData;                              // 0x0558(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _stomachAttachmentData;                                    // 0x0570(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FK25ChainAnchorAnimationData                _backAttachmentData;                                       // 0x0588(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TheK25_EK25ChainAnchorPointDirection               _chainDirection;                                           // 0x05A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK25_EK25ChainAnchorPointDirection               _lastDetatchedChainDirection;                              // 0x05A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasBrokenFreeFromChain;                                   // 0x05A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NR15[0x1];                                     // 0x05A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hasBrokenFreeTime;                                        // 0x05A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasBeenHitByChain;                                        // 0x05A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X14X[0x3];                                     // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _hasBeenHitByChainTime;                                    // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _numberOfChainsAttached;                                   // 0x05B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JOBE[0xCC];                                    // 0x05B4(0x00CC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainLocomotionSurvivorAnimInstance");
		return ptr;
	}



	void OnRemoveChainChargePercentageChanged(class UChargeableComponent* ChargeableComponent, float completionPercentage);
	void OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, TheK25_EK25ChainDetachmentReason detachmentReason);
	void OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
	bool IsSolvingLamentConfiguration();
	bool HasChainsAttached();
	class UK25SurvivorChainAttachmentComponent* GetSurvivorChainAttachmentComponent();
	struct FK25SurvivorChainAttachmentData GetDetachingChainAnchorData();
	TArray<class AK25SurvivorChainAttachmentAnchor*> GetChainAttachmentAnchors();
	void BP_OnChainDetached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
	void BP_OnChainAttached(class AK25Chain* chain, class AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor);
};

// Class TheK25.K25ChainPool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UK25ChainPool : public UAuthoritativeActorPoolComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainPool");
		return ptr;
	}



};

// Class TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UK25ChainStrike_IsGatewayOrientationTimerExpired : public UFSM_Condition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsGatewayOrientationTimerExpired");
		return ptr;
	}



};

// Class TheK25.K25ChainStrike_IsGatewayPlacementValidCondition
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UK25ChainStrike_IsGatewayPlacementValidCondition : public UFSM_Condition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsGatewayPlacementValidCondition");
		return ptr;
	}



};

// Class TheK25.K25ChainStrike_IsPlayerPressingInputCondition
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UK25ChainStrike_IsPlayerPressingInputCondition : public UFSM_Condition
{
public:
	DeadByDaylight_EInputInteractionType               _inputType;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7Y1T[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrike_IsPlayerPressingInputCondition");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeBaseState
// 0x0050 (FullSize[0x00C8] - InheritedSize[0x0078])
class UK25ChainStrikeBaseState : public UFSM_State
{
public:
	unsigned char                                      _secondaryInteractionIDs[0x50];                            // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeBaseState");
		return ptr;
	}



	class ADBDPlayer* GetPlayerOwner();
	class AK25Power* GetK25Power();
	class AK25Gateway* GetK25Gateway();
};

// Class TheK25.K25ChainStrikeImmunityEffect
// 0x0028 (FullSize[0x0398] - InheritedSize[0x0370])
class UK25ChainStrikeImmunityEffect : public UActivateOnEventTimedStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _chainStrikeImmunityDuration;                              // 0x0370(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeImmunityEffect");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeInteraction
// 0x0208 (FullSize[0x08E0] - InheritedSize[0x06D8])
class UK25ChainStrikeInteraction : public UChargeableInteractionDefinition
{
public:
	class UClass*                                      _chainStrikeStateMachineclass;                             // 0x06D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _repossessFadeOutTime;                                     // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HH7F[0x4];                                     // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _repossessFadeInTime;                                      // 0x06E8(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _gatewayPossessionFovModifierCurve;                        // 0x0710(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _controlledProjectilePossessionFovModifierCurve;           // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _chargeTimeAfterGatewayPlacementCancelled;                 // 0x0720(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _chargeTimeAfterGatewayPossessionCancelled;                // 0x0748(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _chargeTimeAfterControlledChainShot;                       // 0x0770(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gatewayPossessionFovChangeDuration;                       // 0x0798(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gatewayPossessionCameraPanTime;                           // 0x07C0(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _controlledProjectilePossessionCameraPanTime;              // 0x07E8(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _controlledProjectilePossessionFovTimeChangeDuration;      // 0x0810(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFiniteStateMachine*                         _stateMachine;                                             // 0x0838(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _authority_shouldIncrementChargeableComponent;             // 0x0840(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y3MX[0x68];                                    // 0x0841(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TheK25_EChainStrikeCameraViewTarget                _chainStrikeCameraViewTarget;                              // 0x08A9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasHitSurvivor;                                           // 0x08AA(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9N70[0x35];                                    // 0x08AB(0x0035) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeInteraction");
		return ptr;
	}



	void Server_SetShouldIncrementChargeableComponent(bool shouldIncrement);
	void Server_SetFallbackEndReason(TheK25_EChainStrikeEndReason chainStrikeEndReason);
	void Server_SetCameraViewTarget(TheK25_EChainStrikeCameraViewTarget NewViewTarget);
	void Server_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag);
	void Server_AddStateTagToPlayer(const struct FGameplayTag& Tag);
	void OnRep_ChainStrikeCameraViewTarget();
	void Multicast_SetFallbackEndReason(TheK25_EChainStrikeEndReason chainStrikeEndReason);
	void Multicast_RemoveStateTagFromPlayer(const struct FGameplayTag& Tag);
	void Multicast_AddStateTagToPlayer(const struct FGameplayTag& Tag);
	void Cosmetic_TriggerKillerRepossessionFadeOutEffects(class ASlasherPlayer* killer, bool preventAudioTriggers);
	void Cosmetic_TriggerKillerRepossessionFadeInEffects(class ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers);
	void Cosmetic_TriggerInvalidGatewayPlacementSFX(class ASlasherPlayer* killer);
	void Cosmetic_TriggerGatewayPossessionEffects(float TransitionTime);
	void Cosmetic_ResetAllVignetteValues(class ASlasherPlayer* killer);
};

// Class TheK25.K25ChainStrikeReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK25ChainStrikeReplicationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeReplicationComponent");
		return ptr;
	}



	void Server_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, TheK25_EChainStrikeEndReason endReason);
	void Multicast_EndChainStrike(class UK25ChainStrikeInteraction* Interaction, TheK25_EChainStrikeEndReason endReason);
};

// Class TheK25.K25ChainStrikeState_EndChainStrike
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UK25ChainStrikeState_EndChainStrike : public UK25ChainStrikeBaseState
{
public:
	TheK25_EChainStrikeEndReason                       _chainStrikeEndReason;                                     // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T3ND[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_EndChainStrike");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeState_GatewayPlacement
// 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
class UK25ChainStrikeState_GatewayPlacement : public UK25ChainStrikeBaseState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_GatewayPlacement");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeState_OutOfBodyState
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UK25ChainStrikeState_OutOfBodyState : public UK25ChainStrikeBaseState
{
public:
	struct FDBDTunableRowHandle                        _fovTimeChangeDuration;                                    // 0x00C8(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_OutOfBodyState");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeState_PossessGateway
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UK25ChainStrikeState_PossessGateway : public UK25ChainStrikeBaseState
{
public:
	unsigned char                                      UnknownData_8XG3[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_PossessGateway");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeState_SelectGatewayOrientation
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UK25ChainStrikeState_SelectGatewayOrientation : public UK25ChainStrikeBaseState
{
public:
	unsigned char                                      UnknownData_5JJ1[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_SelectGatewayOrientation");
		return ptr;
	}



};

// Class TheK25.K25ChainStrikeState_ShootControlledProjectile
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UK25ChainStrikeState_ShootControlledProjectile : public UK25ChainStrikeBaseState
{
public:
	float                                              _minimumThrottleTimeForInputServerCall;                    // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _inputResetSpeed;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3E4X[0x38];                                    // 0x00D0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ChainStrikeState_ShootControlledProjectile");
		return ptr;
	}



};

// Class TheK25.K25CheatComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK25CheatComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25CheatComponent");
		return ptr;
	}



	void DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(int numbChains);
	void DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float X, float Y, float Z, int numbChains);
	void DBD_K25TriggerUncontrolledChainsOnAllSurvivors(int numbChains);
	void DBD_K25ForceRespawnLamentConfiguration();
	void DBD_K25ForceRemoveAllChainsOnLocalSurvivor();
	void DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float X, float Y, float Z);
	void DBD_K25ForceRemoveAllChainsOnAllSurvivors();
	void DBD_K25ComeToPositionLamentConfiguration(float X, float Y, float Z);
	void DBD_K25ComeToMeLamentConfiguration();
};

// Class TheK25.K25CollectLamentConfigurationInteraction
// 0x0008 (FullSize[0x05E0] - InheritedSize[0x05D8])
class UK25CollectLamentConfigurationInteraction : public UCollectItemInteraction
{
public:
	unsigned char                                      UnknownData_K4PF[0x8];                                     // 0x05D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25CollectLamentConfigurationInteraction");
		return ptr;
	}



};

// Class TheK25.K25Projectile
// 0x00F8 (FullSize[0x0430] - InheritedSize[0x0338])
class AK25Projectile : public AKillerProjectile
{
public:
	unsigned char                                      UnknownData_310B[0x48];                                    // 0x0338(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        _staticMesh;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         _characterCollider;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                         _environmentCollider;                                      // 0x0390(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UKillerProjectileDodgeComponent*             _projectileDodgeComponent;                                 // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLaunchInfo                                 _launchInfo;                                               // 0x03A0(0x001C) (Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZADE[0x4];                                     // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25Chain*                                   _attachedChain;                                            // 0x03C0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeIgnoreSlasherCollision;                               // 0x03C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isActive;                                                 // 0x03CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DQCA[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FK25ProjectileDeactivationData              _lastDeactivationData;                                     // 0x03D0(0x0020) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W2B5[0x40];                                    // 0x03F0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Projectile");
		return ptr;
	}



	void Server_RequestDisableProjectile(TheK25_EK25ProjectileDeactivateReason deactivateReason);
	void OnProjectileStopped(const struct FHitResult& Result);
	class UDBDProjectileMovementComponent* GetMovementComponent();
	struct FVector GetChainAttachmentLocation();
	void Cosmetic_OnProjectileDeactivated(const struct FK25ProjectileDeactivationData& deactivationData);
	void Cosmetic_OnProjectileActivated();
};

// Class TheK25.K25ControlledProjectile
// 0x0270 (FullSize[0x06A0] - InheritedSize[0x0430])
class AK25ControlledProjectile : public AK25Projectile
{
public:
	unsigned char                                      UnknownData_KNRG[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        _killerViewProjectileStaticMesh;                           // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpringArmComponent*                         _killerSpringArm;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            _killerCameraPlacement;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _pitchClampAngle;                                          // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K4CE[0x4];                                     // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _maximumYawTurnRate;                                       // 0x0458(0x0080) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _maximumPitchTurnRate;                                     // 0x04D8(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraRollSpeedMultiplier;                                // 0x0558(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraRollGoBackSpeedMultiplier;                          // 0x0580(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _cameraMaximumRollDegree;                                  // 0x05A8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _numbExtraChainsOnControlledProjectileHit;                 // 0x05D0(0x0080) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25ControlledProjectileMovementComponent*   _controlledProjectileMovementComponent;                    // 0x0650(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _currentRoll;                                              // 0x0658(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _targetRoll;                                               // 0x065C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GD6E[0x30];                                    // 0x0660(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         _lastAppliedAngularVelocity;                               // 0x0690(0x000C) (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RBIM[0x4];                                     // 0x069C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ControlledProjectile");
		return ptr;
	}



	void Server_ProcessYawInput(float DeltaTime, float scaledInput);
	void Server_ProcessPitchInput(float DeltaTime, float scaledInput);
	void OnRep_AngularVelocity();
	void Cosmetic_OnKillerPossessProjectileEffects();
};

// Class TheK25.K25ControlledProjectileMovementComponent
// 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
class UK25ControlledProjectileMovementComponent : public UPhysicsBasedProjectileMovementComponent
{
public:
	struct FDBDTunableRowHandle                        _projectileBaseSpeed;                                      // 0x0260(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _baseProjectileMaximumDistance;                            // 0x0288(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _projectileSpeedIncreaseTime;                              // 0x02B0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _maximumTravelDistanceStat;                                // 0x02D8(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _projectileSpeedIncreaseMultiplier;                        // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _totaldistanceTravelled;                                   // 0x0360(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4SGF[0x3C];                                    // 0x0364(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ControlledProjectileMovementComponent");
		return ptr;
	}



};

// Class TheK25.K25EscapeLamentConfigurationGrasp
// 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
class UK25EscapeLamentConfigurationGrasp : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_8I0T[0x8];                                     // 0x06D8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25EscapeLamentConfigurationGrasp");
		return ptr;
	}



};

// Class TheK25.K25Gateway
// 0x0278 (FullSize[0x04A8] - InheritedSize[0x0230])
class AK25Gateway : public AActor
{
public:
	unsigned char                                      UnknownData_XAUS[0x10];                                    // 0x0230(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _rayCastZOffet;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _rayCastLength;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<float>                                      _distancePercentLocations;                                 // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _survivorGatewayRotationSpeed;                             // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minimumIndicatorVelocity;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _IndicatorVelocityEasingFactor;                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minimumTimeBeforeTargetLocationMulticast;                 // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _minDistanceFromPlayer;                                    // 0x0268(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTunableStat                                _maxDistanceFromPlayer;                                    // 0x0290(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _gatewayPlacementSpeed;                                    // 0x0310(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _pitchLevelChangeAngleThreshold;                           // 0x0338(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _pitchLevelChangeZoneThreshold;                            // 0x0360(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _maximumCameraPitchOrientationAngle;                       // 0x0388(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _minimumCameraPitchOrientationAngle;                       // 0x03B0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _maxGatewayPossessionDuration;                             // 0x03D8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActorComponent*                             _visualComponent;                                          // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _targetLocation;                                           // 0x0408(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F7D0[0x14];                                    // 0x0414(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraComponent*                            _cameraPlacementComponent;                                 // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isGatewayPossessed;                                       // 0x0430(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M8S3[0x1B];                                    // 0x0431(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isBeingPositionned;                                       // 0x044C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3XX2[0x1B];                                    // 0x044D(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFastTimer                                  _possessionTimer;                                          // 0x0468(0x0030) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0N01[0x10];                                    // 0x0498(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Gateway");
		return ptr;
	}



	void Server_StartGatewayPossession(const struct FVector& possessionLocation, const struct FRotator& gatewayRotation);
	void Server_SetIsGatewayBeingPositionned(bool isBeingPositionned);
	void Server_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation);
	void Server_SetGatewayOrientation(const struct FRotator& Rotation);
	void Server_EndGatewayPossession();
	void OnRep_IsGatewayPossessed();
	void OnRep_IsBeingPositionned();
	void Multicast_SetGatewayTargetLocation(const struct FVector& targetLocation, bool isValidLocation);
	void Multicast_SetGatewayOrientation(const struct FRotator& Rotation);
	void Multicast_SetGatewayLocation(const struct FVector& possessionLocation);
	bool IsGatewayPossessed();
	class UCameraComponent* GetCameraComponent();
	void Cosmetic_TriggerInvalidGatewayPlacementSFX();
	void Cosmetic_TriggerGatewayUnpossessedEffects();
	void Cosmetic_TriggerGatewayPossessionCancel();
	void Cosmetic_TriggerGatewayPossessedEffects(float TransitionTime);
	void Cosmetic_TriggerGatewayPlacementStop();
	void Cosmetic_TriggerGatewayPlacementStart();
	void Cosmetic_TriggerGatewayPlacementCancel();
	void Cosmetic_SetKillerVisualVisibility(bool IsVisible);
	void Cosmetic_SetIsGatewayPositionValid(bool isGatewayPlacementValid);
};

// Class TheK25.K25Husk
// 0x0040 (FullSize[0x05A0] - InheritedSize[0x0560])
class AK25Husk : public ADBDBasePlayer
{
public:
	class UCustomizedSkeletalMesh*                     _customizedSkeletalMeshComponent;                          // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimationMontageSlave*                      _montageFollower;                                          // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _k25CharacterOverrideID;                                   // 0x0578(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V809[0x24];                                    // 0x057C(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Husk");
		return ptr;
	}



	void Cosmetic_StartDisappearing();
	void Cosmetic_StartAppearing();
	void Cosmetic_HideHusk();
};

// Class TheK25.K25HuskAnimInstance
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class UK25HuskAnimInstance : public UAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25HuskAnimInstance");
		return ptr;
	}



};

// Class TheK25.K25KillerChainHuntEffectsComponent
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UK25KillerChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25KillerChainHuntEffectsComponent");
		return ptr;
	}



};

// Class TheK25.K25KillerTeleportationPositionFinderComponent
// 0x0120 (FullSize[0x01D8] - InheritedSize[0x00B8])
class UK25KillerTeleportationPositionFinderComponent : public UActorComponent
{
public:
	float                                              _rayCastZOffet;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _rayCastLength;                                            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _killerInRangeMinimumDistanceCheck;                        // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _killerInRangeMaxRangePercentage;                          // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _deltaHeightThreshold;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6OA6[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _minDistanceFromLamentConfiguration;                       // 0x00D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _maxDistanceFromLamentConfiguration;                       // 0x00F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SR3Z[0x20];                                    // 0x0120(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _timeBetweenFailsafeChecks;                                // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y1Y3[0x44];                                    // 0x0144(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TheK25_EK25TeleportLocationStatus                  _teleportLocationStatus;                                   // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7IL2[0x3];                                     // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _bestTeleportLocation;                                     // 0x018C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AEscapeDoor*>                         _escapeDoors;                                              // 0x0198(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EQXL[0x30];                                    // 0x01A8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25KillerTeleportationPositionFinderComponent");
		return ptr;
	}



};

// Class TheK25.K25LamentConfigurationPossessionChainAttacksEffect
// 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
class UK25LamentConfigurationPossessionChainAttacksEffect : public UStatusEffect
{
public:
	struct FDBDTunableRowHandle                        _timeBetweenChainTargettingAttempt;                        // 0x0350(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _numberOfChainsToTriggerTowardsSurvivor;                   // 0x0378(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MD9L[0x40];                                    // 0x03A0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationPossessionChainAttacksEffect");
		return ptr;
	}



};

// Class TheK25.K25LamentConfigurationPossessionStatusEffect
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UK25LamentConfigurationPossessionStatusEffect : public UObliviousEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationPossessionStatusEffect");
		return ptr;
	}



};

// Class TheK25.K25LamentConfigurationTeleportIndicator
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AK25LamentConfigurationTeleportIndicator : public AActor
{
public:
	unsigned char                                      UnknownData_NO7Y[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25LamentConfigurationTeleportIndicator");
		return ptr;
	}



	void Cosmetic_UpdateIndicatorVisibility(bool IsVisible);
};

// Class TheK25.K25P01
// 0x0060 (FullSize[0x0430] - InheritedSize[0x03D0])
class UK25P01 : public UPerk
{
public:
	float                                              _generatorBlockDuration[0x3];                              // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _auraRevealDuration[0x3];                                  // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowPerkToBlockZeroProgressionGenerators;                // 0x03E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NF5I[0x3];                                     // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                _generatorAuraColorForKiller;                              // 0x03EC(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5B86[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFastTimer>                          _generatorBlockingTimers;                                  // 0x0400(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _generatorsBlocked;                                        // 0x0410(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AGenerator*>                          _local_generatorsBlocked;                                  // 0x0420(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25P01");
		return ptr;
	}



	void OnRep_GeneratorsBlocked();
	void Authority_OnBlockTimerDone(class AGenerator* Generator);
};

// Class TheK25.K25P02
// 0x0078 (FullSize[0x04B8] - InheritedSize[0x0440])
class UK25P02 : public UHexPerk
{
public:
	float                                              _totemAuraRevealRadius[0x3];                               // 0x0440(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _totemBlockerHasLifetime;                                  // 0x044C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8DS8[0x3];                                     // 0x044D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _totemBlockerDuration[0x3];                                // 0x0450(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I9Q7[0xC];                                     // 0x045C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDBDPlayerTotemPair>                 _cursedSurvivors;                                          // 0x0468(0x0010) (Net, ZeroConstructor, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QNPU[0x10];                                    // 0x0478(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ADBDPlayer*>                          _hookedSurvivors;                                          // 0x0488(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ATotem*>                              _previouslyBoundTotems;                                    // 0x0498(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDPlayerTotemPair                         _lastPlayerTotemPair;                                      // 0x04A8(0x0010) (Transient, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25P02");
		return ptr;
	}



	void OnRep_CursedSurvivors();
};

// Class TheK25.K25P03
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class UK25P03 : public UPerk
{
public:
	unsigned char                                      UnknownData_W4H7[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _numberOfSurvivorsWaitingForDamageStateChange;             // 0x03D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _state2ActionSpeedDebuffPercentage[0x3];                   // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A2UG[0x8];                                     // 0x03E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25P03");
		return ptr;
	}



	void OnSurvivorRemoved(class ACamperPlayer* survivor);
	void OnDamageStateChanged(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
	void OnCamperUnhookedFromScourgeHook(const struct FGameEventData& GameEventData);
};

// Class TheK25.K25PounceAttack
// 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
class UK25PounceAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_9PI1[0x20];                                    // 0x0360(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25PounceAttack");
		return ptr;
	}



	void Multicast_DownedTargetHoldingLamentConfiguration();
	void Client_InvalidateDownedTargetHoldingLamentConfiguration();
};

// Class TheK25.K25PounceAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UK25PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25PounceAttackHittingSubstate");
		return ptr;
	}



};

// Class TheK25.K25Power
// 0x0138 (FullSize[0x0600] - InheritedSize[0x04C8])
class AK25Power : public ACollectable
{
public:
	unsigned char                                      UnknownData_7F1C[0x18];                                    // 0x04C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _k25ChainStrikeInteractionChargeableComponent;             // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _k25TeleportChargeableComponent;                           // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCustomKillerInstinctData>           _customKillerInstinctDatas;                                // 0x04F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               _survivorStatusEffectID;                                   // 0x0500(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               _killerStatusEffectID;                                     // 0x0510(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _survivorChainAttachmentComponentClass;                    // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _survivorChainTargetterComponentClass;                     // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _k25GatewayClass;                                          // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _controlledProjectileClass;                                // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _lamentConfigurationClass;                                 // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _k25HuskClass;                                             // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _killerTeleportFinderComponentClass;                       // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _chainAnimationActorClass;                                 // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDataTable*>                          _chainAnimationMappingsTables;                             // 0x0560(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _pillarAnimationActorClass;                                // 0x0570(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25ProjectileLauncher*                      _k25ProjectileLauncher;                                    // 0x0578(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _k25ProjectilePool;                                        // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativeActorPoolComponent*            _k25ChainPool;                                             // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPowerChargeComponent*                       _k25PowerChargeComponent;                                  // 0x0590(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider;                                    // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent;                // 0x05A0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AK25Gateway*                                 _gateway;                                                  // 0x05A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AK25ControlledProjectile*                    _controlledProjectileInstance;                             // 0x05B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ALamentConfiguration*                        _lamentConfiguration;                                      // 0x05B8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AK25Husk*                                    _k25Husk;                                                  // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK25ChainAttachmentReplicationComponent*     _chainAttachmentReplicationComponent;                      // 0x05C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VU07[0x29];                                    // 0x05D0(0x0029) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isPowerCharged;                                           // 0x05F9(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_417Y[0x6];                                     // 0x05FA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Power");
		return ptr;
	}



	void OnSurvivorAdded(class ACamperPlayer* survivor, class ASlasherPlayer* killer);
	void OnRep_LamentConfiguration();
	void OnRep_K25Gateway();
	void OnRep_K25ControlledProjectile();
	void OnKillerAdded(class ASlasherPlayer* killer);
};

// Class TheK25.K25PowerChargePresentationItemProgressComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UK25PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AK25Power*                                   _k25Power;                                                 // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25PowerChargePresentationItemProgressComponent");
		return ptr;
	}



};

// Class TheK25.K25ProjectileLauncher
// 0x0038 (FullSize[0x01B8] - InheritedSize[0x0180])
class UK25ProjectileLauncher : public UBaseProjectileLauncher
{
public:
	struct FDBDTunableRowHandle                        _controlledProjectileInitialSpeed;                         // 0x0180(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isControlledProjectileRequested;                          // 0x01A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0CGV[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25ControlledProjectile*                    _controlledProjectile;                                     // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ProjectileLauncher");
		return ptr;
	}



};

// Class TheK25.K25ProjectilePool
// 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
class UK25ProjectilePool : public UAuthoritativeActorPoolComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ProjectilePool");
		return ptr;
	}



};

// Class TheK25.K25ProjectileReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK25ProjectileReplicationComponent : public UBaseProjectileReplicationComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25ProjectileReplicationComponent");
		return ptr;
	}



	void Multicast_SetAttachedChain(class AK25Projectile* Projectile, class AK25Chain* chainToAttach, const struct FLaunchInfo& LaunchInfo);
	void Multicast_DeactivateProjectile(class AK25Projectile* Projectile, const struct FK25ProjectileDeactivationData& deactivationData);
};

// Class TheK25.K25RemoveChainInteraction
// 0x0058 (FullSize[0x0730] - InheritedSize[0x06D8])
class UK25RemoveChainInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_S3E8[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_Q1VN[0x10];                                    // 0x06E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _interactionTimePerChainsAttached;                         // 0x06F0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25SurvivorChainAttachmentComponent*        _cachedSurvivorChainAttachmentComponent;                   // 0x0718(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AK25Chain>                    _chainBeingRemoved;                                        // 0x0720(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UK25SurvivorChainAttachmentComponent> _chainAttachmentComponent;                                 // 0x0728(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25RemoveChainInteraction");
		return ptr;
	}



};

// Class TheK25.K25SolveLamentConfigurationInteraction
// 0x00C8 (FullSize[0x07A0] - InheritedSize[0x06D8])
class UK25SolveLamentConfigurationInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_M6SY[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	struct FDBDTunableRowHandle                        _failSkillCheckTimePenalty;                                // 0x06E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAnimationMontageDescriptor                 _failMontage;                                              // 0x0708(0x0020) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JV22[0x78];                                    // 0x0728(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SolveLamentConfigurationInteraction");
		return ptr;
	}



	void Authority_OnSkillCheckResponseAuthority(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, DBDSharedTypes_ESkillCheckCustomType Type);
};

// Class TheK25.K25SurvivorChainAttachmentAnchor
// 0x00C0 (FullSize[0x02F0] - InheritedSize[0x0230])
class AK25SurvivorChainAttachmentAnchor : public AActor
{
public:
	unsigned char                                      UnknownData_KJBH[0x18];                                    // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _chainMaxBreakingLength;                                   // 0x0248(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeBetweenTrace;                                         // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YSUH[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FK25SurvivorChainAttachmentData             _attachmentData;                                           // 0x0278(0x0028) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ACamperPlayer>                _owningSurvivor;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AK25Chain>                    _attachedChain;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8128[0x28];                                    // 0x02B0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _cachedPullDirection;                                      // 0x02D8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2O2V[0xC];                                     // 0x02E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SurvivorChainAttachmentAnchor");
		return ptr;
	}



	void OnRep_AttachmentData();
	int GetNumberOfChainsAttached();
	struct FVector GetChainsPullLocation();
	struct FVector GetChainsPullDirection();
	float GetChainPullDirectionAngle();
	struct FVector GetChainAttachmentLocation();
	struct FK25SurvivorChainAttachmentData GetChainAttachmentData();
	void Cosmetic_OnChainDetached(class AK25Chain* chainToDetach);
	void Cosmetic_OnChainAttached(class AK25Chain* chainToAttach);
};

// Class TheK25.K25SurvivorChainAttachmentComponent
// 0x00E0 (FullSize[0x0198] - InheritedSize[0x00B8])
class UK25SurvivorChainAttachmentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EZAZ[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _attachmentAnchorClass;                                    // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FK25SurvivorChainAttachmentData>     _survivorAnchorData;                                       // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _survivorChainRotationStrategyClass;                       // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              _interruptableInteractionClasses;                          // 0x0108(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _maximumNumberOfChainsAttached;                            // 0x0118(0x0028) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AK25SurvivorChainAttachmentAnchor*>   _chainAttachmentAnchors;                                   // 0x0140(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AK25Chain>>            _chainsAttached;                                           // 0x0150(0x0010) (ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _removeChainChargeableComponent;                           // 0x0160(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TY9C[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UK25SurvivorChainRotationStrategy*           _survivorChainRotationStrategy;                            // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK25ChainAttachmentReplicationComponent*     _chainAttachmentReplicationComponent;                      // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A19D[0x18];                                    // 0x0180(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SurvivorChainAttachmentComponent");
		return ptr;
	}



	void OnRep_RemoveChainChargeableComponent();
	class AK25Chain* GetFirstChainToRelease();
};

// Class TheK25.K25SurvivorChainHuntEffectsComponent
// 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent
{
public:
	unsigned char                                      UnknownData_WJ5O[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SurvivorChainHuntEffectsComponent");
		return ptr;
	}



	class ACamperPlayer* GetOwningSurvivor();
};

// Class TheK25.K25SurvivorChainRotationStrategy
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UK25SurvivorChainRotationStrategy : public UBaseCharacterRotationStrategy
{
public:
	TWeakObjectPtr<class ACamperPlayer>                _cachedSurvivor;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UK25SurvivorChainAttachmentComponent*        _cachedChainAttachmentComponent;                           // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SurvivorChainRotationStrategy");
		return ptr;
	}



};

// Class TheK25.K25SurvivorChainTargetterComponent
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class UK25SurvivorChainTargetterComponent : public UActorComponent
{
public:
	struct FDBDTunableRowHandle                        _timeBetweenQueuedChainsLaunch;                            // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt;  // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_69V2[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _minimumSpawnDistance;                                     // 0x00E8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _maximumSpawnDistance;                                     // 0x0110(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _sphereCastRadius;                                         // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _numberOfPositionFindingTries;                             // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_75JY[0x4];                                     // 0x0140(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _maxNumberOfChainRetries;                                  // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1YKU[0x88];                                    // 0x0148(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25SurvivorChainTargetterComponent");
		return ptr;
	}



	void Multicast_DebugPositionFind(const struct FVector& startSweepPosition, const struct FVector& endSweepPosition, bool hasFoundPosition, const struct FVector& foundPosition, bool hasFoundCollision, const struct FVector& collisionPosition);
	void Authority_OnSurvivorHealthStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState);
};

// Class TheK25.K25TeleportInteraction
// 0x00A8 (FullSize[0x0780] - InheritedSize[0x06D8])
class UK25TeleportInteraction : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_0V6A[0x4];                                     // 0x06D8(0x0004) Fix Super Size
	float                                              _timeSensingLamentConfigurationAfterInteractionEnded;      // 0x06DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P6LC[0x20];                                    // 0x06E0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _slowdownAfterTeleportDuration;                            // 0x0700(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KIOI[0x58];                                    // 0x0728(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25TeleportInteraction");
		return ptr;
	}



	void Multicast_TeleportKillerToTargetPosition(class ASlasherPlayer* killer, const struct FVector& Location, const struct FRotator& Rotation);
	void Multicast_InitializeHusk(const struct FVector& Location, const struct FRotator& Rotation);
	void Cosmetic_TeleportStartEffects(class ASlasherPlayer* killer);
	void Cosmetic_TeleportEndEffects(class ASlasherPlayer* killer);
	void Cosmetic_TeleportAbortedEffects(class ASlasherPlayer* killer);
};

// Class TheK25.K25UncontrolledProjectile
// 0x00F8 (FullSize[0x0528] - InheritedSize[0x0430])
class AK25UncontrolledProjectile : public AK25Projectile
{
public:
	unsigned char                                      UnknownData_YR7Z[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAcquiredChanged;                                         // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _minimumTimeBeforeProjectileLaunch;                        // 0x0448(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _maximumTimeBeforeProjectileLaunch;                        // 0x0470(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _projectileSpeed;                                          // 0x0498(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _projectileMaximumTravelDistance;                          // 0x04C0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               _isAcquiredFromPool;                                       // 0x04E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q09V[0x37];                                    // 0x04E9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _targetSurvivor;                                           // 0x0520(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25UncontrolledProjectile");
		return ptr;
	}



	void OnRep_TargetSurvivor();
	void Cosmetic_TriggerUncontrolledProjectileSpawnSFX();
};

// Class TheK25.K25UncontrolledProjectileReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UK25UncontrolledProjectileReplicationComponent : public UK25ProjectileReplicationComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25UncontrolledProjectileReplicationComponent");
		return ptr;
	}



	void Multicast_LaunchProjectile(class AK25UncontrolledProjectile* Projectile, const struct FLaunchInfo& LaunchInfo);
};

// Class TheK25.K25Utilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UK25Utilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25Utilities");
		return ptr;
	}



	class ALamentConfiguration* STATIC_GetLamentConfiguration(class UObject* WorldContextObject);
	class AK25Power* STATIC_GetK25Power(class UObject* WorldContextObject);
	class AK25Husk* STATIC_GetK25Husk(class UObject* WorldContextObject);
	class AK25Gateway* STATIC_GetK25Gateway(class UObject* WorldContextObject);
	class AK25ControlledProjectile* STATIC_GetK25ControlledProjectile(class UObject* WorldContextObject);
};

// Class TheK25.K25WeaponAnimInstance
// 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
class UK25WeaponAnimInstance : public UBaseKillerWeaponAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.K25WeaponAnimInstance");
		return ptr;
	}



	void OnAttackStart(DBDSharedTypes_EAttackType attackType);
};

// Class TheK25.LamentConfiguration
// 0x0288 (FullSize[0x0750] - InheritedSize[0x04C8])
class ALamentConfiguration : public ACollectable
{
public:
	unsigned char                                      UnknownData_C1LL[0x38];                                    // 0x04C8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpherePlayerOverlapComponent*               _interactable;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInteractor*                                 _collectableInteractor;                                    // 0x0508(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25CollectLamentConfigurationInteraction*   _survivorCollectItemInteraction;                           // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25CollectLamentConfigurationInteraction*   _killerCollectItemInteraction;                             // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0520(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialHelper*                             _materialHelper;                                           // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULamentConfigurationOutlineStrategy*         _outlineStrategy;                                          // 0x0530(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULamentConfigurationSpawnStrategy*           _spawnStrategy;                                            // 0x0538(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULamentConfigurationChainHuntComponent*      _chainHuntComponent;                                       // 0x0540(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _dotProductMinValue;                                       // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_EAttachToSocketNameEnum             _survivorAttachmentSocket;                                 // 0x054C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DeadByDaylight_EAttachToSocketNameEnum             _killerAttachmentSocket;                                   // 0x054D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1DVR[0x2];                                     // 0x054E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationMontageSlave*                      _montageFollower;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMontagePlayer*                              _montagePlayer;                                            // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _chainAnimationActorClass;                                 // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _lamentConfigurationTeleportIndicatorClass;                // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _chainAnimationFollowerAttachmentSocketName;               // 0x0570(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2VW2[0x4];                                     // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAkObservedPlayerSoundLoop                  _possessionSoundLoop;                                      // 0x0580(0x0040) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _respawnTimeAfterLamentConfigurationSolved;                // 0x05C0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _respawnTimeAfterKillerPickUp;                             // 0x05E8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _respawnTimeAfterSurvivorFreeBySelf;                       // 0x0610(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _respawnTimeAfterSurvivorFreeByAttack;                     // 0x0638(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _numberChainsToLaunchUponKillerPickUpLamentConfiguration;  // 0x0660(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _hostageInteractionTime;                                   // 0x0688(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TheK25_ELamentConfigurationState                   _localLamentConfigurationState;                            // 0x06B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TheK25_ELamentConfigurationState                   _lamentconfigurationState;                                 // 0x06B1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HJSN[0x6];                                     // 0x06B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25AnimationFollowerActor*                  _chainAnimationActor;                                      // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_16JS[0x48];                                    // 0x06C0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _survivorHeldHostage;                                      // 0x0708(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FVS6[0x28];                                    // 0x0710(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _solvedLamentConfigurationDropDistanceToCollectorCentimeters; // 0x0738(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters; // 0x073C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _solved;                                                   // 0x0740(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _releasedByAttack;                                         // 0x0741(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_19B8[0x6];                                     // 0x0742(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AK25LamentConfigurationTeleportIndicator*    _lamentConfigurationTeleportIndicator;                     // 0x0748(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfiguration");
		return ptr;
	}



	void TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors);
	void OnRep_SurvivorHeldHostage(class ACamperPlayer* oldSurvivorHeldHostage);
	void OnRep_LamentConfigurationState();
	void OnCamperEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Multicast_TriggerSolvedSFX();
	void Multicast_TriggerKillerPickUpSFX(TArray<class ACamperPlayer*> affectedSurvivors);
	void Multicast_DownedSurvivorHoldingLamentConfiguration(class ACamperPlayer* survivor);
	void Multicast_CorrectLamentConfigurationPosition(const struct FVector& NewPosition);
	float GetChainHuntProgressPercentage();
	void Cosmetic_TriggerSurvivorPickUpSFX();
	void Cosmetic_TriggerSpawnedSFX();
	void Cosmetic_TriggerSolvedSFX();
	void Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX();
	void Cosmetic_TriggerDisappearsSFX();
	void Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(class ASlasherPlayer* killer, class ACamperPlayer* survivorDowned);
	void Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration);
	void Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack);
	void Cosmetic_OnChainHuntStartedEffects();
	void Cosmetic_OnChainHuntEndedEffects();
	void Cosmetic_OnChainHuntChargeStart(float chargeTime);
	void Cosmetic_OnChainHuntChargeEnd();
	void Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved);
	void Cosmetic_BeginSolvingCubeSFX();
	void Authority_RespawnLamentConfiguration(bool triggerChainHuntUponSpawning);
	void Authority_OnSurvivorHitByControlledProjectile(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Authority_OnIntroCompletedOrLevelReadyToPlay();
	void Authority_OnGameEnded(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
	void Authority_OnEndGameOver(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class TheK25.LamentConfigurationAnalyticsComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class ULamentConfigurationAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DL11[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfigurationAnalyticsComponent");
		return ptr;
	}



};

// Class TheK25.LamentConfigurationChainHuntComponent
// 0x0200 (FullSize[0x02B8] - InheritedSize[0x00B8])
class ULamentConfigurationChainHuntComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_LVOF[0x78];                                    // 0x00B8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _floorChainHuntTimeBetweenChainStrikes;                    // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_844L[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTunableStat                                _chainHuntChargeTime;                                      // 0x0138(0x0080) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _chainNumberPerChainHuntCluster;                           // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                                 _timeBetweenChainHuntClusterStrikes;                       // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _killerChainHuntEffectsComponentClass;                     // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      _survivorChainHuntEffectsComponentClass;                   // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UK25KillerChainHuntEffectsComponent*         _killerChainHuntEffectsComponent;                          // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents;                               // 0x01E0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DTHV[0x60];                                    // 0x01F0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _cachedAdditiveChainStrikeDelayTime;                       // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4QOT[0x34];                                    // 0x0254(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChainHuntStateData                         _chainHuntStateData;                                       // 0x0288(0x0010) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	TheK25_EChainHuntState                             _oldChainHuntState;                                        // 0x0298(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GFNI[0x1F];                                    // 0x0299(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfigurationChainHuntComponent");
		return ptr;
	}



	void OnRep_ChainHuntStateData();
	float GetChainHuntProgressPercentage();
};

// Class TheK25.LamentConfigurationOutlineStrategy
// 0x0068 (FullSize[0x0128] - InheritedSize[0x00C0])
class ULamentConfigurationOutlineStrategy : public UOutlineUpdateStrategy
{
public:
	struct FLinearColor                                _noChainHuntProgressColor;                                 // 0x00C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _chainHuntActiveColor;                                     // 0x00D0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                _killerColor;                                              // 0x00E0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZW5G[0x38];                                    // 0x00F0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfigurationOutlineStrategy");
		return ptr;
	}



};

// Class TheK25.LamentConfigurationPlayerAnalyticsComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class ULamentConfigurationPlayerAnalyticsComponent : public UActorComponent
{
public:
	int                                                _analyticsCount;                                           // 0x00B8(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V40U[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLamentConfigurationPlayerPossessionData    _possessionAnalytics;                                      // 0x00C0(0x0018) (Net, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfigurationPlayerAnalyticsComponent");
		return ptr;
	}



	void OnRep_AnalyticsCount();
};

// Class TheK25.LamentConfigurationSpawnStrategy
// 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
class ULamentConfigurationSpawnStrategy : public UActorComponent
{
public:
	float                                              _killerPointDistanceMultiplier;                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _survivorPointDistanceMultiplier;                          // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxDistancePointAllowed;                                  // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minSurvivorDistance;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minSurvivorDistancePointPenalty;                          // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minKillerDistance;                                        // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minHatchDistance;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ERKW[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _minKillerDistancePointPenalty;                            // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _pointPenaltyPerUsedLocationTime;                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<DeadByDaylight_ETileSpawnPointType>         _spawnPointsTypes;                                         // 0x00E0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _downRaycastLength;                                        // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _rayCastZOffet;                                            // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLamentConfigurationSpawnInfo>       _cached_spawnsInfo;                                        // 0x00F8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AHatch*>                              _hatches;                                                  // 0x0108(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.LamentConfigurationSpawnStrategy");
		return ptr;
	}



};

// Class TheK25.OwningPlayerInLamentConfigurationRange
// 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
class UOwningPlayerInLamentConfigurationRange : public UAnyActorPairQueryRangeIsTrue
{
public:
	unsigned char                                      UnknownData_487R[0x20];                                    // 0x0100(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.OwningPlayerInLamentConfigurationRange");
		return ptr;
	}



};

// Class TheK25.S28P01
// 0x0030 (FullSize[0x0400] - InheritedSize[0x03D0])
class US28P01 : public UPerk
{
public:
	float                                              _auraRevealDuration[0x3];                                  // 0x03D0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _auraRevealRange[0x3];                                     // 0x03DC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargeableComponent*                        _S28P01ChargeableComponent;                                // 0x03E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isPerkActive;                                             // 0x03F0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isInteractionOngoing;                                     // 0x03F1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZK77[0x6];                                     // 0x03F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADBDPlayer*                                  _playerOwner;                                              // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.S28P01");
		return ptr;
	}



	void OnRep_S28P01ChargeableComponent();
	void OnRep_IsPerkActive();
	void OnRep_IsInteractionOngoing();
};

// Class TheK25.S28P01AuraReveal
// 0x0048 (FullSize[0x0720] - InheritedSize[0x06D8])
class US28P01AuraReveal : public UChargeableInteractionDefinition
{
public:
	unsigned char                                      UnknownData_NWRU[0x8];                                     // 0x06D8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_805B[0x40];                                    // 0x06E0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.S28P01AuraReveal");
		return ptr;
	}



};

// Class TheK25.S28P02
// 0x0020 (FullSize[0x04A8] - InheritedSize[0x0488])
class US28P02 : public UBoonPerk
{
public:
	float                                              _healingSpeedGainPercentage[0x3];                          // 0x0488(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canSelfHeal;                                              // 0x0494(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G6XK[0x3];                                     // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _selfHealSpeedPenalty[0x3];                                // 0x0498(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXKN[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.S28P02");
		return ptr;
	}



};

// Class TheK25.S28P03
// 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
class US28P03 : public UBoonPerk
{
public:
	float                                              _lingerDuration[0x3];                                      // 0x0488(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XYQM[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheK25.S28P03");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

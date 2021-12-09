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

// Class AnimationUtilities.SleepingAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class USleepingAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_CGHT[0x10];                                    // 0x0270(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.SleepingAnimInstance");
		return ptr;
	}



	void Wakeup();
	void SetNeverIdle(bool neverIdle);
	void OnMontageStart(class UAnimMontage* Montage);
};

// Class AnimationUtilities.AnimCollection
// 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
class UAnimCollection : public UDataAsset
{
public:
	TMap<struct FGameplayTag, class UAnimSequence*>    _taggedAnimSequences;                                      // 0x0038(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UBlendSpaceBase*>  _taggedAnimBlendspaces;                                    // 0x0088(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FAnimSequenceSelector> _taggedAnimSelectors;                                      // 0x00D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UAnimCollection*                             _parent;                                                   // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAnimCollection*>                     _children;                                                 // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.AnimCollection");
		return ptr;
	}



};

// Class AnimationUtilities.AnimEffectBlackBoard
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAnimEffectBlackBoard : public UObject
{
public:
	unsigned char                                      UnknownData_ZMWR[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.AnimEffectBlackBoard");
		return ptr;
	}



};

// Class AnimationUtilities.AnimEffectHandler
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimEffectHandler : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.AnimEffectHandler");
		return ptr;
	}



	bool HandleAnimNotify(class ACharacter* Player, const struct FName& NotifyName);
};

// Class AnimationUtilities.AnimInstanceExt
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimInstanceExt : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.AnimInstanceExt");
		return ptr;
	}



	class UAnimInstance* STATIC_GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type);
	class USkeletalMeshComponent* STATIC_GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance);
	class USkeletalMeshComponent* STATIC_GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance);
	class ACharacter* STATIC_GetOwningCharacter(class UAnimInstance* AnimInstance);
	class AActor* STATIC_GetOwningActor(class UAnimInstance* AnimInstance);
};

// Class AnimationUtilities.DetectionFanComponent
// 0x0060 (FullSize[0x0270] - InheritedSize[0x0210])
class UDetectionFanComponent : public USceneComponent
{
public:
	struct FFloatRange                                 _angleRange;                                               // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     _originWorldOffset;                                        // 0x0220(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _numberOfSpots;                                            // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _defaultRingRadius;                                        // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              _collisionChannel;                                         // 0x0234(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X5P3[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      _meshComponent;                                            // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QO86[0x30];                                    // 0x0240(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.DetectionFanComponent");
		return ptr;
	}



};

// Class AnimationUtilities.ArmDetectionFanComponent
// 0x0090 (FullSize[0x0300] - InheritedSize[0x0270])
class UArmDetectionFanComponent : public UDetectionFanComponent
{
public:
	struct FName                                       _shoulderBone;                                             // 0x0270(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       _elbowBone;                                                // 0x027C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       _handBone;                                                 // 0x0288(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       _indexBone;                                                // 0x0294(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       _hipBone;                                                  // 0x02A0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZOB8[0x54];                                    // 0x02AC(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.ArmDetectionFanComponent");
		return ptr;
	}



};

// Class AnimationUtilities.BaseGroundDetectorComponent
// 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
class UBaseGroundDetectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SUCH[0xB0];                                    // 0x00B8(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _startTransformName;                                       // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<Engine_ECollisionChannel>              _walkableCollisionChannel;                                 // 0x0174(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _traceComplex;                                             // 0x0175(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QQV7[0x2];                                     // 0x0176(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _extraTraceDistance;                                       // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S748[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkinnedMeshComponent*                       _skinnedMeshComponent;                                     // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_22K6[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _startSlopeTransformName;                                  // 0x0190(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I6I2[0x34];                                    // 0x019C(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.BaseGroundDetectorComponent");
		return ptr;
	}



	void InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh);
	struct FVector GetGroundPosition(const struct FVector& targetPos, const struct FVector& extraOffset);
};

// Class AnimationUtilities.BoneSocketLocalVelocityEvaluator
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBoneSocketLocalVelocityEvaluator : public UActorComponent
{
public:
	class USkeletalMeshComponent*                      _meshComponent;                                            // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _trackedBoneSocketNames;                                   // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7YSB[0x10];                                    // 0x00D0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.BoneSocketLocalVelocityEvaluator");
		return ptr;
	}



	struct FVector GetLocalVelocity(const struct FName& BoneSocketName);
};

// Class AnimationUtilities.FootGroundDetectorComponent
// 0x0030 (FullSize[0x0200] - InheritedSize[0x01D0])
class UFootGroundDetectorComponent : public UBaseGroundDetectorComponent
{
public:
	struct FName                                       _hipTransformName;                                         // 0x01D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _slopeStartOffset;                                         // 0x01DC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _footLength;                                               // 0x01E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _traceRadius;                                              // 0x01EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maxWalkableSlopeAngle;                                    // 0x01F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LFJN[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 _movementComp;                                             // 0x01F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.FootGroundDetectorComponent");
		return ptr;
	}



};

// Class AnimationUtilities.FromBoneGroundDetectorComponent
// 0x0010 (FullSize[0x01E0] - InheritedSize[0x01D0])
class UFromBoneGroundDetectorComponent : public UBaseGroundDetectorComponent
{
public:
	struct FVector                                     _startOffset;                                              // 0x01D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_53RE[0x4];                                     // 0x01DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.FromBoneGroundDetectorComponent");
		return ptr;
	}



};

// Class AnimationUtilities.AnimInstanceLeader
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAnimInstanceLeader : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.AnimInstanceLeader");
		return ptr;
	}



};

// Class AnimationUtilities.MoveComponentToComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UMoveComponentToComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SHYQ[0x48];                                    // 0x00B8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.MoveComponentToComponent");
		return ptr;
	}



	void Stop();
	void Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration);
};

// Class AnimationUtilities.ResetControlPitchAnimNotify
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UResetControlPitchAnimNotify : public UAnimNotify
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.ResetControlPitchAnimNotify");
		return ptr;
	}



};

// Class AnimationUtilities.SlaveAnimInstance
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class USlaveAnimInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       _masterMesh;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UXZ4[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.SlaveAnimInstance");
		return ptr;
	}



	void SetMasterMesh(class USkeletalMeshComponent* masterMesh);
	class USkeletalMeshComponent* GetMasterMesh();
};

// Class AnimationUtilities.SleepingSkinnedMeshRegisterer
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class USleepingSkinnedMeshRegisterer : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationUtilities.SleepingSkinnedMeshRegisterer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class DBDGameplay.ActorPairQueryEvaluatorUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.ActorPairQueryEvaluatorUtilities");
		return ptr;
	}



};

// Class DBDGameplay.AimableComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UAimableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_RDOJ[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              _occlusionIgnoredActors;                                   // 0x00C0(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _maxAimDistance;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2MYU[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAimDirectionProvider*                       _aimDirectionProvider;                                     // 0x00D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _useOcclusion;                                             // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4I8A[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _aimPointLerpFactor;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAimPointProcessor*>                  _preOcclusionAimPointProcessors;                           // 0x00E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KR32[0x18];                                    // 0x00F8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.AimableComponent");
		return ptr;
	}



	void SetProcessors(TArray<class UAimPointProcessor*> processors);
	void SetOcclusionIgnoredActors(TArray<class AActor*> ignoredActors);
	void SetMaxAimDistance(float maxAimDistance);
};

// Class DBDGameplay.AimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAimDirectionProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.AimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.AimPointProcessor
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UAimPointProcessor : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.AimPointProcessor");
		return ptr;
	}



};

// Class DBDGameplay.AimPointPerlinNoise
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UAimPointPerlinNoise : public UAimPointProcessor
{
public:
	unsigned char                                      UnknownData_XYOM[0x4];                                     // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoisePersistence;                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _baseInaccuracyNoiseOctaveCount;                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseInaccuracyNoiseAmplitude;                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FQQU[0x4];                                     // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _baseInaccuracyNoiseFrequency;                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E9JV[0x4];                                     // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _timeOffset;                                               // 0x00D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XVHD[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.AimPointPerlinNoise");
		return ptr;
	}



	void SetNoiseFrequencyMultiplier(float Multiplier);
	void SetNoiseAmplitudeMultiplier(float Multiplier);
	void SetBaseInaccuracyNoisePersistence(float noisePersistence);
	void SetBaseInaccuracyNoiseOctaveCount(int octaveCount);
	void SetBaseInaccuracyNoiseFrequency(float Frequency);
	void SetBaseInaccuracyNoiseAmplitude(float Amplitude);
};

// Class DBDGameplay.AuraOverriderComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UAuraOverriderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_BMD3[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.AuraOverriderComponent");
		return ptr;
	}



	void ResetAura(class AActor* Actor);
	void ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool isAlwaysVisible, float minimumOutlineDistance);
};

// Class DBDGameplay.BaseCamperCollectable
// 0x0048 (FullSize[0x0510] - InheritedSize[0x04C8])
class ABaseCamperCollectable : public ACollectable
{
public:
	class USpherePlayerOverlapComponent*               _interactable;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInteractor*                                 _collectableInteractor;                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDropItemInteraction*                        _dropInteraction;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectItemInteraction*                     _collectInteraction;                                       // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            _infectablePrimitive;                                      // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialHelper*                             _materialHelper;                                           // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USurvivorCollectableOutlineUpdateStrategy*   _survivorCollectableOutlineUpdateStrategy;                 // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A5E9[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.BaseCamperCollectable");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightableLightingStrategy
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightableLightingStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightablePointsLightingStrategy
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	class UPointsProvider*                             _pointsProvider;                                           // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _impactPointDistanceError;                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J61K[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightablePointsLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.BlindFlashlightableLightingStrategy
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.BlindFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FlashlightTargetFXComponent
// 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
class UFlashlightTargetFXComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WU4D[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _modifiesBeamAngle;                                        // 0x00E8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CXNU[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFlashlightableComponent*                    _flashlightable;                                           // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0GJC[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightTargetFXComponent");
		return ptr;
	}



	void OnIsLitChanged(bool IsLit);
};

// Class DBDGameplay.BlindFlashlightTargetFXComponent
// 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	unsigned char                                      UnknownData_X7BK[0x28];                                    // 0x0100(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.BlindFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.CollectableComponentUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.CollectableComponentUtilities");
		return ptr;
	}



	class ADBDPlayer* STATIC_GetCollector(class UActorComponent* Component);
};

// Class DBDGameplay.DBDCharacterPusherComponent
// 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
class UDBDCharacterPusherComponent : public UCharacterPusherComponent
{
public:
	unsigned char                                      UnknownData_TR3R[0x10];                                    // 0x0170(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.DBDCharacterPusherComponent");
		return ptr;
	}



};

// Class DBDGameplay.DebugIndicator
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class ADebugIndicator : public AActor
{
public:
	class UStaticMeshComponent*                        _staticMeshComponent;                                      // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDOutlineComponent*                        _outlineComponent;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NHCO[0x10];                                    // 0x0240(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.DebugIndicator");
		return ptr;
	}



	void SetVisible(bool visible);
	void SetColor(const struct FLinearColor& Color);
};

// Class DBDGameplay.EtherealComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UEtherealComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JVE0[0x28];                                    // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isEthereal;                                               // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3JVV[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.EtherealComponent");
		return ptr;
	}



	void Server_SetIsEthereal(float Timestamp, bool Ethereal);
	void OnRep_OnIsEtherealChanged();
};

// Class DBDGameplay.FlashlightFXComponent
// 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
class UFlashlightFXComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashEvent;                                              // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USceneComponent*                             _tip;                                                      // 0x00C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                        _centerGlowMesh;                                           // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineMeshComponent*                        _beamMesh;                                                 // 0x00D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _minimumOcclusionDistanceForSpotlight;                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1N5D[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _flashEffectIntensityCurve;                                // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _flashEffectDuration;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightHalfAngle;                                       // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _spotLightIntensity;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _visualReworkSpotLightIntensity;                           // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingHalfAngle;                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamFlashHalfAngle;                                       // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithTarget;                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _beamBlindingRatioInterpSpeedWithoutTarget;                // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _resizeConeLength;                                         // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XU3X[0x3];                                     // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _centerGlowWidthScaleWithoutBlindTarget;                   // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleWithBlindTarget;                      // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowWidthScaleDuringFlash;                          // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowShrinkDistance;                                 // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _centerGlowLengthMaxScale;                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAkObservedPlayerSoundLoop                  _aimedAtSoundLoop;                                         // 0x0128(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFlashlightTargetFXComponent*                _currentBeamModifyingTarget;                               // 0x0168(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _targets[0x50];                                            // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      UnknownData_I5VD[0x98];                                    // 0x01C0(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightFXComponent");
		return ptr;
	}



	void UpdateFXTargets();
	void UpdateConeEvent(float Length, float halfAngle);
	void PostUpdateEvent();
	void OnTurnedOn();
	void OnTurnedOff();
	void OnStopEvent();
	void OnStartEvent();
	void OnFlashEvent__DelegateSignature();
	void OnDroppedEvent();
	void OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved);
	void OnCollectedEvent(class ADBDPlayer* collector);
	float GetBlindingSuccessRatio();
};

// Class DBDGameplay.FlashlightUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFlashlightUtilities : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightUtilities");
		return ptr;
	}



};

// Class DBDGameplay.RangeToActorsTrackerStrategy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class URangeToActorsTrackerStrategy : public UObject
{
public:
	struct FDBDTunableRowHandle                        _range;                                                    // 0x0030(0x0028) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AIHH[0x18];                                    // 0x0058(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerStrategy");
		return ptr;
	}



	void OnInRangeToTrackedActorsChanged(bool InRange);
};

// Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_DTRQ[0x68];                                    // 0x0070(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.InteractionStarterComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UInteractionStarterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_PY25[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractionDefinition*                      _interaction;                                              // 0x00C0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _shouldStartInteraction;                                   // 0x00C8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7PUI[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.InteractionStarterComponent");
		return ptr;
	}



	void OnRep_ShouldStartInteraction();
	void OnInteractionStarted();
};

// Class DBDGameplay.KillerFlashlightSFXComponent
// 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
class UKillerFlashlightSFXComponent : public UActorComponent
{
public:
	struct FAkObservedPlayerSoundLoop                  _targetSoundLoop;                                          // 0x00B8(0x0040) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFlashlightTargetFXComponent*>        _flashlightTargets;                                        // 0x00F8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z00S[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.KillerFlashlightSFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.LightBurnable
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class ULightBurnable : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBurnChargeCompleteEvent;                                 // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJPL[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              FirecrackerLineOfSightIgnoredActors;                       // 0x00E0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChargeableComponent*                        _chargeable;                                               // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFlashlightableComponent*                    _flashlightable;                                           // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFirecrackerEffectHandlerComponent*          _firecrackerEffectHandler;                                 // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isBurning;                                                // 0x0108(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E8M0[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.LightBurnable");
		return ptr;
	}



	void OnRep_IsBurning();
	void OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
	void OnBurnChargeEmpty();
	void OnBurnChargeCompleteEvent__DelegateSignature(TArray<class AActor*> instigatorsForCompletion);
	void Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* Flashlight);
	void Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData);
};

// Class DBDGameplay.LightBurnableFlashlightTargetFXComponent
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class ULightBurnableFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{
public:
	class ULightBurnable*                              _burnable;                                                 // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZZ5I[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.LightBurnableFlashlightTargetFXComponent");
		return ptr;
	}



};

// Class DBDGameplay.Medkit
// 0x0040 (FullSize[0x0550] - InheritedSize[0x0510])
class AMedkit : public ABaseCamperCollectable
{
public:
	class UAkComponent*                                _akComponent;                                              // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChargerComponent*                           _charger;                                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             _dustRingTemplate;                                         // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitGetAkEvent;                                         // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               _medkitDropAkEvent;                                        // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioBank*                                _medkitBank;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _healOtherChargeMultiplier;                                // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A1L9[0xC];                                     // 0x0544(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.Medkit");
		return ptr;
	}



	void UseCharge(float Seconds);
	void OnMedkitHealedCamper(class ADBDPlayer* healedPlayer);
	bool HasCharge();
	float GetChargeMultiplier();
	void Authority_OnChargeStateChange(bool Empty);
	void Authority_OnAnyOngoingInteractionChanged(bool IsInteracting);
	void Authority_ConsumeIfNotInteracting();
};

// Class DBDGameplay.PointsProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPointsProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.MeshSocketPointsProvider
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UMeshSocketPointsProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _meshReference;                                            // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class UMeshComponent*                              _mesh;                                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _sockets;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.MeshSocketPointsProvider");
		return ptr;
	}



};

// Class DBDGameplay.MultiSceneComponentPointProvider
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UMultiSceneComponentPointProvider : public UPointsProvider
{
public:
	TArray<struct FComponentReference>                 _sceneReferences;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USceneComponent*>                     _sceneComponents;                                          // 0x0040(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.MultiSceneComponentPointProvider");
		return ptr;
	}



};

// Class DBDGameplay.PlayerCameraAimDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PlayerCameraAimDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.PlayerInteractionListenerComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UPlayerInteractionListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_2IWI[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PlayerInteractionListenerComponent");
		return ptr;
	}



	void UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
	void UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
	void OnActorDestroyed(class AActor* DestroyedActor);
	void ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate);
	void ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const struct FScriptDelegate& interactionDelegate);
	void InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
	void InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
};

// Class DBDGameplay.PlayerLightBurnable
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UPlayerLightBurnable : public ULightBurnable
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PlayerLightBurnable");
		return ptr;
	}



};

// Class DBDGameplay.PlayerMovementUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PlayerMovementUtilities");
		return ptr;
	}



	void STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
	void STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
	void STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime);
	void STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player);
	void STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
	void STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
};

// Class DBDGameplay.PositionLagCompensationComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UPositionLagCompensationComponent : public UActorComponent
{
public:
	float                                              _maxExtrapolationDurationInSeconds;                        // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _maxInterpolationToServerMoveInSeconds;                    // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PositionLagCompensationComponent");
		return ptr;
	}



};

// Class DBDGameplay.PowerChargeComponent
// 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
class UPowerChargeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPowerChargeChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y0CP[0x58];                                    // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpeedBasedNetSyncedValue                   _currentCharge;                                            // 0x0120(0x0038) (Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TOCV[0x4];                                     // 0x0158(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _forceFullCharge;                                          // 0x015C(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_78SO[0x3];                                     // 0x015D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PowerChargeComponent");
		return ptr;
	}



	void OnRep_CurrentCharge();
	void OnCurrentChargeChanged(float value);
};

// Class DBDGameplay.PowerChargePresentationItemProgressComponent
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                     // 0x00B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPowerToggleComponent*                       _powerToggleComponent;                                     // 0x00C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _chargeReadyThreshold;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K3O2[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PowerChargePresentationItemProgressComponent");
		return ptr;
	}



};

// Class DBDGameplay.PowerToggleComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UPowerToggleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_665C[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isInPower;                                                // 0x00D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K2F4[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.PowerToggleComponent");
		return ptr;
	}



	void OnRep_IsInPower();
};

// Class DBDGameplay.RangeToActorsTrackerComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class URangeToActorsTrackerComponent : public UActorComponent
{
public:
	TArray<class URangeToActorsTrackerStrategy*>       _rangeTrackers;                                            // 0x00B8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, NoClear, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerComponent");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
{
public:
	class UClass*                                      _actorClass;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerDefaultStrategy");
		return ptr;
	}



};

// Class DBDGameplay.SceneComponentPointProvider
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class USceneComponentPointProvider : public UPointsProvider
{
public:
	struct FComponentReference                         _sceneReference;                                           // 0x0030(0x0030) (Edit, NativeAccessSpecifierPrivate)
	class USceneComponent*                             _sceneComponent;                                           // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.SceneComponentPointProvider");
		return ptr;
	}



};

// Class DBDGameplay.StruggleComponent
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UStruggleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_K3R3[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _skillCheckCount;                                          // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S52M[0x6C];                                    // 0x0114(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.StruggleComponent");
		return ptr;
	}



	void OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void Local_TryActivateSkillCheck();
};

// Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider");
		return ptr;
	}



};

// Class DBDGameplay.SurvivorAimStateComponent
// 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
class USurvivorAimStateComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MI95[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACollectable*                                _aimableCollectable;                                       // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ARMH[0x48];                                    // 0x00D0(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.SurvivorAimStateComponent");
		return ptr;
	}



};

// Class DBDGameplay.TracingConeFlashlightableLightingStrategy
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
{
public:
	int                                                _aroundConeCircleTraceCount;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ON8J[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.TracingConeFlashlightableLightingStrategy");
		return ptr;
	}



};

// Class DBDGameplay.UnhookedSurvivorTrackerComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UUnhookedSurvivorTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_UJ0A[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.UnhookedSurvivorTrackerComponent");
		return ptr;
	}



};

// Class DBDGameplay.VisibleHatchRangeTrackerStrategy
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:
	unsigned char                                      UnknownData_TNTU[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.VisibleHatchRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.WiggleComponent
// 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
class UWiggleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ETHK[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChargeableComponent*                        _wiggleProgress;                                           // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASlasherPlayer*                              _killerWigglingFrom;                                       // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputComponent*                             _inputComponent;                                           // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6JBS[0xB8];                                    // 0x00D8(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.WiggleComponent");
		return ptr;
	}



	void Server_OnWiggleEnd();
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void OnWiggleInput();
	void OnWiggleEnd();
	void OnPlayerPickedUpStart(class ADBDPlayer* picker);
	void OnPlayerPickedUpEnd(class ADBDPlayer* picker);
	void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void OnKeyBindingsChanged();
	void OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType Type);
	void OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
	class UChargeableComponent* GetWiggleChargeable();
	void Authority_AddWiggleCharge(float ChargeAmount);
};

// Class DBDGameplay.WiggleMotionComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class UWiggleMotionComponent : public UActorComponent
{
public:
	class ADBDPlayer*                                  _carriedPlayer;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDCharacterMovementComponent*              _ownerMovementComponent;                                   // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2ZDM[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.WiggleMotionComponent");
		return ptr;
	}



	void SetIsBeingWiggled(bool isBeingWiggled);
	void Server_SetIsBeingWiggled(bool isBeingWiggled);
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, DBDSharedTypes_ESkillCheckCustomType Type);
	void OnSurvivorRemoved(class ADBDPlayer* Target);
	void OnSurvivorPickedUp(class ADBDPlayer* Target);
	void OnHideWiggleSkillCheck(DBDSharedTypes_ESkillCheckCustomType Type);
};

// Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy");
		return ptr;
	}



};

// Class DBDGameplay.FadeComponent
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UFadeComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFadePercentChanged;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              _fadeDuration;                                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7MIF[0xC];                                     // 0x00CC(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FadeComponent");
		return ptr;
	}



	float GetFadePercent();
};

// Class DBDGameplay.FlashlightableComponent
// 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
class UFlashlightableComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFlashlightAddedEvent;                                    // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightRemovedEvent;                                  // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightLitChangedEvent;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFlashlightableLightingStrategy*             _lightingStrategy;                                         // 0x00E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlights[0x50];                                        // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightableComponent");
		return ptr;
	}



	void OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);
	void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
	bool IsLit();
};

// Class DBDGameplay.FlashlightComponent
// 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
class UFlashlightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_GH6X[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOn;                                      // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightTurnedOff;                                     // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFlashlightablesUpdated;                                  // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDBDTunableRowHandle                        _baseBlindnessDuration;                                    // 0x00F0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _baseAccuracy;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _lagDuration;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _flashlightables[0x50];                                    // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      _autonomousLitFlashlightables[0x50];                       // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<class UFlashlightableComponent*>            _replicatedLitFlashlightables;                             // 0x01C0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isOwnerLagging;                                           // 0x01D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EWUM[0x2F];                                    // 0x01D1(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightComponent");
		return ptr;
	}



	void TurnOn();
	void TurnOff();
	void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables);
	void OnRep_ReplicatedLitFlashlightables();
	void OnRep_IsOwnerLagging();
	void OnFlashlightEvent__DelegateSignature();
	bool IsOn();
	float GetEffectiveTimeToBlindModifier();
	float GetEffectiveBlindnessDuration();
};

// Class DBDGameplay.FlashlightConeComponent
// 0x0090 (FullSize[0x0148] - InheritedSize[0x00B8])
class UFlashlightConeComponent : public UActorComponent
{
public:
	struct FVector                                     AIAimBeamLocationOffset;                                   // 0x00B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AIAimBeamRotationOffset;                                   // 0x00C4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class USceneComponent*                             _flashlightBottom;                                         // 0x00D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                        _baseBeamAngle;                                            // 0x00D8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _baseBeamLength;                                           // 0x0100(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AActor>                       _cacheCollidingActor;                                      // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CAWN[0x18];                                    // 0x0130(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDGameplay.FlashlightConeComponent");
		return ptr;
	}



	float GetOcclusionDistance();
	float GetEffectiveConeLength();
	float GetEffectiveConeHalfAngle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

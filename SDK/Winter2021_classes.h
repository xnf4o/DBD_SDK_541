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

// Class Winter2021.HideInSnowmanInteraction
// 0x0160 (FullSize[0x0710] - InheritedSize[0x05B0])
class UHideInSnowmanInteraction : public UInteractionDefinition
{
public:
	bool                                               _shouldRunOutOfSnowman;                                    // 0x05B0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isSnowmanShieldDamaged;                                   // 0x05B1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RM40[0x6];                                     // 0x05B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _timeToEnterSnowman;                                       // 0x05B8(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minimumTimeToRunAndExit;                                  // 0x05E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _cameraZoomBack;                                           // 0x0608(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeToZoomEnter;                                          // 0x0630(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeToZoomExit;                                           // 0x0658(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2VBQ[0x90];                                    // 0x0680(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.HideInSnowmanInteraction");
		return ptr;
	}



	void Multicast_StopControllingSnowman(class ACamperPlayer* survivor);
	void Multicast_StartControllingSnowman(class ACamperPlayer* survivor);
	void Multicast_OnAbleToRunAndExitSnowmanStart();
};

// Class Winter2021.Snowman
// 0x0208 (FullSize[0x0558] - InheritedSize[0x0350])
class ASnowman : public ARespawnableInteractable
{
public:
	unsigned char                                      UnknownData_HW21[0x90];                                    // 0x0350(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDBDTunableRowHandle                        _timeToRespawn;                                            // 0x03E0(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _timeToBeDestroyed;                                        // 0x0408(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Winter2021_ESnowmanState                           _snowmanState;                                             // 0x0430(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Winter2021_ESnowmanDestructionType                 _snowmanDestructionType;                                   // 0x0431(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AYVA[0x6];                                     // 0x0432(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _survivorUsingThisSnowman;                                 // 0x0438(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KKEL[0x80];                                    // 0x0440(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      _snowmanSkeletalMesh;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                        _snowmanOutlineComponent;                                  // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           _snowmanCapsule;                                           // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHideInSnowmanInteraction*                   _hideInSnowmanInteraction;                                 // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                        _hideInSnowmanInteractionChargeable;                       // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInteractor*                                 _snowmanInteractor;                                        // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         _snowmanInteractionZone;                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USnowmanAttackableComponent*                 _snowmanAttackableComponent;                               // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isAcquiredFromPool;                                       // 0x0500(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_66KU[0x1F];                                    // 0x0501(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _isMoving;                                                 // 0x0520(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_99XA[0x37];                                    // 0x0521(0x0037) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.Snowman");
		return ptr;
	}



	void OnRep_SurvivorUsingSnowman();
	void OnRep_SnowmanState();
	void OnRep_SnowmanDestructionType();
	void OnRep_IsMoving();
	void Multicast_StartSnowmanDestruction(Winter2021_ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller);
	void Multicast_SpawnSnowman(const struct FSnowmanSpawnData& spawnData);
	void Multicast_SetSnowmanMaterialVariant(int materialVariantIndex);
	void Multicast_SetSnowmanHiddenInGame(bool IsHidden);
	void Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);
	void Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);
	void Multicast_DrawDebugCollisionCheck(const struct FVector& BoxExtent, float debugLifetime);
	void Cosmetic_SetSnowmanMaterialVariant(int materialVariantIndex);
	void Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman);
	void Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman);
	void Cosmetic_OnSnowmanSpawned();
	void Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman);
	void Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman);
	void Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman);
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman);
	void Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman);
};

// Class Winter2021.SnowmanAnimInstance
// 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
class USnowmanAnimInstance : public UAnimInstance
{
public:
	bool                                               _isIdle;                                                   // 0x0270(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingEntered;                                           // 0x0271(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isControlled;                                             // 0x0272(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isDestroyed;                                              // 0x0273(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingDestroyedDueToSurvivorRunExit;                     // 0x0274(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingDestroyedDueToKillerAttackWhileControlled;         // 0x0275(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isBeingDestroyedDueToKillerAttackWhileEmpty;              // 0x0276(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isSurvivorUsingSnowmanMoving;                             // 0x0277(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2J50[0x4];                                     // 0x0278(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ASnowman>                     _snowman;                                                  // 0x027C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ACamperPlayer>                _survivorUsingSnowman;                                     // 0x0284(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9MYF[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.SnowmanAnimInstance");
		return ptr;
	}



	void Cosmetic_OnSnowmanDestroyedEvent(Winter2021_ESnowmanDestructionType snowmanDestructionType);
};

// Class Winter2021.SnowmanAttackableComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class USnowmanAttackableComponent : public UAttackableComponent
{
public:
	unsigned char                                      UnknownData_UU35[0x18];                                    // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _killerProjectilesThatCanDamageSnowman;                    // 0x00D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.SnowmanAttackableComponent");
		return ptr;
	}



};

// Class Winter2021.SnowmanSpawnPlacementStrategy
// 0x0238 (FullSize[0x02F0] - InheritedSize[0x00B8])
class USnowmanSpawnPlacementStrategy : public UActorComponent
{
public:
	struct FDBDTunableRowHandle                        _minDistanceFromOtherActiveSnowmen;                        // 0x00B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minDistanceFromOtherPlayers;                              // 0x00E0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minHatchDistance;                                         // 0x0108(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _minPalletDistance;                                        // 0x0130(0x0028) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _navmesh_radiusArea;                                       // 0x0158(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _navmesh_minimumDistanceFromOriginSpawnPoint;              // 0x0180(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _navmesh_minimumNumberOfNavmeshPointsToBeReady;            // 0x01A8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _boxExtentXSize;                                           // 0x01D0(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _boxExtentYSize;                                           // 0x01F8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _boxExtentZSize;                                           // 0x0220(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _collisionBoxHalfExtent;                                   // 0x0248(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minDistanceFromOtherActiveSnowmenSquared;                 // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minDistanceFromOtherPlayersSquared;                       // 0x0258(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minPalletDistanceSquared;                                 // 0x025C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _minHatchSquaredDistance;                                  // 0x0260(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M94L[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<DeadByDaylight_ETileSpawnPointType>         _spawnPointsTileTypes;                                     // 0x0268(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<DeadByDaylight_EGameplayElementType>        _spawnPointsGameplayElementTypes;                          // 0x0278(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSnowmanSpawnLocationData>           _spawnLocationData;                                        // 0x0288(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AHatch*>                              _hatches;                                                  // 0x0298(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class APallet*>                             _pallets;                                                  // 0x02A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0FTM[0x20];                                    // 0x02B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     _collisionCheckBoxExtents;                                 // 0x02D8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _downRaycastLength;                                        // 0x02E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _rayCastZOffet;                                            // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _distanceToGroundToleranceSquared;                         // 0x02EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.SnowmanSpawnPlacementStrategy");
		return ptr;
	}



	void Authority_OnIntroCompletedOrLevelReadyToPlay();
};

// Class Winter2021.Winter2021EventComponent
// 0x0098 (FullSize[0x0150] - InheritedSize[0x00B8])
class UWinter2021EventComponent : public UActorComponent
{
public:
	struct FDBDTunableRowHandle                        _numbSnowmenToSpawnAtStart;                                // 0x00B8(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N8DT[0x38];                                    // 0x00E0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _snowmanSpawnPlacementStrategyClass;                       // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _snowmanClass;                                             // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USnowmanSpawnPlacementStrategy*              _snowmanSpawnPlacementStrategy;                            // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H4MG[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASnowman*>                            _snowmen;                                                  // 0x0140(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.Winter2021EventComponent");
		return ptr;
	}



	void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);
	void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);
	void DBD_Winter2021RecalculateSpawnPoints();
	void DBD_Winter2021ForceRespawnAllSnowmen();
};

// Class Winter2021.Winter2021PlayerComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UWinter2021PlayerComponent : public UActorComponent
{
public:
	bool                                               _hasCosmeticUnlockRequirementBeenSatisfied;                // 0x00B8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasSentUnlockCosmeticRequest;                             // 0x00B9(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasAllCosmeticRewards;                                    // 0x00BA(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DLYN[0x25];                                    // 0x00BB(0x0025) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Winter2021.Winter2021PlayerComponent");
		return ptr;
	}



	void Client_UnlockCosmetic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

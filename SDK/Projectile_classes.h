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

// Class Projectile.BaseProjectile
// 0x0080 (FullSize[0x02B0] - InheritedSize[0x0230])
class ABaseProjectile : public AActor
{
public:
	float                                              OnImpactAINoiseEventRange;                                 // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2CQE[0x44];                                    // 0x0234(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _multicastLaunch;                                          // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _allowMultipleHits;                                        // 0x0279(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LU6Q[0x6];                                     // 0x027A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       _semanticGameplayTags;                                     // 0x0280(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               _notifyClientOfServerHitValidationResult;                  // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8KH2[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseProjectileReplicationComponent*         _replicationComponent;                                     // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.BaseProjectile");
		return ptr;
	}



	bool SphereTraceSingle(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, struct FHitResult* outHitResult);
	void OnSetActive(bool Active);
	void OnLaunch(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch);
	void OnDetectPlayer(const struct FImpactInfo& ImpactInfo);
	void OnDetectCollision(const struct FImpactInfo& ImpactInfo);
	bool Local_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force);
	bool Local_SweepImpactCollision(const struct FVector& Start, const struct FVector& End, const struct FRotator& colliderRotation, struct FHitResult* OutHit);
	bool Local_OnPlayerDetected(const struct FImpactInfo& ImpactInfo, const struct FVector& projectileLocation);
	bool IsValidPlayerDetection(const struct FImpactInfo& ImpactInfo);
	bool IsValidImpactDetection(const struct FImpactInfo& ImpactInfo);
	bool IsOwningPawnLocallyControlled();
	class UBaseProjectileLauncher* GetLauncher();
	class UPrimitiveComponent* GetImpactPrimitiveComponent();
	float GetAddLauncherVeloctyFactor();
	bool Authority_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force);
};

// Class Projectile.PhysicsBasedProjectile
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class APhysicsBasedProjectile : public ABaseProjectile
{
public:
	class UPhysicsBasedProjectileMovementComponent*    Movement;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.PhysicsBasedProjectile");
		return ptr;
	}



};

// Class Projectile.BaseProjectileLauncher
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UBaseProjectileLauncher : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CCQ2[0x30];                                    // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _requireLaunchImpactDetection;                             // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasInfiniteAmmunition;                                    // 0x00E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTCD[0x6];                                     // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _ammo;                                                     // 0x00F8(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                _maxAmmo;                                                  // 0x00FC(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _canLaunchWhileOutOfAmmo;                                  // 0x0100(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CPB4[0x2F];                                    // 0x0101(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABaseProjectile*                             _debugProjectile;                                          // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9NWU[0x40];                                    // 0x0138(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBaseProjectileReplicationComponent*         _projectileReplicationComponent;                           // 0x0178(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.BaseProjectileLauncher");
		return ptr;
	}



	void SetProjectileVar(const struct FName& VarName, float value);
	void SetProjectileProvider();
	void Server_LaunchWithImpact(const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo, class ABaseProjectile* Projectile);
	void Server_Launch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile);
	void OnRep_MaxAmmo(int oldMaxAmmo);
	void OnRep_Ammo(int oldAmmo);
	void OnLaunch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile);
	void Local_Launch();
	bool IsLocallyControlled();
	bool IsAmmoFull();
	bool HasProjectile();
	bool HasAuthority();
	class ABaseProjectile* GetProjectileToLaunch();
	class APawn* GetOwningPawn();
	float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio);
	float GetLaunchSpeed();
	struct FVector GetLaunchPosition();
	struct FVector GetLaunchDirectionAtViewAndThrowPowerRatio(const struct FRotator& ViewRotation, float throwPowerRatio);
	struct FVector GetLaunchDirection();
	int GetAmmo();
	void Cosmetic_OnOutOfAmmo();
	void Authority_SetMaxAmmo(int newMaxAmmo, bool isMaxAmmoImmutable);
	void Authority_ReturnAmmoUnits(int amountOfAmmoUnitsReturned);
	void Authority_Reload();
	void Authority_Launch();
	void Authority_AddMaxAmmo(int ammoToAdd);
};

// Class Projectile.DBDProjectileMovementComponent
// 0x0080 (FullSize[0x0260] - InheritedSize[0x01E0])
class UDBDProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData_Z7XD[0x18];                                    // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComponentToSweepCollisionBP;                             // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GDHM[0x18];                                    // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FComponentSweepInfo>                 _componentsToSweep;                                        // 0x0220(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _previousPosition;                                         // 0x0230(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P2QC[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             _cachedUpdatedComponent;                                   // 0x0240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _initialLocation;                                          // 0x0248(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _distanceTravelled;                                        // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _hasMaximumDistance;                                       // 0x0258(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y93Y[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _maximumTravelDistance;                                    // 0x025C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.DBDProjectileMovementComponent");
		return ptr;
	}



	void OnComponentToSweepCollisionBP__DelegateSignature(class UPrimitiveComponent* PrimitiveComponent, const struct FHitResult& HitResult);
	struct FVector GetPreviousLocation();
	void AddComponentToSweep(class UPrimitiveComponent* Component);
};

// Class Projectile.PhysicsBasedProjectileMovementComponent
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UPhysicsBasedProjectileMovementComponent : public UDBDProjectileMovementComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.PhysicsBasedProjectileMovementComponent");
		return ptr;
	}



};

// Class Projectile.SingleProjectileProviderComponent
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class USingleProjectileProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_KQLA[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _projectileClass;                                          // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ABaseProjectile*                             _projectile;                                               // 0x00C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TWK9[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.SingleProjectileProviderComponent");
		return ptr;
	}



	void OnRep_Projectile();
};

// Class Projectile.BaseProjectileReplicationComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UBaseProjectileReplicationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.BaseProjectileReplicationComponent");
		return ptr;
	}



	void Server_TryDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo, const struct FVector_NetQuantize100& projectileLocation, const struct FVector_NetQuantize10& projectileRotation, float TargetLocationTimestamp);
	void Multicast_SendAuthorityDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
	void Multicast_OnLaunchWithImpact(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo);
	void Multicast_OnLaunch(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo);
	void Multicast_DetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
	void Multicast_DetectImpact(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo);
	void Client_ReceiveDetectPlayerValidation(class ABaseProjectile* Projectile, bool success);
	void Client_LaunchRefusedByServer(class ABaseProjectile* Projectile);
};

// Class Projectile.AuthoritativePoolProjectileProviderAdapter
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAuthoritativePoolProjectileProviderAdapter : public UObject
{
public:
	unsigned char                                      UnknownData_YO54[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAuthoritativeActorPoolComponent*            _pool;                                                     // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.AuthoritativePoolProjectileProviderAdapter");
		return ptr;
	}



	void Init(class UAuthoritativeActorPoolComponent* pool);
};

// Class Projectile.ProjectileProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UProjectileProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Projectile.ProjectileProvider");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

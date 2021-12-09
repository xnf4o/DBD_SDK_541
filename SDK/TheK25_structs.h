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
// Enums
//---------------------------------------------------------------------------

// Enum TheK25.EK25ChainCreationStrategy
enum class TheK25_EK25ChainCreationStrategy : uint8_t
{
	EK25ChainCreationStrategy__Spline = 0,
	EK25ChainCreationStrategy__PassedPoints = 1,
	EK25ChainCreationStrategy__EK25ChainCreationStrategy_MAX = 2,

};

// Enum TheK25.EK25ChainState
enum class TheK25_EK25ChainState : uint8_t
{
	EK25ChainState__InPool         = 0,
	EK25ChainState__AttachedToProjectile = 1,
	EK25ChainState__AttachedToSurvivorAnchorPoint = 2,
	EK25ChainState__ReelingBack    = 3,
	EK25ChainState__ReachingSurvivorAnchorPoint = 4,
	EK25ChainState__EK25ChainState_MAX = 5,

};

// Enum TheK25.EChainStrikeEndReason
enum class TheK25_EChainStrikeEndReason : uint8_t
{
	EChainStrikeEndReason__None    = 0,
	EChainStrikeEndReason__AbortedGatewayPlacementState = 1,
	EChainStrikeEndReason__AbortedGatewayPlacementBecauseOfInvalidPlacementState = 2,
	EChainStrikeEndReason__AbortedGatewayPossession = 3,
	EChainStrikeEndReason__ControlledProjectileStopped = 4,
	EChainStrikeEndReason__EChainStrikeEndReason_MAX = 5,

};

// Enum TheK25.EChainStrikeCameraViewTarget
enum class TheK25_EChainStrikeCameraViewTarget : uint8_t
{
	EChainStrikeCameraViewTarget__Killer = 0,
	EChainStrikeCameraViewTarget__Gateway = 1,
	EChainStrikeCameraViewTarget__ControlledProjectile = 2,
	EChainStrikeCameraViewTarget__EChainStrikeCameraViewTarget_MAX = 3,

};

// Enum TheK25.EK25TeleportLocationStatus
enum class TheK25_EK25TeleportLocationStatus : uint8_t
{
	EK25TeleportLocationStatus__Invalid = 0,
	EK25TeleportLocationStatus__PassableLocation = 1,
	EK25TeleportLocationStatus__PerfectLocation = 2,
	EK25TeleportLocationStatus__EK25TeleportLocationStatus_MAX = 3,

};

// Enum TheK25.EK25ProjectileDeactivateReason
enum class TheK25_EK25ProjectileDeactivateReason : uint8_t
{
	EK25ProjectileDeactivateReason__None = 0,
	EK25ProjectileDeactivateReason__WorldCollisionHit = 1,
	EK25ProjectileDeactivateReason__CharacterHit = 2,
	EK25ProjectileDeactivateReason__OutOfBounds = 3,
	EK25ProjectileDeactivateReason__MaximumRangeReached = 4,
	EK25ProjectileDeactivateReason__ChainStrikeInteractionEnded = 5,
	EK25ProjectileDeactivateReason__EK25ProjectileDeactivateReason_MAX = 6,

};

// Enum TheK25.EK25ChainDetachmentReason
enum class TheK25_EK25ChainDetachmentReason : uint8_t
{
	EK25ChainDetachmentReason__CollisionOrMaxLengthReached = 0,
	EK25ChainDetachmentReason__KillerAttack = 1,
	EK25ChainDetachmentReason__RemovedByInteraction = 2,
	EK25ChainDetachmentReason__MaxNumberChainsReached = 3,
	EK25ChainDetachmentReason__ForcedRemoved = 4,
	EK25ChainDetachmentReason__SurvivorKO = 5,
	EK25ChainDetachmentReason__EndGameCollapseOver = 6,
	EK25ChainDetachmentReason__SurvivorLeftTheMatch = 7,
	EK25ChainDetachmentReason__EK25ChainDetachmentReason_MAX = 8,

};

// Enum TheK25.EK25ChainAttachmentLimbType
enum class TheK25_EK25ChainAttachmentLimbType : uint8_t
{
	EK25ChainAttachmentLimbType__Hand = 0,
	EK25ChainAttachmentLimbType__Shoulder = 1,
	EK25ChainAttachmentLimbType__Stomach = 2,
	EK25ChainAttachmentLimbType__Back = 3,
	EK25ChainAttachmentLimbType__EK25ChainAttachmentLimbType_MAX = 4,

};

// Enum TheK25.EK25ChainAnchorPointDirection
enum class TheK25_EK25ChainAnchorPointDirection : uint8_t
{
	EK25ChainAnchorPointDirection__Front = 0,
	EK25ChainAnchorPointDirection__Left = 1,
	EK25ChainAnchorPointDirection__Right = 2,
	EK25ChainAnchorPointDirection__Back = 3,
	EK25ChainAnchorPointDirection__EK25ChainAnchorPointDirection_MAX = 4,

};

// Enum TheK25.ELamentConfigurationDropReason
enum class TheK25_ELamentConfigurationDropReason : uint8_t
{
	ELamentConfigurationDropReason__SurvivorSolved = 0,
	ELamentConfigurationDropReason__SurvivorIsNoLongerHostage = 1,
	ELamentConfigurationDropReason__SurvivorDowned = 2,
	ELamentConfigurationDropReason__KillerCollect = 3,
	ELamentConfigurationDropReason__Other = 4,
	ELamentConfigurationDropReason__ELamentConfigurationDropReason_MAX = 5,

};

// Enum TheK25.ELamentConfigurationState
enum class TheK25_ELamentConfigurationState : uint8_t
{
	ELamentConfigurationState__SurvivorEscapedWithLamentConfiguration = 0,
	ELamentConfigurationState__WaitingToSpawn = 1,
	ELamentConfigurationState__Spawned = 2,
	ELamentConfigurationState__IsBeingPickedUp = 3,
	ELamentConfigurationState__CarriedBySurvivor = 4,
	ELamentConfigurationState__HoldingSurvivorHostage = 5,
	ELamentConfigurationState__ELamentConfigurationState_MAX = 6,

};

// Enum TheK25.EChainHuntState
enum class TheK25_EChainHuntState : uint8_t
{
	EChainHuntState__Inactive      = 0,
	EChainHuntState__Charging      = 1,
	EChainHuntState__Active        = 2,
	EChainHuntState__EChainHuntState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TheK25.K25ChainAnchorAnimationData
// 0x0018
struct FK25ChainAnchorAnimationData
{
	float                                              ChainPullAngle;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChainWeight;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChainHeight;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasChainAttached;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsChainBeingRemoved;                                       // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3E5X[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AK25Chain>                    AttachedChain;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK25.K25ProjectileDeactivationData
// 0x0020
struct FK25ProjectileDeactivationData
{
	TheK25_EK25ProjectileDeactivateReason              DeactivationReason;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJVV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PhysicalSurfaceName;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldReelBackProjectile;                                  // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasAppliedDamage;                                          // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7F4X[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _survivorHit;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK25.DBDPlayerTotemPair
// 0x0010
struct FDBDPlayerTotemPair
{
	class ADBDPlayer*                                  Player;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATotem*                                      Totem;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK25.K25SurvivorChainAttachmentData
// 0x0028
struct FK25SurvivorChainAttachmentData
{
	struct FName                                       AnchorName;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EK25ChainAnchorPointDirection               Direction;                                                 // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMO6[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RelativeLocation;                                          // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFlexibleLimb;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EK25ChainAttachmentLimbType                 LimbType;                                                  // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YSQD[0x2];                                     // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACamperPlayer*                               _attachedSurvivor;                                         // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct TheK25.ChainHuntStateData
// 0x0010
struct FChainHuntStateData
{
	struct FDateTime                                   StartTime;                                                 // 0x0000(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheK25_EChainHuntState                             ChainHuntState;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAM1[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionData
// 0x0018
struct FLamentConfigurationPlayerPossessionData
{
	float                                              PickUpElapsedMatchTime;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropElapsedMatchTime;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Outcome;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheK25.LamentConfigurationSpawnInfo
// 0x0010
struct FLamentConfigurationSpawnInfo
{
	unsigned char                                      UnknownData_1JJX[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct TheK25.K25SurvivorTeleportationData
// 0x0018
struct FK25SurvivorTeleportationData
{
	unsigned char                                      UnknownData_CC9Q[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct TheK25.K25ChainTraceData
// 0x0018
struct FK25ChainTraceData
{
	unsigned char                                      UnknownData_9CIW[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionAnalytics
// 0x0028 (0x00C0 - 0x0098)
struct FLamentConfigurationPlayerPossessionAnalytics : public FUniquelyIdentifiedAnalytic
{
	struct FString                                     MatchID;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PickUpElapsedMatchTime;                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropElapsedMatchTime;                                      // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Outcome;                                                   // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

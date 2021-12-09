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

// Enum TheGunslinger.EFireHarpoonRifleAimingInteractionSubState
enum class TheGunslinger_EFireHarpoonRifleAimingInteractionSubState : uint8_t
{
	EFireHarpoonRifleAimingInteractionSubState__None = 0,
	EFireHarpoonRifleAimingInteractionSubState__Warmup = 1,
	EFireHarpoonRifleAimingInteractionSubState__ReadyToShoot = 2,
	EFireHarpoonRifleAimingInteractionSubState__Cooldown = 3,
	EFireHarpoonRifleAimingInteractionSubState__EFireHarpoonRifleAimingInteractionSubState_MAX = 4,

};

// Enum TheGunslinger.EFireHarpoonRifleInteractionState
enum class TheGunslinger_EFireHarpoonRifleInteractionState : uint8_t
{
	EFireHarpoonRifleInteractionState__None = 0,
	EFireHarpoonRifleInteractionState__Aiming = 1,
	EFireHarpoonRifleInteractionState__FirePhase = 2,
	EFireHarpoonRifleInteractionState__MissPhase = 3,
	EFireHarpoonRifleInteractionState__SuccessPhase = 4,
	EFireHarpoonRifleInteractionState__EndResult = 5,
	EFireHarpoonRifleInteractionState__CanceledAiming = 6,
	EFireHarpoonRifleInteractionState__EFireHarpoonRifleInteractionState_MAX = 7,

};

// Enum TheGunslinger.EHarpoonPositionState
enum class TheGunslinger_EHarpoonPositionState : uint8_t
{
	EHarpoonPositionState__None    = 0,
	EHarpoonPositionState__LoadedInRifle = 1,
	EHarpoonPositionState__FollowingProjectile = 2,
	EHarpoonPositionState__ReelBackToRifle = 3,
	EHarpoonPositionState__AttachedToPlayer = 4,
	EHarpoonPositionState__Animated = 5,
	EHarpoonPositionState__EHarpoonPositionState_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

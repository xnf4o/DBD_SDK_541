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

// Class TheGhostface.GhostfaceCrouchAttack
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UGhostfaceCrouchAttack : public UPounceAttack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheGhostface.GhostfaceCrouchAttack");
		return ptr;
	}



};

// Class TheGhostface.GhostKillerAnalyticsComponent
// 0x0140 (FullSize[0x01F8] - InheritedSize[0x00B8])
class UGhostKillerAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MKAY[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGhostKillerAnalytics                       _ghostKillerAnalytics;                                     // 0x00F0(0x00E0) (Net, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I188[0x28];                                    // 0x01D0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheGhostface.GhostKillerAnalyticsComponent");
		return ptr;
	}



	void Local_OnStalkModeChanged(bool IsInStalkMode);
	void Local_OnLeanStateChanged(DBDSharedTypes_ELeanState leanState);
	void Local_OnIsStealthChanged(bool IsStealth);
	void Authority_OnStalkChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
	void Authority_OnPreAttackSuccess(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

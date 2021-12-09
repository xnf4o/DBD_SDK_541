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

// Class TheLegion.FrenzyAttack
// 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
class UFrenzyAttack : public UPounceAttack
{
public:
	unsigned char                                      UnknownData_W5SR[0x10];                                    // 0x0360(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.FrenzyAttack");
		return ptr;
	}



};

// Class TheLegion.FrenzyAttackHittingSubstate
// 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
class UFrenzyAttackHittingSubstate : public UPounceAttackHittingSubstate
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.FrenzyAttackHittingSubstate");
		return ptr;
	}



};

// Class TheLegion.FrenzyAttackSuccessSubstate
// 0x0090 (FullSize[0x01A8] - InheritedSize[0x0118])
class UFrenzyAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
public:
	struct FDBDTunableRowHandle                        _healthyTime;                                              // 0x0118(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _injuredTime;                                              // 0x0140(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                        _bleedoutTime;                                             // 0x0168(0x0028) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _healthyCurve;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _injuredCurve;                                             // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _bleedoutCurve;                                            // 0x01A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.FrenzyAttackSuccessSubstate");
		return ptr;
	}



};

// Class TheLegion.LegionKillerAnalyticsComponent
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class ULegionKillerAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_NCCE[0x38];                                    // 0x00B8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.LegionKillerAnalyticsComponent");
		return ptr;
	}



	void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);
};

// Class TheLegion.LegionSurvivorAnalyticsComponent
// 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
class ULegionSurvivorAnalyticsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_108A[0x58];                                    // 0x00B8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.LegionSurvivorAnalyticsComponent");
		return ptr;
	}



	void SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher);
	void OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData);
};

// Class TheLegion.Madgrit
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class UMadgrit : public UPerk
{
public:
	class UCurveFloat*                                 _slashHittingSpeedCurve;                                   // 0x03D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TheLegion.Madgrit");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

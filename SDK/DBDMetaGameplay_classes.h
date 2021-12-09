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

// Class DBDMetaGameplay.DBDEmblem_KillerChaser
// 0x00B8 (FullSize[0x01C0] - InheritedSize[0x0108])
class UDBDEmblem_KillerChaser : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_0V61[0x40];                                    // 0x0108(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _chasePointsByDurationCurve;                               // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M48G[0x18];                                    // 0x0150(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class ACamperPlayer*, float>                  _hookedPlayersPenaltyDelay;                                // 0x0168(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UClass*                                      _rankTunablesClass;                                        // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_KillerChaser");
		return ptr;
	}



	void OnChaseStart(class ADBDPlayer* chasedPlayer);
};

// Class DBDMetaGameplay.DBDEmblem_KillerDevout
// 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
class UDBDEmblem_KillerDevout : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_4R2I[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACamperPlayer*>                       _playersToHook;                                            // 0x0128(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DCDU[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_KillerDevout");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDMetaGameplay.DBDEmblem_KillerGatekeeper
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UDBDEmblem_KillerGatekeeper : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_HN4G[0x30];                                    // 0x0108(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_KillerGatekeeper");
		return ptr;
	}



};

// Class DBDMetaGameplay.DBDEmblem_KillerMalicious
// 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
class UDBDEmblem_KillerMalicious : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_46NQ[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class ACamperPlayer*, int>                    _remainingSurvivorHookStates;                              // 0x0118(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UMWY[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_KillerMalicious");
		return ptr;
	}



	void OnLevelReadyToPlay();
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorBenevolent
// 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
class UDBDEmblem_SurvivorBenevolent : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_NNQK[0x60];                                    // 0x0108(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_SurvivorBenevolent");
		return ptr;
	}



};

// Class DBDMetaGameplay.DBDEmblem_SurvivorEvader
// 0x0078 (FullSize[0x0180] - InheritedSize[0x0108])
class UDBDEmblem_SurvivorEvader : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_L3X1[0x50];                                    // 0x0108(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _killerDistanceStealthPointCurve;                          // 0x0158(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _killerDistanceStealthPointCurveChasing;                   // 0x0160(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _chaseDurationPointCurve;                                  // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 _ZAxisDistanceScalingCurve;                                // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _rankTunablesClass;                                        // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_SurvivorEvader");
		return ptr;
	}



	void OnChaseStartEvent(class ADBDPlayer* chasedPlayer);
};

// Class DBDMetaGameplay.DBDEmblem_SurvivorLightbringer
// 0x0088 (FullSize[0x0190] - InheritedSize[0x0108])
class UDBDEmblem_SurvivorLightbringer : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_SLT9[0x88];                                    // 0x0108(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_SurvivorLightbringer");
		return ptr;
	}



};

// Class DBDMetaGameplay.DBDEmblem_SurvivorUnbroken
// 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
{
public:
	unsigned char                                      UnknownData_A2ME[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 _pointsForTimeAlive;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XV9P[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      _rankTunablesClass;                                        // 0x0130(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_SurvivorUnbroken");
		return ptr;
	}



	void OnIntroCompleted();
};

// Class DBDMetaGameplay.DBDEmblem_KillerGatekeeperTest
// 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
class UDBDEmblem_KillerGatekeeperTest : public UDBDEmblem_KillerGatekeeper
{
public:
	class ADBDGameState*                               _gameState;                                                // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDMetaGameplay.DBDEmblem_KillerGatekeeperTest");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

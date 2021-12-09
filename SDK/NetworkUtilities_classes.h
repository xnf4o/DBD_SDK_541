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

// Class NetworkUtilities.NetSynchedClock
// 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
class UNetSynchedClock : public UActorComponent
{
public:
	unsigned char                                      UnknownData_2TR7[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _serverTimeUpdateDelay;                                    // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OZ3P[0x14];                                    // 0x00C4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.NetSynchedClock");
		return ptr;
	}



	void Server_RequestServerTime();
	void Client_ReportServerTime(float serverTime);
};

// Class NetworkUtilities.NetUtils
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNetUtils : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.NetUtils");
		return ptr;
	}



	bool STATIC_IsDedicatedServerInstance(class UObject* WorldContextObject);
};

// Class NetworkUtilities.NetworkFenceActor
// 0x0078 (FullSize[0x02A8] - InheritedSize[0x0230])
class ANetworkFenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_G9TR[0x78];                                    // 0x0230(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.NetworkFenceActor");
		return ptr;
	}



	void Server_ClientPassedFence(TArray<struct FGuid> Fences);
	void Client_AllPassedFence(TArray<struct FGuid> Fences);
};

// Class NetworkUtilities.ServerCorrectionDisablerComponent
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UServerCorrectionDisablerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_V7TP[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.ServerCorrectionDisablerComponent");
		return ptr;
	}



	void SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel);
	void Multicast_SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel);
	bool GetServerCorrectionEnabled();
};

// Class NetworkUtilities.ServerTimeProviderComponent
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UServerTimeProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ZYRF[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.ServerTimeProviderComponent");
		return ptr;
	}



};

// Class NetworkUtilities.TimerObject
// 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
class UTimerObject : public UActorComponent
{
public:
	unsigned char                                      UnknownData_71G1[0x60];                                    // 0x00B8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FReplicationTimerData                       _replicationData;                                          // 0x0118(0x0014) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XECB[0xC];                                     // 0x012C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class NetworkUtilities.TimerObject");
		return ptr;
	}



	void OnRep_TimerDataUpdated(const struct FReplicationTimerData& oldData);
	bool IsTimerActive();
	bool IsPaused();
	bool IsDone();
	float GetRemainingTimePercent();
	float GetRemainingTime();
	float GetElapsedTimePercent();
	float GetElapsedTime();
	float GetDuration();
	class UTimerObject* STATIC_CreateTimer(class AActor* Owner);
	void Authority_Unpause();
	void Authority_Start(float Duration);
	void Authority_SetPaused(bool paused);
	void Authority_Pause();
	void Authority_Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

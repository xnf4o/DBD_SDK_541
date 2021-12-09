// Name: DeadB, Version: 5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x062BADA0
//		Name   -> Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UNetSynchedClock::Server_RequestServerTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime");

	UNetSynchedClock_Server_RequestServerTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06298E50
//		Name   -> Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
//		float                                              serverTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNetSynchedClock::Client_ReportServerTime(float serverTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime");

	UNetSynchedClock_Client_ReportServerTime_Params params {};
	params.serverTime = serverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BAF50
//		Name   -> Function NetworkUtilities.NetUtils.IsDedicatedServerInstance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNetUtils::STATIC_IsDedicatedServerInstance(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetUtils.IsDedicatedServerInstance");

	UNetUtils_IsDedicatedServerInstance_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BB3C0
//		Name   -> Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		TArray<struct FGuid>                               Fences                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANetworkFenceActor::Server_ClientPassedFence(TArray<struct FGuid> Fences)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence");

	ANetworkFenceActor_Server_ClientPassedFence_Params params {};
	params.Fences = Fences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BB300
//		Name   -> Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
// Parameters:
//		TArray<struct FGuid>                               Fences                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANetworkFenceActor::Client_AllPassedFence(TArray<struct FGuid> Fences)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence");

	ANetworkFenceActor_Client_AllPassedFence_Params params {};
	params.Fences = Fences;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BB7A0
//		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                Channel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerCorrectionDisablerComponent::SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Params params {};
	params.Enabled = Enabled;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BB6B0
//		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                Channel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Params params {};
	params.Enabled = Enabled;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BB680
//		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServerCorrectionDisablerComponent::GetServerCorrectionEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled");

	UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC6E0
//		Name   -> Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FReplicationTimerData                       oldData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UTimerObject::OnRep_TimerDataUpdated(const struct FReplicationTimerData& oldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated");

	UTimerObject_OnRep_TimerDataUpdated_Params params {};
	params.oldData = oldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BC6B0
//		Name   -> Function NetworkUtilities.TimerObject.IsTimerActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsTimerActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsTimerActive");

	UTimerObject_IsTimerActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC680
//		Name   -> Function NetworkUtilities.TimerObject.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsPaused");

	UTimerObject_IsPaused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC650
//		Name   -> Function NetworkUtilities.TimerObject.IsDone
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTimerObject::IsDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsDone");

	UTimerObject_IsDone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC620
//		Name   -> Function NetworkUtilities.TimerObject.GetRemainingTimePercent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetRemainingTimePercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTimePercent");

	UTimerObject_GetRemainingTimePercent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC5F0
//		Name   -> Function NetworkUtilities.TimerObject.GetRemainingTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetRemainingTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTime");

	UTimerObject_GetRemainingTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC5C0
//		Name   -> Function NetworkUtilities.TimerObject.GetElapsedTimePercent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetElapsedTimePercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTimePercent");

	UTimerObject_GetElapsedTimePercent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC590
//		Name   -> Function NetworkUtilities.TimerObject.GetElapsedTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetElapsedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTime");

	UTimerObject_GetElapsedTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC560
//		Name   -> Function NetworkUtilities.TimerObject.GetDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTimerObject::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetDuration");

	UTimerObject_GetDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC4E0
//		Name   -> Function NetworkUtilities.TimerObject.CreateTimer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTimerObject*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTimerObject* UTimerObject::STATIC_CreateTimer(class AActor* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.CreateTimer");

	UTimerObject_CreateTimer_Params params {};
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062BC4C0
//		Name   -> Function NetworkUtilities.TimerObject.Authority_Unpause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Unpause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Unpause");

	UTimerObject_Authority_Unpause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BC440
//		Name   -> Function NetworkUtilities.TimerObject.Authority_Start
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTimerObject::Authority_Start(float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Start");

	UTimerObject_Authority_Start_Params params {};
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BC3B0
//		Name   -> Function NetworkUtilities.TimerObject.Authority_SetPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTimerObject::Authority_SetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_SetPaused");

	UTimerObject_Authority_SetPaused_Params params {};
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BC390
//		Name   -> Function NetworkUtilities.TimerObject.Authority_Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Pause");

	UTimerObject_Authority_Pause_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062BC370
//		Name   -> Function NetworkUtilities.TimerObject.Authority_Clear
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UTimerObject::Authority_Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Clear");

	UTimerObject_Authority_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

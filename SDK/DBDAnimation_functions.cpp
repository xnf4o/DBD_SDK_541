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
//		Offset -> 0x03495F40
//		Name   -> Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Protected)
void UPlayerAnimInstance::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay");

	UPlayerAnimInstance_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495EA0
//		Name   -> Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
//		Flags  -> (Native, Protected)
void UPlayerAnimInstance::OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted");

	UPlayerAnimInstance_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495BF0
//		Name   -> Function DBDAnimation.PlayerAnimInstance.HasBeenNotified
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       AnimNotify                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerAnimInstance::HasBeenNotified(const struct FName& AnimNotify)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.HasBeenNotified");

	UPlayerAnimInstance_HasBeenNotified_Params params {};
	params.AnimNotify = AnimNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03495BC0
//		Name   -> Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDPlayer*                                  ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDPlayer* UPlayerAnimInstance::GetOwningPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer");

	UPlayerAnimInstance_GetOwningPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03493460
//		Name   -> Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ACamperPlayer*                               ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor");

	UBaseSurvivorAnimInstance_GetOwningSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03493380
//		Name   -> Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDAnimation_EArmIkMode                            NewMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UArmIKSurvivorSubAnimInstance::ChangeMode(DBDAnimation_EArmIkMode NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode");

	UArmIKSurvivorSubAnimInstance_ChangeMode_Params params {};
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03493400
//		Name   -> Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ASlasherPlayer*                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASlasherPlayer* UBaseKillerAnimInstance::GetOwningKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller");

	UBaseKillerAnimInstance_GetOwningKiller_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0340D850
//		Name   -> Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
//		Flags  -> (Final, Exec, Native, Private)
// Parameters:
//		int                                                animPOV                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseKillerAnimInstance::DBD_ForceAnimPOV(int animPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV");

	UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params params {};
	params.animPOV = animPOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03493400
//		Name   -> Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ASlasherPlayer*                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASlasherPlayer* UBaseKillerAttackSubAnimInstance::GetOwningKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller");

	UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03493430
//		Name   -> Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class ADBDMenuPlayer*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ADBDMenuPlayer* UBaseMenuAnimInstance::GetOwningMenuPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer");

	UBaseMenuAnimInstance_GetOwningMenuPlayer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03493550
//		Name   -> Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               searched                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChestAnimInstance::OnSearchedChanged(bool searched)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.ChestAnimInstance.OnSearchedChanged");

	UChestAnimInstance_OnSearchedChanged_Params params {};
	params.searched = searched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03493600
//		Name   -> Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeneratorAnimInstance::SetSkillCheckSuccess(bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess");

	UGeneratorAnimInstance_SetSkillCheckSuccess_Params params {};
	params.success = success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x034935E0
//		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UHealSurvivorSubAnimInstance::ResetHealerSkillCheckFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed");

	UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03493490
//		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ADBDPlayer*                                  healer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHealSurvivorSubAnimInstance::OnHealerSkillCheckResponseAesthetic(bool success, class ADBDPlayer* healer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic");

	UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params params {};
	params.success = success;
	params.healer = healer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495E20
//		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(class ADBDPlayer* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted");

	ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495D50
//		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(class ADBDPlayer* Target, float chaseTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded");

	ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params params {};
	params.Target = Target;
	params.chaseTime = chaseTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495EC0
//		Name   -> Function DBDAnimation.PalletAnimInstance.OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPalletAnimInstance::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.PalletAnimInstance.OnKillerSet");

	UPalletAnimInstance_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03496070
//		Name   -> Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UScreamSurvivorSubAnimInstance::ResetScreamTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger");

	UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F900B0
//		Name   -> Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
//		Flags  -> (Native, Public, BlueprintCallable)
void USkillCheckFailureTracker::ResetSkillCheckFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed");

	USkillCheckFailureTracker_ResetSkillCheckFailed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495F60
//		Name   -> Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
//		Flags  -> (Native, Protected, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USkillCheckFailureTracker::OnSkillCheckFailed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed");

	USkillCheckFailureTracker_OnSkillCheckFailed_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorAnimInstance::SetAudioRummageAkEvent(const struct FName& Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent");

	USurvivorAnimInstance_SetAudioRummageAkEvent_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void USurvivorAnimInstance::OnInfectiousFrightScream()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream");

	USurvivorAnimInstance_OnInfectiousFrightScream_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03495CA0
//		Name   -> Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       MontageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorAnimInstance::IsPlayingMontageByName(const struct FName& MontageID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName");

	USurvivorAnimInstance_IsPlayingMontageByName_Params params {};
	params.MontageID = MontageID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorAnimInstance::AddAudioRepairRateRadius(int Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius");

	USurvivorAnimInstance_AddAudioRepairRateRadius_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x034966B0
//		Name   -> Function DBDAnimation.Turn180Component.Server_SetSettings
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTurn180Settings                            Settings                                                   (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
void UTurn180Component::Server_SetSettings(float Timestamp, const struct FTurn180Settings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.Turn180Component.Server_SetSettings");

	UTurn180Component_Server_SetSettings_Params params {};
	params.Timestamp = Timestamp;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03496690
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
//		Flags  -> (Final, Native, Private, BlueprintCallable)
void UWakerObjectAnimInstance::ResetReappearTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer");

	UWakerObjectAnimInstance_ResetReappearTimer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.OnReappear
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWakerObjectAnimInstance::OnReappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.OnReappear");

	UWakerObjectAnimInstance_OnReappear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03496660
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWakerObjectAnimInstance::GetWakerObjectStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted");

	UWakerObjectAnimInstance_GetWakerObjectStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03496630
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWakerObjectAnimInstance::GetWakerObjectChargeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete");

	UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03496600
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWakerObjectAnimInstance::GetWakerObjectCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge");

	UWakerObjectAnimInstance_GetWakerObjectCharge_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x034965D0
//		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
//		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AWakerObject*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AWakerObject* UWakerObjectAnimInstance::GetWakerObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject");

	UWakerObjectAnimInstance_GetWakerObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

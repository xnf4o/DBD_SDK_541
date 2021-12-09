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
//		Offset -> 0x03F51BA0
//		Name   -> Function TheK26.HinderOnCrowAttachStatusEffect.OnKillerSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHinderOnCrowAttachStatusEffect::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.HinderOnCrowAttachStatusEffect.OnKillerSet");

	UHinderOnCrowAttachStatusEffect_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51A90
//		Name   -> Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileFired
//		Flags  -> (Final, Native, Public)
void UK26AbilitySubAnimInstance::OnHasProjectileFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileFired");

	UK26AbilitySubAnimInstance_OnHasProjectileFired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F519D0
//		Name   -> Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileBeenSummoned
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                remainingAmmo                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AbilitySubAnimInstance::OnHasProjectileBeenSummoned(int remainingAmmo, int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AbilitySubAnimInstance.OnHasProjectileBeenSummoned");

	UK26AbilitySubAnimInstance_OnHasProjectileBeenSummoned_Params params {};
	params.remainingAmmo = remainingAmmo;
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51350
//		Name   -> Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileFired
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UK26AbilitySubAnimInstance::ConsumeHasProjectileFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileFired");

	UK26AbilitySubAnimInstance_ConsumeHasProjectileFired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51330
//		Name   -> Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileBeenSummoned
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UK26AbilitySubAnimInstance::ConsumeHasProjectileBeenSummoned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AbilitySubAnimInstance.ConsumeHasProjectileBeenSummoned");

	UK26AbilitySubAnimInstance_ConsumeHasProjectileBeenSummoned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51F30
//		Name   -> Function TheK26.K26AmmoHandlerComponent.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26PathHandlerComponent*                    pathHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26PowerStatusHandlerComponent*             statusHandler                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAuthoritativeActorPoolComponent*            AuthoritativeActorPoolComponent                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::SetDependencies(class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.SetDependencies");

	UK26AmmoHandlerComponent_SetDependencies_Params params {};
	params.pathHandler = pathHandler;
	params.statusHandler = statusHandler;
	params.AuthoritativeActorPoolComponent = AuthoritativeActorPoolComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51E40
//		Name   -> Function TheK26.K26AmmoHandlerComponent.SendHasExpiredDelegate
//		Flags  -> (Final, Native, Private)
void UK26AmmoHandlerComponent::SendHasExpiredDelegate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.SendHasExpiredDelegate");

	UK26AmmoHandlerComponent_SendHasExpiredDelegate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction TheK26.K26AmmoHandlerComponent.OnMaxAmmoSetDelegate__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::OnMaxAmmoSetDelegate__DelegateSignature(int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction TheK26.K26AmmoHandlerComponent.OnMaxAmmoSetDelegate__DelegateSignature");

	UK26AmmoHandlerComponent_OnMaxAmmoSetDelegate__DelegateSignature_Params params {};
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51D40
//		Name   -> Function TheK26.K26AmmoHandlerComponent.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Private)
void UK26AmmoHandlerComponent::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.OnLevelReadyToPlay");

	UK26AmmoHandlerComponent_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51C20
//		Name   -> Function TheK26.K26AmmoHandlerComponent.OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.OnKillerSet");

	UK26AmmoHandlerComponent_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C85C10
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Multicast_StartRecharging
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TheK26_EK26AmmoCooldownReason                      lastCooldownReason                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::Multicast_StartRecharging(TheK26_EK26AmmoCooldownReason lastCooldownReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Multicast_StartRecharging");

	UK26AmmoHandlerComponent_Multicast_StartRecharging_Params params {};
	params.lastCooldownReason = lastCooldownReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03599080
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Multicast_StartExpiring
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UK26AmmoHandlerComponent::Multicast_StartExpiring()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Multicast_StartExpiring");

	UK26AmmoHandlerComponent_Multicast_StartExpiring_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51730
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Multicast_OnCurrentAmmoStateChanged
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TheK26_EK26AmmoState                               NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                currentAmmo                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::Multicast_OnCurrentAmmoStateChanged(TheK26_EK26AmmoState NewState, int currentAmmo, int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Multicast_OnCurrentAmmoStateChanged");

	UK26AmmoHandlerComponent_Multicast_OnCurrentAmmoStateChanged_Params params {};
	params.NewState = NewState;
	params.currentAmmo = currentAmmo;
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4F000
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoHasBeenFired
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UK26AmmoHandlerComponent::Multicast_OnAmmoHasBeenFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoHasBeenFired");

	UK26AmmoHandlerComponent_Multicast_OnAmmoHasBeenFired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0359EDE0
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoExpired
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void UK26AmmoHandlerComponent::Multicast_OnAmmoExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Multicast_OnAmmoExpired");

	UK26AmmoHandlerComponent_Multicast_OnAmmoExpired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51460
//		Name   -> Function TheK26.K26AmmoHandlerComponent.GetMaxAmmo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UK26AmmoHandlerComponent::GetMaxAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.GetMaxAmmo");

	UK26AmmoHandlerComponent_GetMaxAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F513D0
//		Name   -> Function TheK26.K26AmmoHandlerComponent.GetCurrentCooldownReason
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheK26_EK26AmmoCooldownReason                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheK26_EK26AmmoCooldownReason UK26AmmoHandlerComponent::GetCurrentCooldownReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.GetCurrentCooldownReason");

	UK26AmmoHandlerComponent_GetCurrentCooldownReason_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F513A0
//		Name   -> Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmoState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TheK26_EK26AmmoState                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TheK26_EK26AmmoState UK26AmmoHandlerComponent::GetCurrentAmmoState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmoState");

	UK26AmmoHandlerComponent_GetCurrentAmmoState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F51370
//		Name   -> Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UK26AmmoHandlerComponent::GetCurrentAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.GetCurrentAmmo");

	UK26AmmoHandlerComponent_GetCurrentAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnExpiringWarning
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UK26AmmoHandlerComponent::Cosmetic_OnExpiringWarning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnExpiringWarning");

	UK26AmmoHandlerComponent_Cosmetic_OnExpiringWarning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoHasBeenFired
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UK26AmmoHandlerComponent::Cosmetic_OnAmmoHasBeenFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoHasBeenFired");

	UK26AmmoHandlerComponent_Cosmetic_OnAmmoHasBeenFired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoExpired
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UK26AmmoHandlerComponent::Cosmetic_OnAmmoExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Cosmetic_OnAmmoExpired");

	UK26AmmoHandlerComponent_Cosmetic_OnAmmoExpired_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51200
//		Name   -> Function TheK26.K26AmmoHandlerComponent.CallOnMaxAmmoSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::CallOnMaxAmmoSet(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.CallOnMaxAmmoSet");

	UK26AmmoHandlerComponent_CallOnMaxAmmoSet_Params params {};
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50410
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Authority_OnAmmoInit
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      initAmmo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::Authority_OnAmmoInit(class AActor* initAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Authority_OnAmmoInit");

	UK26AmmoHandlerComponent_Authority_OnAmmoInit_Params params {};
	params.initAmmo = initAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50390
//		Name   -> Function TheK26.K26AmmoHandlerComponent.Authority_InitializePoolComponent
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26AmmoHandlerComponent::Authority_InitializePoolComponent(int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AmmoHandlerComponent.Authority_InitializePoolComponent");

	UK26AmmoHandlerComponent_Authority_InitializePoolComponent_Params params {};
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51D60
//		Name   -> Function TheK26.K26AttachedCrow.OnRep_AttachmentStatus
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::OnRep_AttachmentStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.OnRep_AttachmentStatus");

	AK26AttachedCrow_OnRep_AttachmentStatus_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C6BA00
//		Name   -> Function TheK26.K26AttachedCrow.Multicast_OnStopDetaching
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void AK26AttachedCrow::Multicast_OnStopDetaching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Multicast_OnStopDetaching");

	AK26AttachedCrow_Multicast_OnStopDetaching_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51830
//		Name   -> Function TheK26.K26AttachedCrow.Multicast_OnStartDetaching
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void AK26AttachedCrow::Multicast_OnStartDetaching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Multicast_OnStartDetaching");

	AK26AttachedCrow_Multicast_OnStartDetaching_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51490
//		Name   -> Function TheK26.K26AttachedCrow.HideOutline
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::HideOutline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.HideOutline");

	AK26AttachedCrow_HideOutline_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnStopDetaching
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26AttachedCrow::Cosmetic_OnStopDetaching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnStopDetaching");

	AK26AttachedCrow_Cosmetic_OnStopDetaching_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnStartDetaching
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26AttachedCrow::Cosmetic_OnStartDetaching()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnStartDetaching");

	AK26AttachedCrow_Cosmetic_OnStartDetaching_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnCrowAttached
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26AttachedCrow::Cosmetic_OnCrowAttached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnCrowAttached");

	AK26AttachedCrow_Cosmetic_OnCrowAttached_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnAuraShown
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26AttachedCrow::Cosmetic_OnAuraShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnAuraShown");

	AK26AttachedCrow_Cosmetic_OnAuraShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnAuraHidden
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26AttachedCrow::Cosmetic_OnAuraHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnAuraHidden");

	AK26AttachedCrow_Cosmetic_OnAuraHidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26AttachedCrow.Cosmetic_OnAttachedCrowRemoved
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		TheK26_EFK26AttachedCrowRemovalReason              removalReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Cosmetic_OnAttachedCrowRemoved(TheK26_EFK26AttachedCrowRemovalReason removalReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Cosmetic_OnAttachedCrowRemoved");

	AK26AttachedCrow_Cosmetic_OnAttachedCrowRemoved_Params params {};
	params.removalReason = removalReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51030
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnSurvivorWasUnhooked
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnSurvivorWasUnhooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnSurvivorWasUnhooked");

	AK26AttachedCrow_Authority_OnSurvivorWasUnhooked_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51140
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnSurvivorStatusIndicatorSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AK26AttachedCrow*                            attachedCrow                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* survivor, class AK26AttachedCrow* attachedCrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnSurvivorStatusIndicatorSet");

	AK26AttachedCrow_Authority_OnSurvivorStatusIndicatorSet_Params params {};
	params.survivor = survivor;
	params.attachedCrow = attachedCrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51030
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnSurvivorExitLocker
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnSurvivorExitLocker(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnSurvivorExitLocker");

	AK26AttachedCrow_Authority_OnSurvivorExitLocker_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50B70
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnSurvivorDroppedEnd
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::Authority_OnSurvivorDroppedEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnSurvivorDroppedEnd");

	AK26AttachedCrow_Authority_OnSurvivorDroppedEnd_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50FB0
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnSurvivorAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnSurvivorAdded");

	AK26AttachedCrow_Authority_OnSurvivorAdded_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50C70
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnPlayerLeftGame
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnPlayerLeftGame(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnPlayerLeftGame");

	AK26AttachedCrow_Authority_OnPlayerLeftGame_Params params {};
	params.gameEventType = gameEventType;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50B90
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorPerkFlagsChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isAdded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnOtherSurvivorPerkFlagsChanged(const struct FGameplayTag& GameplayTag, bool isAdded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorPerkFlagsChanged");

	AK26AttachedCrow_Authority_OnOtherSurvivorPerkFlagsChanged_Params params {};
	params.GameplayTag = GameplayTag;
	params.isAdded = isAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50B70
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorGuidedActionChanged
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::Authority_OnOtherSurvivorGuidedActionChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorGuidedActionChanged");

	AK26AttachedCrow_Authority_OnOtherSurvivorGuidedActionChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50AB0
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorDamageStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  before                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  after                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnOtherSurvivorDamageStateChanged(DeadByDaylight_ECamperDamageState before, DeadByDaylight_ECamperDamageState after)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnOtherSurvivorDamageStateChanged");

	AK26AttachedCrow_Authority_OnOtherSurvivorDamageStateChanged_Params params {};
	params.before = before;
	params.after = after;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50A30
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnKillerSet");

	AK26AttachedCrow_Authority_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50960
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnIsWithinOtherSurvivorRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      survivorActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsInRange                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnIsWithinOtherSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnIsWithinOtherSurvivorRangeChanged");

	AK26AttachedCrow_Authority_OnIsWithinOtherSurvivorRangeChanged_Params params {};
	params.survivorActor = survivorActor;
	params.IsInRange = IsInRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F507E0
//		Name   -> Function TheK26.K26AttachedCrow.Authority_OnDestroyAttempt
//		Flags  -> (Final, Native, Protected, HasOutParms)
// Parameters:
//		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26AttachedCrow::Authority_OnDestroyAttempt(TArray<class AActor*> instigatorsForCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_OnDestroyAttempt");

	AK26AttachedCrow_Authority_OnDestroyAttempt_Params params {};
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50370
//		Name   -> Function TheK26.K26AttachedCrow.Authority_DeactivateInfection
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::Authority_DeactivateInfection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_DeactivateInfection");

	AK26AttachedCrow_Authority_DeactivateInfection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50350
//		Name   -> Function TheK26.K26AttachedCrow.Authority_ActivateInfection
//		Flags  -> (Final, Native, Private)
void AK26AttachedCrow::Authority_ActivateInfection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26AttachedCrow.Authority_ActivateInfection");

	AK26AttachedCrow_Authority_ActivateInfection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51CA0
//		Name   -> Function TheK26.K26CooldownInteractionDefinition.OnKillerSet
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26CooldownInteractionDefinition::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CooldownInteractionDefinition.OnKillerSet");

	UK26CooldownInteractionDefinition_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51E60
//		Name   -> Function TheK26.K26CrowProjectile.Server_OnSurvivorHit
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		TheK26_EK26ProjectileState                         stateOnHit                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               hitSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Server_OnSurvivorHit(TheK26_EK26ProjectileState stateOnHit, class ACamperPlayer* hitSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Server_OnSurvivorHit");

	AK26CrowProjectile_Server_OnSurvivorHit_Params params {};
	params.stateOnHit = stateOnHit;
	params.hitSurvivor = hitSurvivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51E20
//		Name   -> Function TheK26.K26CrowProjectile.ProjectileWentOutOfBoundsEvent
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void AK26CrowProjectile::ProjectileWentOutOfBoundsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.ProjectileWentOutOfBoundsEvent");

	AK26CrowProjectile_ProjectileWentOutOfBoundsEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51DA0
//		Name   -> Function TheK26.K26CrowProjectile.OnSurvivorAdded
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class ACamperPlayer*                               survivorAdded                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::OnSurvivorAdded(class ACamperPlayer* survivorAdded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.OnSurvivorAdded");

	AK26CrowProjectile_OnSurvivorAdded_Params params {};
	params.survivorAdded = survivorAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51D80
//		Name   -> Function TheK26.K26CrowProjectile.OnRep_Path
//		Flags  -> (Final, Native, Private)
void AK26CrowProjectile::OnRep_Path()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.OnRep_Path");

	AK26CrowProjectile_OnRep_Path_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51D20
//		Name   -> Function TheK26.K26CrowProjectile.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Protected)
void AK26CrowProjectile::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.OnLevelReadyToPlay");

	AK26CrowProjectile_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51AD0
//		Name   -> Function TheK26.K26CrowProjectile.OnIsWithinSurvivorRangeChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class AActor*                                      survivorActor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsInRange                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::OnIsWithinSurvivorRangeChanged(class AActor* survivorActor, bool IsInRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.OnIsWithinSurvivorRangeChanged");

	AK26CrowProjectile_OnIsWithinSurvivorRangeChanged_Params params {};
	params.survivorActor = survivorActor;
	params.IsInRange = IsInRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51AB0
//		Name   -> Function TheK26.K26CrowProjectile.OnIntroCompleted
//		Flags  -> (Final, Native, Protected)
void AK26CrowProjectile::OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.OnIntroCompleted");

	AK26CrowProjectile_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51900
//		Name   -> Function TheK26.K26CrowProjectile.Multicast_SetState
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		TheK26_EK26ProjectileState                         NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                pooledPathIndex                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Multicast_SetState(TheK26_EK26ProjectileState NewState, int pooledPathIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Multicast_SetState");

	AK26CrowProjectile_Multicast_SetState_Params params {};
	params.NewState = NewState;
	params.pooledPathIndex = pooledPathIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51850
//		Name   -> Function TheK26.K26CrowProjectile.Multicast_SetStartingPosition
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
//		struct FVector                                     Position                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Angle                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Multicast_SetStartingPosition(const struct FVector& Position, const struct FRotator& Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Multicast_SetStartingPosition");

	AK26CrowProjectile_Multicast_SetStartingPosition_Params params {};
	params.Position = Position;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D79F30
//		Name   -> Function TheK26.K26CrowProjectile.Multicast_OnExpiration
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void AK26CrowProjectile::Multicast_OnExpiration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Multicast_OnExpiration");

	AK26CrowProjectile_Multicast_OnExpiration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51710
//		Name   -> Function TheK26.K26CrowProjectile.Local_OnSummonComplete
//		Flags  -> (Final, Native, Private)
void AK26CrowProjectile::Local_OnSummonComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Local_OnSummonComplete");

	AK26CrowProjectile_Local_OnSummonComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51500
//		Name   -> Function TheK26.K26CrowProjectile.Local_OnCollisionOverlapBegin
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               fromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Local_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Local_OnCollisionOverlapBegin");

	AK26CrowProjectile_Local_OnCollisionOverlapBegin_Params params {};
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.fromSweep = fromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02C80BA0
//		Name   -> Function TheK26.K26CrowProjectile.IsHitboxBeingShown
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AK26CrowProjectile::IsHitboxBeingShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.IsHitboxBeingShown");

	AK26CrowProjectile_IsHitboxBeingShown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F514D0
//		Name   -> Function TheK26.K26CrowProjectile.IsBeingFlashlighted
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AK26CrowProjectile::IsBeingFlashlighted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.IsBeingFlashlighted");

	AK26CrowProjectile_IsBeingFlashlighted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F514B0
//		Name   -> Function TheK26.K26CrowProjectile.HideOutlineFromSurvivor
//		Flags  -> (Final, Native, Private)
void AK26CrowProjectile::HideOutlineFromSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.HideOutlineFromSurvivor");

	AK26CrowProjectile_HideOutlineFromSurvivor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F51430
//		Name   -> Function TheK26.K26CrowProjectile.GetFlashlightProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AK26CrowProjectile::GetFlashlightProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.GetFlashlightProgress");

	AK26CrowProjectile_GetFlashlightProgress_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F51400
//		Name   -> Function TheK26.K26CrowProjectile.GetDistanceFromFirePosition
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AK26CrowProjectile::GetDistanceFromFirePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.GetDistanceFromFirePosition");

	AK26CrowProjectile_GetDistanceFromFirePosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26CrowProjectile.Cosmetic_OnExpiration
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AK26CrowProjectile::Cosmetic_OnExpiration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Cosmetic_OnExpiration");

	AK26CrowProjectile_Cosmetic_OnExpiration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26CrowProjectile.Cosmetic_OnEnteredNearAudioRangeOfSurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Cosmetic_OnEnteredNearAudioRangeOfSurvivor(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Cosmetic_OnEnteredNearAudioRangeOfSurvivor");

	AK26CrowProjectile_Cosmetic_OnEnteredNearAudioRangeOfSurvivor_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F512B0
//		Name   -> Function TheK26.K26CrowProjectile.Client_LocalKillerStartSummonTimer
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
//		float                                              killerLocalSummonTime                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Client_LocalKillerStartSummonTimer(float killerLocalSummonTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Client_LocalKillerStartSummonTimer");

	AK26CrowProjectile_Client_LocalKillerStartSummonTimer_Params params {};
	params.killerLocalSummonTime = killerLocalSummonTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50F90
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnSummonComplete
//		Flags  -> (Final, Native, Private)
void AK26CrowProjectile::Authority_OnSummonComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnSummonComplete");

	AK26CrowProjectile_Authority_OnSummonComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50D80
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnScoutingOverlapBegin
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               fromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Authority_OnScoutingOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnScoutingOverlapBegin");

	AK26CrowProjectile_Authority_OnScoutingOverlapBegin_Params params {};
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.fromSweep = fromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50940
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnDestroyTimerExpired
//		Flags  -> (Final, Native, Private)
void AK26CrowProjectile::Authority_OnDestroyTimerExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnDestroyTimerExpired");

	AK26CrowProjectile_Authority_OnDestroyTimerExpired_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50890
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnDestroyAttempt
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Authority_OnDestroyAttempt(TArray<class AActor*> instigatorsForCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnDestroyAttempt");

	AK26CrowProjectile_Authority_OnDestroyAttempt_Params params {};
	params.instigatorsForCompletion = instigatorsForCompletion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F506A0
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Authority_OnCollisionOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapEnd");

	AK26CrowProjectile_Authority_OnCollisionOverlapEnd_Params params {};
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F50490
//		Name   -> Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapBegin
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               fromSweep                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AK26CrowProjectile::Authority_OnCollisionOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool fromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26CrowProjectile.Authority_OnCollisionOverlapBegin");

	AK26CrowProjectile_Authority_OnCollisionOverlapBegin_Params params {};
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.fromSweep = fromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55D10
//		Name   -> Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnLevelReadyToPlay
//		Flags  -> (Final, Native, Protected)
void UK26DismissCrowChargeableInteractionDefinition::OnLevelReadyToPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnLevelReadyToPlay");

	UK26DismissCrowChargeableInteractionDefinition_OnLevelReadyToPlay_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55BD0
//		Name   -> Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26DismissCrowChargeableInteractionDefinition::OnKillerSet(class ASlasherPlayer* killer, class UChargeableComponent* ChargeableComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnKillerSet");

	UK26DismissCrowChargeableInteractionDefinition_OnKillerSet_Params params {};
	params.killer = killer;
	params.ChargeableComponent = ChargeableComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55AF0
//		Name   -> Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnDamageStateChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26DismissCrowChargeableInteractionDefinition::OnDamageStateChanged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState CurrentDamageState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26DismissCrowChargeableInteractionDefinition.OnDamageStateChanged");

	UK26DismissCrowChargeableInteractionDefinition_OnDamageStateChanged_Params params {};
	params.oldDamageState = oldDamageState;
	params.CurrentDamageState = CurrentDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55EA0
//		Name   -> Function TheK26.K26FireCrowProjectileInteractionDefinition.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26AmmoHandlerComponent*                    ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26PathHandlerComponent*                    pathHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26CooldownInteractionDefinition*           cooldownInteraction                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26FireCrowProjectileInteractionDefinition::SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26CooldownInteractionDefinition* cooldownInteraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26FireCrowProjectileInteractionDefinition.SetDependencies");

	UK26FireCrowProjectileInteractionDefinition_SetDependencies_Params params {};
	params.ammoHandler = ammoHandler;
	params.pathHandler = pathHandler;
	params.cooldownInteraction = cooldownInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55E10
//		Name   -> Function TheK26.K26FireCrowProjectileInteractionDefinition.Server_RequestFireOnAmmo
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26FireCrowProjectileInteractionDefinition::Server_RequestFireOnAmmo(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26FireCrowProjectileInteractionDefinition.Server_RequestFireOnAmmo");

	UK26FireCrowProjectileInteractionDefinition_Server_RequestFireOnAmmo_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55940
//		Name   -> Function TheK26.K26FireCrowProjectileInteractionDefinition.Multicast_OnProjectileFired
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26FireCrowProjectileInteractionDefinition::Multicast_OnProjectileFired(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26FireCrowProjectileInteractionDefinition.Multicast_OnProjectileFired");

	UK26FireCrowProjectileInteractionDefinition_Multicast_OnProjectileFired_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55D90
//		Name   -> Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnSurvivorStatusIndicatorSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AK26AttachedCrow*                            attachedCrow                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsLastCrowRemovalReasonDueToInteraction::OnSurvivorStatusIndicatorSet(class AK26AttachedCrow* attachedCrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnSurvivorStatusIndicatorSet");

	UK26IsLastCrowRemovalReasonDueToInteraction_OnSurvivorStatusIndicatorSet_Params params {};
	params.attachedCrow = attachedCrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55D70
//		Name   -> Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnRep_OwningAttachedCrow
//		Flags  -> (Final, Native, Private)
void UK26IsLastCrowRemovalReasonDueToInteraction::OnRep_OwningAttachedCrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnRep_OwningAttachedCrow");

	UK26IsLastCrowRemovalReasonDueToInteraction_OnRep_OwningAttachedCrow_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55C90
//		Name   -> Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnLastRemovalReasonSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		TheK26_EFK26AttachedCrowRemovalReason              lastCrowRemovalReason                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsLastCrowRemovalReasonDueToInteraction::OnLastRemovalReasonSet(TheK26_EFK26AttachedCrowRemovalReason lastCrowRemovalReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.OnLastRemovalReasonSet");

	UK26IsLastCrowRemovalReasonDueToInteraction_OnLastRemovalReasonSet_Params params {};
	params.lastCrowRemovalReason = lastCrowRemovalReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F555B0
//		Name   -> Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnSurvivorStatusIndicatorSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AK26AttachedCrow*                            attachedCrow                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsLastCrowRemovalReasonDueToInteraction::Authority_OnSurvivorStatusIndicatorSet(class ACamperPlayer* survivor, class AK26AttachedCrow* attachedCrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnSurvivorStatusIndicatorSet");

	UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnSurvivorStatusIndicatorSet_Params params {};
	params.survivor = survivor;
	params.attachedCrow = attachedCrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55380
//		Name   -> Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsLastCrowRemovalReasonDueToInteraction::Authority_OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsLastCrowRemovalReasonDueToInteraction.Authority_OnKillerSet");

	UK26IsLastCrowRemovalReasonDueToInteraction_Authority_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55A60
//		Name   -> Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Multicast_SetIsTrue
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		bool                                               isTrue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsSurvivorInRangeOfAnyIdleCrow::Multicast_SetIsTrue(bool isTrue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Multicast_SetIsTrue");

	UK26IsSurvivorInRangeOfAnyIdleCrow_Multicast_SetIsTrue_Params params {};
	params.isTrue = isTrue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55670
//		Name   -> Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_SetVariables
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ACamperPlayer*                               trackedSurvivor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAuthoritativeActorPoolComponent*            AuthoritativeActorPoolComponent                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Range                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_SetVariables(class ACamperPlayer* trackedSurvivor, class UAuthoritativeActorPoolComponent* AuthoritativeActorPoolComponent, float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_SetVariables");

	UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_SetVariables_Params params {};
	params.trackedSurvivor = trackedSurvivor;
	params.AuthoritativeActorPoolComponent = AuthoritativeActorPoolComponent;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55250
//		Name   -> Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnInRangeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnInRangeChanged(bool InRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnInRangeChanged");

	UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnInRangeChanged_Params params {};
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F551D0
//		Name   -> Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowProjectileStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AK26CrowProjectile*                          crowProjectile                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnCrowProjectileStateChanged(class AK26CrowProjectile* crowProjectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowProjectileStateChanged");

	UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowProjectileStateChanged_Params params {};
	params.crowProjectile = crowProjectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55150
//		Name   -> Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowAddedToPool
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      crowProjectileActor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26IsSurvivorInRangeOfAnyIdleCrow::Authority_OnCrowAddedToPool(class AActor* crowProjectileActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26IsSurvivorInRangeOfAnyIdleCrow.Authority_OnCrowAddedToPool");

	UK26IsSurvivorInRangeOfAnyIdleCrow_Authority_OnCrowAddedToPool_Params params {};
	params.crowProjectileActor = crowProjectileActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55780
//		Name   -> Function TheK26.K26OnCrowAttachLingeringStatusEffectBase.GetLingerTime
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UK26OnCrowAttachLingeringStatusEffectBase::GetLingerTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26OnCrowAttachLingeringStatusEffectBase.GetLingerTime");

	UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F55D50
//		Name   -> Function TheK26.K26P01.OnRep_BlockedGenerators
//		Flags  -> (Final, Native, Private)
void UK26P01::OnRep_BlockedGenerators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P01.OnRep_BlockedGenerators");

	UK26P01_OnRep_BlockedGenerators_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F550D0
//		Name   -> Function TheK26.K26P01.Authority_OnBlockTimerDone
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26P01::Authority_OnBlockTimerDone(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P01.Authority_OnBlockTimerDone");

	UK26P01_Authority_OnBlockTimerDone_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CE07E0
//		Name   -> Function TheK26.K26P02.Multicast_TriggerPerk
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class AGenerator*                                  explodingGenerator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26P02::Multicast_TriggerPerk(class AGenerator* explodingGenerator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P02.Multicast_TriggerPerk");

	UK26P02_Multicast_TriggerPerk_Params params {};
	params.explodingGenerator = explodingGenerator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F557B0
//		Name   -> Function TheK26.K26P02.GetScreamRevealLocationDuration
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UK26P02::GetScreamRevealLocationDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P02.GetScreamRevealLocationDuration");

	UK26P02_GetScreamRevealLocationDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26P02.Cosmetic_MakeSurvivorScream
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  screamingSurvivor                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26P02::Cosmetic_MakeSurvivorScream(class ADBDPlayer* screamingSurvivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P02.Cosmetic_MakeSurvivorScream");

	UK26P02_Cosmetic_MakeSurvivorScream_Params params {};
	params.screamingSurvivor = screamingSurvivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55500
//		Name   -> Function TheK26.K26P02.Authority_OnSurvivorHookedOnScourgeHook
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UK26P02::Authority_OnSurvivorHookedOnScourgeHook(const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26P02.Authority_OnSurvivorHookedOnScourgeHook");

	UK26P02_Authority_OnSurvivorHookedOnScourgeHook_Params params {};
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55FA0
//		Name   -> Function TheK26.K26PathHandlerComponent.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26AmmoHandlerComponent*                    ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26CrowPlacementValidatorComponent*         placementValidator                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PathHandlerComponent::SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26CrowPlacementValidatorComponent* placementValidator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PathHandlerComponent.SetDependencies");

	UK26PathHandlerComponent_SetDependencies_Params params {};
	params.ammoHandler = ammoHandler;
	params.placementValidator = placementValidator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55D30
//		Name   -> Function TheK26.K26PathHandlerComponent.OnRep_AvailablePathData
//		Flags  -> (Final, Native, Private)
void UK26PathHandlerComponent::OnRep_AvailablePathData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PathHandlerComponent.OnRep_AvailablePathData");

	UK26PathHandlerComponent_OnRep_AvailablePathData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55BB0
//		Name   -> Function TheK26.K26PathHandlerComponent.OnIterativeAvailablePathUpdate
//		Flags  -> (Final, Native, Private)
void UK26PathHandlerComponent::OnIterativeAvailablePathUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PathHandlerComponent.OnIterativeAvailablePathUpdate");

	UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CFF100
//		Name   -> Function TheK26.K26PathHandlerComponent.Multicast_FillAvailablePathArray
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PathHandlerComponent::Multicast_FillAvailablePathArray(int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PathHandlerComponent.Multicast_FillAvailablePathArray");

	UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Params params {};
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55400
//		Name   -> Function TheK26.K26PathHandlerComponent.Authority_OnMaxAmmoSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PathHandlerComponent::Authority_OnMaxAmmoSet(int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PathHandlerComponent.Authority_OnMaxAmmoSet");

	UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Params params {};
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4ACC0
//		Name   -> Function TheK26.K26PowerChargePresentationItemProgressComponent.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26AmmoHandlerComponent*                    ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerChargePresentationItemProgressComponent::SetDependencies(class UK26AmmoHandlerComponent* ammoHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerChargePresentationItemProgressComponent.SetDependencies");

	UK26PowerChargePresentationItemProgressComponent_SetDependencies_Params params {};
	params.ammoHandler = ammoHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C4ACC0
//		Name   -> Function TheK26.K26PowerChargePresentationPowerFadeComponent.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26AmmoHandlerComponent*                    ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerChargePresentationPowerFadeComponent::SetDependencies(class UK26AmmoHandlerComponent* ammoHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerChargePresentationPowerFadeComponent.SetDependencies");

	UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Params params {};
	params.ammoHandler = ammoHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D1D2E0
//		Name   -> Function TheK26.K26PowerOutlineUpdateStrategy.SetOutlineVisibility
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerOutlineUpdateStrategy::SetOutlineVisibility(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerOutlineUpdateStrategy.SetOutlineVisibility");

	UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C63350
//		Name   -> Function TheK26.K26PowerOutlineUpdateStrategy.IsOutlineVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UK26PowerOutlineUpdateStrategy::IsOutlineVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerOutlineUpdateStrategy.IsOutlineVisible");

	UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03CF8BB0
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStopRemovingCrow
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnStopRemovingCrow(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStopRemovingCrow");

	UK26PowerStatusHandlerComponent_Multicast_OnStopRemovingCrow_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F559D0
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStartRemovingCrow
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnStartRemovingCrow(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnStartRemovingCrow");

	UK26PowerStatusHandlerComponent_Multicast_OnStartRemovingCrow_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CF8740
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnIdleCrowInterrupt
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnIdleCrowInterrupt(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnIdleCrowInterrupt");

	UK26PowerStatusHandlerComponent_Multicast_OnIdleCrowInterrupt_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C71CB0
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDetached
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnCrowDetached(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDetached");

	UK26PowerStatusHandlerComponent_Multicast_OnCrowDetached_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55870
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDamagedSurvivor
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowDamagedSurvivor");

	UK26PowerStatusHandlerComponent_Multicast_OnCrowDamagedSurvivor_Params params {};
	params.killer = killer;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F557E0
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowAttached
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Multicast_OnCrowAttached(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Multicast_OnCrowAttached");

	UK26PowerStatusHandlerComponent_Multicast_OnCrowAttached_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowIdleInterrupt
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Cosmetic_OnCrowIdleInterrupt(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowIdleInterrupt");

	UK26PowerStatusHandlerComponent_Cosmetic_OnCrowIdleInterrupt_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowDamagedSurvivor
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Cosmetic_OnCrowDamagedSurvivor(class ASlasherPlayer* killer, class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Cosmetic_OnCrowDamagedSurvivor");

	UK26PowerStatusHandlerComponent_Cosmetic_OnCrowDamagedSurvivor_Params params {};
	params.killer = killer;
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55480
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorAdded
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Authority_OnSurvivorAdded(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Authority_OnSurvivorAdded");

	UK26PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F55300
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Authority_OnKillerInstinctTimePassed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ACamperPlayer*                               survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26PowerStatusHandlerComponent::Authority_OnKillerInstinctTimePassed(class ACamperPlayer* survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Authority_OnKillerInstinctTimePassed");

	UK26PowerStatusHandlerComponent_Authority_OnKillerInstinctTimePassed_Params params {};
	params.survivor = survivor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F552E0
//		Name   -> Function TheK26.K26PowerStatusHandlerComponent.Authority_OnIntroCompleted
//		Flags  -> (Final, Native, Private)
void UK26PowerStatusHandlerComponent::Authority_OnIntroCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26PowerStatusHandlerComponent.Authority_OnIntroCompleted");

	UK26PowerStatusHandlerComponent_Authority_OnIntroCompleted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F57450
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetSummonCooldown
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::SetSummonCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetSummonCooldown");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_SetSummonCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F57350
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetDependencies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UK26AmmoHandlerComponent*                    ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26PathHandlerComponent*                    pathHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UK26PowerStatusHandlerComponent*             statusHandler                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::SetDependencies(class UK26AmmoHandlerComponent* ammoHandler, class UK26PathHandlerComponent* pathHandler, class UK26PowerStatusHandlerComponent* statusHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.SetDependencies");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_SetDependencies_Params params {};
	params.ammoHandler = ammoHandler;
	params.pathHandler = pathHandler;
	params.statusHandler = statusHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F57240
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Server_PlaceProjectileWithPath
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     projectileSpawnPoint                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              killerLocalTime                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Server_PlaceProjectileWithPath(class ASlasherPlayer* killer, const struct FVector& projectileSpawnPoint, float killerLocalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Server_PlaceProjectileWithPath");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Server_PlaceProjectileWithPath_Params params {};
	params.killer = killer;
	params.projectileSpawnPoint = projectileSpawnPoint;
	params.killerLocalTime = killerLocalTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F57220
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnSummonCooldownComplete
//		Flags  -> (Final, Native, Private)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::OnSummonCooldownComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnSummonCooldownComplete");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_OnSummonCooldownComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F570E0
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnConfirmButtonPressed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::OnConfirmButtonPressed(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.OnConfirmButtonPressed");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_OnConfirmButtonPressed_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F56FE0
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummoned
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                remainingAmmo                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                maxAmmo                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Multicast_OnK26CrowSummoned(class ASlasherPlayer* killer, int remainingAmmo, int maxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummoned");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Multicast_OnK26CrowSummoned_Params params {};
	params.killer = killer;
	params.remainingAmmo = remainingAmmo;
	params.maxAmmo = maxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F56FC0
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummonAttemptAcknowledged
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Multicast_OnK26CrowSummonAttemptAcknowledged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Multicast_OnK26CrowSummonAttemptAcknowledged");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Multicast_OnK26CrowSummonAttemptAcknowledged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F56F40
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Local_OnGlobalCooldownDone
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Local_OnGlobalCooldownDone(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Local_OnGlobalCooldownDone");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Local_OnGlobalCooldownDone_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F56F10
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.IsSummonOnCooldown
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UK26SpawnCrowProjectileChargeableInteractionDefinition::IsSummonOnCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.IsSummonOnCooldown");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_IsSummonOnCooldown_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_OnSummonButtonUsedWhenCrowSummonIsNotPossible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnFullyCharged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Cosmetic_OnFullyCharged(class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_OnFullyCharged");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_OnFullyCharged_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_LocalOnSummonCooldownComplete
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                amountOfAmmoLeft                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isInteractionActive                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UK26SpawnCrowProjectileChargeableInteractionDefinition::Cosmetic_LocalOnSummonCooldownComplete(int amountOfAmmoLeft, bool isInteractionActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.Cosmetic_LocalOnSummonCooldownComplete");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_Cosmetic_LocalOnSummonCooldownComplete_Params params {};
	params.amountOfAmmoLeft = amountOfAmmoLeft;
	params.isInteractionActive = isInteractionActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F56EE0
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrowOnceFullyCharged
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UK26SpawnCrowProjectileChargeableInteractionDefinition::CanSummonCrowOnceFullyCharged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrowOnceFullyCharged");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_CanSummonCrowOnceFullyCharged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F56EB0
//		Name   -> Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrow
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UK26SpawnCrowProjectileChargeableInteractionDefinition::CanSummonCrow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.K26SpawnCrowProjectileChargeableInteractionDefinition.CanSummonCrow");

	UK26SpawnCrowProjectileChargeableInteractionDefinition_CanSummonCrow_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.RekindledTotem.RebuildTotem
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARekindledTotem::RebuildTotem(class ATotem* Totem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.RekindledTotem.RebuildTotem");

	ARekindledTotem_RebuildTotem_Params params {};
	params.Totem = Totem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F57160
//		Name   -> Function TheK26.RekindledTotem.OnParentTotemEndPlay
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARekindledTotem::OnParentTotemEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.RekindledTotem.OnParentTotemEndPlay");

	ARekindledTotem_OnParentTotemEndPlay_Params params {};
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.RekindledTotem.Cosmetic_ShowShadowTotem
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               instant                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARekindledTotem::Cosmetic_ShowShadowTotem(bool instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.RekindledTotem.Cosmetic_ShowShadowTotem");

	ARekindledTotem_Cosmetic_ShowShadowTotem_Params params {};
	params.instant = instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.RekindledTotem.Cosmetic_HideShadowTotem
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               instant                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARekindledTotem::Cosmetic_HideShadowTotem(bool instant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.RekindledTotem.Cosmetic_HideShadowTotem");

	ARekindledTotem_Cosmetic_HideShadowTotem_Params params {};
	params.instant = instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheK26.RekindledTotem.CleanseTotem
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ETotemState                         oldTotemState                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ARekindledTotem::CleanseTotem(class ATotem* Totem, DeadByDaylight_ETotemState oldTotemState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheK26.RekindledTotem.CleanseTotem");

	ARekindledTotem_CleanseTotem_Params params {};
	params.Totem = Totem;
	params.oldTotemState = oldTotemState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

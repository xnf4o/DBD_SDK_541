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
//		Offset -> 0x03E84D30
//		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsInStalkMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnStalkModeChanged(bool IsInStalkMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged");

	UGhostKillerAnalyticsComponent_Local_OnStalkModeChanged_Params params {};
	params.IsInStalkMode = IsInStalkMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E84CB0
//		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDSharedTypes_ELeanState                          leanState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnLeanStateChanged(DBDSharedTypes_ELeanState leanState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged");

	UGhostKillerAnalyticsComponent_Local_OnLeanStateChanged_Params params {};
	params.leanState = leanState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E84C20
//		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsStealth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Local_OnIsStealthChanged(bool IsStealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged");

	UGhostKillerAnalyticsComponent_Local_OnIsStealthChanged_Params params {};
	params.IsStealth = IsStealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E84B20
//		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Authority_OnStalkChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged");

	UGhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged_Params params {};
	params.ChargeableComponent = ChargeableComponent;
	params.PercentCompletionChange = PercentCompletionChange;
	params.TotalPercentComplete = TotalPercentComplete;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E84A10
//		Name   -> Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGhostKillerAnalyticsComponent::Authority_OnPreAttackSuccess(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess");

	UGhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess_Params params {};
	params.GameplayTag = GameplayTag;
	params.GameEventData = GameEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

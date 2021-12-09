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
//		Offset -> 0x03E2ACF0
//		Name   -> Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemogorgonHuskAnimInstance::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonHuskAnimInstance.OnKillerSet");

	UDemogorgonHuskAnimInstance_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               isHunting                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemogorgonPounceInteraction::TriggerHuntingAudioEvent(bool isHunting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerHuntingAudioEvent");

	UDemogorgonPounceInteraction_TriggerHuntingAudioEvent_Params params {};
	params.isHunting = isHunting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UDemogorgonPounceInteraction::TriggerChargeCancelAudioEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.TriggerChargeCancelAudioEvent");

	UDemogorgonPounceInteraction_TriggerChargeCancelAudioEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               Ready                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDemogorgonPounceInteraction::OnChargedAttackReadyChanged(bool Ready)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnChargedAttackReadyChanged");

	UDemogorgonPounceInteraction_OnChargedAttackReadyChanged_Params params {};
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E2B6E0
//		Name   -> Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
void UDemogorgonPounceInteraction::OnCancelCooldownComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.DemogorgonPounceInteraction.OnCancelCooldownComplete");

	UDemogorgonPounceInteraction_OnCancelCooldownComplete_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E2BBE0
//		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
// Parameters:
//		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UElevensSodaAddon::Multicast_UnhighlightGenerator(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.ElevensSodaAddon.Multicast_UnhighlightGenerator");

	UElevensSodaAddon_Multicast_UnhighlightGenerator_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E2BB50
//		Name   -> Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, Const)
// Parameters:
//		class AGenerator*                                  Generator                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UElevensSodaAddon::Multicast_HighlightGenerator(class AGenerator* Generator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheDemogorgon.ElevensSodaAddon.Multicast_HighlightGenerator");

	UElevensSodaAddon_Multicast_HighlightGenerator_Params params {};
	params.Generator = Generator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

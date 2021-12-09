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
//		Offset -> 0x04330860
//		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UInteractionDefinition*                      Chargeable_Interaction                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDPlayer*                                  Interacting_Player                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class ADBDPlayer*>                          ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<class ADBDPlayer*> UActionSpeedProficiency_C::FetchInteractingPlayers(class UInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers");

	UActionSpeedProficiency_C_FetchInteractingPlayers_Params params {};
	params.Chargeable_Interaction = Chargeable_Interaction;
	params.Interacting_Player = Interacting_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UChargeableInteractionDefinition*            Chargeable_Interaction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDPlayer*                                  Interacting_Player                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UActionSpeedProficiency_C::Compute_Overall_speed_including_multiple_interactors(class UChargeableInteractionDefinition* Chargeable_Interaction, class ADBDPlayer* Interacting_Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors");

	UActionSpeedProficiency_C_Compute_Overall_speed_including_multiple_interactors_Params params {};
	params.Chargeable_Interaction = Chargeable_Interaction;
	params.Interacting_Player = Interacting_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UChargeableInteractionDefinition*            Chargeable_Interaction                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionSpeedProficiency_C::ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable_Interaction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency");

	UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params params {};
	params.Chargeable_Interaction = Chargeable_Interaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UActionSpeedProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue");

	UActionSpeedProficiency_C_GetValue_Params params {};
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

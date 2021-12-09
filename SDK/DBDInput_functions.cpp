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
//		Offset -> 0x062EF760
//		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent");

	UInteractiveWidgetInterface_HandleKeyUpEvent_Params params {};
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062EF660
//		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent");

	UInteractiveWidgetInterface_HandleKeyHoldEvent_Params params {};
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062EF560
//		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent");

	UInteractiveWidgetInterface_HandleKeyDownEvent_Params params {};
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062EF440
//		Name   -> Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UInteractiveWidgetInterface::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent");

	UInteractiveWidgetInterface_HandleAnalogInputEvent_Params params {};
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x062EFFA0
//		Name   -> Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUIInputUtilities::STATIC_ShouldUseAtlantaControls(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls");

	UUIInputUtilities_ShouldUseAtlantaControls_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062EFE70
//		Name   -> Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DBDSharedTypes_EControlMode                        controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUIInputUtilities::STATIC_IsInputKeyControlModePairValid(const struct FKey& InputKey, DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid");

	UUIInputUtilities_IsInputKeyControlModePairValid_Params params {};
	params.InputKey = InputKey;
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x062EFD10
//		Name   -> Function DBDInput.UIInputUtilities.GetKeyFromUIAction
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isUsingGamepad                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UUIInputUtilities::STATIC_GetKeyFromUIAction(DBDInput_EUIActionType actionType, bool isUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDInput.UIInputUtilities.GetKeyFromUIAction");

	UUIInputUtilities_GetKeyFromUIAction_Params params {};
	params.actionType = actionType;
	params.isUsingGamepad = isUsingGamepad;

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

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
// Parameters
//---------------------------------------------------------------------------

// Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
struct UInteractiveWidgetInterface_HandleKeyUpEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
struct UInteractiveWidgetInterface_HandleKeyHoldEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
struct UInteractiveWidgetInterface_HandleKeyDownEvent_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
struct UInteractiveWidgetInterface_HandleAnalogInputEvent_Params
{
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
struct UUIInputUtilities_ShouldUseAtlantaControls_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
struct UUIInputUtilities_IsInputKeyControlModePairValid_Params
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EControlMode                        controlMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDInput.UIInputUtilities.GetKeyFromUIAction
struct UUIInputUtilities_GetKeyFromUIAction_Params
{
	DBDInput_EUIActionType                             actionType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isUsingGamepad;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

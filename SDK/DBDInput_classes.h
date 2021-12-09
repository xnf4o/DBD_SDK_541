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

// Class DBDInput.ControlModeManager
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UControlModeManager : public UObject
{
public:
	unsigned char                                      UnknownData_0TGG[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameInstance*                               _gameInstance;                                             // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.ControlModeManager");
		return ptr;
	}



};

// Class DBDInput.DBDInputManager
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UDBDInputManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_2LV9[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UControlModeManager*                         _controlModeManager;                                       // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USwitchDockStateManager*                     _switchDockStateManager;                                   // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVirtualKeyboardManager*                     _virtualKeyboardManager;                                   // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  _analogCursorDb;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JC6S[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.DBDInputManager");
		return ptr;
	}



};

// Class DBDInput.InteractiveWidgetInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractiveWidgetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.InteractiveWidgetInterface");
		return ptr;
	}



	void HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent);
	void HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent);
	void HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent);
	void HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent);
};

// Class DBDInput.MultipleGamepadsControlModeInfo
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UMultipleGamepadsControlModeInfo : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_84B8[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.MultipleGamepadsControlModeInfo");
		return ptr;
	}



};

// Class DBDInput.SwitchDockStateManager
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USwitchDockStateManager : public UObject
{
public:
	unsigned char                                      UnknownData_CEGK[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.SwitchDockStateManager");
		return ptr;
	}



};

// Class DBDInput.UIInputUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUIInputUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.UIInputUtilities");
		return ptr;
	}



	bool STATIC_ShouldUseAtlantaControls(class UObject* WorldContextObject);
	bool STATIC_IsInputKeyControlModePairValid(const struct FKey& InputKey, DBDSharedTypes_EControlMode controlMode);
	struct FKey STATIC_GetKeyFromUIAction(DBDInput_EUIActionType actionType, bool isUsingGamepad);
};

// Class DBDInput.VirtualKeyboardManager
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UVirtualKeyboardManager : public UObject
{
public:
	class UVirtualKeyboard*                            _virtualKeyboard;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3CD8[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDInput.VirtualKeyboardManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class DBDUIViewsCore.CoreBaseUserWidget
// 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
class UCoreBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_7T7B[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScaleBox*                                   ScaleContainer;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsInteractive;                                             // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EControlMode                        _controlMode;                                              // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDUIManagers_EScaleType                           ScaleType;                                                 // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XNMH[0x5];                                     // 0x027B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDInputManager*                            _inputManager;                                             // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KBS3[0x50];                                    // 0x0288(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseUserWidget");
		return ptr;
	}



	void UpdateScale(float Scale);
	void RegisterForInput();
	void OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode);
	void DeregisterFromInput();
};

// Class DBDUIViewsCore.CharacterTooltipWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCharacterTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               InstructionTB;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               LevelTB;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MarketTB;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDRichTextBlock*                           DifficultyRTB;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CharacterTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCharacterTooltipViewData& characterViewData);
	void SetLevel(int Level);
	void SetDifficulty(DBDSharedTypes_ECharacterDifficulty Difficulty);
};

// Class DBDUIViewsCore.CoreBaseLoadoutPartWidget
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UCoreBaseLoadoutPartWidget : public UUserWidget
{
public:
	class UDBDImage*                                   ImageRarity;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   ImageIcon;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextStackCount;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseLoadoutPartWidget");
		return ptr;
	}



	void SetLoadoutStackCount(int StackCount);
	void SetLoadoutPartRarity(DBDSharedTypes_EItemRarity Rarity);
	void SetLoadoutPartIcon();
};

// Class DBDUIViewsCore.CoreAddonWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_88J2[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreAddonWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreBaseHudWidget
// 0x0018 (FullSize[0x02F0] - InheritedSize[0x02D8])
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{
public:
	float                                              FocusAnimationDuration;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationDelay;                                       // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FocusAnimationEasing;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QF0I[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusAnimationMaxOpacity;                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusAnimationMinOpacity;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7X7B[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreBaseHudWidget");
		return ptr;
	}



	bool ShouldPlayFocusAnimation();
	void PlayFocusAnimation();
};

// Class DBDUIViewsCore.CoreButtonPromptWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreButtonPromptWidget : public UCoreBaseUserWidget
{
public:
	class UAkAudioEvent*                               CursorOverSfx;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorPressSfx;                                            // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CursorReleaseSfx;                                          // 0x02E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _inputPromptText;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  _buttonTextField;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _buttonPromptTriggeredDelegate;                            // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonPromptWidget");
		return ptr;
	}



	void SetText(const struct FText& Text);
	void SetInputKey(const struct FKey& Key);
	void SetAction(DBDInput_EUIActionType actionType);
	void EnablePrompts();
	void DisablePrompts();
};

// Class DBDUIViewsCore.CoreButtonSelector
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreButtonSelector : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedDelegate;                                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSelectedAgainDelegate;                                   // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnselectedDelegate;                                      // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UCoreSelectableButtonWidget*>         _buttons;                                                  // 0x0308(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0FSD[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonSelector");
		return ptr;
	}



	void UnselectCurrent();
	void SetAllEnabled(bool Enabled);
	bool SelectPrevious();
	bool SelectNext();
	bool Select(class UCoreSelectableButtonWidget* buttonToSelect);
	void OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton);
	void OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
	void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);
	void OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected);
	void OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
	bool HasSelection();
};

// Class DBDUIViewsCore.CoreButtonWidget
// 0x00C0 (FullSize[0x0398] - InheritedSize[0x02D8])
class UCoreButtonWidget : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnHoveredDelegate;                                         // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhoveredDelegate;                                       // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressedDelegate;                                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleasedDelegate;                                        // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClickedDelegate;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     HoveredSfxName;                                            // 0x0328(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               HoveredSfx;                                                // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PressedSfxName;                                            // 0x0340(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               PressedSfx;                                                // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClickedSfxName;                                            // 0x0358(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ClickedSfx;                                                // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewsCore_EAnalogCursorStickiness             AnalogCursorStickiness;                                    // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJ2L[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDButton*                                  HitzoneButton;                                             // 0x0378(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               LabelTB;                                                   // 0x0380(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_33NR[0x10];                                    // 0x0388(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreButtonWidget");
		return ptr;
	}



	void SetVisible(DBDUIViewsCore_EButtonWidgetVisibility visible);
	void SetPressable(bool isPressable);
	void SetLabel(const struct FText& label);
	void SetHoverable(bool isHoverable);
	void SetHoldable(bool isHoldable);
	void SetEnabled(bool IsEnabled);
	void SetClickable(bool isClickable);
	void SetChargeable(bool isChargeable);
	void OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void OnUnhovered();
	void OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void OnReleased();
	void OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void OnPressed();
	void OnInternalUnhovered();
	void OnInternalReleased();
	void OnInternalPressed();
	void OnInternalHovered();
	void OnInternalClicked();
	void OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void OnHovered();
	void OnEnabledChanged(bool IsEnabled);
	void OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);
	void OnClicked();
	bool IsEnabled();
};

// Class DBDUIViewsCore.CoreRewardWidget
// 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
class UCoreRewardWidget : public UCoreButtonWidget
{
public:
	class UDBDImage*                                   RewardIcon;                                                // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreRewardWidget");
		return ptr;
	}



	void ClearData();
};

// Class DBDUIViewsCore.CoreCharacterRewardWidget
// 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
class UCoreCharacterRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCharacterRewardWidget");
		return ptr;
	}



	void SetData(const struct FCharacterRewardViewData& CharacterRewardViewData);
};

// Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget
// 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
class UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCurrencyProgressionRewardWidget");
		return ptr;
	}



	void SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);
};

// Class DBDUIViewsCore.CoreCustomizationRewardWidget
// 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
class UCoreCustomizationRewardWidget : public UCoreRewardWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreCustomizationRewardWidget");
		return ptr;
	}



	void SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData);
};

// Class DBDUIViewsCore.CoreEndGameCollapseBarWidget
// 0x0078 (FullSize[0x0368] - InheritedSize[0x02F0])
class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_1IDQ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _progressBarInterpSpeed;                                   // 0x02F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9DYD[0x6C];                                    // 0x02FC(0x006C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseBarWidget");
		return ptr;
	}



	void UpdateBarProgression(float Progress);
	void PlayToZeroAnimation();
};

// Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerLeftCanvas;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerRightCanvas;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBoxSlot*                          _markerLeftBox;                                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBoxSlot*                          _markerRightBox;                                           // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XLN9[0x20];                                    // 0x0300(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEndGameCollapseProgressWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedItemWidget
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UCoreEquippedItemWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_9DV3[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ItemDisappearSfx;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEquippedItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreEquippedPowerWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_DCBA[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreEquippedPowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExampleWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreExampleWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_GDXN[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EditAnywhere;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnly;                                          // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditInstanceOnly;                                          // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditNoBlueprint;                                           // 0x0328(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EditDefaultsOnlyBlueprintReadOnly;                         // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleAnywhere;                                           // 0x0348(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleDefaultsOnly;                                       // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VisibleInstanceOnly;                                       // 0x0368(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    ExampleButtonClickDelegate;                                // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreExampleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreExternalEffectsWidget
// 0x0278 (FullSize[0x0568] - InheritedSize[0x02F0])
class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_D2CE[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   GridSlotSize;                                              // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AddonScaleRatio;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingBetweenRows;                                        // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingPerks;                                              // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingAddons;                                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SpacingBetweenPerksAndAddons;                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TNIR[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PerkWidgetClass;                                           // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      AddonWidgetClass;                                          // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  Container;                                                 // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_16IN[0x8];                                     // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPerkViewData>                       _perkData;                                                 // 0x0338(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCorePerkWidget*>         _perkWidgets;                                              // 0x0348(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCorePerkWidget*>                     _perkPool;                                                 // 0x0398(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _perkViewInterfaces[0x50];                                 // 0x03A8(0x0050) UNKNOWN PROPERTY: MapProperty
	TArray<struct FAddonViewData>                      _addonData;                                                // 0x03F8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreAddonWidget*>        _addonWidgets;                                             // 0x0408(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCoreAddonWidget*>                    _addonPool;                                                // 0x0458(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      _addonViewInterfaces[0x50];                                // 0x0468(0x0050) UNKNOWN PROPERTY: MapProperty
	TMap<struct FName, struct FTimerHandle>            _timerHandleMap;                                           // 0x04B8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, class USpacer*>                 _spacerWidgets;                                            // 0x0508(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class USpacer*>                             _spacerPool;                                               // 0x0558(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreExternalEffectsWidget");
		return ptr;
	}



	void HideExternalPerk(const struct FName& perkId);
	void HideExternalAddon(const struct FName& AddonID);
};

// Class DBDUIViewsCore.CoreGameManualCategoryButton
// 0x0030 (FullSize[0x03C8] - InheritedSize[0x0398])
class UCoreGameManualCategoryButton : public UCoreButtonWidget
{
public:
	class UDBDTextBlock*                               Title;                                                     // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               Description;                                               // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   Icon;                                                      // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   Background;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  BackgroundTexture;                                         // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreGameManualCategoryButton");
		return ptr;
	}



	void SetText(const struct FText& Title, const struct FText& Description);
};

// Class DBDUIViewsCore.CoreGameManualPanelWidget
// 0x00D8 (FullSize[0x03B0] - InheritedSize[0x02D8])
class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_QVXJ[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	DBDUIViewInterfaces_EGameManualMenuState           _currentSelectedManualMenu;                                // 0x02E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	DBDSharedTypes_EHelpType                           _currentGameManualTopic;                                   // 0x02E1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4RAF[0x6];                                     // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelWidget*                                CategoryPanel;                                             // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               GameCategoryButton;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               SurvivorCategoryButton;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreGameManualCategoryButton*               KillerCategoryButton;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                TopicsPanel;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreTabContainerWidget*                     GameManualTopicsTabs;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentTitle;                                    // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               GameManualContentSubtitle;                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDRichTextBlock*                           GameManualContentText;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onSetOnboardingMenuSubtitleDelegate;                      // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _onResetOnboardingMenuSubtitleDelegate;                    // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8F6D[0x60];                                    // 0x0350(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreGameManualPanelWidget");
		return ptr;
	}



	void ToggleGameManualMenuState();
	void ShowHelpTopics(DBDSharedTypes_EHelpType categoryType);
	void SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState);
	void SetCurrentOnbardingMenuSubtitle();
	void ResetScrolls(bool resetTopicsScroll);
	void OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton);
};

// Class DBDUIViewsCore.CoreHookCountWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreHookCountWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_T1D6[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHookCountWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudAlertWidget
// 0x0090 (FullSize[0x0380] - InheritedSize[0x02F0])
class UCoreHudAlertWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_UGQS[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxDisplayedItems;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondaryAlpha;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FullAlertDuration;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PendingAlertDuration;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AnimationDuration;                                         // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                AnimationEasing;                                           // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T30M[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationTranslationY;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3SJK[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreHudScoreAlertItemClass;                                // 0x0318(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreHudStatusEffectAlertItemClass;                         // 0x0320(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  AlertContainer;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreBaseUserWidget*>                 _alerts;                                                   // 0x0330(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreBaseUserWidget*>                 _pendingAlerts;                                            // 0x0340(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudScoreAlertItem*>              _scoreAlertPool;                                           // 0x0350(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreHudStatusEffectAlertItem*>       _statusEffectAlertPool;                                    // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q7X5[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudAlertWidget");
		return ptr;
	}



	void PopAlert();
	void OnPopAlertComplete(class UUITweenInstance* tween);
	void OnClearAlertsComplete(class UUITweenInstance* tween);
	float GetRemainingTime();
	TArray<class UCoreBaseUserWidget*> GetPendingAlerts();
	TArray<class UCoreBaseUserWidget*> GetAlerts();
	void ClearAlerts();
};

// Class DBDUIViewsCore.CoreHudObjectivesWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreHudObjectivesWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BT3Q[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               SpecialSpacer;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudObjectivesWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudObjectiveWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreHudObjectiveWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_YMFK[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               SpecialSpacer;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudObjectiveWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreHudScoreAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudScoreAlertItem");
		return ptr;
	}



	void SetData(const struct FScoreAlertViewData& Data);
};

// Class DBDUIViewsCore.CoreHudStatusEffectAlertItem
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreHudStatusEffectAlertItem");
		return ptr;
	}



	void SetData(const struct FStatusEffectAlertViewData& Data);
};

// Class DBDUIViewsCore.CoreInputPromptTextWidget
// 0x0048 (FullSize[0x0320] - InheritedSize[0x02D8])
class UCoreInputPromptTextWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TextField;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        InputKey;                                                  // 0x02E8(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                      // 0x0308(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptTextWidget");
		return ptr;
	}



	void SetText(const struct FText& Text);
	void SetInputKey(const struct FKey& InputKey);
};

// Class DBDUIViewsCore.CoreInputPromptWidget
// 0x0040 (FullSize[0x0318] - InheritedSize[0x02D8])
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{
public:
	struct FText                                       _unfoundInputKeyText;                                      // 0x02D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FKey                                        _inputKey;                                                 // 0x02F0(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _isEnabled;                                                // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WXTT[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputPromptWidget");
		return ptr;
	}



	void SetInputKey(const struct FKey& InputKey);
	void SetEnabled(bool IsEnabled);
	void PromptNotFound();
	void OnEnabledChanged(bool IsEnabled);
	bool IsEnabled();
	struct FText GetInputShortDisplayName();
	struct FKey GetInputKey();
	void DisplayPrompt();
};

// Class DBDUIViewsCore.CoreInputSwitcherWidget
// 0x0028 (FullSize[0x0300] - InheritedSize[0x02D8])
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
{
public:
	DBDUIViewsCore_EInputSwitcherDisplayRule           ButtonDisplayRule;                                         // 0x02D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewsCore_EInputSwitcherDisplayRule           InputPromptDisplayRule;                                    // 0x02D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EXF[0x6];                                     // 0x02DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoreKeyListenerInputPromptWidget*           InputPrompt;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreButtonWidget*                           Button;                                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onInputSwitcherTriggeredDelegate;                         // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInputSwitcherWidget");
		return ptr;
	}



	void SetUIAction(DBDInput_EUIActionType actionType);
	void SetLabel(const struct FText& label);
	void SetEnabled(bool IsEnabled);
	void OnInputPromptTriggered();
	void OnButtonClicked(class UCoreButtonWidget* Target);
	class UCoreKeyListenerInputPromptWidget* GetInputPrompt();
	class UCoreButtonWidget* GetButton();
};

// Class DBDUIViewsCore.CoreInteractionProgressWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BHC9[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreStatusEffectIcon*>               Proficiencies;                                             // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionProgressWidget");
		return ptr;
	}



	void SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas);
};

// Class DBDUIViewsCore.CoreInteractionPromptActionWidget
// 0x00B8 (FullSize[0x0390] - InheritedSize[0x02D8])
class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptWidget*                      InputPrompt2;                                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptWidget*                      InputPrompt3;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptWidget*                      InputPrompt4;                                              // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       IdleAnimationName;                                         // 0x02F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DCDZ[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        InputKey;                                                  // 0x0308(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKey                                        InputKey2;                                                 // 0x0328(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKey                                        InputKey3;                                                 // 0x0348(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FKey                                        InputKey4;                                                 // 0x0368(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K39Q[0x8];                                     // 0x0388(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptActionWidget");
		return ptr;
	}



	void StopIdleAnimation();
	void SetInputKey4(const struct FKey& InputKey4);
	void SetInputKey3(const struct FKey& InputKey3);
	void SetInputKey2(const struct FKey& InputKey2);
	void SetInputKey(const struct FKey& InputKey);
	void PlayIdleAnimation();
	bool HasThirdPrompt();
	bool HasSecondPrompt();
	bool HasFourthPrompt();
};

// Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget
// 0x00B0 (FullSize[0x03A0] - InheritedSize[0x02F0])
class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_QCTW[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDWrapBox*                                 CenterContainerBox;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDWrapBox*                                 ContainerBox;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InteractionPromptWidgetClass;                              // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedPrompts;                                       // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxDisplayedCenterPrompts;                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     SlotMargin;                                                // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UCoreInteractionPromptWidget*>        _promptWidgetPool;                                         // 0x0330(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UCoreInteractionPromptWidget*>        _centerPromptWidgetPool;                                   // 0x0340(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreInteractionPromptWidget*> _displayedPromptsMap;                                      // 0x0350(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptsContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreInteractionPromptWidget
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UCoreInteractionPromptWidget : public UUserWidget
{
public:
	float                                              LargeTextScale;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CKUD[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScaleBox*                                   LargeTextScaleBox;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               ActionTB;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextManager*                             _textManager;                                              // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreInteractionPromptWidget");
		return ptr;
	}



	void SetData(const struct FInteractionPromptViewData& Data);
	void OnLargeTextSettingsChanged(bool isLargeTextEnabled);
	void ClearData();
};

// Class DBDUIViewsCore.CoreItemBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCoreItemBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_OTQ6[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreItemInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_UEMJ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreItemWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_CPE1[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreItemWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreKeyListenerButtontWidget
// 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
class UCoreKeyListenerButtontWidget : public UCoreButtonWidget
{
public:
	class UDBDTextBlock*                               InputNameTB;                                               // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9DAF[0x8];                                     // 0x03A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreKeyListenerButtontWidget");
		return ptr;
	}



	void SetUIAction(DBDInput_EUIActionType actionType);
};

// Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
{
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               LabelTB;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _onKeyListenerInputPromptTriggeredDelegate;                // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreKeyListenerInputPromptWidget");
		return ptr;
	}



	void SetUIAction(DBDInput_EUIActionType actionType);
	void SetLabel(const struct FText& label);
	void SetEnabled(bool IsEnabled);
	void OnEnabledChanged(bool IsEnabled);
	bool IsEnabled();
};

// Class DBDUIViewsCore.CoreLeaningArrowsWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_S5HK[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreLeaningArrowsWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreMatchResultWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreMatchResultWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_TKN0[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreMatchResultWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingInteractionWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_IQ78[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOfferingInteractionWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOfferingWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_6G35[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOfferingWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuTitleWidget");
		return ptr;
	}



	void SetOnboardingMenuTitle(const struct FText& menuTitle);
	void SetOnboardingMenuSubtitle(const struct FText& menuTitle);
	void SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle);
	void ResetOnboardingMenuSubtitle();
};

// Class DBDUIViewsCore.CoreOnboardingMenuWidget
// 0x0058 (FullSize[0x0330] - InheritedSize[0x02D8])
class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_JB8Q[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCoreTabContainerWidget*                     OnboardingMenuTabs;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreOnboardingMenuTitleWidget*              menuTitle;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreButtonPromptWidget*                     BackButton;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    BackActionDelegate;                                        // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    MenuTabSelectedDelegate;                                   // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    MenuTabSelectedAgainDelegate;                              // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UB9R[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingMenuWidget");
		return ptr;
	}



	void SetTitleText(bool IsInTutorial);
	void SetBackButtonText(bool isFTUE);
	void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);
	void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);
};

// Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
// 0x00E8 (FullSize[0x0480] - InheritedSize[0x0398])
class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
{
public:
	struct FScriptMulticastDelegate                    OnSetDataAnimationCompleteDelegate;                        // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FString                                     UnavailablePressedSfxName;                                 // 0x03A8(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               UnavailablePressedSfx;                                     // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               TitleText;                                                 // 0x03C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               DescriptionText;                                           // 0x03C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               RewardsText;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   RoleIcon;                                                  // 0x03D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             StateSwitcher;                                             // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   LockedImage;                                               // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   CompletedImage;                                            // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreRewardWrapperWidget*>            RewardWrappers;                                            // 0x03F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOnboardingTutorialButtonViewData           viewData;                                                  // 0x0408(0x0078) (BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialButtonWidget");
		return ptr;
	}



	void SetVisual();
	void SetUIEnabled(bool Enabled);
	void SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation);
	void OnRewardReleased(class UCoreButtonWidget* buttonTarget);
	void OnRewardPressed(class UCoreButtonWidget* buttonTarget);
	void OnRewardClicked(class UCoreButtonWidget* buttonTarget);
	bool IsInUnavailableStep();
};

// Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
// 0x0038 (FullSize[0x0310] - InheritedSize[0x02D8])
class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_H6VC[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCoreOnboardingTutorialButtonWidget*> TutorialButtons;                                           // 0x02E0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    TutorialSelectedDelegate;                                  // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	TArray<struct FPendingStepData>                    _pendingData;                                              // 0x0300(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreOnboardingTutorialPanelWidget");
		return ptr;
	}



	void SetTutorialSeparators(const struct FString& completedStepId);
	void SetTutorialDescription(const struct FText& Description, bool isWarning);
	void NextPendingButtonUpdated();
	void CheckNextPendingButtonUpdate();
};

// Class DBDUIViewsCore.CorePerksContainerWidget
// 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
class UCorePerksContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_DVWR[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                               // 0x02F8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _perkViewInterfaces[0x10];                                 // 0x0308(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePerksContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePerkWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_MCG8[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePerkWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePingStatusWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCorePingStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_OMOT[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePingStatusWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusesContainerWidget
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_BZ5Y[0x10];                                    // 0x02F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UCorePlayerStatusWidget*>             PlayerStatusWidgets;                                       // 0x0300(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _playerStatusViewInterfaces[0x10];                         // 0x0310(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusesContainerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusKillerEffectWidget");
		return ptr;
	}



	void SetKillerData(const struct FPlayerStatusViewData& Data);
	void ClearVisual();
};

// Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
// 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
class UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget");
		return ptr;
	}



	void AfflictionHit();
};

// Class DBDUIViewsCore.CorePlayerStatusWidget
// 0x0198 (FullSize[0x0488] - InheritedSize[0x02F0])
class UCorePlayerStatusWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_O6GF[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EPlayerStatus, struct FPlayerStatusAssets> PlayerStatusAssets;                                        // 0x02F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ObsessionSfx;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               PlayerNameTextfield;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                                    KillerStatusContainer;                                     // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, class UClass*>           KillerStatusEffectWidgetClasses;                           // 0x0360(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FPlayerStatusViewData                       _cachedViewData;                                           // 0x03B0(0x0080) (BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_653P[0x50];                                    // 0x0430(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCorePlayerStatusKillerEffectWidget*         _killerStatusEffectWidget;                                 // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePlayerStatusWidget");
		return ptr;
	}



	bool ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState);
	bool HasTimerProgressChanged(float newTimerProgress);
	bool HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	bool HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus newPlayerState);
	bool HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState);
	bool HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData);
	DBDSharedTypes_EPlayerStateChangeType GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData);
	class UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget();
};

// Class DBDUIViewsCore.CorePowerBundleWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCorePowerBundleWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_2E3S[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePowerBundleWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CorePowerWidget
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
{
public:
	unsigned char                                      UnknownData_D0CL[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CorePowerWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreRewardWrapperWidget
// 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
class UCoreRewardWrapperWidget : public UUserWidget
{
public:
	class UClass*                                      CharacterRewardWidget;                                     // 0x0260(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CurrencyProgressionRewardWidget;                           // 0x0268(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CustomizationRewardWidget;                                 // 0x0270(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                RewardContainer;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreRewardWidget*                           _rewardWidget;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreRewardWrapperWidget");
		return ptr;
	}



	void SetData(const struct FRewardWrapperViewData& viewData);
	class UCoreRewardWidget* GetRewardWidget();
	void ClearData();
};

// Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_J5S1[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IXZT[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCanvasPanel*                                Container;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ScreenIndicatorClass;                                      // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class UCoreScreenIndicatorWidget*> _screenIndicatorsMap;                                      // 0x0310(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCoreScreenIndicatorWidget*>          _screenIndicatorsPool;                                     // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorsContainerWidget");
		return ptr;
	}



	TMap<struct FString, class UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();
	struct FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value);
};

// Class DBDUIViewsCore.CoreScreenIndicatorWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{
public:
	float                                              InactiveTime;                                              // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   IndicatorPadding;                                          // 0x02DC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DistanceClamping;                                          // 0x02E4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceRatio;                                          // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistanceAlpha;                                          // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7SZ[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreScreenIndicatorWidget");
		return ptr;
	}



	void SetData(const struct FScreenIndicatorViewData& Data);
	void ClearData();
};

// Class DBDUIViewsCore.CoreSelectableButtonWidget
// 0x0028 (FullSize[0x03C0] - InheritedSize[0x0398])
class UCoreSelectableButtonWidget : public UCoreButtonWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedChangedDelegate;                                 // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSelectedAgainDelegate;                                   // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNCP[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSelectableButtonWidget");
		return ptr;
	}



	void SetSelected(bool IsSelected);
	void OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);
	void OnSelectedChanged(bool IsSelected);
	void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget);
	bool IsSelected();
	bool IsSelectable();
};

// Class DBDUIViewsCore.CoreSkillCheckWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreSkillCheckWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_7L8W[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSkillCheckWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreSpectateBarWidget
// 0x0038 (FullSize[0x0328] - InheritedSize[0x02F0])
class UCoreSpectateBarWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_KR5D[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    _leaveButtonClickDelegate;                                 // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _leftArrowClickDelegate;                                   // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    _rightArrowClickDelegate;                                  // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSpectateBarWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreStartSequenceWidget
// 0x00A0 (FullSize[0x0390] - InheritedSize[0x02F0])
class UCoreStartSequenceWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_CAYA[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FadeInDuration;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutDuration;                                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeInEasing;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UITween_EEasingType                                FadeOutEasing;                                             // 0x0301(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TNX[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<DBDSharedTypes_EThemeColorId, struct FLinearColor> BorderColors;                                              // 0x0308(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultColor;                                              // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               ThemeNameTextfield;                                        // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SeparatorImage;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextBlock*                               MapNameTextfield;                                          // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    StartSequenceFadeOutDelegate;                              // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStartSequenceWidget");
		return ptr;
	}



	void OnHideStartSequenceComplete(class UUITweenInstance* tween);
};

// Class DBDUIViewsCore.CoreStatusEffectIcon
// 0x0058 (FullSize[0x0330] - InheritedSize[0x02D8])
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_RFJK[0x58];                                    // 0x02D8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectIcon");
		return ptr;
	}



	void UpdateWidget();
	void UpdatePercentageFill(float Percentage);
	void SetStatusEffectData(const struct FStatusEffectViewData& Data);
	void SetInactiveTicks(int inactiveTicks);
	struct FStatusEffectViewData GetStatusEffectData();
	int GetInactiveTicks();
};

// Class DBDUIViewsCore.CoreStatusEffectWidget
// 0x0098 (FullSize[0x0388] - InheritedSize[0x02F0])
class UCoreStatusEffectWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_0M61[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InactiveThreshold;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PrepooledItemAmount;                                       // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ItemsByColumn;                                             // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EvenColumnOffset;                                          // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CoreStatusEffectIconClass;                                 // 0x0308(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  StatusEffectContainer;                                     // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreStatusEffectIcon*>               _statusEffectPool;                                         // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               _statusEffectOrder;                                        // 0x0328(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreStatusEffectIcon*>   _statusEffectMap;                                          // 0x0338(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreStatusEffectWidget");
		return ptr;
	}



	TMap<struct FName, class UCoreStatusEffectIcon*> GetStatusEffectMap();
};

// Class DBDUIViewsCore.CoreSubtitlesWidget
// 0x0040 (FullSize[0x0318] - InheritedSize[0x02D8])
class UCoreSubtitlesWidget : public UCoreBaseUserWidget
{
public:
	unsigned char                                      UnknownData_INY1[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTextBlock*                               SubtitlesTB;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumberOfCharacterPerLine;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DurationPerLine;                                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               KeepSingleCharacter;                                       // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_57PQ[0x7];                                     // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSubtitlesEntry>                     _entryQueue;                                               // 0x02F8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                _timerHandle;                                              // 0x0308(0x0008) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GLUH[0x8];                                     // 0x0310(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreSubtitlesWidget");
		return ptr;
	}



	void SetSubtitlesPosition(DBDSharedTypes_ESubtitlesPosition Position);
	void OnEntryTimedOut();
};

// Class DBDUIViewsCore.CoreTabContainerWidget
// 0x0030 (FullSize[0x0350] - InheritedSize[0x0320])
class UCoreTabContainerWidget : public UCoreButtonSelector
{
public:
	bool                                               AlignHorizontally;                                         // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WLIF[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     TabPadding;                                                // 0x0324(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JROO[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTabClass;                                              // 0x0338(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGridPanel*                                  TabContainer;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UseControllerTabSwitching;                                 // 0x0348(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CanLoop;                                                   // 0x0349(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DMZL[0x6];                                     // 0x034A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTabContainerWidget");
		return ptr;
	}



	void RemoveTabs();
	void Init(TArray<struct FTabWidgetData> tabsData);
};

// Class DBDUIViewsCore.CoreTabWidget
// 0x0018 (FullSize[0x03D8] - InheritedSize[0x03C0])
class UCoreTabWidget : public UCoreSelectableButtonWidget
{
public:
	class UDBDTextBlock*                               TabTextField;                                              // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDImage*                                   TabImage;                                                  // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5I08[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTabWidget");
		return ptr;
	}



	int GetKey();
};

// Class DBDUIViewsCore.CoreTemplateWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UCoreTemplateWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_MWDG[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTemplateWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTestBuildFlagWidget
// 0x0018 (FullSize[0x0308] - InheritedSize[0x02F0])
class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_DQYA[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  TopLineTextfield;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BottomLineTextfield;                                       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTestBuildFlagWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_4Z99[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialMysteryNoteWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CoreTutorialObjectiveItem
// 0x0010 (FullSize[0x02E8] - InheritedSize[0x02D8])
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    TutorialObjectiveCompletedDelegate;                        // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectiveItem");
		return ptr;
	}



	void SetObjectiveCompleted(bool removeAfterCompletion);
	void InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData);
};

// Class DBDUIViewsCore.CoreTutorialObjectivesContainer
// 0x0080 (FullSize[0x0370] - InheritedSize[0x02F0])
class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_R9PQ[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CoreTutorialObjectiveItemClass;                            // 0x02F8(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BasePooledInstanceAmount;                                  // 0x0300(0x0004) (Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MFTB[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGridPanel*                                  ObjectiveContainer;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCoreTutorialObjectiveItem*>          _objectivePool;                                            // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UCoreTutorialObjectiveItem*> _objectiveItems;                                           // 0x0320(0x0050) (ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialObjectivesContainer");
		return ptr;
	}



	void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);
};

// Class DBDUIViewsCore.CoreTutorialPopupWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
{
public:
	unsigned char                                      UnknownData_LI53[0x8];                                     // 0x02F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ClosePopupSfx;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    _notifTutoConfirmButtonClickDelegate;                      // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CoreTutorialPopupWidget");
		return ptr;
	}



};

// Class DBDUIViewsCore.CurrencyProgressionTooltipWidget
// 0x0020 (FullSize[0x02F8] - InheritedSize[0x02D8])
class UCurrencyProgressionTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               CurrencyTB;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDTextBlock*                               CurrencyTitleTB;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDRichTextBlock*                           CurrencyDescriptionRTB;                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDBDImage*                                   TitleBgIMG;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CurrencyProgressionTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData);
};

// Class DBDUIViewsCore.CustomizationTooltipWidget
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class UCustomizationTooltipWidget : public UCoreBaseUserWidget
{
public:
	class UDBDTextBlock*                               ToolTipStatusTB;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.CustomizationTooltipWidget");
		return ptr;
	}



	void SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData);
	void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked);
};

// Class DBDUIViewsCore.DBDButton
// 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
class UDBDButton : public UButton
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDButton");
		return ptr;
	}



};

// Class DBDUIViewsCore.DBDImage
// 0x0010 (FullSize[0x0258] - InheritedSize[0x0248])
class UDBDImage : public UImage
{
public:
	class UTexture2D*                                  DefaultImage;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99NR[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDImage");
		return ptr;
	}



	void SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize);
	void SetBrushFromSoftTextureWithDefault(bool matchSize);
};

// Class DBDUIViewsCore.DBDRichTextBlock
// 0x00F0 (FullSize[0x07B8] - InheritedSize[0x06C8])
class UDBDRichTextBlock : public URichTextBlock
{
public:
	bool                                               _debugPreviewLargeTextState;                               // 0x06C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _debugPreviewUndockedState;                                // 0x06C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasLargeText;                                             // 0x06CA(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A907[0x5];                                     // 0x06CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockOverrideProperties                _largeTextProperties;                                      // 0x06D0(0x0048) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SVIO[0x1];                                     // 0x0718(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _overrideUndockedPropertiesWithLargeText;                  // 0x0719(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x071A(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I5A0[0x5];                                     // 0x071B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockOverrideProperties                _undockedProperties;                                       // 0x0720(0x0048) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XJ9D[0x50];                                    // 0x0768(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDRichTextBlock");
		return ptr;
	}



	void SetHTMLText(const struct FText& InText);
};

// Class DBDUIViewsCore.DBDScrollBox
// 0x0030 (FullSize[0x0938] - InheritedSize[0x0908])
class UDBDScrollBox : public UScrollBox
{
public:
	bool                                               _useControllerScroll;                                      // 0x0908(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _shouldScrollOnMouseOver;                                  // 0x0909(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SMRL[0x2];                                     // 0x090A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _scrollSpeed;                                              // 0x090C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCoreInputPromptTextWidget*                  _displayPrompt;                                            // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       _displayPromptText;                                        // 0x0918(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoClear, Protected, NativeAccessSpecifierProtected)
	DBDUIViewsCore_EShowScrollDisplayPrompt            _showDisplayPrompt;                                        // 0x0930(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LX2U[0x7];                                     // 0x0931(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDScrollBox");
		return ptr;
	}



	void UpdateDisplayPrompt();
	void OnControlModeChanged(DBDSharedTypes_EControlMode controlMode);
	bool IsMouseOver();
	void HandleControllerInput(float analogValue);
};

// Class DBDUIViewsCore.DBDTextBlock
// 0x0108 (FullSize[0x03F0] - InheritedSize[0x02E8])
class UDBDTextBlock : public UTextBlock
{
public:
	bool                                               _debugPreviewLargeTextState;                               // 0x02E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _debugPreviewUndockedState;                                // 0x02E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VNF9[0x6];                                     // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USwitchDockStateManager*                     _switchDockStateManager;                                   // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDBDTextManager*                             _textManager;                                              // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isUpperCase;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasLargeText;                                             // 0x0301(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YCAC[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockOverrideProperties                _largeTextProperties;                                      // 0x0308(0x0048) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q05X[0x1];                                     // 0x0350(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               _overrideUndockedPropertiesWithLargeText;                  // 0x0351(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _hasUndocking;                                             // 0x0352(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K6O7[0x5];                                     // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockOverrideProperties                _undockedProperties;                                       // 0x0358(0x0048) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V0KL[0x50];                                    // 0x03A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDTextBlock");
		return ptr;
	}



	void SetIsUpperCase(bool isUpperCase);
	void OnSwitchDockStateChanged(bool isDocked);
	void OnLargeTextSettingsChanged(bool isLargeText);
	bool GetIsUpperCase();
};

// Class DBDUIViewsCore.DBDTooltipManager
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UDBDTooltipManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_F4TJ[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 _currentTooltip;                                           // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDTooltipManager");
		return ptr;
	}



	void ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry);
	void HideTooltip();
};

// Class DBDUIViewsCore.DBDWrapBox
// 0x0020 (FullSize[0x0160] - InheritedSize[0x0140])
class UDBDWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x014C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x014D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3P0[0x12];                                    // 0x014E(0x0012) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDWrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

// Class DBDUIViewsCore.DBDWrapBoxSlot
// 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
class UDBDWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ER69[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HE8Z[0xE];                                     // 0x005A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.DBDWrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator
{
public:
	int                                                Width;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator");
		return ptr;
	}



};

// Class DBDUIViewsCore.RichTextNestedTagsDecorator
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class URichTextNestedTagsDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData_T02T[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.RichTextNestedTagsDecorator");
		return ptr;
	}



};

// Class DBDUIViewsCore.TestWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UTestWidget : public UUserWidget
{
public:
	class UPanelWidget*                                Workbench;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               showWorkbench;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OIW7[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsCore.TestWidget");
		return ptr;
	}



	void SetShowWorkbench(bool showWorkbench);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

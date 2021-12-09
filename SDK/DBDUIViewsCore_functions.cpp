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
//		Offset -> 0x02FBA040
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::UpdateScale(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale");

	UCoreBaseUserWidget_UpdateScale_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9310
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::RegisterForInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput");

	UCoreBaseUserWidget_RegisterForInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		DBDSharedTypes_EControlMode                        controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP");

	UCoreBaseUserWidget_OnControlModeChangedBP_Params params {};
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB8F70
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::DeregisterFromInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput");

	UCoreBaseUserWidget_DeregisterFromInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FCharacterTooltipViewData                   characterViewData                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetTooltipData(const struct FCharacterTooltipViewData& characterViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData");

	UCharacterTooltipWidget_SetTooltipData_Params params {};
	params.characterViewData = characterViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB99F0
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel");

	UCharacterTooltipWidget_SetLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9630
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_ECharacterDifficulty                Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetDifficulty(DBDSharedTypes_ECharacterDifficulty Difficulty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty");

	UCharacterTooltipWidget_SetDifficulty_Params params {};
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9C00
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		int                                                StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int StackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount");

	UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params {};
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9B80
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EItemRarity                         Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(DBDSharedTypes_EItemRarity Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params {};
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9A70
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon");

	UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9FF0
//		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation");

	UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FB9290
//		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreBaseHudWidget::PlayFocusAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation");

	UCoreBaseHudWidget_PlayFocusAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9D10
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetText");

	UCoreButtonPromptWidget_SetText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9850
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetInputKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey");

	UCoreButtonPromptWidget_SetInputKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9420
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetAction(DBDInput_EUIActionType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction");

	UCoreButtonPromptWidget_SetAction_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::EnablePrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts");

	UCoreButtonPromptWidget_EnablePrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::DisablePrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts");

	UCoreButtonPromptWidget_DisablePrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBA020
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreButtonSelector::UnselectCurrent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.UnselectCurrent");

	UCoreButtonSelector_UnselectCurrent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB94A0
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::SetAllEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SetAllEnabled");

	UCoreButtonSelector_SetAllEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB93F0
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreButtonSelector::SelectPrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SelectPrevious");

	UCoreButtonSelector_SelectPrevious_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FB93C0
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.SelectNext
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreButtonSelector::SelectNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.SelectNext");

	UCoreButtonSelector_SelectNext_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FB9330
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.Select
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoreSelectableButtonWidget*                 buttonToSelect                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreButtonSelector::Select(class UCoreSelectableButtonWidget* buttonToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.Select");

	UCoreButtonSelector_Select_Params params {};
	params.buttonToSelect = buttonToSelect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreSelectableButtonWidget*                 unselectedButton                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature");

	UCoreButtonSelector_OnUnselectedDelegate__DelegateSignature_Params params {};
	params.unselectedButton = unselectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature");

	UCoreButtonSelector_OnSelectedDelegate__DelegateSignature_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature");

	UCoreButtonSelector_OnSelectedAgainDelegate__DelegateSignature_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB91A0
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged");

	UCoreButtonSelector_OnButtonSelectedChanged_Params params {};
	params.selectedButton = selectedButton;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9120
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonSelector::OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain");

	UCoreButtonSelector_OnButtonSelectedAgain_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB8F90
//		Name   -> Function DBDUIViewsCore.CoreButtonSelector.HasSelection
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreButtonSelector::HasSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonSelector.HasSelection");

	UCoreButtonSelector_HasSelection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FB9F70
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDUIViewsCore_EButtonWidgetVisibility             visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetVisible(DBDUIViewsCore_EButtonWidgetVisibility visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetVisible");

	UCoreButtonWidget_SetVisible_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9C80
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetPressable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isPressable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetPressable(bool isPressable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetPressable");

	UCoreButtonWidget_SetPressable_Params params {};
	params.isPressable = isPressable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9920
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetLabel
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetLabel(const struct FText& label)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetLabel");

	UCoreButtonWidget_SetLabel_Params params {};
	params.label = label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB97C0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isHoverable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetHoverable(bool isHoverable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetHoverable");

	UCoreButtonWidget_SetHoverable_Params params {};
	params.isHoverable = isHoverable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9740
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isHoldable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetHoldable(bool isHoldable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetHoldable");

	UCoreButtonWidget_SetHoldable_Params params {};
	params.isHoldable = isHoldable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB96B0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetEnabled");

	UCoreButtonWidget_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB95B0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetClickable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isClickable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetClickable(bool isClickable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetClickable");

	UCoreButtonWidget_SetClickable_Params params {};
	params.isClickable = isClickable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9530
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isChargeable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetChargeable(bool isChargeable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.SetChargeable");

	UCoreButtonWidget_SetChargeable_Params params {};
	params.isChargeable = isChargeable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature");

	UCoreButtonWidget_OnUnhoveredDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered");

	UCoreButtonWidget_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature");

	UCoreButtonWidget_OnReleasedDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnReleased
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnReleased");

	UCoreButtonWidget_OnReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature");

	UCoreButtonWidget_OnPressedDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnPressed
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnPressed");

	UCoreButtonWidget_OnPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB92F0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered");

	UCoreButtonWidget_OnInternalUnhovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB92D0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased");

	UCoreButtonWidget_OnInternalReleased_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB92B0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed");

	UCoreButtonWidget_OnInternalPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9290
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered");

	UCoreButtonWidget_OnInternalHovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9270
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked");

	UCoreButtonWidget_OnInternalClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature");

	UCoreButtonWidget_OnHoveredDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnHovered
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnHovered");

	UCoreButtonWidget_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnEnabledChanged(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged");

	UCoreButtonWidget_OnEnabledChanged_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature");

	UCoreButtonWidget_OnClickedDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnClicked
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.OnClicked");

	UCoreButtonWidget_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9100
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.IsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreButtonWidget::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreButtonWidget.IsEnabled");

	UCoreButtonWidget_IsEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreRewardWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreRewardWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWidget.ClearData");

	UCoreRewardWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCharacterRewardViewData                    CharacterRewardViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCharacterRewardWidget::SetData(const struct FCharacterRewardViewData& CharacterRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData");

	UCoreCharacterRewardWidget_SetData_Params params {};
	params.CharacterRewardViewData = CharacterRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCurrencyProgressionRewardViewData          CurrencyProgressionRewardViewData                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCurrencyProgressionRewardWidget::SetData(const struct FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetData");

	UCoreCurrencyProgressionRewardWidget_SetData_Params params {};
	params.CurrencyProgressionRewardViewData = CurrencyProgressionRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCustomizationRewardViewData                CustomizationRewardViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCustomizationRewardWidget::SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData");

	UCoreCustomizationRewardWidget_SetData_Params params {};
	params.CustomizationRewardViewData = CustomizationRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression");

	UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation");

	UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9060
//		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FName                                       perkId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalPerk(const struct FName& perkId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk");

	UCoreExternalEffectsWidget_HideExternalPerk_Params params {};
	params.perkId = perkId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB8FC0
//		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FName                                       AddonID                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalAddon(const struct FName& AddonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon");

	UCoreExternalEffectsWidget_HideExternalAddon_Params params {};
	params.AddonID = AddonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB9DE0
//		Name   -> Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       Title                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
//		struct FText                                       Description                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
void UCoreGameManualCategoryButton::SetText(const struct FText& Title, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText");

	UCoreGameManualCategoryButton_SetText_Params params {};
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFE00
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
//		Flags  -> (Final, Native, Private, BlueprintCallable)
void UCoreGameManualPanelWidget::ToggleGameManualMenuState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState");

	UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFD60
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EHelpType                           categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::ShowHelpTopics(DBDSharedTypes_EHelpType categoryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics");

	UCoreGameManualPanelWidget_ShowHelpTopics_Params params {};
	params.categoryType = categoryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF340
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		DBDUIViewInterfaces_EGameManualMenuState           menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState");

	UCoreGameManualPanelWidget_SetGameManualMenuState_Params params {};
	params.menuState = menuState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF170
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
//		Flags  -> (Final, Native, Private, BlueprintCallable)
void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle");

	UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               resetTopicsScroll                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::ResetScrolls(bool resetTopicsScroll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls");

	UCoreGameManualPanelWidget_ResetScrolls_Params params {};
	params.resetTopicsScroll = resetTopicsScroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF090
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected");

	UCoreGameManualPanelWidget_OnTopicsTabSelected_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF130
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
//		Flags  -> (Final, Native, Private)
void UCoreHudAlertWidget::PopAlert()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert");

	UCoreHudAlertWidget_PopAlert_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF010
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnPopAlertComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete");

	UCoreHudAlertWidget_OnPopAlertComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEEE0
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnClearAlertsComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete");

	UCoreHudAlertWidget_OnClearAlertsComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEC90
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCoreHudAlertWidget::GetRemainingTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime");

	UCoreHudAlertWidget_GetRemainingTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBEBD0
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UCoreBaseUserWidget*>                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts");

	UCoreHudAlertWidget_GetPendingAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBE960
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UCoreBaseUserWidget*>                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts");

	UCoreHudAlertWidget_GetAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBE940
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
//		Flags  -> (Final, Native, Private)
void UCoreHudAlertWidget::ClearAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts");

	UCoreHudAlertWidget_ClearAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData");

	UCoreHudScoreAlertItem_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData");

	UCoreHudStatusEffectAlertItem_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFB10
//		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText");

	UCoreInputPromptTextWidget_SetText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF630
//		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetInputKey(const struct FKey& InputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey");

	UCoreInputPromptTextWidget_SetInputKey_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF700
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::SetInputKey(const struct FKey& InputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey");

	UCoreInputPromptWidget_SetInputKey_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF190
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.SetEnabled");

	UCoreInputPromptWidget_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF150
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreInputPromptWidget::PromptNotFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound");

	UCoreInputPromptWidget_PromptNotFound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::OnEnabledChanged(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged");

	UCoreInputPromptWidget_OnEnabledChanged_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEE10
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInputPromptWidget::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.IsEnabled");

	UCoreInputPromptWidget_IsEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBEB30
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UCoreInputPromptWidget::GetInputShortDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName");

	UCoreInputPromptWidget_GetInputShortDisplayName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBEA40
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UCoreInputPromptWidget::GetInputKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputKey");

	UCoreInputPromptWidget_GetInputKey_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreInputPromptWidget::DisplayPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt");

	UCoreInputPromptWidget_DisplayPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFBE0
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputSwitcherWidget::SetUIAction(DBDInput_EUIActionType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction");

	UCoreInputSwitcherWidget_SetUIAction_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF8A0
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInputSwitcherWidget::SetLabel(const struct FText& label)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel");

	UCoreInputSwitcherWidget_SetLabel_Params params {};
	params.label = label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF220
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputSwitcherWidget::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled");

	UCoreInputSwitcherWidget_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEF60
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered
//		Flags  -> (Final, Native, Private)
void UCoreInputSwitcherWidget::OnInputPromptTriggered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered");

	UCoreInputSwitcherWidget_OnInputPromptTriggered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEE60
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreButtonWidget*                           Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputSwitcherWidget::OnButtonClicked(class UCoreButtonWidget* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked");

	UCoreInputSwitcherWidget_OnButtonClicked_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEB10
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoreKeyListenerInputPromptWidget*           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreKeyListenerInputPromptWidget* UCoreInputSwitcherWidget::GetInputPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt");

	UCoreInputSwitcherWidget_GetInputPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBEA20
//		Name   -> Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoreButtonWidget*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreButtonWidget* UCoreInputSwitcherWidget::GetButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInputSwitcherWidget.GetButton");

	UCoreInputSwitcherWidget_GetButton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBFA40
//		Name   -> Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FStatusEffectViewData>               proficiencyDatas                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionProgressWidget::SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies");

	UCoreInteractionProgressWidget_SetProficiencies_Params params {};
	params.proficiencyDatas = proficiencyDatas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFDE0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::StopIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation");

	UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF560
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey4                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey4(const struct FKey& InputKey4)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4");

	UCoreInteractionPromptActionWidget_SetInputKey4_Params params {};
	params.InputKey4 = InputKey4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF490
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey3                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey3(const struct FKey& InputKey3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3");

	UCoreInteractionPromptActionWidget_SetInputKey3_Params params {};
	params.InputKey3 = InputKey3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF3C0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey2                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey2(const struct FKey& InputKey2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2");

	UCoreInteractionPromptActionWidget_SetInputKey2_Params params {};
	params.InputKey2 = InputKey2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF7D0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey(const struct FKey& InputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey");

	UCoreInteractionPromptActionWidget_SetInputKey_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF110
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation");

	UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEDA0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasThirdPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt");

	UCoreInteractionPromptActionWidget_HasThirdPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBED30
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt");

	UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FBECC0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasFourthPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt");

	UCoreInteractionPromptActionWidget_HasFourthPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::SetData(const struct FInteractionPromptViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData");

	UCoreInteractionPromptWidget_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEF80
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               isLargeTextEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::OnLargeTextSettingsChanged(bool isLargeTextEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged");

	UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params params {};
	params.isLargeTextEnabled = isLargeTextEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreInteractionPromptWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData");

	UCoreInteractionPromptWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFC60
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetUIAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreKeyListenerButtontWidget::SetUIAction(DBDInput_EUIActionType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerButtontWidget.SetUIAction");

	UCoreKeyListenerButtontWidget_SetUIAction_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBFCE0
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreKeyListenerInputPromptWidget::SetUIAction(DBDInput_EUIActionType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction");

	UCoreKeyListenerInputPromptWidget_SetUIAction_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF970
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       label                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreKeyListenerInputPromptWidget::SetLabel(const struct FText& label)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel");

	UCoreKeyListenerInputPromptWidget_SetLabel_Params params {};
	params.label = label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBF2B0
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreKeyListenerInputPromptWidget::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled");

	UCoreKeyListenerInputPromptWidget_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreKeyListenerInputPromptWidget::OnEnabledChanged(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged");

	UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FBEE30
//		Name   -> Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreKeyListenerInputPromptWidget::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled");

	UCoreKeyListenerInputPromptWidget_IsEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(const struct FText& menuTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params params {};
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(const struct FText& menuTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params params {};
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       menuSubTitle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle");

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params params {};
	params.menuTitle = menuTitle;
	params.menuSubTitle = menuSubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle");

	UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC51C0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		bool                                               IsInTutorial                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::SetTitleText(bool IsInTutorial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText");

	UCoreOnboardingMenuWidget_SetTitleText_Params params {};
	params.IsInTutorial = IsInTutorial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4DA0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButtonText
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		bool                                               isFTUE                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::SetBackButtonText(bool isFTUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButtonText");

	UCoreOnboardingMenuWidget_SetBackButtonText_Params params {};
	params.isFTUE = isFTUE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4BA0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain");

	UCoreOnboardingMenuWidget_OnMenuTabSelectedAgain_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4B20
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreSelectableButtonWidget*                 selectedButton                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected");

	UCoreOnboardingMenuWidget_OnMenuTabSelected_Params params {};
	params.selectedButton = selectedButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC5250
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreOnboardingTutorialButtonWidget::SetVisual()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual");

	UCoreOnboardingTutorialButtonWidget_SetVisual_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled");

	UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FOnboardingTutorialButtonViewData           viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               isRefreshingWithAnimation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData");

	UCoreOnboardingTutorialButtonWidget_SetData_Params params {};
	params.viewData = viewData;
	params.isRefreshingWithAnimation = isRefreshingWithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4D20
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::OnRewardReleased(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased");

	UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4CA0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::OnRewardPressed(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed");

	UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4C20
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreButtonWidget*                           buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::OnRewardClicked(class UCoreButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked");

	UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4A00
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreOnboardingTutorialButtonWidget::IsInUnavailableStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep");

	UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FString                                     completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialPanelWidget::SetTutorialSeparators(const struct FString& completedStepId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators");

	UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params params {};
	params.completedStepId = completedStepId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               isWarning                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialPanelWidget::SetTutorialDescription(const struct FText& Description, bool isWarning)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription");

	UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params params {};
	params.Description = Description;
	params.isWarning = isWarning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4A80
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated");

	UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4230
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate");

	UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCorePlayerStatusKillerEffectWidget::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData");

	UCorePlayerStatusKillerEffectWidget_SetKillerData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FB92B0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UCorePlayerStatusKillerEffectWidget::ClearVisual()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual");

	UCorePlayerStatusKillerEffectWidget_ClearVisual_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UCorePlayerStatusKillerEffectK07Widget::AfflictionHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit");

	UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC5270
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_ESleepingUIState                    newSleepState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation");

	UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params {};
	params.newSleepState = newSleepState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4970
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              newTimerProgress                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged");

	UCorePlayerStatusWidget_HasTimerProgressChanged_Params params {};
	params.newTimerProgress = newTimerProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4850
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged");

	UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC47C0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_EPlayerStatus                       newPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus newPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged");

	UCorePlayerStatusWidget_HasPlayerStateChanged_Params params {};
	params.newPlayerState = newPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4730
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_EObsessionUIState                   newObsessionState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged");

	UCorePlayerStatusWidget_HasObsessionStateChanged_Params params {};
	params.newObsessionState = newObsessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4610
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged");

	UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4390
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		DBDSharedTypes_EPlayerStateChangeType              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DBDSharedTypes_EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType");

	UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4370
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCorePlayerStatusKillerEffectWidget*         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget");

	UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4E30
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FRewardWrapperViewData                      viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreRewardWrapperWidget::SetData(const struct FRewardWrapperViewData& viewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData");

	UCoreRewardWrapperWidget_SetData_Params params {};
	params.viewData = viewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC44B0
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoreRewardWidget*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget");

	UCoreRewardWrapperWidget_GetRewardWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4250
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreRewardWrapperWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData");

	UCoreRewardWrapperWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC44D0
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		TMap<struct FString, class UCoreScreenIndicatorWidget*> ReturnValue                                                (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FString, class UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap");

	UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4270
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCoreScreenIndicatorWidget*                  value                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey");

	UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreScreenIndicatorWidget::SetData(const struct FScreenIndicatorViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData");

	UCoreScreenIndicatorWidget_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreScreenIndicatorWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData");

	UCoreScreenIndicatorWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC5080
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSelectableButtonWidget::SetSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected");

	UCoreSelectableButtonWidget_SetSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSelectableButtonWidget::OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature");

	UCoreSelectableButtonWidget_OnSelectedChangedDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSelectableButtonWidget::OnSelectedChanged(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged");

	UCoreSelectableButtonWidget_OnSelectedChanged_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		class UCoreSelectableButtonWidget*                 buttonTarget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSelectableButtonWidget::OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature");

	UCoreSelectableButtonWidget_OnSelectedAgainDelegate__DelegateSignature_Params params {};
	params.buttonTarget = buttonTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC4A60
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreSelectableButtonWidget::IsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected");

	UCoreSelectableButtonWidget_IsSelected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4A30
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreSelectableButtonWidget::IsSelectable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable");

	UCoreSelectableButtonWidget_IsSelectable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4AA0
//		Name   -> Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStartSequenceWidget::OnHideStartSequenceComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete");

	UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreStatusEffectIcon::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget");

	UCoreStatusEffectIcon_UpdateWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::UpdatePercentageFill(float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill");

	UCoreStatusEffectIcon_UpdatePercentageFill_Params params {};
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC5110
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FStatusEffectViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData");

	UCoreStatusEffectIcon_SetStatusEffectData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC5000
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                inactiveTicks                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetInactiveTicks(int inactiveTicks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks");

	UCoreStatusEffectIcon_SetInactiveTicks_Params params {};
	params.inactiveTicks = inactiveTicks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FC45E0
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FStatusEffectViewData                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData");

	UCoreStatusEffectIcon_GetStatusEffectData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FC4350
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCoreStatusEffectIcon::GetInactiveTicks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks");

	UCoreStatusEffectIcon_GetInactiveTicks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FCA6C0
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<struct FName, class UCoreStatusEffectIcon*>   ReturnValue                                                (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap");

	UCoreStatusEffectWidget_GetStatusEffectMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreSubtitlesWidget.SetSubtitlesPosition
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		DBDSharedTypes_ESubtitlesPosition                  Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSubtitlesWidget::SetSubtitlesPosition(DBDSharedTypes_ESubtitlesPosition Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSubtitlesWidget.SetSubtitlesPosition");

	UCoreSubtitlesWidget_SetSubtitlesPosition_Params params {};
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAAC0
//		Name   -> Function DBDUIViewsCore.CoreSubtitlesWidget.OnEntryTimedOut
//		Flags  -> (Final, Native, Private)
void UCoreSubtitlesWidget::OnEntryTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreSubtitlesWidget.OnEntryTimedOut");

	UCoreSubtitlesWidget_OnEntryTimedOut_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAC80
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::RemoveTabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs");

	UCoreTabContainerWidget_RemoveTabs_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCA910
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.Init
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FTabWidgetData>                      tabsData                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::Init(TArray<struct FTabWidgetData> tabsData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabContainerWidget.Init");

	UCoreTabContainerWidget_Init_Params params {};
	params.tabsData = tabsData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCA6A0
//		Name   -> Function DBDUIViewsCore.CoreTabWidget.GetKey
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCoreTabWidget::GetKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTabWidget.GetKey");

	UCoreTabWidget_GetKey_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted");

	UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params {};
	params.removeAfterCompletion = removeAfterCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTutorialObjectivesViewData                 interactionsViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective");

	UCoreTutorialObjectiveItem_InitObjective_Params params {};
	params.interactionsViewData = interactionsViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAC00
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreTutorialObjectiveItem*                  Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted");

	UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB4E0
//		Name   -> Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCurrencyProgressionTooltipViewData         currencyViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCurrencyProgressionTooltipWidget::SetTooltipData(const struct FCurrencyProgressionTooltipViewData& currencyViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData");

	UCurrencyProgressionTooltipWidget_SetTooltipData_Params params {};
	params.currencyViewData = currencyViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FCustomizationTooltipViewData               customizationViewData                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCustomizationTooltipWidget::SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData");

	UCustomizationTooltipWidget_SetTooltipData_Params params {};
	params.customizationViewData = customizationViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB3C0
//		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               IsEquipped                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsOwned                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsLocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCustomizationTooltipWidget::SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText");

	UCustomizationTooltipWidget_SetStatusText_Params params {};
	params.IsEquipped = IsEquipped;
	params.IsOwned = IsOwned;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCADF0
//		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault");

	UDBDImage_SetBrushFromTextureWithDefault_Params params {};
	params.Texture = Texture;
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCACA0
//		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromSoftTextureWithDefault(bool matchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault");

	UDBDImage_SetBrushFromSoftTextureWithDefault_Params params {};
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAFD0
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetHTMLText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText");

	UDBDRichTextBlock_SetHTMLText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCBCE0
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UDBDScrollBox::UpdateDisplayPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt");

	UDBDScrollBox_UpdateDisplayPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAA40
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EControlMode                        controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::OnControlModeChanged(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged");

	UDBDScrollBox_OnControlModeChanged_Params params {};
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAA20
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDScrollBox::IsMouseOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.IsMouseOver");

	UDBDScrollBox_IsMouseOver_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FCA870
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              analogValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::HandleControllerInput(float analogValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput");

	UDBDScrollBox_HandleControllerInput_Params params {};
	params.analogValue = analogValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB220
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase");

	UDBDTextBlock_SetIsUpperCase_Params params {};
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAB70
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged");

	UDBDTextBlock_OnSwitchDockStateChanged_Params params {};
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAAE0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               isLargeText                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged");

	UDBDTextBlock_OnLargeTextSettingsChanged_Params params {};
	params.isLargeText = isLargeText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCA680
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetIsUpperCase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase");

	UDBDTextBlock_GetIsUpperCase_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FCBB50
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCustomizationTooltipViewData               tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip");

	UDBDTooltipManager_ShowCustomizationTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB940
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCurrencyProgressionTooltipViewData         tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCurrencyTooltip(const struct FCurrencyProgressionTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip");

	UDBDTooltipManager_ShowCurrencyTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB700
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCharacterTooltipViewData                   tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip");

	UDBDTooltipManager_ShowCharacterTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCA8F0
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UDBDTooltipManager::HideTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDTooltipManager.HideTooltip");

	UDBDTooltipManager_HideTooltip_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB1A0
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding");

	UDBDWrapBox_SetInnerSlotPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB0A0
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment");

	UDBDWrapBox_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCA5F0
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDBDWrapBoxSlot*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox");

	UDBDWrapBox_AddChildToWrapBox_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02FCB680
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment");

	UDBDWrapBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB2A0
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding");

	UDBDWrapBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB120
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment");

	UDBDWrapBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAF50
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan");

	UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params {};
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCAEC0
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace");

	UDBDWrapBoxSlot_SetFillEmptySpace_Params params {};
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02FCB330
//		Name   -> Function DBDUIViewsCore.TestWidget.SetShowWorkbench
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               showWorkbench                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestWidget::SetShowWorkbench(bool showWorkbench)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIViewsCore.TestWidget.SetShowWorkbench");

	UTestWidget_SetShowWorkbench_Params params {};
	params.showWorkbench = showWorkbench;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

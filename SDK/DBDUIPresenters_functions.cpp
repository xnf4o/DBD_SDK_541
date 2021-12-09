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
//		Offset -> 0x02F7CC60
//		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudPresenter::OnPawnUnpossessed(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed");

	UHudPresenter_OnPawnUnpossessed_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CBE0
//		Name   -> Function DBDUIPresenters.HudPresenter.OnPawnPossessed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHudPresenter::OnPawnPossessed(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.HudPresenter.OnPawnPossessed");

	UHudPresenter_OnPawnPossessed_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CA20
//		Name   -> Function DBDUIPresenters.ExamplePresenter.OnButtonClick
//		Flags  -> (Final, Native, Private)
void UExamplePresenter::OnButtonClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.ExamplePresenter.OnButtonClick");

	UExamplePresenter_OnButtonClick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CA40
//		Name   -> Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDSharedTypes_EHelpType                           categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameManualSubPresenter::OnCategoryCategoryEntered(DBDSharedTypes_EHelpType categoryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered");

	UGameManualSubPresenter_OnCategoryCategoryEntered_Params params {};
	params.categoryType = categoryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CDD0
//		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingMenuPresenter::OnSetUIEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled");

	UOnboardingMenuPresenter_OnSetUIEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CB60
//		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDUIViewInterfaces_EOnboardingMenuState           onboardingMenuState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingMenuPresenter::OnMenuTabSelectedAgain(DBDUIViewInterfaces_EOnboardingMenuState onboardingMenuState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain");

	UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params params {};
	params.onboardingMenuState = onboardingMenuState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CAE0
//		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DBDUIViewInterfaces_EOnboardingMenuState           onboardingMenuState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingMenuPresenter::OnMenuTabSelected(DBDUIViewInterfaces_EOnboardingMenuState onboardingMenuState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected");

	UOnboardingMenuPresenter_OnMenuTabSelected_Params params {};
	params.onboardingMenuState = onboardingMenuState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CA00
//		Name   -> Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
//		Flags  -> (Final, Native, Private)
void UOnboardingMenuPresenter::OnBackAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction");

	UOnboardingMenuPresenter_OnBackAction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CCE0
//		Name   -> Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
//		Flags  -> (Final, Native, Private)
// Parameters:
//		struct FString                                     stepId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     tutorialId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOnboardingTutorialSubPresenter::OnSelectTutorial(const struct FString& stepId, const struct FString& tutorialId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial");

	UOnboardingTutorialSubPresenter_OnSelectTutorial_Params params {};
	params.stepId = stepId;
	params.tutorialId = tutorialId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CAC0
//		Name   -> Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
//		Flags  -> (Final, Native, Public)
void UPawnObserver::OnLocallyObservedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged");

	UPawnObserver_OnLocallyObservedChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CF30
//		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckPresenter::OnUpdateSkillCheckVisual(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual");

	USkillCheckPresenter_OnUpdateSkillCheckVisual_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CEA0
//		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsBonus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkillCheckPresenter::OnShowSkillCheckSuccess(bool IsBonus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess");

	USkillCheckPresenter_OnShowSkillCheckSuccess_Params params {};
	params.IsBonus = IsBonus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CE80
//		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
//		Flags  -> (Final, Native, Private)
void USkillCheckPresenter::OnShowSkillCheckFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail");

	USkillCheckPresenter_OnShowSkillCheckFail_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7CE60
//		Name   -> Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
//		Flags  -> (Final, Native, Private)
void USkillCheckPresenter::OnShowSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck");

	USkillCheckPresenter_OnShowSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
//		Flags  -> (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleTestWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget");

	UUIConsoleCommands_DBD_ToggleTestWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02DB5B80
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
//		Flags  -> (Final, Exec, Native, Public)
void UUIConsoleCommands::DBD_ToggleDPICurve()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve");

	UUIConsoleCommands_DBD_ToggleDPICurve_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetMenuScaleFactor(float ScaleFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor");

	UUIConsoleCommands_DBD_SetMenuScaleFactor_Params params {};
	params.ScaleFactor = ScaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C970
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudVisible(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible");

	UUIConsoleCommands_DBD_SetHudVisible_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              ScaleFactor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetHudScaleFactor(float ScaleFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor");

	UUIConsoleCommands_DBD_SetHudScaleFactor_Params params {};
	params.ScaleFactor = ScaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02F7C8F0
//		Name   -> Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
//		Flags  -> (Final, Exec, Native, Public)
// Parameters:
//		float                                              ApplicationScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUIConsoleCommands::DBD_SetApplicationScale(float ApplicationScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale");

	UUIConsoleCommands_DBD_SetApplicationScale_Params params {};
	params.ApplicationScale = ApplicationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

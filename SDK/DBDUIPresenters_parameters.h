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

// Function DBDUIPresenters.HudPresenter.OnPawnUnpossessed
struct UHudPresenter_OnPawnUnpossessed_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.HudPresenter.OnPawnPossessed
struct UHudPresenter_OnPawnPossessed_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.ExamplePresenter.OnButtonClick
struct UExamplePresenter_OnButtonClick_Params
{
};

// Function DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
struct UGameManualSubPresenter_OnCategoryCategoryEntered_Params
{
	DBDSharedTypes_EHelpType                           categoryType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
struct UOnboardingMenuPresenter_OnSetUIEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
struct UOnboardingMenuPresenter_OnMenuTabSelectedAgain_Params
{
	DBDUIViewInterfaces_EOnboardingMenuState           onboardingMenuState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
struct UOnboardingMenuPresenter_OnMenuTabSelected_Params
{
	DBDUIViewInterfaces_EOnboardingMenuState           onboardingMenuState;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
struct UOnboardingMenuPresenter_OnBackAction_Params
{
};

// Function DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
struct UOnboardingTutorialSubPresenter_OnSelectTutorial_Params
{
	struct FString                                     stepId;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     tutorialId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
struct UPawnObserver_OnLocallyObservedChanged_Params
{
};

// Function DBDUIPresenters.SkillCheckPresenter.OnUpdateSkillCheckVisual
struct USkillCheckPresenter_OnUpdateSkillCheckVisual_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckSuccess
struct USkillCheckPresenter_OnShowSkillCheckSuccess_Params
{
	bool                                               IsBonus;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheckFail
struct USkillCheckPresenter_OnShowSkillCheckFail_Params
{
};

// Function DBDUIPresenters.SkillCheckPresenter.OnShowSkillCheck
struct USkillCheckPresenter_OnShowSkillCheck_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleTestWidget
struct UUIConsoleCommands_DBD_ToggleTestWidget_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_ToggleDPICurve
struct UUIConsoleCommands_DBD_ToggleDPICurve_Params
{
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetMenuScaleFactor
struct UUIConsoleCommands_DBD_SetMenuScaleFactor_Params
{
	float                                              ScaleFactor;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudVisible
struct UUIConsoleCommands_DBD_SetHudVisible_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetHudScaleFactor
struct UUIConsoleCommands_DBD_SetHudScaleFactor_Params
{
	float                                              ScaleFactor;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DBDUIPresenters.UIConsoleCommands.DBD_SetApplicationScale
struct UUIConsoleCommands_DBD_SetApplicationScale_Params
{
	float                                              ApplicationScale;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

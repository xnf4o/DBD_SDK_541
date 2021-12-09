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

// Class DBDUIViewInterfaces.AddonViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAddonViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.AddonViewInterface");
		return ptr;
	}



	void SetData(const struct FAddonViewData& BaseLoadoutPartViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.CoreBaseViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreBaseViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.CoreBaseViewInterface");
		return ptr;
	}



};

// Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEndGameCollapseBarViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.EndGameCollapseBarViewInterface");
		return ptr;
	}



	void StartEndGameScenario();
	void SetEndGameScenarioProgressionValue(float amount);
	void SetEndGameScenarioProgressionMode(bool isSlowMode);
	void InitEndGameScenario();
};

// Class DBDUIViewInterfaces.EquippedItemViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEquippedItemViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.EquippedItemViewInterface");
		return ptr;
	}



	void SetData(const struct FItemBundleViewData& itemBundleData);
	void SetActiveState(bool IsActive);
	void ClearData();
};

// Class DBDUIViewInterfaces.EquippedPowerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEquippedPowerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.EquippedPowerViewInterface");
		return ptr;
	}



	void SetData(const struct FPowerBundleViewData& powerBundleData);
	void SetCarryingMode(bool IsCarrying);
	void SetActiveState(bool IsActive);
	void ClearData();
};

// Class DBDUIViewInterfaces.ExampleViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UExampleViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ExampleViewInterface");
		return ptr;
	}



	void SetExampleText(const struct FString& Text);
	void SetExampleProgressRatio(float Ratio);
};

// Class DBDUIViewInterfaces.ExternalEffectsViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UExternalEffectsViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ExternalEffectsViewInterface");
		return ptr;
	}



	void ShowExternalPerk(const struct FPerkViewData& PerkViewData);
	void ShowExternalAddon(const struct FAddonViewData& AddonViewData);
};

// Class DBDUIViewInterfaces.GameManualViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameManualViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.GameManualViewInterface");
		return ptr;
	}



	void SetCurrentManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState);
	void SetCategoryData(const struct FHelpCategoryData& categoryData, TArray<struct FHelpTopicData> topicsData);
	DBDUIViewInterfaces_EGameManualMenuState GetCurrentManualMenuState();
};

// Class DBDUIViewInterfaces.HookCountViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHookCountViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.HookCountViewInterface");
		return ptr;
	}



	void SetHookCountVisibility(bool visible);
	void SetData(int currentHookCount, int maxHookCount, int initialMaxHookCount);
	void InitWidget();
	void ClearData();
};

// Class DBDUIViewInterfaces.HudAlertViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHudAlertViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.HudAlertViewInterface");
		return ptr;
	}



	void ShowStatusEffectAlert(const struct FStatusEffectAlertViewData& Data);
	void ShowScoreAlert(const struct FScoreAlertViewData& Data);
	void SetScoreEventsVisibility(bool visible);
	void FadeOut(float Delay);
	void FadeIn();
};

// Class DBDUIViewInterfaces.HudObjectivesViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHudObjectivesViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.HudObjectivesViewInterface");
		return ptr;
	}



	void SetHudObjectiveData(const struct FHudObjectivesViewData& HudObjectiveViewData);
	void SetHookCountVisibility(bool visible);
	void SetHookCountData(int currentHookCount, int maxHookCount, int initialMaxHookCount);
	void InitWidget();
	void ClearHookCountData();
	void ClearData();
};

// Class DBDUIViewInterfaces.HudObjectiveViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UHudObjectiveViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.HudObjectiveViewInterface");
		return ptr;
	}



	void SetHudObjectivePosition(bool isHookCountDisplayed);
	void SetHudObjectiveData(const struct FHudObjectiveViewData& HudObjectiveViewData);
	void SetCurrentHudObjectiveHighlight(bool Highlight);
	void ClearData();
};

// Class DBDUIViewInterfaces.InteractionProgressViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractionProgressViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.InteractionProgressViewInterface");
		return ptr;
	}



	void UpdateInputProgress(float Progress, float itemCharge);
	void SetInputProgressPrompt(const struct FInteractionProgressViewData& Data);
	void HideInputProgressPrompt();
};

// Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractionPromptsContainerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.InteractionPromptsContainerViewInterface");
		return ptr;
	}



	void RemovePrompt(const struct FName& ID);
	void RemoveAllPrompts();
	void AddPrompt(const struct FInteractionPromptViewData& Data);
};

// Class DBDUIViewInterfaces.ItemBundleViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UItemBundleViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemBundleViewInterface");
		return ptr;
	}



	void SetData(const struct FItemBundleViewData& ItemBundleViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.ItemInteractionViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UItemInteractionViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemInteractionViewInterface");
		return ptr;
	}



	void SetData(const struct FItemBundleViewData& itemBundleData);
	void ClearData();
};

// Class DBDUIViewInterfaces.ItemViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UItemViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ItemViewInterface");
		return ptr;
	}



	void SetData(const struct FItemViewData& ItemViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.LeaningArrowsViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class ULeaningArrowsViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.LeaningArrowsViewInterface");
		return ptr;
	}



	void SetData(DBDSharedTypes_ELeanState leanState);
};

// Class DBDUIViewInterfaces.MatchResultViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMatchResultViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.MatchResultViewInterface");
		return ptr;
	}



	void UpdateWidget(const struct FMatchResultViewData& Data);
	void PlayAnimationSequence();
};

// Class DBDUIViewInterfaces.OfferingInteractionViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOfferingInteractionViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.OfferingInteractionViewInterface");
		return ptr;
	}



	void SetData(const struct FOfferingViewData& OfferingData);
	void ClearData();
};

// Class DBDUIViewInterfaces.OfferingViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOfferingViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.OfferingViewInterface");
		return ptr;
	}



	void SetData(const struct FOfferingViewData& OfferingViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.OnboardingMenuViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOnboardingMenuViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.OnboardingMenuViewInterface");
		return ptr;
	}



	void SetUIEnabled(bool Enabled);
	void SetOnboardingMenuState(DBDUIViewInterfaces_EOnboardingMenuState State);
	void SetFirstTimeUserExperience(bool ftue);
	void GetOnboardingTutorialInterface();
	void GetGameManualInterface();
};

// Class DBDUIViewInterfaces.OnboardingTutorialViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOnboardingTutorialViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.OnboardingTutorialViewInterface");
		return ptr;
	}



	void UpdateProgress(TArray<struct FOnboardingStepViewData> before, TArray<struct FOnboardingStepViewData> after, TArray<struct FRewardWrapperViewData> Rewards);
	void StopLoadingSpinner();
	void SetUIEnabled(bool Enabled);
	void SetTutorialProgressionFeedbacks(const struct FString& completedStepId, bool isOnboardingEnabled);
	void SetProgress(TArray<struct FOnboardingStepViewData> Progress);
};

// Class DBDUIViewInterfaces.PerksContainerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPerksContainerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PerksContainerViewInterface");
		return ptr;
	}



	void GetPerkInterface(int Index);
};

// Class DBDUIViewInterfaces.PerkViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPerkViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PerkViewInterface");
		return ptr;
	}



	void UpdatePerkCooldown(float cooldownValue);
	void SetData(const struct FPerkViewData& PerkViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.PingStatusViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPingStatusViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PingStatusViewInterface");
		return ptr;
	}



	void SetData(DBDSharedTypes_EPingQuality pingQuality);
};

// Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerStatusesContainerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PlayerStatusesContainerViewInterface");
		return ptr;
	}



	void GetPlayerStatusInterface(int Index);
};

// Class DBDUIViewInterfaces.PlayerStatusViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPlayerStatusViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PlayerStatusViewInterface");
		return ptr;
	}



	void TriggerAfflictionHit();
	void SetTimerProgress(float value, bool IsDeepWound);
	void SetPlayerNameVisibility(bool visible);
	void SetKiller(const struct FGameplayTag& killerTag);
	void SetData(const struct FPlayerStatusViewData& Data);
	void PlayTimerAnimation();
	void PlayHookEscapeFailedAnimation();
	void ClearData();
};

// Class DBDUIViewInterfaces.PowerBundleViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPowerBundleViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PowerBundleViewInterface");
		return ptr;
	}



	void SetData(const struct FPowerBundleViewData& PowerBundleViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.PowerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPowerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.PowerViewInterface");
		return ptr;
	}



	void SetData(const struct FPowerViewData& PowerViewData);
	void ClearData();
};

// Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UScreenIndicatorsContainerViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface");
		return ptr;
	}



	void ShowDirectionIndicator(const struct FScreenIndicatorViewData& Data);
	void RemoveDirectionIndicator(const struct FString& ID);
};

// Class DBDUIViewInterfaces.SkillCheckViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USkillCheckViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.SkillCheckViewInterface");
		return ptr;
	}



	void UpdateProgress(float value);
	void UpdatePositionOffset(int X, int Y);
	void ShowSkillCheckSuccess(bool IsBonus);
	void ShowSkillCheckFail();
	void ShowSkillCheck(const struct FSkillCheckViewData& skillCheckData);
	void HideSkillCheck();
	void ApplyScaleFactor(float Scale);
};

// Class DBDUIViewInterfaces.SpectateBarViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USpectateBarViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.SpectateBarViewInterface");
		return ptr;
	}



	void SetSpectatedName(const struct FString& playerName);
	void SetSpectateBarVisibility(bool IsVisible);
	void SetArrowsVisibility(bool IsVisible);
};

// Class DBDUIViewInterfaces.StartSequenceViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStartSequenceViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.StartSequenceViewInterface");
		return ptr;
	}



	void ShowStartSequence(const struct FStartSequenceViewData& Data);
	void HideStartSequence();
	bool GetIsStartSequenceVisible();
};

// Class DBDUIViewInterfaces.StatusEffectViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusEffectViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.StatusEffectViewInterface");
		return ptr;
	}



	void ShowActiveStatusEffect(const struct FStatusEffectViewData& statusEffectData);
	void RemoveExistingStatusEffect(const struct FName& statusEffectId);
};

// Class DBDUIViewInterfaces.SubtitlesViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USubtitlesViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.SubtitlesViewInterface");
		return ptr;
	}



	void ShowSubtitles(const struct FText& subtitleText, DBDSharedTypes_ESubtitlesPosition Position);
	void SetSubtitlesSize(DBDSharedTypes_ESubtitlesSize Size);
	void SetSubtitlesBackgroundOpacity(DBDSharedTypes_ESubtitlesBackgroundOpacity Opacity);
	void HideSubtitles();
};

// Class DBDUIViewInterfaces.TemplateViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTemplateViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TemplateViewInterface");
		return ptr;
	}



	void TemplateExampleFunction(const struct FTemplateViewData& TemplateData);
};

// Class DBDUIViewInterfaces.TestBuildFlagViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTestBuildFlagViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TestBuildFlagViewInterface");
		return ptr;
	}



	void UpdateWidget(DBDSharedTypes_ETestBuildType testBuildType);
};

// Class DBDUIViewInterfaces.TutorialHighlightViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTutorialHighlightViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialHighlightViewInterface");
		return ptr;
	}



	void SetTutorialHighlight(bool Show, DBDSharedTypes_EHudComponent componentId);
};

// Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTutorialMysteryNoteViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialMysteryNoteViewInterface");
		return ptr;
	}



	void ShowMysteryNote(const struct FNotifTutorialPopupViewData& notifData);
	void HideMysteryNote();
};

// Class DBDUIViewInterfaces.TutorialObjectivesViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTutorialObjectivesViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialObjectivesViewInterface");
		return ptr;
	}



	void RemoveTutorialObjective(const struct FName& ID);
	void RemoveAllTutorialObjectives();
	void CompleteTutorialObjective(const struct FName& ID, bool removeAfterCompletion);
	void AddTutorialObjective(const struct FName& ID, const struct FTutorialObjectivesViewData& InteractionPromptViewData);
};

// Class DBDUIViewInterfaces.TutorialPopupViewInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTutorialPopupViewInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.TutorialPopupViewInterface");
		return ptr;
	}



	void ShowNotifTutorialPopup(const struct FNotifTutorialPopupViewData& notifTutoData);
	void HideTutorialPopup(bool playSoundEffect);
};

// Class DBDUIViewInterfaces.UIUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUIUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewInterfaces.UIUtilities");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

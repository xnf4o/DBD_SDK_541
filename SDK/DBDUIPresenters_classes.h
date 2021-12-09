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

// Class DBDUIPresenters.UIComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UUIComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.UIComponent");
		return ptr;
	}



};

// Class DBDUIPresenters.ContextObserver
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UContextObserver : public UUIComponent
{
public:
	DBDUIPresenters_EContextSection                    ObservedContextSection;                                    // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3A2A[0x3F];                                    // 0x00B9(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.ContextObserver");
		return ptr;
	}



};

// Class DBDUIPresenters.Presenter
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UPresenter : public UUIComponent
{
public:
	bool                                               RequestPresentationAtBeginPlay;                            // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ESlateVisibility                               InitialVisibility;                                         // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MNW2[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 _widget;                                                   // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZPMA[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.Presenter");
		return ptr;
	}



};

// Class DBDUIPresenters.HudPresenter
// 0x0028 (FullSize[0x0108] - InheritedSize[0x00E0])
class UHudPresenter : public UPresenter
{
public:
	class ADBDPlayer*                                  _presentedCharacter;                                       // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDPlayer*                                  _pendingCharacter;                                         // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ADBDSpectator*                               _spectatorPawn;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QE58[0x10];                                    // 0x00F8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.HudPresenter");
		return ptr;
	}



	void OnPawnUnpossessed(class APawn* Pawn);
	void OnPawnPossessed(class APawn* Pawn);
};

// Class DBDUIPresenters.ExamplePresenter
// 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
class UExamplePresenter : public UHudPresenter
{
public:
	class UClass*                                      ExampleWidgetClass;                                        // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSS5[0x38];                                    // 0x0110(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.ExamplePresenter");
		return ptr;
	}



	void OnButtonClick();
};

// Class DBDUIPresenters.FocusHandler
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UFocusHandler : public UUIComponent
{
public:
	unsigned char                                      UnknownData_QTIC[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.FocusHandler");
		return ptr;
	}



};

// Class DBDUIPresenters.SubPresenter
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class USubPresenter : public UUIComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.SubPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.GameManualSubPresenter
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UGameManualSubPresenter : public USubPresenter
{
public:
	unsigned char                                      _gameManualWidget[0x10];                                   // 0x00B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.GameManualSubPresenter");
		return ptr;
	}



	void OnCategoryCategoryEntered(DBDSharedTypes_EHelpType categoryType);
};

// Class DBDUIPresenters.HudObjectivesPresenter
// 0x0050 (FullSize[0x0158] - InheritedSize[0x0108])
class UHudObjectivesPresenter : public UHudPresenter
{
public:
	class UClass*                                      CoreHudObjectivesWidgetClass;                              // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9M08[0x48];                                    // 0x0110(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.HudObjectivesPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.HudRootContainer
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UHudRootContainer : public UUIComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.HudRootContainer");
		return ptr;
	}



};

// Class DBDUIPresenters.OnboardingMenuPresenter
// 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
class UOnboardingMenuPresenter : public UPresenter
{
public:
	class UClass*                                      OnboardingMenuWidgetClass;                                 // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOnboardingTutorialSubPresenter*             _onboardingTutorialSubPresenter;                           // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameManualSubPresenter*                     _gameManualSubPresenter;                                   // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USubPresenter*                               _activeSubPresenter;                                       // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T7OR[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.OnboardingMenuPresenter");
		return ptr;
	}



	void OnSetUIEnabled(bool Enabled);
	void OnMenuTabSelectedAgain(DBDUIViewInterfaces_EOnboardingMenuState onboardingMenuState);
	void OnMenuTabSelected(DBDUIViewInterfaces_EOnboardingMenuState onboardingMenuState);
	void OnBackAction();
};

// Class DBDUIPresenters.OnboardingTutorialSubPresenter
// 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
class UOnboardingTutorialSubPresenter : public USubPresenter
{
public:
	unsigned char                                      _onboardingTutorialWidget[0x10];                           // 0x00B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_2DRW[0x50];                                    // 0x00C8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.OnboardingTutorialSubPresenter");
		return ptr;
	}



	void OnSelectTutorial(const struct FString& stepId, const struct FString& tutorialId);
};

// Class DBDUIPresenters.PawnObserver
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UPawnObserver : public UUIComponent
{
public:
	unsigned char                                      UnknownData_NNNT[0x20];                                    // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       _pawn;                                                     // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.PawnObserver");
		return ptr;
	}



	void OnLocallyObservedChanged();
};

// Class DBDUIPresenters.PresenterGroup
// 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
class APresenterGroup : public AActor
{
public:
	class UContextObserver*                            ContextObserver;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFocusHandler*                               FocusHandler;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPawnObserver*                               PawnObserver;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URootContainer*                              RootContainer;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.PresenterGroup");
		return ptr;
	}



};

// Class DBDUIPresenters.PresenterGroupHandler
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UPresenterGroupHandler : public UUIComponent
{
public:
	class UClass*                                      PresenterGroupClass;                                       // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APresenterGroup*                             _presenterGroup;                                           // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.PresenterGroupHandler");
		return ptr;
	}



};

// Class DBDUIPresenters.RootContainer
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class URootContainer : public UUIComponent
{
public:
	class UClass*                                      RootWidgetClass;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              UnfocusedOpacity;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XQQN[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 _rootWidget;                                               // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.RootContainer");
		return ptr;
	}



};

// Class DBDUIPresenters.SkillCheckPresenter
// 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
class USkillCheckPresenter : public UHudPresenter
{
public:
	class UClass*                                      SkillCheckWidgetClass;                                     // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BA9[0x30];                                    // 0x0110(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.SkillCheckPresenter");
		return ptr;
	}



	void OnUpdateSkillCheckVisual(bool IsActive);
	void OnShowSkillCheckSuccess(bool IsBonus);
	void OnShowSkillCheckFail();
	void OnShowSkillCheck();
};

// Class DBDUIPresenters.SubtitlesPresenter
// 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
class USubtitlesPresenter : public UPresenter
{
public:
	class UClass*                                      SubtitlesWidgetClass;                                      // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IJ3[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.SubtitlesPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.TemplatePresenter
// 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
class UTemplatePresenter : public UHudPresenter
{
public:
	class UClass*                                      TemplateWidgetClass;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHJ1[0x18];                                    // 0x0110(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.TemplatePresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.TestPresenter
// 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
class UTestPresenter : public UPresenter
{
public:
	class UClass*                                      TestWidgetClass;                                           // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_800W[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.TestPresenter");
		return ptr;
	}



};

// Class DBDUIPresenters.UIConsoleCommands
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UUIConsoleCommands : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIPresenters.UIConsoleCommands");
		return ptr;
	}



	void DBD_ToggleTestWidget();
	void DBD_ToggleDPICurve();
	void DBD_SetMenuScaleFactor(float ScaleFactor);
	void DBD_SetHudVisible(bool IsVisible);
	void DBD_SetHudScaleFactor(float ScaleFactor);
	void DBD_SetApplicationScale(float ApplicationScale);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

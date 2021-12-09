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

// Class DBDUIViewsMobile.FriendsMenuUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFriendsMenuUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.FriendsMenuUtilities");
		return ptr;
	}



};

// Class DBDUIViewsMobile.MatchConfigDifficultyDataAsset
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UMatchConfigDifficultyDataAsset : public UPrimaryDataAsset
{
public:
	TMap<DBDUIViewsMobile_ECustomMatchDifficulty, struct FMatchConfigDifficultyData> DifficultiesData;                                          // 0x0038(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.MatchConfigDifficultyDataAsset");
		return ptr;
	}



};

// Class DBDUIViewsMobile.MatchConfigOptionsDataAsset
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UMatchConfigOptionsDataAsset : public UPrimaryDataAsset
{
public:
	TMap<DBDUIViewsMobile_ECustomMatchOptions, struct FMatchOptionAssetData> OptionsData;                                               // 0x0038(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.MatchConfigOptionsDataAsset");
		return ptr;
	}



};

// Class DBDUIViewsMobile.MatchConfigTabsDataAsset
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UMatchConfigTabsDataAsset : public UPrimaryDataAsset
{
public:
	TMap<DBDUIViewsMobile_ECustomMatchTab, struct FMatchConfigTabData> Data;                                                      // 0x0038(0x0050) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.MatchConfigTabsDataAsset");
		return ptr;
	}



};

// Class DBDUIViewsMobile.MobileBaseUserWidget
// 0x00A0 (FullSize[0x0300] - InheritedSize[0x0260])
class UMobileBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_CY8J[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     HighlightWidget;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       _tutorialAnimationName;                                    // 0x0278(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _tutorialNumberOfLoops;                                    // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZKDI[0x78];                                    // 0x0288(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.MobileBaseUserWidget");
		return ptr;
	}



	void TutorialAnimationFinished();
	void TryBroadcastOnHighlightWidgetClicked();
	void TriggerTutorialVisuals();
	void PropagateOnHighlightWidgetClicked(const struct FName& onBoardingID);
	void OnSynchronizeProperties();
	bool IsInTutorialState();
	void FinishTutorialVisuals();
};

// Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule
// 0x0018 (FullSize[0x0318] - InheritedSize[0x0300])
class UUMGAtlantaCustomMatchLobbyRule : public UMobileBaseUserWidget
{
public:
	class UTextBlock*                                  RuleName;                                                  // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  OptionName;                                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K7Z6[0x8];                                     // 0x0310(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen
// 0x0038 (FullSize[0x0338] - InheritedSize[0x0300])
class UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget
{
public:
	class UUMGBaseButtonWidget*                        EditButton;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                RulesBox;                                                  // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CustomMatchTitle;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MatchRulesTitle;                                           // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RFM3[0x18];                                    // 0x0320(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen");
		return ptr;
	}



	void HandleEditConfigButtonClicked();
};

// Class DBDUIViewsMobile.UMGPageScrollWidget
// 0x0130 (FullSize[0x0430] - InheritedSize[0x0300])
class UUMGPageScrollWidget : public UMobileBaseUserWidget
{
public:
	float                                              ItemWidth;                                                 // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ItemHeight;                                                // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowCount;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnCount;                                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemGapDistance;                                           // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPageCount;                                            // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ButtonWidth;                                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DES[0x4];                                     // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnPageChangeSound;                                         // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                                ContainerPanel;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              ButtonsPanel;                                              // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      _pageButtonWidgetClass[0x30];                              // 0x0338(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	TArray<class UCanvasPanel*>                        _itemArray;                                                // 0x0368(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                _currentPageIndex;                                         // 0x0378(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EP0K[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMobileBaseUserWidget*>               _activeWidgets;                                            // 0x0380(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H0UA[0xA0];                                    // 0x0390(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGPageScrollWidget");
		return ptr;
	}



	void HandlePageButtonClicked(int pageIndex);
};

// Class DBDUIViewsMobile.UMGGridPageScrollWidget
// 0x0008 (FullSize[0x0438] - InheritedSize[0x0430])
class UUMGGridPageScrollWidget : public UUMGPageScrollWidget
{
public:
	unsigned char                                      UnknownData_Z36D[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGGridPageScrollWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll
// 0x0160 (FullSize[0x0598] - InheritedSize[0x0438])
class UUMGAtlantaMatchConfigPageScroll : public UUMGGridPageScrollWidget
{
public:
	struct FCustomMatchTabConfig                       CharactersTabConfig;                                       // 0x0438(0x0040) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomMatchTabConfig                       InventoryTabConfig;                                        // 0x0478(0x0040) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomMatchTabConfig                       MapTabConfig;                                              // 0x04B8(0x0040) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JZLS[0xA0];                                    // 0x04F8(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGBaseButtonWidget
// 0x0130 (FullSize[0x0430] - InheritedSize[0x0300])
class UUMGBaseButtonWidget : public UMobileBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBaseButtonClickedEvent;                                  // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonPressedEvent;                                  // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonReleasedEvent;                                 // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBaseButtonLongPressEvent;                                // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UButton*                                     Button;                                                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      IconPicture;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ButtonLabel;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 ButtonPictureBrush;                                        // 0x0358(0x0090) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ButtonText;                                                // 0x03E8(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnPressSound;                                              // 0x0400(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnClickSound;                                              // 0x0408(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnLongPressSound;                                          // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnReleaseSound;                                            // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnHoveredSound;                                            // 0x0420(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M0NY[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGBaseButtonWidget");
		return ptr;
	}



	void OnBaseButtonReleased__DelegateSignature();
	void OnBaseButtonPressed__DelegateSignature();
	void OnBaseButtonLongPress__DelegateSignature();
	void OnBaseButtonClicked__DelegateSignature();
	void HandleButtonReleasedEvent();
	void HandleButtonPressedEvent();
	void HandleButtonLongPressEvent();
	void HandleButtonHoveredEvent();
	void HandleButtonClickedEvent();
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem
// 0x0040 (FullSize[0x0470] - InheritedSize[0x0430])
class UUMGAtlantaMatchConfigPageScrollItem : public UUMGBaseButtonWidget
{
public:
	class UCanvasPanel*                                ImagePanel;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                DefaultPanel;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      DefaultImage;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _unselectedOpacity;                                        // 0x0448(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              _selectedOpacity;                                          // 0x044C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTUZ[0x20];                                    // 0x0450(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigScreen
// 0x01D8 (FullSize[0x04D8] - InheritedSize[0x0300])
class UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget
{
public:
	class UUMGAtlantaMatchConfigPageScroll*            MatchConfigPageScroll;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              TabsBox;                                                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                BotsTabsBox;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGBaseButtonWidget*                        BackButton;                                                // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MatchConfigTitle;                                          // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  InventoryTitle;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SelectedTabTitle;                                          // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMatchConfigTabsDataAsset*                   TabsDataAsset;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 SmallTabSeparation;                                        // 0x0340(0x0090) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 BigTabSeparation;                                          // 0x03D0(0x0090) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              TabsVerticalPadding;                                       // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TabsHorizontalPadding;                                     // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LG1C[0x70];                                    // 0x0468(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaMatchConfigScreen");
		return ptr;
	}



	void HandleBackButtonClicked();
};

// Class DBDUIViewsMobile.UMGAtlantaMatchConfigTab
// 0x0030 (FullSize[0x0460] - InheritedSize[0x0430])
class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget
{
public:
	class USizeBox*                                    IconSizeBox;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TabName;                                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                RandomPanel;                                               // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1LNY[0x18];                                    // 0x0448(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaMatchConfigTab");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGAtlantaRequestRoleButton
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class UUMGAtlantaRequestRoleButton : public UUMGBaseButtonWidget
{
public:
	class UWidgetSwitcher*                             IconSwitcher;                                              // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LI0P[0x8];                                     // 0x0438(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGAtlantaRequestRoleButton");
		return ptr;
	}



	void SetIsActive(bool IsActive);
	void OnToggleActiveState(bool IsActive);
	bool GetIsActive();
};

// Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget
// 0x0058 (FullSize[0x0358] - InheritedSize[0x0300])
class UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
{
public:
	unsigned char                                      UnknownData_0SDE[0x18];                                    // 0x0300(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMGFriendButtonWidget*                      InviteToPartyButton;                                       // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      MuteButton;                                                // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      UnmuteButton;                                              // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      RemoveFriendButton;                                        // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGFriendButtonWidget*                      RemovePlayerFromPartyButton;                               // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5G5P[0x10];                                    // 0x0340(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               TransitionOutAnimationSound;                               // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget");
		return ptr;
	}



	void HandleActionTriggered(DBDUIViewsMobile_EActionOnFriendType actionType);
};

// Class DBDUIViewsMobile.UMGBaseFriendListElement
// 0x00C0 (FullSize[0x03C0] - InheritedSize[0x0300])
class UUMGBaseFriendListElement : public UMobileBaseUserWidget
{
public:
	class UImage*                                      StatusPicture;                                             // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FriendName;                                                // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FriendStatus;                                              // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                SelectionHighlight;                                        // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGBaseButtonWidget*                        ItemSelectionBaseButton;                                   // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                                  ContextualMenuPosition;                                    // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAtlantaFriendUIData                        _cachedFriendData;                                         // 0x0330(0x0068) (Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  FriendUIStatusDataTable;                                   // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_84UC[0x20];                                    // 0x03A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGBaseFriendListElement");
		return ptr;
	}



	void TriggerActionOnThisFriend(DBDUIViewsMobile_EActionOnFriendType actionType);
};

// Class DBDUIViewsMobile.UMGBaseTabButtonWidget
// 0x0070 (FullSize[0x04A0] - InheritedSize[0x0430])
class UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget
{
public:
	unsigned char                                      UnknownData_N9ZR[0x18];                                    // 0x0430(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URichTextBlock*                              TabText;                                                   // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NotificationCountText;                                     // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                NotificationPanel;                                         // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      TabButtonSelected;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      tabIndex;                                                  // 0x0468(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B143[0x7];                                     // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleOfTab;                                                // 0x0470(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A8XX[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     _tabTextParameter;                                         // 0x0490(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGBaseTabButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGBaseTabListWidget
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UUMGBaseTabListWidget : public UMobileBaseUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGBaseTabListWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGExpandableListWidget
// 0x00A0 (FullSize[0x03A0] - InheritedSize[0x0300])
class UUMGExpandableListWidget : public UMobileBaseUserWidget
{
public:
	bool                                               ShouldHideExpandableListIfEmpty;                           // 0x0300(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsExtendedAtStart;                                         // 0x0301(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJXW[0x6];                                     // 0x0302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUMGBaseButtonWidget*                        ExpansionButton;                                           // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                ItemContainer;                                             // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CategorieName;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  itemCount;                                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExpandableArea*                             ExpandableArea;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       HeaderTitle;                                               // 0x0330(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q2LW[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUserWidget*>                         _childWidgets;                                             // 0x0350(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JFVL[0x40];                                    // 0x0360(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGExpandableListWidget");
		return ptr;
	}



	void ToggleExpansion();
};

// Class DBDUIViewsMobile.UMGFriendBaseTabListWidget
// 0x0000 (FullSize[0x0300] - InheritedSize[0x0300])
class UUMGFriendBaseTabListWidget : public UUMGBaseTabListWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendBaseTabListWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendButtonWidget
// 0x0080 (FullSize[0x04B0] - InheritedSize[0x0430])
class UUMGFriendButtonWidget : public UUMGBaseButtonWidget
{
public:
	class UCanvasPanel*                                InteractableButtonStatePanel;                              // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                NonInteractableButtonStatePanel;                           // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NonInteractableExplanationText;                            // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NonInteractableActionText;                                 // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               _isInteractable;                                           // 0x0450(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_65A3[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UImage*                                      NonInteractableImage;                                      // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<DBDUIViewsMobile_EFriendTypeButton, struct FSlateBrush> _nonInteractableImages;                                    // 0x0460(0x0050) (Edit, DisableEditOnInstance, NoClear, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendContextualMenuWidget
// 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
class UUMGFriendContextualMenuWidget : public UUMGBaseFriendListContextualMenuWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendContextualMenuWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendElementWidget
// 0x01D8 (FullSize[0x0598] - InheritedSize[0x03C0])
class UUMGFriendElementWidget : public UUMGBaseFriendListElement
{
public:
	class UImage*                                      FavoriteSlot;                                              // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     FavoriteButton;                                            // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectionImage;                                            // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectedPicture;                                           // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      FriendIcon;                                                // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 UnFavoriteBrush;                                           // 0x03E8(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 FavoriteBrush;                                             // 0x0478(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 MutedBrush;                                                // 0x0508(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendElementWidget");
		return ptr;
	}



	void HandleSelectionButton();
	void HandleFavoriteButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendListTabWidget
// 0x0018 (FullSize[0x0318] - InheritedSize[0x0300])
class UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    SentInviteToParty;                                         // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    ConnectedFriendsExpandableList;                            // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    DisconnectedFriendsExpandableList;                         // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendListTabWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGFriendPartyListElementWidget
// 0x0138 (FullSize[0x06D0] - InheritedSize[0x0598])
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
{
public:
	class UWidgetSwitcher*                             ButtonOrStatusSwitcher;                                    // 0x0598(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     CancelInviteButton;                                        // 0x05A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      PartyStatusImage;                                          // 0x05A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 IconNotReady;                                              // 0x05B0(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 IconReady;                                                 // 0x0640(0x0090) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendPartyListElementWidget");
		return ptr;
	}



	void HandleCancelInviteButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendSearchBarWidget
// 0x0040 (FullSize[0x0340] - InheritedSize[0x0300])
class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget
{
public:
	unsigned char                                      UnknownData_I15O[0x30];                                    // 0x0300(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditableTextBox*                            InputTextField;                                            // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGBaseButtonWidget*                        SearchButton;                                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendSearchBarWidget");
		return ptr;
	}



	void HandleTextInputChanged(const struct FText& textInput);
	void HandleSearchButtonClicked();
};

// Class DBDUIViewsMobile.UMGFriendTabButtonWidget
// 0x0050 (FullSize[0x04F0] - InheritedSize[0x04A0])
class UUMGFriendTabButtonWidget : public UUMGBaseTabButtonWidget
{
public:
	unsigned char                                      UnknownData_JZ11[0x50];                                    // 0x04A0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGFriendTabButtonWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGRequestsListTabWidget
// 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
class UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    FriendRequestExpandableList;                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    PendingExpandableList;                                     // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGRequestsListTabWidget");
		return ptr;
	}



};

// Class DBDUIViewsMobile.UMGScrollListPageButton
// 0x0028 (FullSize[0x0328] - InheritedSize[0x0300])
class UUMGScrollListPageButton : public UMobileBaseUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                pageIndex;                                                 // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EKNV[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UButton*                                     ActionButton;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectedImage;                                             // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGScrollListPageButton");
		return ptr;
	}



	void SetIsSelected(bool selected);
	void HandleActionButtonClick();
};

// Class DBDUIViewsMobile.UMGSuggestionsListTabWidget
// 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
class UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
{
public:
	class UUMGExpandableListWidget*                    PlayedWithFriendsExpandableList;                           // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUMGExpandableListWidget*                    SocialFriendsExpandableList;                               // 0x0308(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DBDUIViewsMobile.UMGSuggestionsListTabWidget");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

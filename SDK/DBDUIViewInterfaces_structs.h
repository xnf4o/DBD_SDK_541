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
// Enums
//---------------------------------------------------------------------------

// Enum DBDUIViewInterfaces.EOnboardingMenuState
enum class DBDUIViewInterfaces_EOnboardingMenuState : uint8_t
{
	EOnboardingMenuState__Tutorial = 0,
	EOnboardingMenuState__GameManual = 1,
	EOnboardingMenuState__EOnboardingMenuState_MAX = 2,

};

// Enum DBDUIViewInterfaces.EGameManualMenuState
enum class DBDUIViewInterfaces_EGameManualMenuState : uint8_t
{
	EGameManualMenuState__Categories = 0,
	EGameManualMenuState__Topics   = 1,
	EGameManualMenuState__EGameManualMenuState_MAX = 2,

};

// Enum DBDUIViewInterfaces.ESingleHookState
enum class DBDUIViewInterfaces_ESingleHookState : uint8_t
{
	ESingleHookState__EMPTY        = 0,
	ESingleHookState__UNHOOKED     = 1,
	ESingleHookState__HOOKED       = 2,
	ESingleHookState__DISCONNECTED = 3,
	ESingleHookState__ESingleHookState_MAX = 4,

};

// Enum DBDUIViewInterfaces.EHudStatusEffectAlertViewType
enum class DBDUIViewInterfaces_EHudStatusEffectAlertViewType : uint8_t
{
	EHudStatusEffectAlertViewType__Unhandled = 0,
	EHudStatusEffectAlertViewType__Perk = 1,
	EHudStatusEffectAlertViewType__Item = 2,
	EHudStatusEffectAlertViewType__Addon = 3,
	EHudStatusEffectAlertViewType__EHudStatusEffectAlertViewType_MAX = 4,

};

// Enum DBDUIViewInterfaces.EInteractionPromptType
enum class DBDUIViewInterfaces_EInteractionPromptType : uint8_t
{
	EInteractionPromptType__PressButton = 0,
	EInteractionPromptType__MashButton = 1,
	EInteractionPromptType__HoldButton = 2,
	EInteractionPromptType__AlternateTwoButtons = 3,
	EInteractionPromptType__WiggleThumbstick = 4,
	EInteractionPromptType__MovementAxes = 5,
	EInteractionPromptType__MovementKeys = 6,
	EInteractionPromptType__EInteractionPromptType_MAX = 7,

};

// Enum DBDUIViewInterfaces.EKillerResult
enum class DBDUIViewInterfaces_EKillerResult : uint8_t
{
	EKillerResult__DisgracefulDefeat = 0,
	EKillerResult__EntityDispleased = 1,
	EKillerResult__BrutalKiller    = 2,
	EKillerResult__RuthlessKiller  = 3,
	EKillerResult__MercilessKiller = 4,
	EKillerResult__EKillerResult_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDUIViewInterfaces.BaseLoadoutPartViewData
// 0x0058
struct FBaseLoadoutPartViewData
{
	struct FName                                       ItemId;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GQO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      IconTexture[0x30];                                         // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FString                                     DisplayName;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         Rarity;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EMG[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.AddonViewData
// 0x0008 (0x0060 - 0x0058)
struct FAddonViewData : public FBaseLoadoutPartViewData
{
	float                                              Cooldown;                                                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZX0R[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.RewardViewData
// 0x0002
struct FRewardViewData
{
	bool                                               IsLocked;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHighlighted;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.CharacterTooltipViewData
// 0x0070
struct FCharacterTooltipViewData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       Biography;                                                 // 0x0018(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       DLCTitle;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Prestige;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNewInStore;                                              // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableInStore;                                        // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDLCPurchasable;                                          // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_ECharacterDifficulty                Difficulty;                                                // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEnabled;                                                 // 0x0056(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJIS[0x1];                                     // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CharacterDisabledMessage;                                  // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.CharacterRewardViewData
// 0x0096 (0x0098 - 0x0002)
struct FCharacterRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_DWO4[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8M9[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Level;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Prestige;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3QC5[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterTooltipViewData                   TooltipData;                                               // 0x0020(0x0070) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                               IsEnabled;                                                 // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QLT1[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.CurrencyProgressionTooltipViewData
// 0x0080
struct FCurrencyProgressionTooltipViewData
{
	bool                                               IsCurrency;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34U8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       EndTiming;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      TooltipHeaderMaterial[0x30];                               // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DBDUIViewInterfaces.CurrencyProgressionRewardViewData
// 0x00E6 (0x00E8 - 0x0002)
struct FCurrencyProgressionRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_J1TJ[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                amount;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RewardBackgroundMaterial[0x30];                            // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      RewardIcon[0x30];                                          // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FCurrencyProgressionTooltipViewData         TooltipData;                                               // 0x0068(0x0080) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PriceViewData
// 0x0010
struct FPriceViewData
{
	DBDSharedTypes_ECurrencyType                       currencyType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZY1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Price;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Discount;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAffordable;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_97A1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.CustomizationTooltipViewData
// 0x00C8
struct FCustomizationTooltipViewData
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       ParentName;                                                // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FText                                       RarityPartInfo;                                            // 0x0030(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       CollectionDisplayName;                                     // 0x0048(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0060(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       RoleCategoryInfo;                                          // 0x0078(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                               IsLocked;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnbreakable;                                             // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0092(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0093(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerRole                         AssociatedRole;                                            // 0x0094(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         Rarity;                                                    // 0x0095(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYB8[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPriceViewData>                      Prices;                                                    // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEnabled;                                                 // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DME[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CustomizationDisabledMessage;                              // 0x00B0(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.CustomizationRewardViewData
// 0x00E6 (0x00E8 - 0x0002)
struct FCustomizationRewardViewData : public FRewardViewData
{
	unsigned char                                      UnknownData_AU48[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemRarity                         Rarity;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOwned;                                                   // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEquipped;                                                // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnbreakable;                                             // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E54L[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomizationTooltipViewData               TooltipData;                                               // 0x0018(0x00C8) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	bool                                               IsEnabled;                                                 // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F9C3[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.PerkViewData
// 0x0010 (0x0068 - 0x0058)
struct FPerkViewData : public FBaseLoadoutPartViewData
{
	int                                                Level;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PTLQ[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StackCount;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ItemViewData
// 0x0038 (0x0090 - 0x0058)
struct FItemViewData : public FBaseLoadoutPartViewData
{
	bool                                               IsEnergyTypeValid;                                         // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7X92[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyLevel;                                               // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                count;                                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3BF[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        InputKey;                                                  // 0x0068(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLimitedItem;                                             // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZYOU[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectAlertViewData
// 0x01A0
struct FStatusEffectAlertViewData
{
	struct FString                                     StatusEffectName;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      StatusEffectIcon[0x30];                                    // 0x0010(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EHudStatusEffectAlertViewType  SourceViewType;                                            // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JU6L[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPerkViewData                               PerkViewData;                                              // 0x0048(0x0068) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FItemViewData                               ItemViewData;                                              // 0x00B0(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAddonViewData                              AddonViewData;                                             // 0x0140(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScoreAlertViewData
// 0x0020
struct FScoreAlertViewData
{
	DBDSharedTypes_EDBDScoreCategory                   scoreType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OU4G[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScoreValue;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Progress;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.HudObjectivesViewData
// 0x0008
struct FHudObjectivesViewData
{
	DBDSharedTypes_EPlayerTeam                         playerTeam;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHatchOpen;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4PS[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                nbGeneratorsLeft;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.HudObjectiveViewData
// 0x0008
struct FHudObjectiveViewData
{
	DBDSharedTypes_EPlayerTeam                         playerTeam;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isHatchOpen;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OKV0[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                nbGeneratorsLeft;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.StatusEffectViewData
// 0x0050
struct FStatusEffectViewData
{
	struct FName                                       ID;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K74C[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      IconTexture[0x30];                                         // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	DBDSharedTypes_EStatusEffectType                   StatusEffectType;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_POCN[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Level;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percentage;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A32V[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.InteractionProgressViewData
// 0x0068
struct FInteractionProgressViewData
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondaryMessage;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           BarColor;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EBarColor                           ChargeBarColor;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIcon;                                                  // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowIconCharge;                                            // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JWTI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ItemIcon[0x30];                                            // 0x0024(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FStatusEffectViewData>               Proficiencies;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.InteractionPromptViewData
// 0x00B0
struct FInteractionPromptViewData
{
	struct FName                                       ID;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_963E[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EInteractionPromptType         Type;                                                      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2JDQ[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        InputKey1;                                                 // 0x0028(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        InputKey2;                                                 // 0x0048(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        InputKey3;                                                 // 0x0068(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        InputKey4;                                                 // 0x0088(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlaceInCenter;                                             // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMEG[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.ItemBundleViewData
// 0x0150
struct FItemBundleViewData
{
	struct FItemViewData                               Item;                                                      // 0x0000(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAddonViewData                              Addon1;                                                    // 0x0090(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAddonViewData                              Addon2;                                                    // 0x00F0(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.MatchResultViewData
// 0x0008
struct FMatchResultViewData
{
	bool                                               IsSlasher;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EGameState                          SurvivorResult;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDUIViewInterfaces_EKillerResult                  KillerResult;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9TB[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.NotifTutorialPopupViewData
// 0x0080
struct FNotifTutorialPopupViewData
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Icon[0x30];                                                // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Image[0x30];                                               // 0x0050(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct DBDUIViewInterfaces.OfferingViewData
// 0x0008 (0x0060 - 0x0058)
struct FOfferingViewData : public FBaseLoadoutPartViewData
{
	int                                                StackCount;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EItemAvailability                   Availability;                                              // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVUO[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.RewardWrapperViewData
// 0x0270
struct FRewardWrapperViewData
{
	DBDSharedTypes_ERewardType                         RewardType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_55AD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterRewardViewData                    CharacterRewardViewData;                                   // 0x0008(0x0098) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCurrencyProgressionRewardViewData          CurrencyProgressionRewardViewData;                         // 0x00A0(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCustomizationRewardViewData                CustomizationRewardViewData;                               // 0x0188(0x00E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.OnboardingTutorialViewData
// 0x0078
struct FOnboardingTutorialViewData
{
	struct FString                                     tutorialId;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               COMPLETED;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MainRewardClaimed;                                         // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z47N[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRewardWrapperViewData>              MainRewards;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRewardWrapperViewData>              AlternativeRewards;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingTutorialType             TutorialType;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingTutorialButtonStyle      ButtonStyle;                                               // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0FC[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayName;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0058(0x0018) (Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.OnboardingStepViewData
// 0x0028
struct FOnboardingStepViewData
{
	struct FString                                     stepId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EOnboardingStepStatus               Status;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_92ZE[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FOnboardingTutorialViewData>         Tutorials;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.DoctorStatusData
// 0x0001
struct FDoctorStatusData
{
	DBDSharedTypes_EAfflictionLevel                    AfflictionLevel;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ExecutionerStatusData
// 0x0004
struct FExecutionerStatusData
{
	float                                              AgonyProgress;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.GhostStatusData
// 0x0008
struct FGhostStatusData
{
	bool                                               IsExposed;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E09V[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StalkingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.NightmareStatusData
// 0x000C
struct FNightmareStatusData
{
	DBDSharedTypes_ESleepingUIState                    SleepingState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6A7E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SleepingProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SleepProtectionRemainingDuration;                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PigStatusData
// 0x0008
struct FPigStatusData
{
	DBDSharedTypes_EReverseBearTrapUIState             ReverseBearTrapState;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5I3B[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PlagueStatusData
// 0x0008
struct FPlagueStatusData
{
	DBDSharedTypes_ESicknessLevel                      SicknessLevel;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_19CA[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SicknessProgress;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TwinsStatusData
// 0x0001
struct FTwinsStatusData
{
	bool                                               TwinsActive;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.TricksterStatusData
// 0x000C
struct FTricksterStatusData
{
	float                                              CurrentLacerationLevel;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumLacerationLevel;                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDangerousLacerationLevel;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WasRecentlyDamagedByLaceration;                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZLWF[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.K24StatusData
// 0x0001
struct FK24StatusData
{
	bool                                               IsContaminated;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.K25StatusData
// 0x0008
struct FK25StatusData
{
	float                                              ChainHuntProgressPercentage;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHoldingLamentConfiguration;                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSolvingLamentConfiguration;                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MSYI[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.K26StatusData
// 0x0001
struct FK26StatusData
{
	bool                                               IsCrowAttached;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.PlayerStatusViewData
// 0x0080
struct FPlayerStatusViewData
{
	struct FString                                     playerName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PlayerPortraitIcon;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PlayerPortraitIconOverride;                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EPlayerStatus                       PlayerStatusState;                                         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMJV[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimerProgress;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDeepWound;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBroken;                                                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsLocalPlayerAKiller;                                      // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EObsessionUIState                   ObsessionState;                                            // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrainStage;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDoctorStatusData                           DoctorStatusData;                                          // 0x0030(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3D57[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExecutionerStatusData                      ExecutionerStatusData;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGhostStatusData                            GhostStatusData;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FNightmareStatusData                        NightmareStatusData;                                       // 0x0040(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPigStatusData                              PigStatusData;                                             // 0x004C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPlagueStatusData                           PlagueStatusData;                                          // 0x0054(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwinsStatusData                            TwinsStatusData;                                           // 0x005C(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YP7[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTricksterStatusData                        TricksterStatusData;                                       // 0x0060(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FK24StatusData                              K24StatusData;                                             // 0x006C(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7R5S[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FK25StatusData                              K25StatusData;                                             // 0x0070(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FK26StatusData                              K26StatusData;                                             // 0x0078(0x0001) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AMDR[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.PowerViewData
// 0x0030 (0x0088 - 0x0058)
struct FPowerViewData : public FBaseLoadoutPartViewData
{
	struct FKey                                        InputKey;                                                  // 0x0058(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsRechargeable;                                            // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsActivated;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EW5M[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                count;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressValue;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowKeyPrompt;                                             // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCountDisplayForced;                                      // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZLA[0x2];                                     // 0x0086(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.PowerBundleViewData
// 0x0148
struct FPowerBundleViewData
{
	struct FPowerViewData                              Power;                                                     // 0x0000(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAddonViewData                              Addon1;                                                    // 0x0088(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAddonViewData                              Addon2;                                                    // 0x00E8(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct DBDUIViewInterfaces.ScreenIndicatorViewData
// 0x0030
struct FScreenIndicatorViewData
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInFront;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98U2[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScreenPosition;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IndicatorIcon;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EHudScreenIndicatorType             IndicatorType;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SEWB[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.SkillCheckViewData
// 0x0038
struct FSkillCheckViewData
{
	struct FKey                                        InputKey;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaStart;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitAreaLength;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusAreaStart;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BonusAreaLength;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsHexed;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsSpectating;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReversed;                                                // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMirrored;                                                // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInsane;                                                  // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5047[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.StartSequenceViewData
// 0x0028
struct FStartSequenceViewData
{
	struct FString                                     ThemeName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	DBDSharedTypes_EThemeColorId                       ThemeColorId;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I1AL[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.TemplateViewData
// 0x0001
struct FTemplateViewData
{
	unsigned char                                      UnknownData_SCY0[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct DBDUIViewInterfaces.TutorialObjectivesViewData
// 0x0170
struct FTutorialObjectivesViewData
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInteractionPromptViewData                  PrimaryInteractionPromptViewData;                          // 0x0010(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInteractionPromptViewData                  SecondaryInteractionPromptViewData;                        // 0x00C0(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

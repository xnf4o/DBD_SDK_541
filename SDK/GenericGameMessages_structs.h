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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GenericGameMessages.OpenCurrentCalendarMessage
// 0x0004
struct FOpenCurrentCalendarMessage
{
	int                                                RemainingDailyRewards;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.LoginMessage
// 0x0010
struct FLoginMessage
{
	struct FString                                     MirrorsId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.RateAppMessage
// 0x0001
struct FRateAppMessage
{
	unsigned char                                      UnknownData_L6ML[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.UserCenterMessage
// 0x0001
struct FUserCenterMessage
{
	unsigned char                                      UnknownData_TKCP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.ForceLogoutMessage
// 0x0001
struct FForceLogoutMessage
{
	unsigned char                                      UnknownData_BXLF[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.SkuDetailsMessage
// 0x0050
struct FSkuDetailsMessage
{
	TMap<struct FString, struct FString>               BundlePrices;                                              // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.BuyTipsMessage
// 0x0004
struct FBuyTipsMessage
{
	int                                                Result;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.OrderDoneMessage
// 0x0028
struct FOrderDoneMessage
{
	int                                                Code;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LCBZ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OrderId;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OrderChannel;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.BuyCurrencyMessage
// 0x0010
struct FBuyCurrencyMessage
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.FAQMessage
// 0x0001
struct FFAQMessage
{
	unsigned char                                      UnknownData_GJIU[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.LanguageMessage
// 0x0010
struct FLanguageMessage
{
	struct FString                                     Language;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.PlayerNameMessage
// 0x0010
struct FPlayerNameMessage
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.GameVersionMessage
// 0x0010
struct FGameVersionMessage
{
	struct FString                                     Version;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.MatchEndMessage
// 0x0001
struct FMatchEndMessage
{
	unsigned char                                      UnknownData_4FKS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.RoleUnlockMessage
// 0x0001
struct FRoleUnlockMessage
{
	unsigned char                                      UnknownData_AOYG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.PlayerLevelMessage
// 0x0008
struct FPlayerLevelMessage
{
	int                                                Level;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalXp;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GenericGameMessages.TutorialEndMessage
// 0x0001
struct FTutorialEndMessage
{
	unsigned char                                      UnknownData_H8NM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.LoginJsonMessage
// 0x0038
struct FLoginJsonMessage
{
	struct FString                                     LoginJson;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginType;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleID;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsNewAccount;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ONNQ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.LoadEndMessage
// 0x0001
struct FLoadEndMessage
{
	unsigned char                                      UnknownData_78M4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.LoadStartMessage
// 0x0001
struct FLoadStartMessage
{
	unsigned char                                      UnknownData_6BFN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.SDKEndMessage
// 0x0001
struct FSDKEndMessage
{
	unsigned char                                      UnknownData_UCZY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.SDKUIMessage
// 0x0001
struct FSDKUIMessage
{
	unsigned char                                      UnknownData_EKAM[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.PatchFailMessage
// 0x0001
struct FPatchFailMessage
{
	unsigned char                                      UnknownData_WVXW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.PatchEndMessage
// 0x0001
struct FPatchEndMessage
{
	unsigned char                                      UnknownData_8CFS[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct GenericGameMessages.PatchStartMessage
// 0x0001
struct FPatchStartMessage
{
	unsigned char                                      UnknownData_MU1X[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

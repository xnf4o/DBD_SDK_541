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

// ScriptStruct DynamicContent.LRUTextureCache
// 0x0068
struct FLRUTextureCache
{
	unsigned char                                      UnknownData_YK9K[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UTexture2DDynamic*>       _cachedTextures;                                           // 0x0010(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VJM6[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamicContent.TaskContainer
// 0x0018
struct FTaskContainer
{
	class UDownloadMultiTextureTask*                   DownloadTask;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18DG[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamicContent.LoadingImagesHintInfo
// 0x00C8
struct FLoadingImagesHintInfo
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Transient, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (Transient, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Icon;                                                      // 0x0030(0x0090) (Transient, NativeAccessSpecifierPublic)
	bool                                               IsAvailableForKiller;                                      // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableForSurvivor;                                    // 0x00C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08JD[0x6];                                     // 0x00C2(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamicContent.LoadingImages
// 0x0038
struct FLoadingImages
{
	struct FName                                       ID;                                                        // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OPCH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSlateBrush>                         Images;                                                    // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLoadingImagesHintInfo>              ImagesHintInfo;                                            // 0x0020(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableForSurvivor;                                    // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAvailableForKiller;                                      // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsGenericImages;                                           // 0x0032(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5C5[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct DynamicContent.BaseBannerData
// 0x0038
struct FBaseBannerData
{
	unsigned char                                      UnknownData_CLSR[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQZ7[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TitleId;                                                   // 0x0010(0x0018) (Transient, NativeAccessSpecifierPublic)
	struct FString                                     BannerContentId;                                           // 0x0028(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct DynamicContent.MarketingBannerData
// 0x0028 (0x0060 - 0x0038)
struct FMarketingBannerData : public FBaseBannerData
{
	struct FText                                       SubTitleId;                                                // 0x0038(0x0018) (Transient, NativeAccessSpecifierPublic)
	struct FString                                     DeepLink;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

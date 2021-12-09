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

// Class DynamicContent.AsyncTaskDownloadCacheImage
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     _url;                                                      // 0x0058(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.AsyncTaskDownloadCacheImage");
		return ptr;
	}



};

// Class DynamicContent.DownloadingTextureTask
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UDownloadingTextureTask : public UObject
{
public:
	class UAsyncTaskDownloadCacheImage*                _downloadingTask;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     _url;                                                      // 0x0038(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CQL7[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2DDynamic*                           _downloadedTexture;                                        // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.DownloadingTextureTask");
		return ptr;
	}



	void OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded);
	void OnDownloadFailed(class UTexture2DDynamic* textureDownloaded);
};

// Class DynamicContent.DownloadMultiTextureTask
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UDownloadMultiTextureTask : public UObject
{
public:
	TArray<class UDownloadingTextureTask*>             _downloadingTasks;                                         // 0x0030(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WOVG[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UTexture2DDynamic*>       _downloadedTextures;                                       // 0x0058(0x0050) (Transient, NativeAccessSpecifierPrivate)
	int                                                _remainingTasks;                                           // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E9CP[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.DownloadMultiTextureTask");
		return ptr;
	}



	void OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted);
};

// Class DynamicContent.DynamicContentHolder
// 0x01C8 (FullSize[0x0200] - InheritedSize[0x0038])
class UDynamicContentHolder : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_J1JM[0x138];                                   // 0x0038(0x0138) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLRUTextureCache                            _loadedTextures;                                           // 0x0170(0x0068) (Transient, NativeAccessSpecifierPrivate)
	TArray<struct FTaskContainer>                      _currentTasks;                                             // 0x01D8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULoopBannerProvider*                         _marketingBannerProvider;                                  // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULoopBannerProvider*                         _eventsBannerProvider;                                     // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULoadingImagesDataProvider*                  _loadingImagesDataProvider;                                // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.DynamicContentHolder");
		return ptr;
	}



	void OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask);
};

// Class DynamicContent.LoadingImagesDataProvider
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class ULoadingImagesDataProvider : public UObject
{
public:
	TMap<struct FName, struct FLoadingImages>          _cachedLoadingImages;                                      // 0x0030(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UDynamicContentHolder*                       _owningDynamicContentHolder;                               // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.LoadingImagesDataProvider");
		return ptr;
	}



};

// Class DynamicContent.LoopBannerProvider
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class ULoopBannerProvider : public UObject
{
public:
	unsigned char                                      UnknownData_ZJPQ[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                _currentLoopIndex;                                         // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NI40[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DynamicContent.LoopBannerProvider");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

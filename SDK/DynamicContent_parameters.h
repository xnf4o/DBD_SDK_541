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

// Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
struct UDownloadingTextureTask_OnDownloadSucceeded_Params
{
	class UTexture2DDynamic*                           textureDownloaded;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DynamicContent.DownloadingTextureTask.OnDownloadFailed
struct UDownloadingTextureTask_OnDownloadFailed_Params
{
	class UTexture2DDynamic*                           textureDownloaded;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
struct UDownloadMultiTextureTask_OnTextureDownloadComplete_Params
{
	class UDownloadingTextureTask*                     taskCompleted;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
struct UDynamicContentHolder_OnDownloadingTaskComplete_Params
{
	class UDownloadMultiTextureTask*                   completeTask;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

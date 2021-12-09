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

// Class BeUtil.BeMaterialEditorHelper
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBeMaterialEditorHelper : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class BeUtil.BeMaterialEditorHelper");
		return ptr;
	}



	class UTexture* STATIC_ReloadTexture(class UTexture* InTexture, const struct FString& InSourceName);
	void STATIC_EditMaterialConstant(class UMaterialInstanceConstant* InMaterialInstance, TArray<struct FBeMaterialScalar> InScalars, TArray<struct FBeMaterialVector> InVectors, TArray<struct FBeMaterialTexture> InTextures);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

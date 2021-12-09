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

// Class UITween.UITween
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UUITween : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_J2XP[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUITweenInstance*>                    ActiveInstances;                                           // 0x0040(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UITween.UITween");
		return ptr;
	}



	class UUITweenInstance* STATIC_Create(class UWidget* targetWidget, float Duration, float Delay, UITween_EEasingType Easing);
	void STATIC_Clear(class UWidget* targetWidget);
};

// Class UITween.UITweenMaterialScalarProperties
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UUITweenMaterialScalarProperties : public UObject
{
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22Y8[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UITween.UITweenMaterialScalarProperties");
		return ptr;
	}



};

// Class UITween.UITweenMaterialVectorProperties
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UUITweenMaterialVectorProperties : public UObject
{
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3A5O[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UITween.UITweenMaterialVectorProperties");
		return ptr;
	}



};

// Class UITween.UITweenInstance
// 0x00D8 (FullSize[0x0108] - InheritedSize[0x0030])
class UUITweenInstance : public UObject
{
public:
	struct FScriptMulticastDelegate                    TweenCompletedDelegate;                                    // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    TweenUpdatedDelegate;                                      // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACRC[0x98];                                    // 0x0050(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUITweenMaterialScalarProperties*>    _materialScalarProperties;                                 // 0x00E8(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UUITweenMaterialVectorProperties*>    _materialVectorProperties;                                 // 0x00F8(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UITween.UITweenInstance");
		return ptr;
	}



	class UUITweenInstance* ToTranslation(const struct FVector2D& targetValue);
	class UUITweenInstance* ToScale(const struct FVector2D& targetValue);
	class UUITweenInstance* ToReset();
	class UUITweenInstance* ToOpacity(float targetValue);
	class UUITweenInstance* ToMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, const struct FLinearColor& targetValue);
	class UUITweenInstance* ToMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, float targetValue);
	class UUITweenInstance* ToColor(const struct FLinearColor& targetValue);
	class UWidget* GetTargetWidget();
	float GetProgress();
	UITween_EEasingType GetEasing();
	float GetDuration();
	float GetDelay();
	class UUITweenInstance* FromTranslation(const struct FVector2D& startValue);
	class UUITweenInstance* FromScale(const struct FVector2D& startValue);
	class UUITweenInstance* FromOpacity(float startValue);
	class UUITweenInstance* FromMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, const struct FLinearColor& targetValue);
	class UUITweenInstance* FromMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, const struct FName& targetParameterName, float targetValue);
	class UUITweenInstance* FromColor(const struct FLinearColor& startValue);
	class UUITweenInstance* Easing(UITween_EEasingType InType);
	void Begin();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

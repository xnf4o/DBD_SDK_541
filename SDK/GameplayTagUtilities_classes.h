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

// Class GameplayTagUtilities.DBDGameplayTagUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UDBDGameplayTagUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTagUtilities.DBDGameplayTagUtilities");
		return ptr;
	}



	struct FName STATIC_GetScoreModifierName(const struct FName& scoreEventID);
	bool STATIC_GameplayTagExists(const struct FName& TagName);
};

// Class GameplayTagUtilities.GameplayTagContainerComponent
// 0x0070 (FullSize[0x0128] - InheritedSize[0x00B8])
class UGameplayTagContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9UT3[0x70];                                    // 0x00B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTagUtilities.GameplayTagContainerComponent");
		return ptr;
	}



	void Remove(const struct FGameplayTag& State);
	void Add(const struct FGameplayTag& State);
};

// Class GameplayTagUtilities.ObjectStateProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UObjectStateProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTagUtilities.ObjectStateProvider");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

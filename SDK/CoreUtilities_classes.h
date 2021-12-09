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

// Class CoreUtilities.CoreUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUtilities.CoreUtilities");
		return ptr;
	}



	TArray<int> STATIC_GetRandomValuesFromArray(TArray<int> Values, int numberOfDesiredValues);
	class UGameInstance* STATIC_GetGameInstance(class UObject* WorldContextObject);
};

// Class CoreUtilities.PropertyParser
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UPropertyParser : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUtilities.PropertyParser");
		return ptr;
	}



	void STATIC_CopyProperties(class UActorComponent* Dest, class UActorComponent* Origin, bool copyTransform, TArray<struct FName> propertiesToExclude);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

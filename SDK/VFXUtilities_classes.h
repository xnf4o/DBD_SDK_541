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

// Class VFXUtilities.BaseVFX
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ABaseVFX : public AActor
{
public:
	bool                                               _shouldLoadOnServer;                                       // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E2A5[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VFXUtilities.BaseVFX");
		return ptr;
	}



};

// Class VFXUtilities.VFXUtilities
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UVFXUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VFXUtilities.VFXUtilities");
		return ptr;
	}



	void STATIC_SetParticleSystemsActive(bool Active, bool Reset);
	void STATIC_SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

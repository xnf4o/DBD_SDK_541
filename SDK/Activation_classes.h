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

// Class Activation.ActivatableMock
// 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
class UActivatableMock : public UActorComponent
{
public:
	unsigned char                                      UnknownData_U952[0x50];                                    // 0x00B8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Activation.ActivatableMock");
		return ptr;
	}



};

// Class Activation.ActivatorComponent
// 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
class UActivatorComponent : public UActorComponent
{
public:
	bool                                               _searchForActivatableSubAnimInstances;                     // 0x00B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GCZU[0x3F];                                    // 0x00B9(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Activation.ActivatorComponent");
		return ptr;
	}



	void SetObjectState(class UGameplayTagContainerComponent* objectState);
};

// Class Activation.Activatable
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UActivatable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Activation.Activatable");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

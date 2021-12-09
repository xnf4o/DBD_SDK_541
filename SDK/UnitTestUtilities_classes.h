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

// Class UnitTestUtilities.TestInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTestInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ATestActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestActor");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorComponent
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestActorComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestActorComponent");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorComponentImplementingTestInterface
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTestActorComponentImplementingTestInterface : public UActorComponent
{
public:
	unsigned char                                      UnknownData_3EWM[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestActorComponentImplementingTestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestActorImplementingTestInterface
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ATestActorImplementingTestInterface : public AActor
{
public:
	unsigned char                                      UnknownData_CHQG[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestActorImplementingTestInterface");
		return ptr;
	}



};

// Class UnitTestUtilities.TestMovableActor
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ATestMovableActor : public AActor
{
public:
	class UBoxComponent*                               BoxComponent;                                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UnitTestUtilities.TestMovableActor");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

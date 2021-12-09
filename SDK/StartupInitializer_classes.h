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

// Class StartupInitializer.StartupInitializer
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UStartupInitializer : public UObject
{
public:
	unsigned char                                      UnknownData_KMYF[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StartupInitializer.StartupInitializer");
		return ptr;
	}



};

// Class StartupInitializer.ClientStartupInitializer
// 0x0138 (FullSize[0x01A8] - InheritedSize[0x0070])
class UClientStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_KBOW[0x138];                                   // 0x0070(0x0138) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StartupInitializer.ClientStartupInitializer");
		return ptr;
	}



	void OnHealthCheckTriggered(bool requestSuccess, int ProviderError, bool datetimeIsSet, const struct FDateTime& utcTime);
};

// Class StartupInitializer.DedicatedServerStartupInitializer
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UDedicatedServerStartupInitializer : public UStartupInitializer
{
public:
	unsigned char                                      UnknownData_IN4A[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDBDTimeUtilities*                           _dbdTimeUtilities;                                         // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GNJ3[0x28];                                    // 0x0080(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class StartupInitializer.DedicatedServerStartupInitializer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

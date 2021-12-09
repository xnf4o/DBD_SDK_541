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

// Class SentryIo.SentryIoBaseSubsystem
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USentryIoBaseSubsystem : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SentryIo.SentryIoBaseSubsystem");
		return ptr;
	}



};

// Class SentryIo.SentryIoSubsystem
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class USentryIoSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_QOWE[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SentryIo.SentryIoSubsystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

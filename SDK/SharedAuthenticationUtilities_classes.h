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

// Class SharedAuthenticationUtilities.SharedAuthenticationComponent
// 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])
class USharedAuthenticationComponent : public UObject
{
public:
	int                                                PopupZOrder;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2TED[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AuthenticationProviderSelectionWidget;                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AuthenticationProviderSelectionWidgetToLoad[0x30];         // 0x0040(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      LoginBackgroundToLoadWidgetToLoadMap[0x50];                // 0x0070(0x0050) UNKNOWN PROPERTY: MapProperty
	class UObject*                                     _worldContextObject;                                       // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MUVW[0xC0];                                    // 0x00C8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USharedAuthenticationMigrateComponent*       _migrateComponent;                                         // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SharedAuthenticationUtilities.SharedAuthenticationComponent");
		return ptr;
	}



};

// Class SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class USharedAuthenticationMigrateComponent : public UObject
{
public:
	class UObject*                                     _worldContextObject;                                       // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7QG0[0x38];                                    // 0x0038(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent");
		return ptr;
	}



};

// Class SharedAuthenticationUtilities.UMGAuthenticationProviderSelection
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UUMGAuthenticationProviderSelection : public UUserWidget
{
public:
	bool                                               _isAsia;                                                   // 0x0260(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8VRA[0x37];                                    // 0x0261(0x0037) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SharedAuthenticationUtilities.UMGAuthenticationProviderSelection");
		return ptr;
	}



	void UpdateWidgetsVisibility();
	void ShowMigrationFailedPopup();
	void SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider);
	void SetMigrateWarningMessageAndShowPopup(const struct FString& playerName);
};

// Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UUMGAutheticationProviderSelection : public UUserWidget
{
public:
	unsigned char                                      UnknownData_DWJE[0x18];                                    // 0x0260(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SharedAuthenticationUtilities.UMGAutheticationProviderSelection");
		return ptr;
	}



	void SetSelectedAuthenticationProvider(SharedAuthenticationUtilities_ESharedAuthenticationProvider Provider);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

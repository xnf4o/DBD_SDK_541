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
// Enums
//---------------------------------------------------------------------------

// Enum SharedAuthenticationUtilities.ESharedAuthenticationTokenType
enum class SharedAuthenticationUtilities_ESharedAuthenticationTokenType : uint8_t
{
	ESharedAuthenticationTokenType__None = 0,
	ESharedAuthenticationTokenType__AccessToken = 1,
	ESharedAuthenticationTokenType__AuthorizationCode = 2,
	ESharedAuthenticationTokenType__IdentityToken = 3,
	ESharedAuthenticationTokenType__ESharedAuthenticationTokenType_MAX = 4,

};

// Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
enum class SharedAuthenticationUtilities_ESharedAuthenticationProvider : uint8_t
{
	ESharedAuthenticationProvider__None = 0,
	ESharedAuthenticationProvider__Facebook = 1,
	ESharedAuthenticationProvider__Google = 2,
	ESharedAuthenticationProvider__NetEase = 3,
	ESharedAuthenticationProvider__Kraken = 4,
	ESharedAuthenticationProvider__SignInWithApple = 5,
	ESharedAuthenticationProvider__ESharedAuthenticationProvider_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
// 0x0030
struct FAuthenticationRequestState
{
	unsigned char                                      UnknownData_DF5T[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

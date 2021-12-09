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

// Enum CampaignEvents.EEventEffectTypes
enum class CampaignEvents_EEventEffectTypes : uint8_t
{
	EEventEffectTypes__Bloodpoints = 0,
	EEventEffectTypes__Experience  = 1,
	EEventEffectTypes__RetentionRewards = 2,
	EEventEffectTypes__PromoPack   = 3,
	EEventEffectTypes__EventItemsPack = 4,
	EEventEffectTypes__ProvingGroundCharacterRand = 5,
	EEventEffectTypes__ProvingGroundStore = 6,
	EEventEffectTypes__EEventEffectTypes_MAX = 7,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

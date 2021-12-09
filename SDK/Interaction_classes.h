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

// Class Interaction.AIInteractableTargetInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAIInteractableTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.AIInteractableTargetInterface");
		return ptr;
	}



};

// Class Interaction.Interaction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteraction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.Interaction");
		return ptr;
	}



};

// Class Interaction.InteractionPerformer
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInteractionPerformer : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Interaction.InteractionPerformer");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Enum AnimationUtilities.EEditorCollectionType
enum class AnimationUtilities_EEditorCollectionType : uint8_t
{
	Animation                      = 0,
	BlendSpace                     = 1,
	Selector                       = 2,
	EEditorCollectionType_MAX      = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimationUtilities.TaggedAnimSequence
// 0x0028
struct FTaggedAnimSequence
{
	class UAnimSequence*                               Sequence;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       Tags;                                                      // 0x0008(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.AnimSequenceSelector
// 0x0018
struct FAnimSequenceSelector
{
	class UAnimSequence*                               _selected;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FTaggedAnimSequence>                 _taggedSequences;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct AnimationUtilities.AnimationMontageDescriptor
// 0x0020
struct FAnimationMontageDescriptor
{
	struct FName                                       MontageID;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TP1I[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Tags;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.MontagePlaybackDefinition
// 0x0028
struct FMontagePlaybackDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                                // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Follower;                                                  // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTCV[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.SocketOrBoneCache
// 0x0060
struct FSocketOrBoneCache
{
	unsigned char                                      _sourceAnimation[0x30];                                    // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       _socketName;                                               // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       _notifyName;                                               // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     _location;                                                 // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                                    _rotation;                                                 // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct AnimationUtilities.EditorCollectionMetadata
// 0x0001
struct FEditorCollectionMetadata
{
	unsigned char                                      UnknownData_HVN2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.EditorAnimCollectionDisplay
// 0x00F0
struct FEditorAnimCollectionDisplay
{
	TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSequencesMetadata;                              // 0x0000(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata;                            // 0x0050(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FEditorCollectionMetadata> _taggedAnimSelectorsMetadata;                              // 0x00A0(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AnimationUtilities.MontageStopDefinition
// 0x0028
struct FMontageStopDefinition
{
	struct FAnimationMontageDescriptor                 Descriptor;                                                // 0x0000(0x0020) (Transient, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                              // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TDRG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AnimationUtilities.TaggedAnimCollection
// 0x0040
struct FTaggedAnimCollection
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x000C) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25QT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AnimCollection[0x30];                                      // 0x000C(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

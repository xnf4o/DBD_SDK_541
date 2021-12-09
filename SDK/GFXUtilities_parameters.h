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
// Parameters
//---------------------------------------------------------------------------

// Function GFXUtilities.BatchMeshCommands.UpdateMaterials
struct UBatchMeshCommands_UpdateMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.SetVectorParameter
struct UBatchMeshCommands_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewValue;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetTextureParameter
struct UBatchMeshCommands_SetTextureParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    newTexture;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
struct UBatchMeshCommands_SetStencilIntegerScalarParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewValue;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetScalarParameter
struct UBatchMeshCommands_SetScalarParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewValue;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInMainPass
struct UBatchMeshCommands_SetRenderInMainPass_Params
{
	bool                                               inRenderInMainPass;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
struct UBatchMeshCommands_SetRenderInCustomDepth_Params
{
	bool                                               renderInCustomDepth;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
struct UBatchMeshCommands_SetRenderInCustomColourNoDepth_Params
{
	bool                                               renderInCustomColour;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetReceivesDecals
struct UBatchMeshCommands_SetReceivesDecals_Params
{
	bool                                               receivesDecals;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetMaterial
struct UBatchMeshCommands_SetMaterial_Params
{
	struct FString                                     GroupName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
struct UBatchMeshCommands_SetLightingChannelForAllMeshes_Params
{
	struct FLightingChannels                           LightingChannels;                                          // 0x0000(0x0001)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
struct UBatchMeshCommands_SetCustomDepthStencilValue_Params
{
	int                                                stencilValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetColourParameter
struct UBatchMeshCommands_SetColourParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NewValue;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
struct UBatchMeshCommands_SetCastCinematicShadows_Params
{
	bool                                               castCinematicShadows;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
struct UBatchMeshCommands_SetAllToSameMaterial_Params
{
	class UMaterialInterface*                          MaterialInterface;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.ResetMaterials
struct UBatchMeshCommands_ResetMaterials_Params
{
};

// Function GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
struct UBatchMeshCommands_CopyFirstScalarParameter_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              outValue;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetVisibility
struct UBatchMeshCommands_BatchSetVisibility_Params
{
	bool                                               bNewVisibility;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPropagateToChildren;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
struct UBatchMeshCommands_BatchSetSkipComponentAndChildrenTransformUpdate_Params
{
	bool                                               Skip;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
struct UBatchMeshCommands_BatchSetComponentTickEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
struct UClippableProviderComponent_SetIgnoredPrimitives_Params
{
	TArray<class UPrimitiveComponent*>                 ignoredPrimitives;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator
struct UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Params
{
	float                                              IBLMultiplicator;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
struct UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Params
{
	float                                              ContributionFactor;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
struct UDBDReflectionCaptureSpawnerComponent_SetBrightness_Params
{
	float                                              Brightness;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.GFXUtilities.ActivateVFX
struct UGFXUtilities_ActivateVFX_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Active;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
struct ULightIntensityTimelineComponent_SetRandomizeLength_Params
{
	bool                                               isRandom;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetMinLength
struct ULightIntensityTimelineComponent_SetMinLength_Params
{
	float                                              newMinValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
struct ULightIntensityTimelineComponent_SetMaxLength_Params
{
	float                                              newMaxValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
struct ULightIntensityTimelineComponent_SetLightToMaxValue_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
struct ULightIntensityTimelineComponent_SetLightCurve_Params
{
	class UCurveFloat*                                 lightcurve;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.Reset
struct ULightIntensityTimelineComponent_Reset_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
struct ULightIntensityTimelineComponent_RegisterForTick_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
struct ULightIntensityTimelineComponent_DeactivateTick_Params
{
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
struct ULightIntensityTimelineComponent_AddMaterialHelper_Params
{
	class UMaterialHelper*                             matHelper;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       propName;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.LightIntensityTimelineComponent.AddLight
struct ULightIntensityTimelineComponent_AddLight_Params
{
	class ULightComponent*                             Light;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.MaterialHelper.RefreshMeshes
struct UMaterialHelper_RefreshMeshes_Params
{
};

// Function GFXUtilities.MaterialHelper.RefreshMesh
struct UMaterialHelper_RefreshMesh_Params
{
	class UMeshComponent*                              mc;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GFXUtilities.OuterlineComponent.SetIntensity
struct UOuterlineComponent_SetIntensity_Params
{
	float                                              Intensity;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

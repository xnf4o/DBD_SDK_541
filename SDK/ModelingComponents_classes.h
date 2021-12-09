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

// Class ModelingComponents.BaseDynamicMeshComponent
// 0x0048 (FullSize[0x04C0] - InheritedSize[0x0478])
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_02A7[0x8];                                     // 0x0478(0x0008) Fix Super Size
	unsigned char                                      UnknownData_JXAU[0x40];                                    // 0x0480(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.BaseDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.CollectSurfacePathMechanic
// 0x0578 (FullSize[0x05B0] - InheritedSize[0x0038])
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_JYVB[0x578];                                   // 0x0038(0x0578) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.CollectSurfacePathMechanic");
		return ptr;
	}



};

// Class ModelingComponents.ConstructionPlaneMechanic
// 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_57OO[0xA0];                                    // 0x0038(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             PlaneTransformGizmo;                                       // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                             PlaneTransformProxy;                                       // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_72JD[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                   // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.ConstructionPlaneMechanic");
		return ptr;
	}



};

// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	unsigned char                                      UnknownData_A4HD[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshReplacementChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MeshCommandChangeTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.MeshCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	unsigned char                                      UnknownData_GEDY[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPreviewMesh*                                PreviewMesh;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  StandardMaterials;                                         // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          WorkingMaterial;                                           // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZS0E[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute");
		return ptr;
	}



};

// Class ModelingComponents.MeshReplacementCommandChangeTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshReplacementCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.MeshReplacementCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MeshVertexCommandChangeTarget
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMeshVertexCommandChangeTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.MeshVertexCommandChangeTarget");
		return ptr;
	}



};

// Class ModelingComponents.MultiTransformer
// 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
class UMultiTransformer : public UObject
{
public:
	unsigned char                                      UnknownData_J6XH[0xB0];                                    // 0x0030(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformProxy*                             TransformProxy;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5BD[0x50];                                    // 0x00F0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.MultiTransformer");
		return ptr;
	}



};

// Class ModelingComponents.OctreeDynamicMeshComponent
// 0x0110 (FullSize[0x05D0] - InheritedSize[0x04C0])
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	unsigned char                                      UnknownData_ZUNR[0x18];                                    // 0x04C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExplicitShowWireframe;                                    // 0x04D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DC3B[0xF7];                                    // 0x04D9(0x00F7) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.OctreeDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.PlaneDistanceFromHitMechanic
// 0x0448 (FullSize[0x0480] - InheritedSize[0x0038])
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_6ZBO[0x448];                                   // 0x0038(0x0448) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PlaneDistanceFromHitMechanic");
		return ptr;
	}



};

// Class ModelingComponents.PointSetComponent
// 0x0068 (FullSize[0x04E0] - InheritedSize[0x0478])
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          PointMaterial;                                             // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            Bounds;                                                    // 0x0480(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bBoundsDirty;                                              // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WX5I[0x43];                                    // 0x049D(0x0043) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PointSetComponent");
		return ptr;
	}



};

// Class ModelingComponents.PreviewMesh
// 0x0100 (FullSize[0x0130] - InheritedSize[0x0030])
class UPreviewMesh : public UObject
{
public:
	unsigned char                                      UnknownData_LZ7O[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bBuildSpatialDataStructure;                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawOnTop;                                                // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA28[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                      // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T72D[0xD0];                                    // 0x0060(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PreviewMesh");
		return ptr;
	}



};

// Class ModelingComponents.PolyEditPreviewMesh
// 0x03E0 (FullSize[0x0510] - InheritedSize[0x0130])
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	unsigned char                                      UnknownData_67W3[0x3E0];                                   // 0x0130(0x03E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PolyEditPreviewMesh");
		return ptr;
	}



};

// Class ModelingComponents.PolygonSelectionMechanicProperties
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSelectFaces;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectEdges;                                              // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSelectVertices;                                           // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4M2Z[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanicProperties");
		return ptr;
	}



};

// Class ModelingComponents.PolygonSelectionMechanic
// 0x0588 (FullSize[0x05C0] - InheritedSize[0x0038])
class UPolygonSelectionMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_52LM[0x20];                                    // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPolygonSelectionMechanicProperties*         Properties;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCFG[0x560];                                   // 0x0060(0x0560) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanic");
		return ptr;
	}



};

// Class ModelingComponents.PreviewMeshActor
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.PreviewMeshActor");
		return ptr;
	}



};

// Class ModelingComponents.SimpleDynamicMeshComponent
// 0x0120 (FullSize[0x05E0] - InheritedSize[0x04C0])
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	ModelingComponents_EDynamicMeshTangentCalcType     TangentsType;                                              // 0x04C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODPR[0x1F];                                    // 0x04C1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bExplicitShowWireframe;                                    // 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FETA[0x4F];                                    // 0x04E1(0x004F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDrawOnTop;                                                // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BE86[0xAF];                                    // 0x0531(0x00AF) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.SimpleDynamicMeshComponent");
		return ptr;
	}



};

// Class ModelingComponents.SpatialCurveDistanceMechanic
// 0x0418 (FullSize[0x0450] - InheritedSize[0x0038])
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData_PZRV[0x418];                                   // 0x0038(0x0418) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ModelingComponents.SpatialCurveDistanceMechanic");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

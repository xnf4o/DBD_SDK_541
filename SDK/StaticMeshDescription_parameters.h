﻿#pragma once

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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVIndex;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVIndex;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HalfExtents;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             PolygonGroup;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_PlusX;                                           // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_MinusX;                                          // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_PlusY;                                           // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_MinusY;                                          // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_PlusZ;                                           // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonID                                  PolygonID_MinusZ;                                          // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DragonBones.BaseFactory
struct BaseFactory_t19519355;
// DragonBones.DataParser
struct DataParser_t987329487;
// DragonBones.TextureData
struct TextureData_t423192039;
// System.String
struct String_t;
// DragonBones.BuildArmaturePackage
struct BuildArmaturePackage_t1648269093;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.DisplayData
struct DisplayData_t523795982;
// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<DragonBones.TextureAtlasData>
struct List_1_t176778416;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData>
struct Dictionary_2_t2023169130;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>>
struct Dictionary_2_t997196786;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_DataParser987329487.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_BuildArmaturePackage1648269093.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_DisplayData523795982.h"
#include "AssemblyU2DCSharp_DragonBones_Slot2605794020.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_DragonBones_DragonBonesData1202750760.h"
#include "AssemblyU2DCSharp_DragonBones_TextureAtlasData3103560160.h"

// System.Void DragonBones.BaseFactory::.ctor(DragonBones.DataParser)
extern "C"  void BaseFactory__ctor_m1984160969 (BaseFactory_t19519355 * __this, DataParser_t987329487 * ___dataParser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::.cctor()
extern "C"  void BaseFactory__cctor_m2964056713 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.TextureData DragonBones.BaseFactory::_getTextureData(System.String,System.String)
extern "C"  TextureData_t423192039 * BaseFactory__getTextureData_m2992299502 (BaseFactory_t19519355 * __this, String_t* ___textureAtlasName0, String_t* ___textureName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.BaseFactory::_fillBuildArmaturePackage(DragonBones.BuildArmaturePackage,System.String,System.String,System.String,System.String)
extern "C"  bool BaseFactory__fillBuildArmaturePackage_m1335105110 (BaseFactory_t19519355 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, String_t* ___dragonBonesName1, String_t* ___armatureName2, String_t* ___skinName3, String_t* ___textureAtlasName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::_buildBones(DragonBones.BuildArmaturePackage,DragonBones.Armature)
extern "C"  void BaseFactory__buildBones_m221336458 (BaseFactory_t19519355 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, Armature_t2093713247 * ___armature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::_buildSlots(DragonBones.BuildArmaturePackage,DragonBones.Armature)
extern "C"  void BaseFactory__buildSlots_m32115908 (BaseFactory_t19519355 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, Armature_t2093713247 * ___armature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::_replaceSlotDisplay(DragonBones.BuildArmaturePackage,DragonBones.DisplayData,DragonBones.Slot,System.Int32)
extern "C"  void BaseFactory__replaceSlotDisplay_m1105274419 (BaseFactory_t19519355 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, DisplayData_t523795982 * ___displayData1, Slot_t2605794020 * ___slot2, int32_t ___displayIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DragonBonesData DragonBones.BaseFactory::ParseDragonBonesData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  DragonBonesData_t1202750760 * BaseFactory_ParseDragonBonesData_m525975732 (BaseFactory_t19519355 * __this, Dictionary_2_t696267445 * ___rawData0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.TextureAtlasData DragonBones.BaseFactory::ParseTextureAtlasData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Object,System.String,System.Single)
extern "C"  TextureAtlasData_t3103560160 * BaseFactory_ParseTextureAtlasData_m1781180942 (BaseFactory_t19519355 * __this, Dictionary_2_t696267445 * ___rawData0, Il2CppObject * ___textureAtlas1, String_t* ___name2, float ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DragonBonesData DragonBones.BaseFactory::GetDragonBonesData(System.String)
extern "C"  DragonBonesData_t1202750760 * BaseFactory_GetDragonBonesData_m2532675761 (BaseFactory_t19519355 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::AddDragonBonesData(DragonBones.DragonBonesData,System.String)
extern "C"  void BaseFactory_AddDragonBonesData_m1568945173 (BaseFactory_t19519355 * __this, DragonBonesData_t1202750760 * ___data0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::RemoveDragonBonesData(System.String,System.Boolean)
extern "C"  void BaseFactory_RemoveDragonBonesData_m2464432895 (BaseFactory_t19519355 * __this, String_t* ___name0, bool ___disposeData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.TextureAtlasData> DragonBones.BaseFactory::GetTextureAtlasData(System.String)
extern "C"  List_1_t176778416 * BaseFactory_GetTextureAtlasData_m694123025 (BaseFactory_t19519355 * __this, String_t* ___textureAtlasName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::AddTextureAtlasData(DragonBones.TextureAtlasData,System.String)
extern "C"  void BaseFactory_AddTextureAtlasData_m3195636461 (BaseFactory_t19519355 * __this, TextureAtlasData_t3103560160 * ___data0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::RemoveTextureAtlasData(System.String,System.Boolean)
extern "C"  void BaseFactory_RemoveTextureAtlasData_m3949558201 (BaseFactory_t19519355 * __this, String_t* ___name0, bool ___disposeData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::Clear(System.Boolean)
extern "C"  void BaseFactory_Clear_m3061788934 (BaseFactory_t19519355 * __this, bool ___disposeData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Armature DragonBones.BaseFactory::BuildArmature(System.String,System.String,System.String,System.String)
extern "C"  Armature_t2093713247 * BaseFactory_BuildArmature_m283607227 (BaseFactory_t19519355 * __this, String_t* ___armatureName0, String_t* ___dragonBonesName1, String_t* ___skinName2, String_t* ___textureAtlasName3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.BaseFactory::CopyAnimationsToArmature(DragonBones.Armature,System.String,System.String,System.String,System.Boolean)
extern "C"  bool BaseFactory_CopyAnimationsToArmature_m1508857776 (BaseFactory_t19519355 * __this, Armature_t2093713247 * ___toArmature0, String_t* ___fromArmatreName1, String_t* ___fromSkinName2, String_t* ___fromDragonBonesDataName3, bool ___ifRemoveOriginalAnimationList4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::ReplaceSlotDisplay(System.String,System.String,System.String,System.String,DragonBones.Slot,System.Int32)
extern "C"  void BaseFactory_ReplaceSlotDisplay_m1625513063 (BaseFactory_t19519355 * __this, String_t* ___dragonBonesName0, String_t* ___armatureName1, String_t* ___slotName2, String_t* ___displayName3, Slot_t2605794020 * ___slot4, int32_t ___displayIndex5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseFactory::ReplaceSlotDisplayList(System.String,System.String,System.String,DragonBones.Slot)
extern "C"  void BaseFactory_ReplaceSlotDisplayList_m2400471530 (BaseFactory_t19519355 * __this, String_t* ___dragonBonesName0, String_t* ___armatureName1, String_t* ___slotName2, Slot_t2605794020 * ___slot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData> DragonBones.BaseFactory::GetAllDragonBonesData()
extern "C"  Dictionary_2_t2023169130 * BaseFactory_GetAllDragonBonesData_m1213252175 (BaseFactory_t19519355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>> DragonBones.BaseFactory::GetAllTextureAtlasData()
extern "C"  Dictionary_2_t997196786 * BaseFactory_GetAllTextureAtlasData_m86242163 (BaseFactory_t19519355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

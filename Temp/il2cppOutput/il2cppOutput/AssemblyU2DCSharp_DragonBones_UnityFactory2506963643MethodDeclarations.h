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

// DragonBones.UnityFactory
struct UnityFactory_t2506963643;
// DragonBones.DataParser
struct DataParser_t987329487;
// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;
// System.Object
struct Il2CppObject;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.BuildArmaturePackage
struct BuildArmaturePackage_t1648269093;
// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.UnityTextureAtlasData
struct UnityTextureAtlasData_t3478193809;
// System.String
struct String_t;
// DragonBones.UnityArmatureComponent
struct UnityArmatureComponent_t1694836469;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject>
struct IEventDispatcher_1_t3019110679;
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_DataParser987329487.h"
#include "AssemblyU2DCSharp_DragonBones_TextureAtlasData3103560160.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_DragonBones_BuildArmaturePackage1648269093.h"
#include "AssemblyU2DCSharp_DragonBones_SkinSlotData3577659979.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_UnityTextureAtlasDat3478193809.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_TextAsset3836129977.h"

// System.Void DragonBones.UnityFactory::.ctor(DragonBones.DataParser)
extern "C"  void UnityFactory__ctor_m3855008953 (UnityFactory_t2506963643 * __this, DataParser_t987329487 * ___dataParser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::.cctor()
extern "C"  void UnityFactory__cctor_m1387197593 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.TextureAtlasData DragonBones.UnityFactory::_generateTextureAtlasData(DragonBones.TextureAtlasData,System.Object)
extern "C"  TextureAtlasData_t3103560160 * UnityFactory__generateTextureAtlasData_m1333070001 (UnityFactory_t2506963643 * __this, TextureAtlasData_t3103560160 * ___textureAtlasData0, Il2CppObject * ___textureAtlas1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Armature DragonBones.UnityFactory::_generateArmature(DragonBones.BuildArmaturePackage)
extern "C"  Armature_t2093713247 * UnityFactory__generateArmature_m201801084 (UnityFactory_t2506963643 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.UnityFactory::_generateSlot(DragonBones.BuildArmaturePackage,DragonBones.SkinSlotData,DragonBones.Armature)
extern "C"  Slot_t2605794020 * UnityFactory__generateSlot_m2094005202 (UnityFactory_t2506963643 * __this, BuildArmaturePackage_t1648269093 * ___dataPackage0, SkinSlotData_t3577659979 * ___skinSlotData1, Armature_t2093713247 * ___armature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::_refreshTextureAtlas(DragonBones.UnityTextureAtlasData)
extern "C"  void UnityFactory__refreshTextureAtlas_m3212202393 (UnityFactory_t2506963643 * __this, UnityTextureAtlasData_t3478193809 * ___textureAtlasData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::RemoveDragonBonesData(System.String,System.Boolean)
extern "C"  void UnityFactory_RemoveDragonBonesData_m1474662127 (UnityFactory_t2506963643 * __this, String_t* ___name0, bool ___disposeData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::RemoveTextureAtlasData(System.String,System.Boolean)
extern "C"  void UnityFactory_RemoveTextureAtlasData_m3331435465 (UnityFactory_t2506963643 * __this, String_t* ___name0, bool ___disposeData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::Clear(System.Boolean)
extern "C"  void UnityFactory_Clear_m2031681782 (UnityFactory_t2506963643 * __this, bool ___disposeData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.UnityArmatureComponent DragonBones.UnityFactory::BuildArmatureComponent(System.String,System.String,System.String,System.String,UnityEngine.GameObject)
extern "C"  UnityArmatureComponent_t1694836469 * UnityFactory_BuildArmatureComponent_m2846868522 (UnityFactory_t2506963643 * __this, String_t* ___armatureName0, String_t* ___dragonBonesName1, String_t* ___skinName2, String_t* ___textureAtlasName3, GameObject_t3674682005 * ___gameObject4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject DragonBones.UnityFactory::GetTextureDisplay(System.String,System.String)
extern "C"  GameObject_t3674682005 * UnityFactory_GetTextureDisplay_m3060881924 (UnityFactory_t2506963643 * __this, String_t* ___textureName0, String_t* ___textureAtlasName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject> DragonBones.UnityFactory::get_soundEventManager()
extern "C"  Il2CppObject* UnityFactory_get_soundEventManager_m3471231888 (UnityFactory_t2506963643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DragonBonesData DragonBones.UnityFactory::LoadDragonBonesData(System.String,System.String,System.Single)
extern "C"  DragonBonesData_t1202750760 * UnityFactory_LoadDragonBonesData_m3821251920 (UnityFactory_t2506963643 * __this, String_t* ___path0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DragonBonesData DragonBones.UnityFactory::LoadDragonBonesData(UnityEngine.TextAsset,System.String,System.Single)
extern "C"  DragonBonesData_t1202750760 * UnityFactory_LoadDragonBonesData_m4135919380 (UnityFactory_t2506963643 * __this, TextAsset_t3836129977 * ___dragonBonesJSON0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.UnityTextureAtlasData DragonBones.UnityFactory::LoadTextureAtlasData(System.String,System.String,System.Single)
extern "C"  UnityTextureAtlasData_t3478193809 * UnityFactory_LoadTextureAtlasData_m898016381 (UnityFactory_t2506963643 * __this, String_t* ___path0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.UnityTextureAtlasData DragonBones.UnityFactory::LoadTextureAtlasData(UnityEngine.TextAsset,System.String,System.Single)
extern "C"  UnityTextureAtlasData_t3478193809 * UnityFactory_LoadTextureAtlasData_m2104006977 (UnityFactory_t2506963643 * __this, TextAsset_t3836129977 * ___textureAtlasJSON0, String_t* ___name1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.UnityFactory::RefreshAllTextureAtlas()
extern "C"  void UnityFactory_RefreshAllTextureAtlas_m2254763526 (UnityFactory_t2506963643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

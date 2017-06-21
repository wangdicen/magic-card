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

// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.SlotData
struct SlotData_t2442829486;
// DragonBones.Matrix
struct Matrix_t655848487;
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.BoneData
struct BoneData_t1204886644;
// System.String
struct String_t;
// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// System.Collections.Generic.List`1<DragonBones.BoneData>
struct List_1_t2573072196;
// System.Collections.Generic.List`1<DragonBones.SlotData>
struct List_1_t3811015038;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_SlotData2442829486.h"
#include "AssemblyU2DCSharp_DragonBones_Matrix655848487.h"
#include "AssemblyU2DCSharp_DragonBones_Transform3392663918.h"
#include "AssemblyU2DCSharp_DragonBones_BoneData1204886644.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_SkinData1378009773.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationData1484381264.h"

// System.Void DragonBones.ArmatureData::.ctor()
extern "C"  void ArmatureData__ctor_m3995239014 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.ArmatureData::_onSortSlots(DragonBones.SlotData,DragonBones.SlotData)
extern "C"  int32_t ArmatureData__onSortSlots_m4126262721 (Il2CppObject * __this /* static, unused */, SlotData_t2442829486 * ___a0, SlotData_t2442829486 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::_onClear()
extern "C"  void ArmatureData__onClear_m696837677 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::_sortBones()
extern "C"  void ArmatureData__sortBones_m2259437936 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::_sortSlots()
extern "C"  void ArmatureData__sortSlots_m82614262 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::CacheFrames(System.UInt32)
extern "C"  void ArmatureData_CacheFrames_m1171949166 (ArmatureData_t3944230313 * __this, uint32_t ___frameRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.ArmatureData::SetCacheFrame(DragonBones.Matrix,DragonBones.Transform)
extern "C"  int32_t ArmatureData_SetCacheFrame_m1232794914 (ArmatureData_t3944230313 * __this, Matrix_t655848487 * ___globalTransformMatrix0, Transform_t3392663918 * ___transform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::GetCacheFrame(DragonBones.Matrix,DragonBones.Transform,System.Int32)
extern "C"  void ArmatureData_GetCacheFrame_m2668106995 (ArmatureData_t3944230313 * __this, Matrix_t655848487 * ___globalTransformMatrix0, Transform_t3392663918 * ___transform1, int32_t ___arrayOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::AddBone(DragonBones.BoneData,System.String)
extern "C"  void ArmatureData_AddBone_m1488034405 (ArmatureData_t3944230313 * __this, BoneData_t1204886644 * ___value0, String_t* ___parentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::AddSlot(DragonBones.SlotData)
extern "C"  void ArmatureData_AddSlot_m3172035241 (ArmatureData_t3944230313 * __this, SlotData_t2442829486 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::AddSkin(DragonBones.SkinData)
extern "C"  void ArmatureData_AddSkin_m3827992777 (ArmatureData_t3944230313 * __this, SkinData_t1378009773 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ArmatureData::AddAnimation(DragonBones.AnimationData)
extern "C"  void ArmatureData_AddAnimation_m1410010133 (ArmatureData_t3944230313 * __this, AnimationData_t1484381264 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneData DragonBones.ArmatureData::GetBone(System.String)
extern "C"  BoneData_t1204886644 * ArmatureData_GetBone_m4031251681 (ArmatureData_t3944230313 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SlotData DragonBones.ArmatureData::GetSlot(System.String)
extern "C"  SlotData_t2442829486 * ArmatureData_GetSlot_m4282063725 (ArmatureData_t3944230313 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinData DragonBones.ArmatureData::GetSkin(System.String)
extern "C"  SkinData_t1378009773 * ArmatureData_GetSkin_m2003666927 (ArmatureData_t3944230313 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationData DragonBones.ArmatureData::GetAnimation(System.String)
extern "C"  AnimationData_t1484381264 * ArmatureData_GetAnimation_m3403110175 (ArmatureData_t3944230313 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.BoneData> DragonBones.ArmatureData::get_sortedBones()
extern "C"  List_1_t2573072196 * ArmatureData_get_sortedBones_m4036594906 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.SlotData> DragonBones.ArmatureData::get_sortedSlots()
extern "C"  List_1_t3811015038 * ArmatureData_get_sortedSlots_m2997989222 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DragonBones.ArmatureData::get_animationNames()
extern "C"  List_1_t1375417109 * ArmatureData_get_animationNames_m2154883676 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinData DragonBones.ArmatureData::get_defaultSkin()
extern "C"  SkinData_t1378009773 * ArmatureData_get_defaultSkin_m3484133525 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationData DragonBones.ArmatureData::get_defaultAnimation()
extern "C"  AnimationData_t1484381264 * ArmatureData_get_defaultAnimation_m1882398817 (ArmatureData_t3944230313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

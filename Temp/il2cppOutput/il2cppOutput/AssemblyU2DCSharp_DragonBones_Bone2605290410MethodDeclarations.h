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

// DragonBones.Bone
struct Bone_t2605290410;
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.TransformObject
struct TransformObject_t3102074189;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_t3973475962;
// System.Collections.Generic.List`1<DragonBones.Slot>
struct List_1_t3973979572;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_BoneData1204886644.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_Bone2605290410.h"
#include "AssemblyU2DCSharp_DragonBones_TransformObject3102074189.h"

// System.Void DragonBones.Bone::.ctor()
extern "C"  void Bone__ctor_m2206262661 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_onClear()
extern "C"  void Bone__onClear_m1551481518 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_updateGlobalTransformMatrix()
extern "C"  void Bone__updateGlobalTransformMatrix_m4144127905 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_computeIKA()
extern "C"  void Bone__computeIKA_m1850606826 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_computeIKB()
extern "C"  void Bone__computeIKB_m1850607787 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_init(DragonBones.BoneData)
extern "C"  void Bone__init_m884517842 (Bone_t2605290410 * __this, BoneData_t1204886644 * ___boneData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_setArmature(DragonBones.Armature)
extern "C"  void Bone__setArmature_m2417601808 (Bone_t2605290410 * __this, Armature_t2093713247 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_setIK(DragonBones.Bone,System.UInt32,System.Int32)
extern "C"  void Bone__setIK_m1260854581 (Bone_t2605290410 * __this, Bone_t2605290410 * ___value0, uint32_t ___chain1, int32_t ___chainIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::_update(System.Int32)
extern "C"  void Bone__update_m2716365564 (Bone_t2605290410 * __this, int32_t ___cacheFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::InvalidUpdate()
extern "C"  void Bone_InvalidUpdate_m3927122499 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Bone::Contains(DragonBones.TransformObject)
extern "C"  bool Bone_Contains_m3746547495 (Bone_t2605290410 * __this, TransformObject_t3102074189 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Bone::GetBones()
extern "C"  List_1_t3973475962 * Bone_GetBones_m392674817 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.Slot> DragonBones.Bone::GetSlots()
extern "C"  List_1_t3973979572 * Bone_GetSlots_m3977304641 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneData DragonBones.Bone::get_boneData()
extern "C"  BoneData_t1204886644 * Bone_get_boneData_m858394931 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Bone::get_visible()
extern "C"  bool Bone_get_visible_m3357771352 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Bone::set_visible(System.Boolean)
extern "C"  void Bone_set_visible_m4034438415 (Bone_t2605290410 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DragonBones.Bone::get_ikChain()
extern "C"  uint32_t Bone_get_ikChain_m3025627934 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.Bone::get_ikChainIndex()
extern "C"  int32_t Bone_get_ikChainIndex_m3468596649 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Bone DragonBones.Bone::get_ik()
extern "C"  Bone_t2605290410 * Bone_get_ik_m3167893841 (Bone_t2605290410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

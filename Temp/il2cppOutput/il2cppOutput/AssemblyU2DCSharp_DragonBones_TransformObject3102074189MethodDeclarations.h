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

// DragonBones.TransformObject
struct TransformObject_t3102074189;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.Bone
struct Bone_t2605290410;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_Bone2605290410.h"

// System.Void DragonBones.TransformObject::.ctor()
extern "C"  void TransformObject__ctor_m1435910162 (TransformObject_t3102074189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TransformObject::_onClear()
extern "C"  void TransformObject__onClear_m4285413633 (TransformObject_t3102074189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TransformObject::_setArmature(DragonBones.Armature)
extern "C"  void TransformObject__setArmature_m949822051 (TransformObject_t3102074189 * __this, Armature_t2093713247 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TransformObject::_setParent(DragonBones.Bone)
extern "C"  void TransformObject__setParent_m2596484585 (TransformObject_t3102074189 * __this, Bone_t2605290410 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Armature DragonBones.TransformObject::get_armature()
extern "C"  Armature_t2093713247 * TransformObject_get_armature_m3724035906 (TransformObject_t3102074189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Bone DragonBones.TransformObject::get_parent()
extern "C"  Bone_t2605290410 * TransformObject_get_parent_m1127671358 (TransformObject_t3102074189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

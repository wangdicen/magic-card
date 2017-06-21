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

// DragonBones.Transform
struct Transform_t3392663918;
// System.String
struct String_t;
// DragonBones.Matrix
struct Matrix_t655848487;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Transform3392663918.h"
#include "AssemblyU2DCSharp_DragonBones_Matrix655848487.h"

// System.Void DragonBones.Transform::.ctor()
extern "C"  void Transform__ctor_m1370986257 (Transform_t3392663918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DragonBones.Transform::NormalizeRadian(System.Single)
extern "C"  float Transform_NormalizeRadian_m2034483394 (Il2CppObject * __this /* static, unused */, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.Transform::ToString()
extern "C"  String_t* Transform_ToString_m4001322172 (Transform_t3392663918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::CopyFrom(DragonBones.Transform)
extern "C"  Transform_t3392663918 * Transform_CopyFrom_m960935999 (Transform_t3392663918 * __this, Transform_t3392663918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::Identity()
extern "C"  Transform_t3392663918 * Transform_Identity_m2012477944 (Transform_t3392663918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::Add(DragonBones.Transform)
extern "C"  Transform_t3392663918 * Transform_Add_m2569413103 (Transform_t3392663918 * __this, Transform_t3392663918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::Minus(DragonBones.Transform)
extern "C"  Transform_t3392663918 * Transform_Minus_m1951944448 (Transform_t3392663918 * __this, Transform_t3392663918 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::FromMatrix(DragonBones.Matrix)
extern "C"  Transform_t3392663918 * Transform_FromMatrix_m3211386066 (Transform_t3392663918 * __this, Matrix_t655848487 * ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Transform DragonBones.Transform::ToMatrix(DragonBones.Matrix)
extern "C"  Transform_t3392663918 * Transform_ToMatrix_m3295345315 (Transform_t3392663918 * __this, Matrix_t655848487 * ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DragonBones.Transform::get_rotation()
extern "C"  float Transform_get_rotation_m1519239470 (Transform_t3392663918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Transform::set_rotation(System.Single)
extern "C"  void Transform_set_rotation_m2338984573 (Transform_t3392663918 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

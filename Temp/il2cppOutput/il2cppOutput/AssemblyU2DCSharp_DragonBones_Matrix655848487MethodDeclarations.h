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

// DragonBones.Matrix
struct Matrix_t655848487;
// System.String
struct String_t;
// DragonBones.Point
struct Point_t3755811474;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Matrix655848487.h"
#include "AssemblyU2DCSharp_DragonBones_Point3755811474.h"

// System.Void DragonBones.Matrix::.ctor()
extern "C"  void Matrix__ctor_m1761352616 (Matrix_t655848487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.Matrix::ToString()
extern "C"  String_t* Matrix_ToString_m482818411 (Matrix_t655848487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Matrix DragonBones.Matrix::CopyFrom(DragonBones.Matrix)
extern "C"  Matrix_t655848487 * Matrix_CopyFrom_m1840112178 (Matrix_t655848487 * __this, Matrix_t655848487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Matrix DragonBones.Matrix::Identity()
extern "C"  Matrix_t655848487 * Matrix_Identity_m1405494628 (Matrix_t655848487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Matrix DragonBones.Matrix::Concat(DragonBones.Matrix)
extern "C"  Matrix_t655848487 * Matrix_Concat_m3800373575 (Matrix_t655848487 * __this, Matrix_t655848487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Matrix DragonBones.Matrix::Invert()
extern "C"  Matrix_t655848487 * Matrix_Invert_m652220 (Matrix_t655848487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Matrix::TransformPoint(System.Single,System.Single,DragonBones.Point,System.Boolean)
extern "C"  void Matrix_TransformPoint_m2496865631 (Matrix_t655848487 * __this, float ___x0, float ___y1, Point_t3755811474 * ___result2, bool ___delta3, const MethodInfo* method) IL2CPP_METHOD_ATTR;

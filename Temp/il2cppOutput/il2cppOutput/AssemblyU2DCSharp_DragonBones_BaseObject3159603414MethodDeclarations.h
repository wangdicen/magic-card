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

// DragonBones.BaseObject
struct BaseObject_t3159603414;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void DragonBones.BaseObject::.ctor()
extern "C"  void BaseObject__ctor_m1045880793 (BaseObject_t3159603414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseObject::.cctor()
extern "C"  void BaseObject__cctor_m1875437300 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseObject::_returnObject(DragonBones.BaseObject)
extern "C"  void BaseObject__returnObject_m2915279427 (Il2CppObject * __this /* static, unused */, BaseObject_t3159603414 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseObject::SetMaxCount(System.Type,System.UInt32)
extern "C"  void BaseObject_SetMaxCount_m78387369 (Il2CppObject * __this /* static, unused */, Type_t * ___classType0, uint32_t ___maxCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseObject::ClearPool(System.Type)
extern "C"  void BaseObject_ClearPool_m3839973305 (Il2CppObject * __this /* static, unused */, Type_t * ___classType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BaseObject::ReturnToPool()
extern "C"  void BaseObject_ReturnToPool_m3802294546 (BaseObject_t3159603414 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

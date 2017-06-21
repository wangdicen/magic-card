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

// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_ArmatureData3944230313.h"

// System.Void DragonBones.DragonBonesData::.ctor()
extern "C"  void DragonBonesData__ctor_m1646413463 (DragonBonesData_t1202750760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DragonBonesData::_onClear()
extern "C"  void DragonBonesData__onClear_m442034268 (DragonBonesData_t1202750760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ArmatureData DragonBones.DragonBonesData::GetArmature(System.String)
extern "C"  ArmatureData_t3944230313 * DragonBonesData_GetArmature_m1754213654 (DragonBonesData_t1202750760 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DragonBonesData::AddArmature(DragonBones.ArmatureData)
extern "C"  void DragonBonesData_AddArmature_m3628310074 (DragonBonesData_t1202750760 * __this, ArmatureData_t3944230313 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DragonBones.DragonBonesData::get_armatureNames()
extern "C"  List_1_t1375417109 * DragonBonesData_get_armatureNames_m4139463276 (DragonBonesData_t1202750760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

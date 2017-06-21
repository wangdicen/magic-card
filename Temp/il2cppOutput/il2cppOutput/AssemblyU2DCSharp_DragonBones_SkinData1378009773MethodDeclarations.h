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

// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_SkinSlotData3577659979.h"
#include "mscorlib_System_String7231557.h"

// System.Void DragonBones.SkinData::.ctor()
extern "C"  void SkinData__ctor_m4164689378 (SkinData_t1378009773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SkinData::_onClear()
extern "C"  void SkinData__onClear_m2206058801 (SkinData_t1378009773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SkinData::AddSlot(DragonBones.SkinSlotData)
extern "C"  void SkinData_AddSlot_m2992379432 (SkinData_t1378009773 * __this, SkinSlotData_t3577659979 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinSlotData DragonBones.SkinData::GetSlot(System.String)
extern "C"  SkinSlotData_t3577659979 * SkinData_GetSlot_m2273357556 (SkinData_t1378009773 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.DisplayData
struct DisplayData_t523795982;
// System.String
struct String_t;
// DragonBones.MeshData
struct MeshData_t3056745245;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_MeshData3056745245.h"

// System.Void DragonBones.SkinSlotData::.ctor()
extern "C"  void SkinSlotData__ctor_m446432260 (SkinSlotData_t3577659979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SkinSlotData::_onClear()
extern "C"  void SkinSlotData__onClear_m3109787599 (SkinSlotData_t3577659979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DisplayData DragonBones.SkinSlotData::GetDisplay(System.String)
extern "C"  DisplayData_t523795982 * SkinSlotData_GetDisplay_m2748670141 (SkinSlotData_t3577659979 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SkinSlotData::AddMesh(DragonBones.MeshData)
extern "C"  void SkinSlotData_AddMesh_m1564848615 (SkinSlotData_t3577659979 * __this, MeshData_t3056745245 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.MeshData DragonBones.SkinSlotData::GetMesh(System.String)
extern "C"  MeshData_t3056745245 * SkinSlotData_GetMesh_m3932089777 (SkinSlotData_t3577659979 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

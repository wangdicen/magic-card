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

// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;
// DragonBones.TextureData
struct TextureData_t423192039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_TextureData423192039.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_TextureAtlasData3103560160.h"

// System.Void DragonBones.TextureAtlasData::.ctor()
extern "C"  void TextureAtlasData__ctor_m1058349071 (TextureAtlasData_t3103560160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TextureAtlasData::_onClear()
extern "C"  void TextureAtlasData__onClear_m587332580 (TextureAtlasData_t3103560160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TextureAtlasData::AddTexture(DragonBones.TextureData)
extern "C"  void TextureAtlasData_AddTexture_m2657014992 (TextureAtlasData_t3103560160 * __this, TextureData_t423192039 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.TextureData DragonBones.TextureAtlasData::GetTexture(System.String)
extern "C"  TextureData_t423192039 * TextureAtlasData_GetTexture_m1609376744 (TextureAtlasData_t3103560160 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.TextureAtlasData::CopyFrom(DragonBones.TextureAtlasData)
extern "C"  void TextureAtlasData_CopyFrom_m2390572360 (TextureAtlasData_t3103560160 * __this, TextureAtlasData_t3103560160 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.AnimationConfig
struct AnimationConfig_t1180894056;
// System.String
struct String_t;
// DragonBones.Armature
struct Armature_t2093713247;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationConfig1180894056.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"

// System.Void DragonBones.AnimationConfig::.ctor()
extern "C"  void AnimationConfig__ctor_m62509143 (AnimationConfig_t1180894056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationConfig::_onClear()
extern "C"  void AnimationConfig__onClear_m3154118300 (AnimationConfig_t1180894056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationConfig::Clear()
extern "C"  void AnimationConfig_Clear_m1763609730 (AnimationConfig_t1180894056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationConfig::CopyFrom(DragonBones.AnimationConfig)
extern "C"  void AnimationConfig_CopyFrom_m358614610 (AnimationConfig_t1180894056 * __this, AnimationConfig_t1180894056 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.AnimationConfig::ContainsBoneMask(System.String)
extern "C"  bool AnimationConfig_ContainsBoneMask_m1930461658 (AnimationConfig_t1180894056 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationConfig::AddBoneMask(DragonBones.Armature,System.String,System.Boolean)
extern "C"  void AnimationConfig_AddBoneMask_m381435014 (AnimationConfig_t1180894056 * __this, Armature_t2093713247 * ___armature0, String_t* ___name1, bool ___recursive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationConfig::RemoveBoneMask(DragonBones.Armature,System.String,System.Boolean)
extern "C"  void AnimationConfig_RemoveBoneMask_m1294748971 (AnimationConfig_t1180894056 * __this, Armature_t2093713247 * ___armature0, String_t* ___name1, bool ___recursive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

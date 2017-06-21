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

// DragonBones.AnimationData
struct AnimationData_t1484381264;
// DragonBones.BoneTimelineData
struct BoneTimelineData_t211682901;
// DragonBones.SlotTimelineData
struct SlotTimelineData_t3578179215;
// DragonBones.FFDTimelineData
struct FFDTimelineData_t879419601;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.FFDTimelineData>
struct Dictionary_2_t1699837971;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_BoneTimelineData211682901.h"
#include "AssemblyU2DCSharp_DragonBones_SlotTimelineData3578179215.h"
#include "AssemblyU2DCSharp_DragonBones_FFDTimelineData879419601.h"
#include "mscorlib_System_String7231557.h"

// System.Void DragonBones.AnimationData::.ctor()
extern "C"  void AnimationData__ctor_m3756004975 (AnimationData_t1484381264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationData::_onClear()
extern "C"  void AnimationData__onClear_m3321293188 (AnimationData_t1484381264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationData::CacheFrames(System.Single)
extern "C"  void AnimationData_CacheFrames_m2053540982 (AnimationData_t1484381264 * __this, float ___frameRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationData::AddBoneTimeline(DragonBones.BoneTimelineData)
extern "C"  void AnimationData_AddBoneTimeline_m3313354258 (AnimationData_t1484381264 * __this, BoneTimelineData_t211682901 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationData::AddSlotTimeline(DragonBones.SlotTimelineData)
extern "C"  void AnimationData_AddSlotTimeline_m133077202 (AnimationData_t1484381264 * __this, SlotTimelineData_t3578179215 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationData::AddFFDTimeline(DragonBones.FFDTimelineData)
extern "C"  void AnimationData_AddFFDTimeline_m2029050716 (AnimationData_t1484381264 * __this, FFDTimelineData_t879419601 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneTimelineData DragonBones.AnimationData::GetBoneTimeline(System.String)
extern "C"  BoneTimelineData_t211682901 * AnimationData_GetBoneTimeline_m2743730238 (AnimationData_t1484381264 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SlotTimelineData DragonBones.AnimationData::GetSlotTimeline(System.String)
extern "C"  SlotTimelineData_t3578179215 * AnimationData_GetSlotTimeline_m4074691454 (AnimationData_t1484381264 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.FFDTimelineData> DragonBones.AnimationData::GetFFDTimeline(System.String,System.String)
extern "C"  Dictionary_2_t1699837971 * AnimationData_GetFFDTimeline_m2472315893 (AnimationData_t1484381264 * __this, String_t* ___skinName0, String_t* ___slotName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> DragonBones.AnimationData::GetBoneCachedFrameIndices(System.String)
extern "C"  List_1_t2522024052 * AnimationData_GetBoneCachedFrameIndices_m65930845 (AnimationData_t1484381264 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> DragonBones.AnimationData::GetSlotCachedFrameIndices(System.String)
extern "C"  List_1_t2522024052 * AnimationData_GetSlotCachedFrameIndices_m4044007011 (AnimationData_t1484381264 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.FFDTimelineState
struct FFDTimelineState_t1794900338;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.FFDTimelineData
struct FFDTimelineData_t879419601;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationState3368842707.h"
#include "AssemblyU2DCSharp_DragonBones_FFDTimelineData879419601.h"

// System.Void DragonBones.FFDTimelineState::.ctor()
extern "C"  void FFDTimelineState__ctor_m2246382781 (FFDTimelineState_t1794900338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::_onClear()
extern "C"  void FFDTimelineState__onClear_m2769068150 (FFDTimelineState_t1794900338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::_onArriveAtFrame()
extern "C"  void FFDTimelineState__onArriveAtFrame_m2821999308 (FFDTimelineState_t1794900338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::_onUpdateFrame()
extern "C"  void FFDTimelineState__onUpdateFrame_m4054055053 (FFDTimelineState_t1794900338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::_init(DragonBones.Armature,DragonBones.AnimationState,DragonBones.FFDTimelineData)
extern "C"  void FFDTimelineState__init_m1706285975 (FFDTimelineState_t1794900338 * __this, Armature_t2093713247 * ___armature0, AnimationState_t3368842707 * ___animationState1, FFDTimelineData_t879419601 * ___timelineData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::FadeOut()
extern "C"  void FFDTimelineState_FadeOut_m1448977933 (FFDTimelineState_t1794900338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.FFDTimelineState::Update(System.Single)
extern "C"  void FFDTimelineState_Update_m1467404731 (FFDTimelineState_t1794900338 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.BoneTimelineState
struct BoneTimelineState_t2569899118;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.BoneTimelineData
struct BoneTimelineData_t211682901;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationState3368842707.h"
#include "AssemblyU2DCSharp_DragonBones_BoneTimelineData211682901.h"

// System.Void DragonBones.BoneTimelineState::.ctor()
extern "C"  void BoneTimelineState__ctor_m2423583761 (BoneTimelineState_t2569899118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::_onClear()
extern "C"  void BoneTimelineState__onClear_m3248656546 (BoneTimelineState_t2569899118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::_onArriveAtFrame()
extern "C"  void BoneTimelineState__onArriveAtFrame_m60641016 (BoneTimelineState_t2569899118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::_onUpdateFrame()
extern "C"  void BoneTimelineState__onUpdateFrame_m2040010681 (BoneTimelineState_t2569899118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::_init(DragonBones.Armature,DragonBones.AnimationState,DragonBones.BoneTimelineData)
extern "C"  void BoneTimelineState__init_m3590663089 (BoneTimelineState_t2569899118 * __this, Armature_t2093713247 * ___armature0, AnimationState_t3368842707 * ___animationState1, BoneTimelineData_t211682901 * ___timelineData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::FadeOut()
extern "C"  void BoneTimelineState_FadeOut_m4235395169 (BoneTimelineState_t2569899118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoneTimelineState::Update(System.Single)
extern "C"  void BoneTimelineState_Update_m3646115343 (BoneTimelineState_t2569899118 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.SlotTimelineState
struct SlotTimelineState_t3852069748;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.SlotTimelineData
struct SlotTimelineData_t3578179215;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationState3368842707.h"
#include "AssemblyU2DCSharp_DragonBones_SlotTimelineData3578179215.h"

// System.Void DragonBones.SlotTimelineState::.ctor()
extern "C"  void SlotTimelineState__ctor_m2017205195 (SlotTimelineState_t3852069748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::_onClear()
extern "C"  void SlotTimelineState__onClear_m42636968 (SlotTimelineState_t3852069748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::_onArriveAtFrame()
extern "C"  void SlotTimelineState__onArriveAtFrame_m4038717182 (SlotTimelineState_t3852069748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::_onUpdateFrame()
extern "C"  void SlotTimelineState__onUpdateFrame_m256442687 (SlotTimelineState_t3852069748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::_init(DragonBones.Armature,DragonBones.AnimationState,DragonBones.SlotTimelineData)
extern "C"  void SlotTimelineState__init_m3943046001 (SlotTimelineState_t3852069748 * __this, Armature_t2093713247 * ___armature0, AnimationState_t3368842707 * ___animationState1, SlotTimelineData_t3578179215 * ___timelineData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::FadeOut()
extern "C"  void SlotTimelineState_FadeOut_m252649883 (SlotTimelineState_t3852069748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.SlotTimelineState::Update(System.Single)
extern "C"  void SlotTimelineState_Update_m3480578121 (SlotTimelineState_t3852069748 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

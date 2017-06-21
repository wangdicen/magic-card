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

// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// DragonBones.AnimationConfig
struct AnimationConfig_t1180894056;
// DragonBones.Slot
struct Slot_t2605794020;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationData1484381264.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationConfig1180894056.h"
#include "AssemblyU2DCSharp_DragonBones_Slot2605794020.h"
#include "mscorlib_System_String7231557.h"

// System.Void DragonBones.AnimationState::.ctor()
extern "C"  void AnimationState__ctor_m1562551164 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::_onClear()
extern "C"  void AnimationState__onClear_m1771251031 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::_advanceFadeTime(System.Single)
extern "C"  void AnimationState__advanceFadeTime_m1874470327 (AnimationState_t3368842707 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::_init(DragonBones.Armature,DragonBones.AnimationData,DragonBones.AnimationConfig)
extern "C"  void AnimationState__init_m1455013446 (AnimationState_t3368842707 * __this, Armature_t2093713247 * ___armature0, AnimationData_t1484381264 * ___animationData1, AnimationConfig_t1180894056 * ___animationConfig2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::_updateTimelineStates()
extern "C"  void AnimationState__updateTimelineStates_m1859536293 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::_advanceTime(System.Single,System.Single)
extern "C"  void AnimationState__advanceTime_m1937548920 (AnimationState_t3368842707 * __this, float ___passedTime0, float ___cacheFrameRate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.AnimationState::_isDisabled(DragonBones.Slot)
extern "C"  bool AnimationState__isDisabled_m437902555 (AnimationState_t3368842707 * __this, Slot_t2605794020 * ___slot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::Play()
extern "C"  void AnimationState_Play_m3248306300 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::Stop()
extern "C"  void AnimationState_Stop_m3341990346 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::FadeOut(System.Single,System.Boolean)
extern "C"  void AnimationState_FadeOut_m991960446 (AnimationState_t3368842707 * __this, float ___fadeOutTime0, bool ___pausePlayhead1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.AnimationState::ContainsBoneMask(System.String)
extern "C"  bool AnimationState_ContainsBoneMask_m2017066519 (AnimationState_t3368842707 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::AddBoneMask(System.String,System.Boolean)
extern "C"  void AnimationState_AddBoneMask_m3288163046 (AnimationState_t3368842707 * __this, String_t* ___name0, bool ___recursive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::RemoveBoneMask(System.String,System.Boolean)
extern "C"  void AnimationState_RemoveBoneMask_m3033168695 (AnimationState_t3368842707 * __this, String_t* ___name0, bool ___recursive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::RemoveAllBoneMask()
extern "C"  void AnimationState_RemoveAllBoneMask_m3813808455 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.AnimationState::get_layer()
extern "C"  int32_t AnimationState_get_layer_m3859544980 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.AnimationState::get_group()
extern "C"  String_t* AnimationState_get_group_m2356196237 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.AnimationState::get_name()
extern "C"  String_t* AnimationState_get_name_m3585769311 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationData DragonBones.AnimationState::get_animationData()
extern "C"  AnimationData_t1484381264 * AnimationState_get_animationData_m3516804072 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.AnimationState::get_isCompleted()
extern "C"  bool AnimationState_get_isCompleted_m2167489054 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.AnimationState::get_isPlaying()
extern "C"  bool AnimationState_get_isPlaying_m2951244737 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DragonBones.AnimationState::get_currentPlayTimes()
extern "C"  uint32_t AnimationState_get_currentPlayTimes_m1970841541 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DragonBones.AnimationState::get_totalTime()
extern "C"  float AnimationState_get_totalTime_m924694518 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DragonBones.AnimationState::get_currentTime()
extern "C"  float AnimationState_get_currentTime_m3887115627 (AnimationState_t3368842707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.AnimationState::set_currentTime(System.Single)
extern "C"  void AnimationState_set_currentTime_m1667465160 (AnimationState_t3368842707 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.Animation
struct Animation_t3458507142;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.AnimationConfig
struct AnimationConfig_t1180894056;
// DragonBones.Armature
struct Armature_t2093713247;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData>
struct Dictionary_2_t2304799634;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationState3368842707.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationConfig1180894056.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationFadeOutMode3110578871.h"

// System.Void DragonBones.Animation::.ctor()
extern "C"  void Animation__ctor_m1542685177 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.Animation::_sortAnimationState(DragonBones.AnimationState,DragonBones.AnimationState)
extern "C"  int32_t Animation__sortAnimationState_m1578375479 (Il2CppObject * __this /* static, unused */, AnimationState_t3368842707 * ___a0, AnimationState_t3368842707 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::_onClear()
extern "C"  void Animation__onClear_m2649119162 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::_fadeOut(DragonBones.AnimationConfig)
extern "C"  void Animation__fadeOut_m1478815712 (Animation_t3458507142 * __this, AnimationConfig_t1180894056 * ___animationConfig0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::_init(DragonBones.Armature)
extern "C"  void Animation__init_m3043457211 (Animation_t3458507142 * __this, Armature_t2093713247 * ___armature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::_advanceTime(System.Single)
extern "C"  void Animation__advanceTime_m1415399120 (Animation_t3458507142 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::Reset()
extern "C"  void Animation_Reset_m3484085414 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::Stop(System.String)
extern "C"  void Animation_Stop_m2895292533 (Animation_t3458507142 * __this, String_t* ___animationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::PlayConfig(DragonBones.AnimationConfig)
extern "C"  AnimationState_t3368842707 * Animation_PlayConfig_m3770641499 (Animation_t3458507142 * __this, AnimationConfig_t1180894056 * ___animationConfig0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::FadeIn(System.String,System.Single,System.Int32,System.Int32,System.String,DragonBones.AnimationFadeOutMode,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  AnimationState_t3368842707 * Animation_FadeIn_m4212827438 (Animation_t3458507142 * __this, String_t* ___animationName0, float ___fadeInTime1, int32_t ___playTimes2, int32_t ___layer3, String_t* ___group4, int32_t ___fadeOutMode5, bool ___additiveBlending6, bool ___displayControl7, bool ___pauseFadeOut8, bool ___pauseFadeIn9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::Play(System.String,System.Int32)
extern "C"  AnimationState_t3368842707 * Animation_Play_m3096193942 (Animation_t3458507142 * __this, String_t* ___animationName0, int32_t ___playTimes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndPlayByTime(System.String,System.Single,System.Int32)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndPlayByTime_m3100220529 (Animation_t3458507142 * __this, String_t* ___animationName0, float ___time1, int32_t ___playTimes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndPlayByFrame(System.String,System.UInt32,System.Int32)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndPlayByFrame_m1409875548 (Animation_t3458507142 * __this, String_t* ___animationName0, uint32_t ___frame1, int32_t ___playTimes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndPlayByProgress(System.String,System.Single,System.Int32)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndPlayByProgress_m1531744849 (Animation_t3458507142 * __this, String_t* ___animationName0, float ___progress1, int32_t ___playTimes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndStopByTime(System.String,System.Single)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndStopByTime_m705466008 (Animation_t3458507142 * __this, String_t* ___animationName0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndStopByFrame(System.String,System.UInt32)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndStopByFrame_m1030797353 (Animation_t3458507142 * __this, String_t* ___animationName0, uint32_t ___frame1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GotoAndStopByProgress(System.String,System.Single)
extern "C"  AnimationState_t3368842707 * Animation_GotoAndStopByProgress_m2644902840 (Animation_t3458507142 * __this, String_t* ___animationName0, float ___progress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::GetState(System.String)
extern "C"  AnimationState_t3368842707 * Animation_GetState_m116738650 (Animation_t3458507142 * __this, String_t* ___animationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Animation::HasAnimation(System.String)
extern "C"  bool Animation_HasAnimation_m1285279009 (Animation_t3458507142 * __this, String_t* ___animationName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Animation::get_isPlaying()
extern "C"  bool Animation_get_isPlaying_m3456326694 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Animation::get_isCompleted()
extern "C"  bool Animation_get_isCompleted_m2219945283 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.Animation::get_lastAnimationName()
extern "C"  String_t* Animation_get_lastAnimationName_m4276022442 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationState DragonBones.Animation::get_lastAnimationState()
extern "C"  AnimationState_t3368842707 * Animation_get_lastAnimationState_m2505590937 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationConfig DragonBones.Animation::get_animationConfig()
extern "C"  AnimationConfig_t1180894056 * Animation_get_animationConfig_m2801431155 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> DragonBones.Animation::get_animationNames()
extern "C"  List_1_t1375417109 * Animation_get_animationNames_m4043073255 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData> DragonBones.Animation::get_animations()
extern "C"  Dictionary_2_t2304799634 * Animation_get_animations_m2915849097 (Animation_t3458507142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Animation::set_animations(System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData>)
extern "C"  void Animation_set_animations_m2345296116 (Animation_t3458507142 * __this, Dictionary_2_t2304799634 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

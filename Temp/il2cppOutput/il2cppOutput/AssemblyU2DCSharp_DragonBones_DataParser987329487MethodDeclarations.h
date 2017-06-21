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

// DragonBones.DataParser
struct DataParser_t987329487;
// System.String
struct String_t;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// DragonBones.BoneTimelineData
struct BoneTimelineData_t211682901;
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// System.Collections.Generic.List`1<DragonBones.EventData>
struct List_1_t3739114038;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_ArmatureType3944729913.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_DisplayType524295582.h"
#include "AssemblyU2DCSharp_DragonBones_BoundingBoxType3518726371.h"
#include "AssemblyU2DCSharp_DragonBones_BlendMode3235595158.h"
#include "AssemblyU2DCSharp_DragonBones_ActionType1665645046.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationData1484381264.h"
#include "AssemblyU2DCSharp_DragonBones_BoneTimelineData211682901.h"
#include "AssemblyU2DCSharp_DragonBones_Transform3392663918.h"
#include "AssemblyU2DCSharp_DragonBones_ArmatureData3944230313.h"

// System.Void DragonBones.DataParser::.ctor()
extern "C"  void DataParser__ctor_m1024552192 (DataParser_t987329487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DataParser::.cctor()
extern "C"  void DataParser__cctor_m1214250669 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ArmatureType DragonBones.DataParser::_getArmatureType(System.String)
extern "C"  int32_t DataParser__getArmatureType_m1189217052 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DisplayType DragonBones.DataParser::_getDisplayType(System.String)
extern "C"  int32_t DataParser__getDisplayType_m3414251240 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoundingBoxType DragonBones.DataParser::_getBoundingBoxType(System.String)
extern "C"  int32_t DataParser__getBoundingBoxType_m3941849246 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BlendMode DragonBones.DataParser::_getBlendMode(System.String)
extern "C"  int32_t DataParser__getBlendMode_m1370546680 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ActionType DragonBones.DataParser::_getActionType(System.String)
extern "C"  int32_t DataParser__getActionType_m1596378236 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DataParser::_getTimelineFrameMatrix(DragonBones.AnimationData,DragonBones.BoneTimelineData,System.Single,DragonBones.Transform)
extern "C"  void DataParser__getTimelineFrameMatrix_m3913739610 (DataParser_t987329487 * __this, AnimationData_t1484381264 * ___animation0, BoneTimelineData_t211682901 * ___timeline1, float ___position2, Transform_t3392663918 * ___transform3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DataParser::_globalToLocal(DragonBones.ArmatureData)
extern "C"  void DataParser__globalToLocal_m632630077 (DataParser_t987329487 * __this, ArmatureData_t3944230313 * ___armature0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.DataParser::_mergeFrameToAnimationTimeline(System.Single,System.Collections.Generic.List`1<DragonBones.ActionData>,System.Collections.Generic.List`1<DragonBones.EventData>)
extern "C"  void DataParser__mergeFrameToAnimationTimeline_m1958801229 (DataParser_t987329487 * __this, float ___framePostion0, List_1_t3033330998 * ___actions1, List_1_t3739114038 * ___events2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.ObjectDataParser
struct ObjectDataParser_t911555310;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.String
struct String_t;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.SlotData
struct SlotData_t2442829486;
// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.DisplayData
struct DisplayData_t523795982;
// DragonBones.MeshData
struct MeshData_t3056745245;
// DragonBones.BoundingBoxData
struct BoundingBoxData_t3518226771;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// DragonBones.BoneTimelineData
struct BoneTimelineData_t211682901;
// DragonBones.SlotTimelineData
struct SlotTimelineData_t3578179215;
// DragonBones.FFDTimelineData
struct FFDTimelineData_t879419601;
// DragonBones.AnimationFrameData
struct AnimationFrameData_t4096186617;
// DragonBones.ZOrderFrameData
struct ZOrderFrameData_t3304331685;
// DragonBones.BoneFrameData
struct BoneFrameData_t1992691541;
// DragonBones.SlotFrameData
struct SlotFrameData_t462872923;
// DragonBones.ExtensionFrameData
struct ExtensionFrameData_t2570746526;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// System.Collections.Generic.List`1<DragonBones.EventData>
struct List_1_t3739114038;
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.ColorTransform
struct ColorTransform_t810296751;
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_BoneData1204886644.h"
#include "AssemblyU2DCSharp_DragonBones_SlotData2442829486.h"
#include "AssemblyU2DCSharp_DragonBones_Transform3392663918.h"
#include "AssemblyU2DCSharp_DragonBones_ColorTransform810296751.h"
#include "AssemblyU2DCSharp_DragonBones_TextureAtlasData3103560160.h"

// System.Void DragonBones.ObjectDataParser::.ctor()
extern "C"  void ObjectDataParser__ctor_m477021889 (ObjectDataParser_t911555310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.ObjectDataParser::_getBoolean(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Boolean)
extern "C"  bool ObjectDataParser__getBoolean_m1681299750 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___rawData0, String_t* ___key1, bool ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DragonBones.ObjectDataParser::_getNumber(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.UInt32)
extern "C"  uint32_t ObjectDataParser__getNumber_m3457697709 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___rawData0, String_t* ___key1, uint32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.ObjectDataParser::_getNumber(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Int32)
extern "C"  int32_t ObjectDataParser__getNumber_m337926059 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___rawData0, String_t* ___key1, int32_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DragonBones.ObjectDataParser::_getNumber(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.Single)
extern "C"  float ObjectDataParser__getNumber_m2767122383 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___rawData0, String_t* ___key1, float ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.ObjectDataParser::_getString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
extern "C"  String_t* ObjectDataParser__getString_m1482378373 (Il2CppObject * __this /* static, unused */, Dictionary_2_t696267445 * ___rawData0, String_t* ___key1, String_t* ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ArmatureData DragonBones.ObjectDataParser::_parseArmature(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Single)
extern "C"  ArmatureData_t3944230313 * ObjectDataParser__parseArmature_m2347168476 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, float ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneData DragonBones.ObjectDataParser::_parseBone(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  BoneData_t1204886644 * ObjectDataParser__parseBone_m3727784599 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::_parseIK(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void ObjectDataParser__parseIK_m924594168 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SlotData DragonBones.ObjectDataParser::_parseSlot(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Int32)
extern "C"  SlotData_t2442829486 * ObjectDataParser__parseSlot_m2043359584 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, int32_t ___zOrder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinData DragonBones.ObjectDataParser::_parseSkin(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  SkinData_t1378009773 * ObjectDataParser__parseSkin_m3993049911 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinSlotData DragonBones.ObjectDataParser::_parseSkinSlotData(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  SkinSlotData_t3577659979 * ObjectDataParser__parseSkinSlotData_m3725808961 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DisplayData DragonBones.ObjectDataParser::_parseDisplay(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  DisplayData_t523795982 * ObjectDataParser__parseDisplay_m2228062803 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.MeshData DragonBones.ObjectDataParser::_parseMesh(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  MeshData_t3056745245 * ObjectDataParser__parseMesh_m3522990391 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoundingBoxData DragonBones.ObjectDataParser::_parseBoundingBox(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  BoundingBoxData_t3518226771 * ObjectDataParser__parseBoundingBox_m3535206877 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationData DragonBones.ObjectDataParser::_parseAnimation(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  AnimationData_t1484381264 * ObjectDataParser__parseAnimation_m3166588759 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneTimelineData DragonBones.ObjectDataParser::_parseBoneTimeline(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  BoneTimelineData_t211682901 * ObjectDataParser__parseBoneTimeline_m1470019383 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SlotTimelineData DragonBones.ObjectDataParser::_parseSlotTimeline(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  SlotTimelineData_t3578179215 * ObjectDataParser__parseSlotTimeline_m4205139831 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.FFDTimelineData DragonBones.ObjectDataParser::_parseFFDTimeline(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  FFDTimelineData_t879419601 * ObjectDataParser__parseFFDTimeline_m2523522777 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.AnimationFrameData DragonBones.ObjectDataParser::_parseAnimationFrame(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.UInt32,System.UInt32)
extern "C"  AnimationFrameData_t4096186617 * ObjectDataParser__parseAnimationFrame_m1919797855 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, uint32_t ___frameStart1, uint32_t ___frameCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ZOrderFrameData DragonBones.ObjectDataParser::_parseZOrderFrame(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.UInt32,System.UInt32)
extern "C"  ZOrderFrameData_t3304331685 * ObjectDataParser__parseZOrderFrame_m2631596649 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, uint32_t ___frameStart1, uint32_t ___frameCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoneFrameData DragonBones.ObjectDataParser::_parseBoneFrame(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.UInt32,System.UInt32)
extern "C"  BoneFrameData_t1992691541 * ObjectDataParser__parseBoneFrame_m345566601 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, uint32_t ___frameStart1, uint32_t ___frameCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SlotFrameData DragonBones.ObjectDataParser::_parseSlotFrame(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.UInt32,System.UInt32)
extern "C"  SlotFrameData_t462872923 * ObjectDataParser__parseSlotFrame_m281372437 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, uint32_t ___frameStart1, uint32_t ___frameCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ExtensionFrameData DragonBones.ObjectDataParser::_parseFFDFrame(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.UInt32,System.UInt32)
extern "C"  ExtensionFrameData_t2570746526 * ObjectDataParser__parseFFDFrame_m242338938 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, uint32_t ___frameStart1, uint32_t ___frameCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::_parseActionData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.List`1<DragonBones.ActionData>,DragonBones.BoneData,DragonBones.SlotData)
extern "C"  void ObjectDataParser__parseActionData_m318781434 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, List_1_t3033330998 * ___actions1, BoneData_t1204886644 * ___bone2, SlotData_t2442829486 * ___slot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::_parseEventData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Collections.Generic.List`1<DragonBones.EventData>,DragonBones.BoneData,DragonBones.SlotData)
extern "C"  void ObjectDataParser__parseEventData_m2100963636 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, List_1_t3739114038 * ___events1, BoneData_t1204886644 * ___bone2, SlotData_t2442829486 * ___slot3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::_parseTransform(System.Collections.Generic.Dictionary`2<System.String,System.Object>,DragonBones.Transform)
extern "C"  void ObjectDataParser__parseTransform_m587467528 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, Transform_t3392663918 * ___transform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::_parseColorTransform(System.Collections.Generic.Dictionary`2<System.String,System.Object>,DragonBones.ColorTransform)
extern "C"  void ObjectDataParser__parseColorTransform_m4144570988 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, ColorTransform_t810296751 * ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.DragonBonesData DragonBones.ObjectDataParser::ParseDragonBonesData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Single)
extern "C"  DragonBonesData_t1202750760 * ObjectDataParser_ParseDragonBonesData_m1235649433 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, float ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.ObjectDataParser::ParseTextureAtlasData(System.Collections.Generic.Dictionary`2<System.String,System.Object>,DragonBones.TextureAtlasData,System.Single)
extern "C"  void ObjectDataParser_ParseTextureAtlasData_m3110164148 (ObjectDataParser_t911555310 * __this, Dictionary_2_t696267445 * ___rawData0, TextureAtlasData_t3103560160 * ___textureAtlasData1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

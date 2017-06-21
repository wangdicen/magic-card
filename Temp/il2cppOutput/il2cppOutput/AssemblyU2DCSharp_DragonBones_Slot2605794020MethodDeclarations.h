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

// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// System.Object
struct Il2CppObject;
// DragonBones.Armature
struct Armature_t2093713247;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// DragonBones.ColorTransform
struct ColorTransform_t810296751;
// DragonBones.Point
struct Point_t3755811474;
// DragonBones.BoundingBoxData
struct BoundingBoxData_t3518226771;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_SkinSlotData3577659979.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_DragonBones_Armature2093713247.h"
#include "AssemblyU2DCSharp_DragonBones_ColorTransform810296751.h"
#include "AssemblyU2DCSharp_DragonBones_Point3755811474.h"

// System.Void DragonBones.Slot::.ctor()
extern "C"  void Slot__ctor_m676444043 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::.cctor()
extern "C"  void Slot__cctor_m3307799938 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_onClear()
extern "C"  void Slot__onClear_m623010536 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::_isMeshBonesUpdate()
extern "C"  bool Slot__isMeshBonesUpdate_m2300517391 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_updateDisplayData()
extern "C"  void Slot__updateDisplayData_m1607325117 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_updateDisplay()
extern "C"  void Slot__updateDisplay_m4132488563 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_updateLocalTransformMatrix()
extern "C"  void Slot__updateLocalTransformMatrix_m1261311411 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_updateGlobalTransformMatrix()
extern "C"  void Slot__updateGlobalTransformMatrix_m393127643 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_init(DragonBones.SkinSlotData,System.Object,System.Object)
extern "C"  void Slot__init_m448413181 (Slot_t2605794020 * __this, SkinSlotData_t3577659979 * ___skinSlotData0, Il2CppObject * ___rawDisplay1, Il2CppObject * ___meshDisplay2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_setArmature(DragonBones.Armature)
extern "C"  void Slot__setArmature_m2252064586 (Slot_t2605794020 * __this, Armature_t2093713247 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_update(System.Int32)
extern "C"  void Slot__update_m3003531906 (Slot_t2605794020 * __this, int32_t ___cacheFrameIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::_updateTransformAndMatrix()
extern "C"  void Slot__updateTransformAndMatrix_m1068309053 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::_setDisplayList(System.Collections.Generic.List`1<System.Object>)
extern "C"  bool Slot__setDisplayList_m4151026964 (Slot_t2605794020 * __this, List_1_t1244034627 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::_setDisplayIndex(System.Int32)
extern "C"  bool Slot__setDisplayIndex_m838508017 (Slot_t2605794020 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::_setZorder(System.Int32)
extern "C"  bool Slot__setZorder_m2199672853 (Slot_t2605794020 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::_setColor(DragonBones.ColorTransform)
extern "C"  bool Slot__setColor_m1342916762 (Slot_t2605794020 * __this, ColorTransform_t810296751 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Slot::ContainsPoint(System.Single,System.Single)
extern "C"  bool Slot_ContainsPoint_m3951621802 (Slot_t2605794020 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.Slot::IntersectsSegment(System.Single,System.Single,System.Single,System.Single,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  int32_t Slot_IntersectsSegment_m1256854250 (Slot_t2605794020 * __this, float ___xA0, float ___yA1, float ___xB2, float ___yB3, Point_t3755811474 * ___intersectionPointA4, Point_t3755811474 * ___intersectionPointB5, Point_t3755811474 * ___normalRadians6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::InvalidUpdate()
extern "C"  void Slot_InvalidUpdate_m1535938121 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.SkinSlotData DragonBones.Slot::get_skinSlotData()
extern "C"  SkinSlotData_t3577659979 * Slot_get_skinSlotData_m285936781 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.BoundingBoxData DragonBones.Slot::get_boundingBoxData()
extern "C"  BoundingBoxData_t3518226771 * Slot_get_boundingBoxData_m2321529661 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DragonBones.Slot::get_rawDisplay()
extern "C"  Il2CppObject * Slot_get_rawDisplay_m3718852849 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DragonBones.Slot::get_meshDisplay()
extern "C"  Il2CppObject * Slot_get_meshDisplay_m2111639968 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.Slot::get_displayIndex()
extern "C"  int32_t Slot_get_displayIndex_m361451648 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::set_displayIndex(System.Int32)
extern "C"  void Slot_set_displayIndex_m20890423 (Slot_t2605794020 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> DragonBones.Slot::get_displayList()
extern "C"  List_1_t1244034627 * Slot_get_displayList_m3790184481 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::set_displayList(System.Collections.Generic.List`1<System.Object>)
extern "C"  void Slot_set_displayList_m2920729102 (Slot_t2605794020 * __this, List_1_t1244034627 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DragonBones.Slot::get_display()
extern "C"  Il2CppObject * Slot_get_display_m2396004877 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::set_display(System.Object)
extern "C"  void Slot_set_display_m52863206 (Slot_t2605794020 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Armature DragonBones.Slot::get_childArmature()
extern "C"  Armature_t2093713247 * Slot_get_childArmature_m4108257155 (Slot_t2605794020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Slot::set_childArmature(DragonBones.Armature)
extern "C"  void Slot_set_childArmature_m2990395958 (Slot_t2605794020 * __this, Armature_t2093713247 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

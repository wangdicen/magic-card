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

// DragonBones.BoundingBoxData
struct BoundingBoxData_t3518226771;
// DragonBones.Point
struct Point_t3755811474;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_OutCode1490957277.h"
#include "AssemblyU2DCSharp_DragonBones_Point3755811474.h"

// System.Void DragonBones.BoundingBoxData::.ctor()
extern "C"  void BoundingBoxData__ctor_m3632032460 (BoundingBoxData_t3518226771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.OutCode DragonBones.BoundingBoxData::_computeOutCode(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  int32_t BoundingBoxData__computeOutCode_m1141884045 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___xMin2, float ___yMin3, float ___xMax4, float ___yMax5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.BoundingBoxData::SegmentIntersectsRectangle(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  int32_t BoundingBoxData_SegmentIntersectsRectangle_m316176166 (Il2CppObject * __this /* static, unused */, float ___xA0, float ___yA1, float ___xB2, float ___yB3, float ___xMin4, float ___yMin5, float ___xMax6, float ___yMax7, Point_t3755811474 * ___intersectionPointA8, Point_t3755811474 * ___intersectionPointB9, Point_t3755811474 * ___normalRadians10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.BoundingBoxData::SegmentIntersectsEllipse(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  int32_t BoundingBoxData_SegmentIntersectsEllipse_m1874205015 (Il2CppObject * __this /* static, unused */, float ___xA0, float ___yA1, float ___xB2, float ___yB3, float ___xC4, float ___yC5, float ___widthH6, float ___heightH7, Point_t3755811474 * ___intersectionPointA8, Point_t3755811474 * ___intersectionPointB9, Point_t3755811474 * ___normalRadians10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.BoundingBoxData::SegmentIntersectsPolygon(System.Single,System.Single,System.Single,System.Single,System.Collections.Generic.List`1<System.Single>,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  int32_t BoundingBoxData_SegmentIntersectsPolygon_m259607614 (Il2CppObject * __this /* static, unused */, float ___xA0, float ___yA1, float ___xB2, float ___yB3, List_1_t1365137228 * ___vertices4, Point_t3755811474 * ___intersectionPointA5, Point_t3755811474 * ___intersectionPointB6, Point_t3755811474 * ___normalRadians7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.BoundingBoxData::_onClear()
extern "C"  void BoundingBoxData__onClear_m3727973383 (BoundingBoxData_t3518226771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.BoundingBoxData::ContainsPoint(System.Single,System.Single)
extern "C"  bool BoundingBoxData_ContainsPoint_m3981863393 (BoundingBoxData_t3518226771 * __this, float ___pX0, float ___pY1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.BoundingBoxData::IntersectsSegment(System.Single,System.Single,System.Single,System.Single,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  int32_t BoundingBoxData_IntersectsSegment_m726822125 (BoundingBoxData_t3518226771 * __this, float ___xA0, float ___yA1, float ___xB2, float ___yB3, Point_t3755811474 * ___intersectionPointA4, Point_t3755811474 * ___intersectionPointB5, Point_t3755811474 * ___normalRadians6, const MethodInfo* method) IL2CPP_METHOD_ATTR;

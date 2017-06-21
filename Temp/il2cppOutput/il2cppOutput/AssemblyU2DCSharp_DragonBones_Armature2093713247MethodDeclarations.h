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

// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.ActionData
struct ActionData_t1665145446;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.SkinData
struct SkinData_t1378009773;
// System.Object
struct Il2CppObject;
// DragonBones.IArmatureProxy
struct IArmatureProxy_t2645271282;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject>
struct IEventDispatcher_1_t3019110679;
// DragonBones.Bone
struct Bone_t2605290410;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// DragonBones.EventObject
struct EventObject_t3080673531;
// System.String
struct String_t;
// DragonBones.Point
struct Point_t3755811474;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_t3973475962;
// System.Collections.Generic.List`1<DragonBones.Slot>
struct List_1_t3973979572;
// DragonBones.Animation
struct Animation_t3458507142;
// DragonBones.WorldClock
struct WorldClock_t245661442;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_Slot2605794020.h"
#include "AssemblyU2DCSharp_DragonBones_ActionData1665145446.h"
#include "AssemblyU2DCSharp_DragonBones_ArmatureData3944230313.h"
#include "AssemblyU2DCSharp_DragonBones_SkinData1378009773.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_DragonBones_Bone2605290410.h"
#include "AssemblyU2DCSharp_DragonBones_EventObject3080673531.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DragonBones_Point3755811474.h"
#include "AssemblyU2DCSharp_DragonBones_WorldClock245661442.h"

// System.Void DragonBones.Armature::.ctor()
extern "C"  void Armature__ctor_m1614840176 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DragonBones.Armature::_onSortSlots(DragonBones.Slot,DragonBones.Slot)
extern "C"  int32_t Armature__onSortSlots_m258051083 (Il2CppObject * __this /* static, unused */, Slot_t2605794020 * ___a0, Slot_t2605794020 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_onClear()
extern "C"  void Armature__onClear_m440079075 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_sortBones()
extern "C"  void Armature__sortBones_m327557286 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_sortSlots()
extern "C"  void Armature__sortSlots_m2445700908 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_doAction(DragonBones.ActionData)
extern "C"  void Armature__doAction_m3341818908 (Armature_t2093713247 * __this, ActionData_t1665145446 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_init(DragonBones.ArmatureData,DragonBones.SkinData,System.Object,DragonBones.IArmatureProxy,DragonBones.IEventDispatcher`1<DragonBones.EventObject>)
extern "C"  void Armature__init_m3302192777 (Armature_t2093713247 * __this, ArmatureData_t3944230313 * ___armatureData0, SkinData_t1378009773 * ___skinData1, Il2CppObject * ___display2, Il2CppObject * ___proxy3, Il2CppObject* ___eventManager4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_addBoneToBoneList(DragonBones.Bone)
extern "C"  void Armature__addBoneToBoneList_m2952514593 (Armature_t2093713247 * __this, Bone_t2605290410 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_removeBoneFromBoneList(DragonBones.Bone)
extern "C"  void Armature__removeBoneFromBoneList_m3514823051 (Armature_t2093713247 * __this, Bone_t2605290410 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_addSlotToSlotList(DragonBones.Slot)
extern "C"  void Armature__addSlotToSlotList_m3515228187 (Armature_t2093713247 * __this, Slot_t2605794020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_removeSlotFromSlotList(DragonBones.Slot)
extern "C"  void Armature__removeSlotFromSlotList_m295575301 (Armature_t2093713247 * __this, Slot_t2605794020 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_sortZOrder(System.Collections.Generic.List`1<System.Int32>)
extern "C"  void Armature__sortZOrder_m3445761186 (Armature_t2093713247 * __this, List_1_t2522024052 * ___slotIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_bufferAction(DragonBones.ActionData)
extern "C"  void Armature__bufferAction_m2307797777 (Armature_t2093713247 * __this, ActionData_t1665145446 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::_bufferEvent(DragonBones.EventObject,System.String)
extern "C"  void Armature__bufferEvent_m2127595032 (Armature_t2093713247 * __this, EventObject_t3080673531 * ___value0, String_t* ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::Dispose()
extern "C"  void Armature_Dispose_m1276498349 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::AdvanceTime(System.Single)
extern "C"  void Armature_AdvanceTime_m806915406 (Armature_t2093713247 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::InvalidUpdate(System.String,System.Boolean)
extern "C"  void Armature_InvalidUpdate_m2145567337 (Armature_t2093713247 * __this, String_t* ___boneName0, bool ___updateSlotDisplay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.Armature::ContainsPoint(System.Single,System.Single)
extern "C"  Slot_t2605794020 * Armature_ContainsPoint_m1580278430 (Armature_t2093713247 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.Armature::intersectsSegment(System.Single,System.Single,System.Single,System.Single,DragonBones.Point,DragonBones.Point,DragonBones.Point)
extern "C"  Slot_t2605794020 * Armature_intersectsSegment_m1434237668 (Armature_t2093713247 * __this, float ___xA0, float ___yA1, float ___xB2, float ___yB3, Point_t3755811474 * ___intersectionPointA4, Point_t3755811474 * ___intersectionPointB5, Point_t3755811474 * ___normalRadians6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Bone DragonBones.Armature::GetBone(System.String)
extern "C"  Bone_t2605290410 * Armature_GetBone_m2814999073 (Armature_t2093713247 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Bone DragonBones.Armature::GetBoneByDisplay(System.Object)
extern "C"  Bone_t2605290410 * Armature_GetBoneByDisplay_m663944200 (Armature_t2093713247 * __this, Il2CppObject * ___display0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.Armature::GetSlot(System.String)
extern "C"  Slot_t2605794020 * Armature_GetSlot_m685307565 (Armature_t2093713247 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.Armature::GetSlotByDisplay(System.Object)
extern "C"  Slot_t2605794020 * Armature_GetSlotByDisplay_m2455297276 (Armature_t2093713247 * __this, Il2CppObject * ___display0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::AddBone(DragonBones.Bone,System.String)
extern "C"  void Armature_AddBone_m224237433 (Armature_t2093713247 * __this, Bone_t2605290410 * ___value0, String_t* ___parentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::AddSlot(DragonBones.Slot,System.String)
extern "C"  void Armature_AddSlot_m278565945 (Armature_t2093713247 * __this, Slot_t2605794020 * ___value0, String_t* ___parentName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::ReplaceTexture(System.Object)
extern "C"  void Armature_ReplaceTexture_m1469497689 (Armature_t2093713247 * __this, Il2CppObject * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Armature::GetBones()
extern "C"  List_1_t3973475962 * Armature_GetBones_m1751587254 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DragonBones.Slot> DragonBones.Armature::GetSlots()
extern "C"  List_1_t3973979572 * Armature_GetSlots_m2636040438 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DragonBones.Armature::get_name()
extern "C"  String_t* Armature_get_name_m3195196203 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.ArmatureData DragonBones.Armature::get_armatureData()
extern "C"  ArmatureData_t3944230313 * Armature_get_armatureData_m4155150536 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Animation DragonBones.Armature::get_animation()
extern "C"  Animation_t3458507142 * Armature_get_animation_m3085833480 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject> DragonBones.Armature::get_eventDispatcher()
extern "C"  Il2CppObject* Armature_get_eventDispatcher_m2020507371 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DragonBones.Armature::get_display()
extern "C"  Il2CppObject * Armature_get_display_m1876614834 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.Slot DragonBones.Armature::get_parent()
extern "C"  Slot_t2605794020 * Armature_get_parent_m1013986772 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DragonBones.Armature::get_cacheFrameRate()
extern "C"  uint32_t Armature_get_cacheFrameRate_m1688254563 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::set_cacheFrameRate(System.UInt32)
extern "C"  void Armature_set_cacheFrameRate_m1147523070 (Armature_t2093713247 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.WorldClock DragonBones.Armature::get_clock()
extern "C"  WorldClock_t245661442 * Armature_get_clock_m1494246948 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::set_clock(DragonBones.WorldClock)
extern "C"  void Armature_set_clock_m2429066737 (Armature_t2093713247 * __this, WorldClock_t245661442 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object DragonBones.Armature::get_replacedTexture()
extern "C"  Il2CppObject * Armature_get_replacedTexture_m2661235579 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::set_replacedTexture(System.Object)
extern "C"  void Armature_set_replacedTexture_m359349688 (Armature_t2093713247 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Armature::get_flipX()
extern "C"  bool Armature_get_flipX_m3753950940 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::set_flipX(System.Boolean)
extern "C"  void Armature_set_flipX_m2427436179 (Armature_t2093713247 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.Armature::get_flipY()
extern "C"  bool Armature_get_flipY_m3753951901 (Armature_t2093713247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.Armature::set_flipY(System.Boolean)
extern "C"  void Armature_set_flipY_m3780745876 (Armature_t2093713247 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// DragonBones.WorldClock
struct WorldClock_t245661442;
// DragonBones.IAnimateble
struct IAnimateble_t1416016549;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_DragonBones_WorldClock245661442.h"

// System.Void DragonBones.WorldClock::.ctor()
extern "C"  void WorldClock__ctor_m1344555821 (WorldClock_t245661442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.WorldClock::AdvanceTime(System.Single)
extern "C"  void WorldClock_AdvanceTime_m186738801 (WorldClock_t245661442 * __this, float ___passedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DragonBones.WorldClock::Contains(DragonBones.IAnimateble)
extern "C"  bool WorldClock_Contains_m1753629431 (WorldClock_t245661442 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.WorldClock::Add(DragonBones.IAnimateble)
extern "C"  void WorldClock_Add_m3178563349 (WorldClock_t245661442 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.WorldClock::Remove(DragonBones.IAnimateble)
extern "C"  void WorldClock_Remove_m803267302 (WorldClock_t245661442 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.WorldClock::Clear()
extern "C"  void WorldClock_Clear_m3045656408 (WorldClock_t245661442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DragonBones.WorldClock DragonBones.WorldClock::get_clock()
extern "C"  WorldClock_t245661442 * WorldClock_get_clock_m3147495713 (WorldClock_t245661442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DragonBones.WorldClock::set_clock(DragonBones.WorldClock)
extern "C"  void WorldClock_set_clock_m2448196974 (WorldClock_t245661442 * __this, WorldClock_t245661442 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

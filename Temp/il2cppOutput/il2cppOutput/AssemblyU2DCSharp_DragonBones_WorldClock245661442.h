#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DragonBones.IAnimateble>
struct List_1_t2784202101;
// DragonBones.WorldClock
struct WorldClock_t245661442;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.WorldClock
struct  WorldClock_t245661442  : public Il2CppObject
{
public:
	// System.Single DragonBones.WorldClock::time
	float ___time_0;
	// System.Single DragonBones.WorldClock::timeScale
	float ___timeScale_1;
	// System.Collections.Generic.List`1<DragonBones.IAnimateble> DragonBones.WorldClock::_animatebles
	List_1_t2784202101 * ____animatebles_2;
	// DragonBones.WorldClock DragonBones.WorldClock::_clock
	WorldClock_t245661442 * ____clock_3;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(WorldClock_t245661442, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_timeScale_1() { return static_cast<int32_t>(offsetof(WorldClock_t245661442, ___timeScale_1)); }
	inline float get_timeScale_1() const { return ___timeScale_1; }
	inline float* get_address_of_timeScale_1() { return &___timeScale_1; }
	inline void set_timeScale_1(float value)
	{
		___timeScale_1 = value;
	}

	inline static int32_t get_offset_of__animatebles_2() { return static_cast<int32_t>(offsetof(WorldClock_t245661442, ____animatebles_2)); }
	inline List_1_t2784202101 * get__animatebles_2() const { return ____animatebles_2; }
	inline List_1_t2784202101 ** get_address_of__animatebles_2() { return &____animatebles_2; }
	inline void set__animatebles_2(List_1_t2784202101 * value)
	{
		____animatebles_2 = value;
		Il2CppCodeGenWriteBarrier(&____animatebles_2, value);
	}

	inline static int32_t get_offset_of__clock_3() { return static_cast<int32_t>(offsetof(WorldClock_t245661442, ____clock_3)); }
	inline WorldClock_t245661442 * get__clock_3() const { return ____clock_3; }
	inline WorldClock_t245661442 ** get_address_of__clock_3() { return &____clock_3; }
	inline void set__clock_3(WorldClock_t245661442 * value)
	{
		____clock_3 = value;
		Il2CppCodeGenWriteBarrier(&____clock_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.SlotData
struct SlotData_t2442829486;

#include "AssemblyU2DCSharp_DragonBones_TimelineData_1_gen3907927954.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SlotTimelineData
struct  SlotTimelineData_t3578179215  : public TimelineData_1_t3907927954
{
public:
	// DragonBones.SlotData DragonBones.SlotTimelineData::slot
	SlotData_t2442829486 * ___slot_8;

public:
	inline static int32_t get_offset_of_slot_8() { return static_cast<int32_t>(offsetof(SlotTimelineData_t3578179215, ___slot_8)); }
	inline SlotData_t2442829486 * get_slot_8() const { return ___slot_8; }
	inline SlotData_t2442829486 ** get_address_of_slot_8() { return &___slot_8; }
	inline void set_slot_8(SlotData_t2442829486 * value)
	{
		___slot_8 = value;
		Il2CppCodeGenWriteBarrier(&___slot_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

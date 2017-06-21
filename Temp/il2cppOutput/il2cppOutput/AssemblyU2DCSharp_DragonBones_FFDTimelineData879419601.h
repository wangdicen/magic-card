#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.DisplayData
struct DisplayData_t523795982;

#include "AssemblyU2DCSharp_DragonBones_TimelineData_1_gen1720834261.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.FFDTimelineData
struct  FFDTimelineData_t879419601  : public TimelineData_1_t1720834261
{
public:
	// DragonBones.SkinData DragonBones.FFDTimelineData::skin
	SkinData_t1378009773 * ___skin_8;
	// DragonBones.SkinSlotData DragonBones.FFDTimelineData::slot
	SkinSlotData_t3577659979 * ___slot_9;
	// DragonBones.DisplayData DragonBones.FFDTimelineData::display
	DisplayData_t523795982 * ___display_10;

public:
	inline static int32_t get_offset_of_skin_8() { return static_cast<int32_t>(offsetof(FFDTimelineData_t879419601, ___skin_8)); }
	inline SkinData_t1378009773 * get_skin_8() const { return ___skin_8; }
	inline SkinData_t1378009773 ** get_address_of_skin_8() { return &___skin_8; }
	inline void set_skin_8(SkinData_t1378009773 * value)
	{
		___skin_8 = value;
		Il2CppCodeGenWriteBarrier(&___skin_8, value);
	}

	inline static int32_t get_offset_of_slot_9() { return static_cast<int32_t>(offsetof(FFDTimelineData_t879419601, ___slot_9)); }
	inline SkinSlotData_t3577659979 * get_slot_9() const { return ___slot_9; }
	inline SkinSlotData_t3577659979 ** get_address_of_slot_9() { return &___slot_9; }
	inline void set_slot_9(SkinSlotData_t3577659979 * value)
	{
		___slot_9 = value;
		Il2CppCodeGenWriteBarrier(&___slot_9, value);
	}

	inline static int32_t get_offset_of_display_10() { return static_cast<int32_t>(offsetof(FFDTimelineData_t879419601, ___display_10)); }
	inline DisplayData_t523795982 * get_display_10() const { return ___display_10; }
	inline DisplayData_t523795982 ** get_address_of_display_10() { return &___display_10; }
	inline void set_display_10(DisplayData_t523795982 * value)
	{
		___display_10 = value;
		Il2CppCodeGenWriteBarrier(&___display_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

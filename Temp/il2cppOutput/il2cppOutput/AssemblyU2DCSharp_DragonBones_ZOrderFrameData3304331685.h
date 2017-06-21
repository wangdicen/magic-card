#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "AssemblyU2DCSharp_DragonBones_FrameData_1_gen2053436644.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.ZOrderFrameData
struct  ZOrderFrameData_t3304331685  : public FrameData_1_t2053436644
{
public:
	// System.Collections.Generic.List`1<System.Int32> DragonBones.ZOrderFrameData::zOrder
	List_1_t2522024052 * ___zOrder_9;

public:
	inline static int32_t get_offset_of_zOrder_9() { return static_cast<int32_t>(offsetof(ZOrderFrameData_t3304331685, ___zOrder_9)); }
	inline List_1_t2522024052 * get_zOrder_9() const { return ___zOrder_9; }
	inline List_1_t2522024052 ** get_address_of_zOrder_9() { return &___zOrder_9; }
	inline void set_zOrder_9(List_1_t2522024052 * value)
	{
		___zOrder_9 = value;
		Il2CppCodeGenWriteBarrier(&___zOrder_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

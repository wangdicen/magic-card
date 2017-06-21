#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "AssemblyU2DCSharp_DragonBones_TweenFrameData_1_gen2567405166.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.ExtensionFrameData
struct  ExtensionFrameData_t2570746526  : public TweenFrameData_1_t2567405166
{
public:
	// System.Collections.Generic.List`1<System.Single> DragonBones.ExtensionFrameData::tweens
	List_1_t1365137228 * ___tweens_11;

public:
	inline static int32_t get_offset_of_tweens_11() { return static_cast<int32_t>(offsetof(ExtensionFrameData_t2570746526, ___tweens_11)); }
	inline List_1_t1365137228 * get_tweens_11() const { return ___tweens_11; }
	inline List_1_t1365137228 ** get_address_of_tweens_11() { return &___tweens_11; }
	inline void set_tweens_11(List_1_t1365137228 * value)
	{
		___tweens_11 = value;
		Il2CppCodeGenWriteBarrier(&___tweens_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

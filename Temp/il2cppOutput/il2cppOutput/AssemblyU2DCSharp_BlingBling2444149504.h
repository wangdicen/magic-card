#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlingBling
struct  BlingBling_t2444149504  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image BlingBling::bling
	Image_t538875265 * ___bling_2;

public:
	inline static int32_t get_offset_of_bling_2() { return static_cast<int32_t>(offsetof(BlingBling_t2444149504, ___bling_2)); }
	inline Image_t538875265 * get_bling_2() const { return ___bling_2; }
	inline Image_t538875265 ** get_address_of_bling_2() { return &___bling_2; }
	inline void set_bling_2(Image_t538875265 * value)
	{
		___bling_2 = value;
		Il2CppCodeGenWriteBarrier(&___bling_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

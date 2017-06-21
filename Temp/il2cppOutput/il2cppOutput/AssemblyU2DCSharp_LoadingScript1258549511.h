#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadingScript
struct  LoadingScript_t1258549511  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject LoadingScript::loadingbar
	GameObject_t3674682005 * ___loadingbar_2;
	// UnityEngine.GameObject LoadingScript::image
	GameObject_t3674682005 * ___image_3;

public:
	inline static int32_t get_offset_of_loadingbar_2() { return static_cast<int32_t>(offsetof(LoadingScript_t1258549511, ___loadingbar_2)); }
	inline GameObject_t3674682005 * get_loadingbar_2() const { return ___loadingbar_2; }
	inline GameObject_t3674682005 ** get_address_of_loadingbar_2() { return &___loadingbar_2; }
	inline void set_loadingbar_2(GameObject_t3674682005 * value)
	{
		___loadingbar_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingbar_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(LoadingScript_t1258549511, ___image_3)); }
	inline GameObject_t3674682005 * get_image_3() const { return ___image_3; }
	inline GameObject_t3674682005 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(GameObject_t3674682005 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// BasicScript.Component.SplashScreen
struct  SplashScreen_t4225096465  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image BasicScript.Component.SplashScreen::splashImg
	Image_t538875265 * ___splashImg_2;
	// UnityEngine.UI.Image BasicScript.Component.SplashScreen::splashImg2
	Image_t538875265 * ___splashImg2_3;
	// System.Single BasicScript.Component.SplashScreen::alpha
	float ___alpha_4;
	// System.Int32 BasicScript.Component.SplashScreen::stage
	int32_t ___stage_5;
	// System.Single BasicScript.Component.SplashScreen::waitTime
	float ___waitTime_6;

public:
	inline static int32_t get_offset_of_splashImg_2() { return static_cast<int32_t>(offsetof(SplashScreen_t4225096465, ___splashImg_2)); }
	inline Image_t538875265 * get_splashImg_2() const { return ___splashImg_2; }
	inline Image_t538875265 ** get_address_of_splashImg_2() { return &___splashImg_2; }
	inline void set_splashImg_2(Image_t538875265 * value)
	{
		___splashImg_2 = value;
		Il2CppCodeGenWriteBarrier(&___splashImg_2, value);
	}

	inline static int32_t get_offset_of_splashImg2_3() { return static_cast<int32_t>(offsetof(SplashScreen_t4225096465, ___splashImg2_3)); }
	inline Image_t538875265 * get_splashImg2_3() const { return ___splashImg2_3; }
	inline Image_t538875265 ** get_address_of_splashImg2_3() { return &___splashImg2_3; }
	inline void set_splashImg2_3(Image_t538875265 * value)
	{
		___splashImg2_3 = value;
		Il2CppCodeGenWriteBarrier(&___splashImg2_3, value);
	}

	inline static int32_t get_offset_of_alpha_4() { return static_cast<int32_t>(offsetof(SplashScreen_t4225096465, ___alpha_4)); }
	inline float get_alpha_4() const { return ___alpha_4; }
	inline float* get_address_of_alpha_4() { return &___alpha_4; }
	inline void set_alpha_4(float value)
	{
		___alpha_4 = value;
	}

	inline static int32_t get_offset_of_stage_5() { return static_cast<int32_t>(offsetof(SplashScreen_t4225096465, ___stage_5)); }
	inline int32_t get_stage_5() const { return ___stage_5; }
	inline int32_t* get_address_of_stage_5() { return &___stage_5; }
	inline void set_stage_5(int32_t value)
	{
		___stage_5 = value;
	}

	inline static int32_t get_offset_of_waitTime_6() { return static_cast<int32_t>(offsetof(SplashScreen_t4225096465, ___waitTime_6)); }
	inline float get_waitTime_6() const { return ___waitTime_6; }
	inline float* get_address_of_waitTime_6() { return &___waitTime_6; }
	inline void set_waitTime_6(float value)
	{
		___waitTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

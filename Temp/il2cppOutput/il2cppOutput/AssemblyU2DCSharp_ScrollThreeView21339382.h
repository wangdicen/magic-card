#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollThreeView
struct  ScrollThreeView_t21339382  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.ScrollRect ScrollThreeView::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_2;
	// System.Single[] ScrollThreeView::levelArray
	SingleU5BU5D_t2316563989* ___levelArray_3;
	// System.Single ScrollThreeView::targetHorizontalPosition
	float ___targetHorizontalPosition_4;
	// System.Single ScrollThreeView::smothing
	float ___smothing_5;
	// System.Boolean ScrollThreeView::isDrag
	bool ___isDrag_6;

public:
	inline static int32_t get_offset_of_scrollRect_2() { return static_cast<int32_t>(offsetof(ScrollThreeView_t21339382, ___scrollRect_2)); }
	inline ScrollRect_t3606982749 * get_scrollRect_2() const { return ___scrollRect_2; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_2() { return &___scrollRect_2; }
	inline void set_scrollRect_2(ScrollRect_t3606982749 * value)
	{
		___scrollRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_2, value);
	}

	inline static int32_t get_offset_of_levelArray_3() { return static_cast<int32_t>(offsetof(ScrollThreeView_t21339382, ___levelArray_3)); }
	inline SingleU5BU5D_t2316563989* get_levelArray_3() const { return ___levelArray_3; }
	inline SingleU5BU5D_t2316563989** get_address_of_levelArray_3() { return &___levelArray_3; }
	inline void set_levelArray_3(SingleU5BU5D_t2316563989* value)
	{
		___levelArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelArray_3, value);
	}

	inline static int32_t get_offset_of_targetHorizontalPosition_4() { return static_cast<int32_t>(offsetof(ScrollThreeView_t21339382, ___targetHorizontalPosition_4)); }
	inline float get_targetHorizontalPosition_4() const { return ___targetHorizontalPosition_4; }
	inline float* get_address_of_targetHorizontalPosition_4() { return &___targetHorizontalPosition_4; }
	inline void set_targetHorizontalPosition_4(float value)
	{
		___targetHorizontalPosition_4 = value;
	}

	inline static int32_t get_offset_of_smothing_5() { return static_cast<int32_t>(offsetof(ScrollThreeView_t21339382, ___smothing_5)); }
	inline float get_smothing_5() const { return ___smothing_5; }
	inline float* get_address_of_smothing_5() { return &___smothing_5; }
	inline void set_smothing_5(float value)
	{
		___smothing_5 = value;
	}

	inline static int32_t get_offset_of_isDrag_6() { return static_cast<int32_t>(offsetof(ScrollThreeView_t21339382, ___isDrag_6)); }
	inline bool get_isDrag_6() const { return ___isDrag_6; }
	inline bool* get_address_of_isDrag_6() { return &___isDrag_6; }
	inline void set_isDrag_6(bool value)
	{
		___isDrag_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

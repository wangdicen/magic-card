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

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_BoundingBoxType3518726371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BoundingBoxData
struct  BoundingBoxData_t3518226771  : public BaseObject_t3159603414
{
public:
	// DragonBones.BoundingBoxType DragonBones.BoundingBoxData::type
	int32_t ___type_5;
	// System.UInt32 DragonBones.BoundingBoxData::color
	uint32_t ___color_6;
	// System.Single DragonBones.BoundingBoxData::x
	float ___x_7;
	// System.Single DragonBones.BoundingBoxData::y
	float ___y_8;
	// System.Single DragonBones.BoundingBoxData::width
	float ___width_9;
	// System.Single DragonBones.BoundingBoxData::height
	float ___height_10;
	// System.Collections.Generic.List`1<System.Single> DragonBones.BoundingBoxData::vertices
	List_1_t1365137228 * ___vertices_11;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___color_6)); }
	inline uint32_t get_color_6() const { return ___color_6; }
	inline uint32_t* get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(uint32_t value)
	{
		___color_6 = value;
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___x_7)); }
	inline float get_x_7() const { return ___x_7; }
	inline float* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(float value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___y_8)); }
	inline float get_y_8() const { return ___y_8; }
	inline float* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(float value)
	{
		___y_8 = value;
	}

	inline static int32_t get_offset_of_width_9() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___width_9)); }
	inline float get_width_9() const { return ___width_9; }
	inline float* get_address_of_width_9() { return &___width_9; }
	inline void set_width_9(float value)
	{
		___width_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___height_10)); }
	inline float get_height_10() const { return ___height_10; }
	inline float* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(float value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_vertices_11() { return static_cast<int32_t>(offsetof(BoundingBoxData_t3518226771, ___vertices_11)); }
	inline List_1_t1365137228 * get_vertices_11() const { return ___vertices_11; }
	inline List_1_t1365137228 ** get_address_of_vertices_11() { return &___vertices_11; }
	inline void set_vertices_11(List_1_t1365137228 * value)
	{
		___vertices_11 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

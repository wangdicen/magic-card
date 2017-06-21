#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.UInt32>
struct Dictionary_2_t130090466;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DragonBones.BaseObject>>
struct Dictionary_2_t338244155;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BaseObject
struct  BaseObject_t3159603414  : public Il2CppObject
{
public:
	// System.UInt32 DragonBones.BaseObject::hashCode
	uint32_t ___hashCode_4;

public:
	inline static int32_t get_offset_of_hashCode_4() { return static_cast<int32_t>(offsetof(BaseObject_t3159603414, ___hashCode_4)); }
	inline uint32_t get_hashCode_4() const { return ___hashCode_4; }
	inline uint32_t* get_address_of_hashCode_4() { return &___hashCode_4; }
	inline void set_hashCode_4(uint32_t value)
	{
		___hashCode_4 = value;
	}
};

struct BaseObject_t3159603414_StaticFields
{
public:
	// System.UInt32 DragonBones.BaseObject::_hashCode
	uint32_t ____hashCode_0;
	// System.UInt32 DragonBones.BaseObject::_defaultMaxCount
	uint32_t ____defaultMaxCount_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.UInt32> DragonBones.BaseObject::_maxCountMap
	Dictionary_2_t130090466 * ____maxCountMap_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<DragonBones.BaseObject>> DragonBones.BaseObject::_poolsMap
	Dictionary_2_t338244155 * ____poolsMap_3;

public:
	inline static int32_t get_offset_of__hashCode_0() { return static_cast<int32_t>(offsetof(BaseObject_t3159603414_StaticFields, ____hashCode_0)); }
	inline uint32_t get__hashCode_0() const { return ____hashCode_0; }
	inline uint32_t* get_address_of__hashCode_0() { return &____hashCode_0; }
	inline void set__hashCode_0(uint32_t value)
	{
		____hashCode_0 = value;
	}

	inline static int32_t get_offset_of__defaultMaxCount_1() { return static_cast<int32_t>(offsetof(BaseObject_t3159603414_StaticFields, ____defaultMaxCount_1)); }
	inline uint32_t get__defaultMaxCount_1() const { return ____defaultMaxCount_1; }
	inline uint32_t* get_address_of__defaultMaxCount_1() { return &____defaultMaxCount_1; }
	inline void set__defaultMaxCount_1(uint32_t value)
	{
		____defaultMaxCount_1 = value;
	}

	inline static int32_t get_offset_of__maxCountMap_2() { return static_cast<int32_t>(offsetof(BaseObject_t3159603414_StaticFields, ____maxCountMap_2)); }
	inline Dictionary_2_t130090466 * get__maxCountMap_2() const { return ____maxCountMap_2; }
	inline Dictionary_2_t130090466 ** get_address_of__maxCountMap_2() { return &____maxCountMap_2; }
	inline void set__maxCountMap_2(Dictionary_2_t130090466 * value)
	{
		____maxCountMap_2 = value;
		Il2CppCodeGenWriteBarrier(&____maxCountMap_2, value);
	}

	inline static int32_t get_offset_of__poolsMap_3() { return static_cast<int32_t>(offsetof(BaseObject_t3159603414_StaticFields, ____poolsMap_3)); }
	inline Dictionary_2_t338244155 * get__poolsMap_3() const { return ____poolsMap_3; }
	inline Dictionary_2_t338244155 ** get_address_of__poolsMap_3() { return &____poolsMap_3; }
	inline void set__poolsMap_3(Dictionary_2_t338244155 * value)
	{
		____poolsMap_3 = value;
		Il2CppCodeGenWriteBarrier(&____poolsMap_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

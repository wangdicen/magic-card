﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ListenerDelegate`1<DragonBones.EventObject>>
struct Dictionary_2_t179726738;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.UnityEventDispatcher`1<DragonBones.EventObject>
struct  UnityEventDispatcher_1_t2956979819  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ListenerDelegate`1<T>> DragonBones.UnityEventDispatcher`1::_listeners
	Dictionary_2_t179726738 * ____listeners_2;

public:
	inline static int32_t get_offset_of__listeners_2() { return static_cast<int32_t>(offsetof(UnityEventDispatcher_1_t2956979819, ____listeners_2)); }
	inline Dictionary_2_t179726738 * get__listeners_2() const { return ____listeners_2; }
	inline Dictionary_2_t179726738 ** get_address_of__listeners_2() { return &____listeners_2; }
	inline void set__listeners_2(Dictionary_2_t179726738 * value)
	{
		____listeners_2 = value;
		Il2CppCodeGenWriteBarrier(&____listeners_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

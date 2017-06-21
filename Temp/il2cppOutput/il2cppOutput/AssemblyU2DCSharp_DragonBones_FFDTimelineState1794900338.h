#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Slot
struct Slot_t2605794020;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;

#include "AssemblyU2DCSharp_DragonBones_TweenTimelineState_23959839545.h"
#include "AssemblyU2DCSharp_DragonBones_TweenType2509021767.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.FFDTimelineState
struct  FFDTimelineState_t1794900338  : public TweenTimelineState_2_t3959839545
{
public:
	// DragonBones.Slot DragonBones.FFDTimelineState::slot
	Slot_t2605794020 * ___slot_24;
	// System.Boolean DragonBones.FFDTimelineState::_ffdDirty
	bool ____ffdDirty_25;
	// DragonBones.TweenType DragonBones.FFDTimelineState::_tweenFFD
	int32_t ____tweenFFD_26;
	// System.Collections.Generic.List`1<System.Single> DragonBones.FFDTimelineState::_ffdVertices
	List_1_t1365137228 * ____ffdVertices_27;
	// System.Collections.Generic.List`1<System.Single> DragonBones.FFDTimelineState::_durationFFDVertices
	List_1_t1365137228 * ____durationFFDVertices_28;
	// System.Collections.Generic.List`1<System.Single> DragonBones.FFDTimelineState::_slotFFDVertices
	List_1_t1365137228 * ____slotFFDVertices_29;

public:
	inline static int32_t get_offset_of_slot_24() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ___slot_24)); }
	inline Slot_t2605794020 * get_slot_24() const { return ___slot_24; }
	inline Slot_t2605794020 ** get_address_of_slot_24() { return &___slot_24; }
	inline void set_slot_24(Slot_t2605794020 * value)
	{
		___slot_24 = value;
		Il2CppCodeGenWriteBarrier(&___slot_24, value);
	}

	inline static int32_t get_offset_of__ffdDirty_25() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ____ffdDirty_25)); }
	inline bool get__ffdDirty_25() const { return ____ffdDirty_25; }
	inline bool* get_address_of__ffdDirty_25() { return &____ffdDirty_25; }
	inline void set__ffdDirty_25(bool value)
	{
		____ffdDirty_25 = value;
	}

	inline static int32_t get_offset_of__tweenFFD_26() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ____tweenFFD_26)); }
	inline int32_t get__tweenFFD_26() const { return ____tweenFFD_26; }
	inline int32_t* get_address_of__tweenFFD_26() { return &____tweenFFD_26; }
	inline void set__tweenFFD_26(int32_t value)
	{
		____tweenFFD_26 = value;
	}

	inline static int32_t get_offset_of__ffdVertices_27() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ____ffdVertices_27)); }
	inline List_1_t1365137228 * get__ffdVertices_27() const { return ____ffdVertices_27; }
	inline List_1_t1365137228 ** get_address_of__ffdVertices_27() { return &____ffdVertices_27; }
	inline void set__ffdVertices_27(List_1_t1365137228 * value)
	{
		____ffdVertices_27 = value;
		Il2CppCodeGenWriteBarrier(&____ffdVertices_27, value);
	}

	inline static int32_t get_offset_of__durationFFDVertices_28() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ____durationFFDVertices_28)); }
	inline List_1_t1365137228 * get__durationFFDVertices_28() const { return ____durationFFDVertices_28; }
	inline List_1_t1365137228 ** get_address_of__durationFFDVertices_28() { return &____durationFFDVertices_28; }
	inline void set__durationFFDVertices_28(List_1_t1365137228 * value)
	{
		____durationFFDVertices_28 = value;
		Il2CppCodeGenWriteBarrier(&____durationFFDVertices_28, value);
	}

	inline static int32_t get_offset_of__slotFFDVertices_29() { return static_cast<int32_t>(offsetof(FFDTimelineState_t1794900338, ____slotFFDVertices_29)); }
	inline List_1_t1365137228 * get__slotFFDVertices_29() const { return ____slotFFDVertices_29; }
	inline List_1_t1365137228 ** get_address_of__slotFFDVertices_29() { return &____slotFFDVertices_29; }
	inline void set__slotFFDVertices_29(List_1_t1365137228 * value)
	{
		____slotFFDVertices_29 = value;
		Il2CppCodeGenWriteBarrier(&____slotFFDVertices_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

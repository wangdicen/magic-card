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
// DragonBones.ColorTransform
struct ColorTransform_t810296751;

#include "AssemblyU2DCSharp_DragonBones_TweenTimelineState_22340660902.h"
#include "AssemblyU2DCSharp_DragonBones_TweenType2509021767.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SlotTimelineState
struct  SlotTimelineState_t3852069748  : public TweenTimelineState_2_t2340660902
{
public:
	// DragonBones.Slot DragonBones.SlotTimelineState::slot
	Slot_t2605794020 * ___slot_24;
	// System.Boolean DragonBones.SlotTimelineState::_colorDirty
	bool ____colorDirty_25;
	// DragonBones.TweenType DragonBones.SlotTimelineState::_tweenColor
	int32_t ____tweenColor_26;
	// DragonBones.ColorTransform DragonBones.SlotTimelineState::_color
	ColorTransform_t810296751 * ____color_27;
	// DragonBones.ColorTransform DragonBones.SlotTimelineState::_durationColor
	ColorTransform_t810296751 * ____durationColor_28;
	// DragonBones.ColorTransform DragonBones.SlotTimelineState::_slotColor
	ColorTransform_t810296751 * ____slotColor_29;

public:
	inline static int32_t get_offset_of_slot_24() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ___slot_24)); }
	inline Slot_t2605794020 * get_slot_24() const { return ___slot_24; }
	inline Slot_t2605794020 ** get_address_of_slot_24() { return &___slot_24; }
	inline void set_slot_24(Slot_t2605794020 * value)
	{
		___slot_24 = value;
		Il2CppCodeGenWriteBarrier(&___slot_24, value);
	}

	inline static int32_t get_offset_of__colorDirty_25() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ____colorDirty_25)); }
	inline bool get__colorDirty_25() const { return ____colorDirty_25; }
	inline bool* get_address_of__colorDirty_25() { return &____colorDirty_25; }
	inline void set__colorDirty_25(bool value)
	{
		____colorDirty_25 = value;
	}

	inline static int32_t get_offset_of__tweenColor_26() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ____tweenColor_26)); }
	inline int32_t get__tweenColor_26() const { return ____tweenColor_26; }
	inline int32_t* get_address_of__tweenColor_26() { return &____tweenColor_26; }
	inline void set__tweenColor_26(int32_t value)
	{
		____tweenColor_26 = value;
	}

	inline static int32_t get_offset_of__color_27() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ____color_27)); }
	inline ColorTransform_t810296751 * get__color_27() const { return ____color_27; }
	inline ColorTransform_t810296751 ** get_address_of__color_27() { return &____color_27; }
	inline void set__color_27(ColorTransform_t810296751 * value)
	{
		____color_27 = value;
		Il2CppCodeGenWriteBarrier(&____color_27, value);
	}

	inline static int32_t get_offset_of__durationColor_28() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ____durationColor_28)); }
	inline ColorTransform_t810296751 * get__durationColor_28() const { return ____durationColor_28; }
	inline ColorTransform_t810296751 ** get_address_of__durationColor_28() { return &____durationColor_28; }
	inline void set__durationColor_28(ColorTransform_t810296751 * value)
	{
		____durationColor_28 = value;
		Il2CppCodeGenWriteBarrier(&____durationColor_28, value);
	}

	inline static int32_t get_offset_of__slotColor_29() { return static_cast<int32_t>(offsetof(SlotTimelineState_t3852069748, ____slotColor_29)); }
	inline ColorTransform_t810296751 * get__slotColor_29() const { return ____slotColor_29; }
	inline ColorTransform_t810296751 ** get_address_of__slotColor_29() { return &____slotColor_29; }
	inline void set__slotColor_29(ColorTransform_t810296751 * value)
	{
		____slotColor_29 = value;
		Il2CppCodeGenWriteBarrier(&____slotColor_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

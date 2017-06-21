#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_t3973475962;
// System.Collections.Generic.List`1<DragonBones.Slot>
struct List_1_t3973979572;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// System.Collections.Generic.List`1<DragonBones.EventObject>
struct List_1_t153891787;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.Animation
struct Animation_t3458507142;
// DragonBones.IArmatureProxy
struct IArmatureProxy_t2645271282;
// DragonBones.IEventDispatcher`1<DragonBones.EventObject>
struct IEventDispatcher_1_t3019110679;
// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.WorldClock
struct WorldClock_t245661442;
// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.Armature
struct  Armature_t2093713247  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.Armature::inheritAnimation
	bool ___inheritAnimation_5;
	// System.Object DragonBones.Armature::userData
	Il2CppObject * ___userData_6;
	// System.Boolean DragonBones.Armature::_delayDispose
	bool ____delayDispose_7;
	// System.Boolean DragonBones.Armature::_lockDispose
	bool ____lockDispose_8;
	// System.Boolean DragonBones.Armature::_bonesDirty
	bool ____bonesDirty_9;
	// System.Boolean DragonBones.Armature::_slotsDirty
	bool ____slotsDirty_10;
	// System.Boolean DragonBones.Armature::_zOrderDirty
	bool ____zOrderDirty_11;
	// System.Boolean DragonBones.Armature::_flipX
	bool ____flipX_12;
	// System.Boolean DragonBones.Armature::_flipY
	bool ____flipY_13;
	// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Armature::_bones
	List_1_t3973475962 * ____bones_14;
	// System.Collections.Generic.List`1<DragonBones.Slot> DragonBones.Armature::_slots
	List_1_t3973979572 * ____slots_15;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.Armature::_actions
	List_1_t3033330998 * ____actions_16;
	// System.Collections.Generic.List`1<DragonBones.EventObject> DragonBones.Armature::_events
	List_1_t153891787 * ____events_17;
	// DragonBones.ArmatureData DragonBones.Armature::_armatureData
	ArmatureData_t3944230313 * ____armatureData_18;
	// DragonBones.SkinData DragonBones.Armature::_skinData
	SkinData_t1378009773 * ____skinData_19;
	// DragonBones.Animation DragonBones.Armature::_animation
	Animation_t3458507142 * ____animation_20;
	// DragonBones.IArmatureProxy DragonBones.Armature::_proxy
	Il2CppObject * ____proxy_21;
	// System.Object DragonBones.Armature::_display
	Il2CppObject * ____display_22;
	// DragonBones.IEventDispatcher`1<DragonBones.EventObject> DragonBones.Armature::_eventManager
	Il2CppObject* ____eventManager_23;
	// DragonBones.Slot DragonBones.Armature::_parent
	Slot_t2605794020 * ____parent_24;
	// DragonBones.WorldClock DragonBones.Armature::_clock
	WorldClock_t245661442 * ____clock_25;
	// DragonBones.TextureAtlasData DragonBones.Armature::_replaceTextureAtlasData
	TextureAtlasData_t3103560160 * ____replaceTextureAtlasData_26;
	// System.Object DragonBones.Armature::_replacedTexture
	Il2CppObject * ____replacedTexture_27;

public:
	inline static int32_t get_offset_of_inheritAnimation_5() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ___inheritAnimation_5)); }
	inline bool get_inheritAnimation_5() const { return ___inheritAnimation_5; }
	inline bool* get_address_of_inheritAnimation_5() { return &___inheritAnimation_5; }
	inline void set_inheritAnimation_5(bool value)
	{
		___inheritAnimation_5 = value;
	}

	inline static int32_t get_offset_of_userData_6() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ___userData_6)); }
	inline Il2CppObject * get_userData_6() const { return ___userData_6; }
	inline Il2CppObject ** get_address_of_userData_6() { return &___userData_6; }
	inline void set_userData_6(Il2CppObject * value)
	{
		___userData_6 = value;
		Il2CppCodeGenWriteBarrier(&___userData_6, value);
	}

	inline static int32_t get_offset_of__delayDispose_7() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____delayDispose_7)); }
	inline bool get__delayDispose_7() const { return ____delayDispose_7; }
	inline bool* get_address_of__delayDispose_7() { return &____delayDispose_7; }
	inline void set__delayDispose_7(bool value)
	{
		____delayDispose_7 = value;
	}

	inline static int32_t get_offset_of__lockDispose_8() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____lockDispose_8)); }
	inline bool get__lockDispose_8() const { return ____lockDispose_8; }
	inline bool* get_address_of__lockDispose_8() { return &____lockDispose_8; }
	inline void set__lockDispose_8(bool value)
	{
		____lockDispose_8 = value;
	}

	inline static int32_t get_offset_of__bonesDirty_9() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____bonesDirty_9)); }
	inline bool get__bonesDirty_9() const { return ____bonesDirty_9; }
	inline bool* get_address_of__bonesDirty_9() { return &____bonesDirty_9; }
	inline void set__bonesDirty_9(bool value)
	{
		____bonesDirty_9 = value;
	}

	inline static int32_t get_offset_of__slotsDirty_10() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____slotsDirty_10)); }
	inline bool get__slotsDirty_10() const { return ____slotsDirty_10; }
	inline bool* get_address_of__slotsDirty_10() { return &____slotsDirty_10; }
	inline void set__slotsDirty_10(bool value)
	{
		____slotsDirty_10 = value;
	}

	inline static int32_t get_offset_of__zOrderDirty_11() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____zOrderDirty_11)); }
	inline bool get__zOrderDirty_11() const { return ____zOrderDirty_11; }
	inline bool* get_address_of__zOrderDirty_11() { return &____zOrderDirty_11; }
	inline void set__zOrderDirty_11(bool value)
	{
		____zOrderDirty_11 = value;
	}

	inline static int32_t get_offset_of__flipX_12() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____flipX_12)); }
	inline bool get__flipX_12() const { return ____flipX_12; }
	inline bool* get_address_of__flipX_12() { return &____flipX_12; }
	inline void set__flipX_12(bool value)
	{
		____flipX_12 = value;
	}

	inline static int32_t get_offset_of__flipY_13() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____flipY_13)); }
	inline bool get__flipY_13() const { return ____flipY_13; }
	inline bool* get_address_of__flipY_13() { return &____flipY_13; }
	inline void set__flipY_13(bool value)
	{
		____flipY_13 = value;
	}

	inline static int32_t get_offset_of__bones_14() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____bones_14)); }
	inline List_1_t3973475962 * get__bones_14() const { return ____bones_14; }
	inline List_1_t3973475962 ** get_address_of__bones_14() { return &____bones_14; }
	inline void set__bones_14(List_1_t3973475962 * value)
	{
		____bones_14 = value;
		Il2CppCodeGenWriteBarrier(&____bones_14, value);
	}

	inline static int32_t get_offset_of__slots_15() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____slots_15)); }
	inline List_1_t3973979572 * get__slots_15() const { return ____slots_15; }
	inline List_1_t3973979572 ** get_address_of__slots_15() { return &____slots_15; }
	inline void set__slots_15(List_1_t3973979572 * value)
	{
		____slots_15 = value;
		Il2CppCodeGenWriteBarrier(&____slots_15, value);
	}

	inline static int32_t get_offset_of__actions_16() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____actions_16)); }
	inline List_1_t3033330998 * get__actions_16() const { return ____actions_16; }
	inline List_1_t3033330998 ** get_address_of__actions_16() { return &____actions_16; }
	inline void set__actions_16(List_1_t3033330998 * value)
	{
		____actions_16 = value;
		Il2CppCodeGenWriteBarrier(&____actions_16, value);
	}

	inline static int32_t get_offset_of__events_17() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____events_17)); }
	inline List_1_t153891787 * get__events_17() const { return ____events_17; }
	inline List_1_t153891787 ** get_address_of__events_17() { return &____events_17; }
	inline void set__events_17(List_1_t153891787 * value)
	{
		____events_17 = value;
		Il2CppCodeGenWriteBarrier(&____events_17, value);
	}

	inline static int32_t get_offset_of__armatureData_18() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____armatureData_18)); }
	inline ArmatureData_t3944230313 * get__armatureData_18() const { return ____armatureData_18; }
	inline ArmatureData_t3944230313 ** get_address_of__armatureData_18() { return &____armatureData_18; }
	inline void set__armatureData_18(ArmatureData_t3944230313 * value)
	{
		____armatureData_18 = value;
		Il2CppCodeGenWriteBarrier(&____armatureData_18, value);
	}

	inline static int32_t get_offset_of__skinData_19() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____skinData_19)); }
	inline SkinData_t1378009773 * get__skinData_19() const { return ____skinData_19; }
	inline SkinData_t1378009773 ** get_address_of__skinData_19() { return &____skinData_19; }
	inline void set__skinData_19(SkinData_t1378009773 * value)
	{
		____skinData_19 = value;
		Il2CppCodeGenWriteBarrier(&____skinData_19, value);
	}

	inline static int32_t get_offset_of__animation_20() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____animation_20)); }
	inline Animation_t3458507142 * get__animation_20() const { return ____animation_20; }
	inline Animation_t3458507142 ** get_address_of__animation_20() { return &____animation_20; }
	inline void set__animation_20(Animation_t3458507142 * value)
	{
		____animation_20 = value;
		Il2CppCodeGenWriteBarrier(&____animation_20, value);
	}

	inline static int32_t get_offset_of__proxy_21() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____proxy_21)); }
	inline Il2CppObject * get__proxy_21() const { return ____proxy_21; }
	inline Il2CppObject ** get_address_of__proxy_21() { return &____proxy_21; }
	inline void set__proxy_21(Il2CppObject * value)
	{
		____proxy_21 = value;
		Il2CppCodeGenWriteBarrier(&____proxy_21, value);
	}

	inline static int32_t get_offset_of__display_22() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____display_22)); }
	inline Il2CppObject * get__display_22() const { return ____display_22; }
	inline Il2CppObject ** get_address_of__display_22() { return &____display_22; }
	inline void set__display_22(Il2CppObject * value)
	{
		____display_22 = value;
		Il2CppCodeGenWriteBarrier(&____display_22, value);
	}

	inline static int32_t get_offset_of__eventManager_23() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____eventManager_23)); }
	inline Il2CppObject* get__eventManager_23() const { return ____eventManager_23; }
	inline Il2CppObject** get_address_of__eventManager_23() { return &____eventManager_23; }
	inline void set__eventManager_23(Il2CppObject* value)
	{
		____eventManager_23 = value;
		Il2CppCodeGenWriteBarrier(&____eventManager_23, value);
	}

	inline static int32_t get_offset_of__parent_24() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____parent_24)); }
	inline Slot_t2605794020 * get__parent_24() const { return ____parent_24; }
	inline Slot_t2605794020 ** get_address_of__parent_24() { return &____parent_24; }
	inline void set__parent_24(Slot_t2605794020 * value)
	{
		____parent_24 = value;
		Il2CppCodeGenWriteBarrier(&____parent_24, value);
	}

	inline static int32_t get_offset_of__clock_25() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____clock_25)); }
	inline WorldClock_t245661442 * get__clock_25() const { return ____clock_25; }
	inline WorldClock_t245661442 ** get_address_of__clock_25() { return &____clock_25; }
	inline void set__clock_25(WorldClock_t245661442 * value)
	{
		____clock_25 = value;
		Il2CppCodeGenWriteBarrier(&____clock_25, value);
	}

	inline static int32_t get_offset_of__replaceTextureAtlasData_26() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____replaceTextureAtlasData_26)); }
	inline TextureAtlasData_t3103560160 * get__replaceTextureAtlasData_26() const { return ____replaceTextureAtlasData_26; }
	inline TextureAtlasData_t3103560160 ** get_address_of__replaceTextureAtlasData_26() { return &____replaceTextureAtlasData_26; }
	inline void set__replaceTextureAtlasData_26(TextureAtlasData_t3103560160 * value)
	{
		____replaceTextureAtlasData_26 = value;
		Il2CppCodeGenWriteBarrier(&____replaceTextureAtlasData_26, value);
	}

	inline static int32_t get_offset_of__replacedTexture_27() { return static_cast<int32_t>(offsetof(Armature_t2093713247, ____replacedTexture_27)); }
	inline Il2CppObject * get__replacedTexture_27() const { return ____replacedTexture_27; }
	inline Il2CppObject ** get_address_of__replacedTexture_27() { return &____replacedTexture_27; }
	inline void set__replacedTexture_27(Il2CppObject * value)
	{
		____replacedTexture_27 = value;
		Il2CppCodeGenWriteBarrier(&____replacedTexture_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

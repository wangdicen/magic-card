#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DragonBones.DisplayData>
struct List_1_t1891981534;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.MeshData>
struct Dictionary_2_t3877163615;
// DragonBones.SlotData
struct SlotData_t2442829486;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SkinSlotData
struct  SkinSlotData_t3577659979  : public BaseObject_t3159603414
{
public:
	// System.Collections.Generic.List`1<DragonBones.DisplayData> DragonBones.SkinSlotData::displays
	List_1_t1891981534 * ___displays_5;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.MeshData> DragonBones.SkinSlotData::meshs
	Dictionary_2_t3877163615 * ___meshs_6;
	// DragonBones.SlotData DragonBones.SkinSlotData::slot
	SlotData_t2442829486 * ___slot_7;

public:
	inline static int32_t get_offset_of_displays_5() { return static_cast<int32_t>(offsetof(SkinSlotData_t3577659979, ___displays_5)); }
	inline List_1_t1891981534 * get_displays_5() const { return ___displays_5; }
	inline List_1_t1891981534 ** get_address_of_displays_5() { return &___displays_5; }
	inline void set_displays_5(List_1_t1891981534 * value)
	{
		___displays_5 = value;
		Il2CppCodeGenWriteBarrier(&___displays_5, value);
	}

	inline static int32_t get_offset_of_meshs_6() { return static_cast<int32_t>(offsetof(SkinSlotData_t3577659979, ___meshs_6)); }
	inline Dictionary_2_t3877163615 * get_meshs_6() const { return ___meshs_6; }
	inline Dictionary_2_t3877163615 ** get_address_of_meshs_6() { return &___meshs_6; }
	inline void set_meshs_6(Dictionary_2_t3877163615 * value)
	{
		___meshs_6 = value;
		Il2CppCodeGenWriteBarrier(&___meshs_6, value);
	}

	inline static int32_t get_offset_of_slot_7() { return static_cast<int32_t>(offsetof(SkinSlotData_t3577659979, ___slot_7)); }
	inline SlotData_t2442829486 * get_slot_7() const { return ___slot_7; }
	inline SlotData_t2442829486 ** get_address_of_slot_7() { return &___slot_7; }
	inline void set_slot_7(SlotData_t2442829486 * value)
	{
		___slot_7 = value;
		Il2CppCodeGenWriteBarrier(&___slot_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

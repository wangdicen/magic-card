#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CSV
struct CSV_t67046;
// System.Collections.Generic.List`1<System.String[]>
struct List_1_t1127221208;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CSV
struct  CSV_t67046  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String[]> CSV::m_ArraryData
	List_1_t1127221208 * ___m_ArraryData_1;

public:
	inline static int32_t get_offset_of_m_ArraryData_1() { return static_cast<int32_t>(offsetof(CSV_t67046, ___m_ArraryData_1)); }
	inline List_1_t1127221208 * get_m_ArraryData_1() const { return ___m_ArraryData_1; }
	inline List_1_t1127221208 ** get_address_of_m_ArraryData_1() { return &___m_ArraryData_1; }
	inline void set_m_ArraryData_1(List_1_t1127221208 * value)
	{
		___m_ArraryData_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_ArraryData_1, value);
	}
};

struct CSV_t67046_StaticFields
{
public:
	// CSV CSV::csv
	CSV_t67046 * ___csv_0;

public:
	inline static int32_t get_offset_of_csv_0() { return static_cast<int32_t>(offsetof(CSV_t67046_StaticFields, ___csv_0)); }
	inline CSV_t67046 * get_csv_0() const { return ___csv_0; }
	inline CSV_t67046 ** get_address_of_csv_0() { return &___csv_0; }
	inline void set_csv_0(CSV_t67046 * value)
	{
		___csv_0 = value;
		Il2CppCodeGenWriteBarrier(&___csv_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

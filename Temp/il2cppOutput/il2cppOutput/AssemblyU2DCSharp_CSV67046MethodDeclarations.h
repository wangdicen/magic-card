#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CSV
struct CSV_t67046;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void CSV::.ctor()
extern "C"  void CSV__ctor_m1450254405 (CSV_t67046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CSV CSV::GetInstance()
extern "C"  CSV_t67046 * CSV_GetInstance_m532499291 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CSV::getString(System.Int32,System.Int32)
extern "C"  String_t* CSV_getString_m2696944089 (CSV_t67046 * __this, int32_t ___row0, int32_t ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CSV::getInt(System.Int32,System.Int32)
extern "C"  int32_t CSV_getInt_m139320956 (CSV_t67046 * __this, int32_t ___row0, int32_t ___col1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CSV::loadFile(System.String,System.String)
extern "C"  void CSV_loadFile_m1134334685 (CSV_t67046 * __this, String_t* ___path0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

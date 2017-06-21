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

// System.Func`4<System.Object,System.UInt32,System.UInt32,System.Object>
struct Func_4_t2084627779;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Func`4<System.Object,System.UInt32,System.UInt32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m3563736242_gshared (Func_4_t2084627779 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_4__ctor_m3563736242(__this, ___object0, ___method1, method) ((  void (*) (Func_4_t2084627779 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_4__ctor_m3563736242_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`4<System.Object,System.UInt32,System.UInt32,System.Object>::Invoke(T1,T2,T3)
extern "C"  Il2CppObject * Func_4_Invoke_m2192318352_gshared (Func_4_t2084627779 * __this, Il2CppObject * ___arg10, uint32_t ___arg21, uint32_t ___arg32, const MethodInfo* method);
#define Func_4_Invoke_m2192318352(__this, ___arg10, ___arg21, ___arg32, method) ((  Il2CppObject * (*) (Func_4_t2084627779 *, Il2CppObject *, uint32_t, uint32_t, const MethodInfo*))Func_4_Invoke_m2192318352_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Func`4<System.Object,System.UInt32,System.UInt32,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m634132517_gshared (Func_4_t2084627779 * __this, Il2CppObject * ___arg10, uint32_t ___arg21, uint32_t ___arg32, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Func_4_BeginInvoke_m634132517(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Func_4_t2084627779 *, Il2CppObject *, uint32_t, uint32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_4_BeginInvoke_m634132517_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// TResult System.Func`4<System.Object,System.UInt32,System.UInt32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_4_EndInvoke_m2716697572_gshared (Func_4_t2084627779 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_4_EndInvoke_m2716697572(__this, ___result0, method) ((  Il2CppObject * (*) (Func_4_t2084627779 *, Il2CppObject *, const MethodInfo*))Func_4_EndInvoke_m2716697572_gshared)(__this, ___result0, method)

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

// System.Func`4<System.Object,System.Object,System.Object,System.Object>
struct Func_4_t3774609659;
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

// System.Void System.Func`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_4__ctor_m283050854_gshared (Func_4_t3774609659 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_4__ctor_m283050854(__this, ___object0, ___method1, method) ((  void (*) (Func_4_t3774609659 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_4__ctor_m283050854_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C"  Il2CppObject * Func_4_Invoke_m4260158276_gshared (Func_4_t3774609659 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, const MethodInfo* method);
#define Func_4_Invoke_m4260158276(__this, ___arg10, ___arg21, ___arg32, method) ((  Il2CppObject * (*) (Func_4_t3774609659 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Func_4_Invoke_m4260158276_gshared)(__this, ___arg10, ___arg21, ___arg32, method)
// System.IAsyncResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_4_BeginInvoke_m1091833817_gshared (Func_4_t3774609659 * __this, Il2CppObject * ___arg10, Il2CppObject * ___arg21, Il2CppObject * ___arg32, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method);
#define Func_4_BeginInvoke_m1091833817(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method) ((  Il2CppObject * (*) (Func_4_t3774609659 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_4_BeginInvoke_m1091833817_gshared)(__this, ___arg10, ___arg21, ___arg32, ___callback3, ___object4, method)
// TResult System.Func`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Func_4_EndInvoke_m3792811160_gshared (Func_4_t3774609659 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_4_EndInvoke_m3792811160(__this, ___result0, method) ((  Il2CppObject * (*) (Func_4_t3774609659 *, Il2CppObject *, const MethodInfo*))Func_4_EndInvoke_m3792811160_gshared)(__this, ___result0, method)

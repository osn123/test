﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tAE2FD82E48B7893673000630524705C468010525 
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr_0;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value_0;
};
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
struct AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
struct AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	String_t* ___m_Path_2;
	Type_t* ___m_Type_3;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t* ___m_Type_3;
};
struct ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t* ___m_Type_3;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621  : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868
{
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_pinvoke
{
};
struct AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com : public ResourceRequest_tE6953FBA45EAAEFE866C635B9E7852044E62D868_marshaled_com
{
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	Il2CppChar ___Delimiter_1;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	RuntimeObject* ___Missing_3;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke(const AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6& unmarshaled, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_back(const AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke& marshaled, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_pinvoke_cleanup(AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_com(const AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6& unmarshaled, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_com_back(const AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com& marshaled, AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshal_com_cleanup(AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* __this, const RuntimeMethod* method) 
{
	typedef AssetBundle_tB38418819A49060CD738CB21541649340F082943* (*AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21_ftn) (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6*);
	static AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleCreateRequest::get_assetBundle()");
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke(const AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE& unmarshaled, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_back(const AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_pinvoke& marshaled, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_pinvoke_cleanup(AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_com(const AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE& unmarshaled, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_com_back(const AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_com& marshaled, AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshal_com_cleanup(AssetBundleRecompressOperation_tFDA1FB5AE1E072FC6CAC1CF0064C13D77F87CDDE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke(const AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621& unmarshaled, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'AssetBundleRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL);
}
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_back(const AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke& marshaled, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'AssetBundleRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL);
}
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_pinvoke_cleanup(AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_com(const AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621& unmarshaled, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'AssetBundleRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL);
}
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_com_back(const AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com& marshaled, AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'AssetBundleRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL);
}
IL2CPP_EXTERN_C void AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshal_com_cleanup(AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* __this, const RuntimeMethod* method) 
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = VirtualFuncInvoker0< Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(4, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* AssetBundleRequest_get_allAssets_mCA7BF6BCBBDA2E6DF596655254842B5380B4919D (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621* __this, const RuntimeMethod* method) 
{
	typedef ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* (*AssetBundleRequest_get_allAssets_mCA7BF6BCBBDA2E6DF596655254842B5380B4919D_ftn) (AssetBundleRequest_tED9F5504E75ED1BCFF8DA9B51F5C7356617E6621*);
	static AssetBundleRequest_get_allAssets_mCA7BF6BCBBDA2E6DF596655254842B5380B4919D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssetBundleRequest_get_allAssets_mCA7BF6BCBBDA2E6DF596655254842B5380B4919D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AssetBundleRequest::get_allAssets()");
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke(const AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD& unmarshaled, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_back(const AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_pinvoke& marshaled, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_pinvoke_cleanup(AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_com(const AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD& unmarshaled, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___m_completeCallback_1));
}
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_com_back(const AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_com& marshaled, AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___m_completeCallback_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_completeCallback_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB>(marshaled.___m_completeCallback_1, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var));
}
IL2CPP_EXTERN_C void AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshal_com_cleanup(AssetBundleUnloadOperation_tB96802FE8BBAC2B74D933BAF5F502EF9112095FD_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

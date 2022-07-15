#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t0932AF8EDF590456F9067899637461B2CEC5C79D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// GoogleMobileAds.Api.AdError
struct AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486;
// GoogleMobileAds.Api.AdValue
struct AdValue_tDFF87F321A6B96533EB28DBD503BB07501B96921;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t5310D7CABE790B0DD14112AEBC2BFD4D579C9C24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t9AB74DD90FA43B3E10FDA9400181D5FCA8CB362D;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.Reward
struct Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m159DA07135EECAD35366CB7E9F9105B80B7C972E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7081A941D9F510D527E79E740CDDE1EF18DB8569_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE18E6C8574207940EBF5860E282D9419241157B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m290587D0CE2CA405481C99A81D0C48532D14A67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m4EAF1242867D25FF437D64F2F41AD0ECE3449EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m605658FC49F1D4EE44E887198302DE371429FE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_m1DE5D264119D24C740793375AB3512E934DF2CEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_mD6BB47110CDD455D6D3B0B29414E7FC614DA84A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_mB0EABFA83F2727878A2A0EA1CFB190BCB036BB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_mD12A86B17084E169F02F3F97A46C81BEC4E8D1EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m00444A0D2E29EC6621B9877215898405C317AB3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_m0016D52A16EB3740569E9D13D5FE75B09F6A1F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_m02179762EE49A57E4E9412651BDD51286091668C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_mAF9BEDF955E270A1DA39E7125A6137CE6E0D5433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_m06DB47AC17FD718B8819C96EEBEEE7B44F033459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t76926D7E4B7FD019D9BF8BAC71EB5EC0E83490D2 
{
public:

public:
};


// System.Object


// GoogleMobileAds.Api.AdError
struct AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t0932AF8EDF590456F9067899637461B2CEC5C79D * ___U3CMediationExtrasU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486, ___U3CExtrasU3Ek__BackingField_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_2() const { return ___U3CExtrasU3Ek__BackingField_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_2() { return &___U3CExtrasU3Ek__BackingField_2; }
	inline void set_U3CExtrasU3Ek__BackingField_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486, ___U3CMediationExtrasU3Ek__BackingField_3)); }
	inline List_1_t0932AF8EDF590456F9067899637461B2CEC5C79D * get_U3CMediationExtrasU3Ek__BackingField_3() const { return ___U3CMediationExtrasU3Ek__BackingField_3; }
	inline List_1_t0932AF8EDF590456F9067899637461B2CEC5C79D ** get_address_of_U3CMediationExtrasU3Ek__BackingField_3() { return &___U3CMediationExtrasU3Ek__BackingField_3; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_3(List_1_t0932AF8EDF590456F9067899637461B2CEC5C79D * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_3), (void*)value);
	}
};

struct AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486_StaticFields
{
public:
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486_StaticFields, ___U3CVersionU3Ek__BackingField_0)); }
	inline String_t* get_U3CVersionU3Ek__BackingField_0() const { return ___U3CVersionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CVersionU3Ek__BackingField_0() { return &___U3CVersionU3Ek__BackingField_0; }
	inline void set_U3CVersionU3Ek__BackingField_0(String_t* value)
	{
		___U3CVersionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVersionU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636  : public RuntimeObject
{
public:

public:
};

struct MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_0;

public:
	inline static int32_t get_offset_of_clientFactory_0() { return static_cast<int32_t>(offsetof(MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_StaticFields, ___clientFactory_0)); }
	inline RuntimeObject* get_clientFactory_0() const { return ___clientFactory_0; }
	inline RuntimeObject** get_address_of_clientFactory_0() { return &___clientFactory_0; }
	inline void set_clientFactory_0(RuntimeObject* value)
	{
		___clientFactory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_0), (void*)value);
	}
};


// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * ___OnPaidEvent_10;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitId_1() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___adUnitId_1)); }
	inline String_t* get_adUnitId_1() const { return ___adUnitId_1; }
	inline String_t** get_address_of_adUnitId_1() { return &___adUnitId_1; }
	inline void set_adUnitId_1(String_t* value)
	{
		___adUnitId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitId_1), (void*)value);
	}

	inline static int32_t get_offset_of_isLoaded_2() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___isLoaded_2)); }
	inline bool get_isLoaded_2() const { return ___isLoaded_2; }
	inline bool* get_address_of_isLoaded_2() { return &___isLoaded_2; }
	inline void set_isLoaded_2(bool value)
	{
		___isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_OnAdLoaded_3() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdLoaded_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdLoaded_3() const { return ___OnAdLoaded_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdLoaded_3() { return &___OnAdLoaded_3; }
	inline void set_OnAdLoaded_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdLoaded_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdLoaded_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_4() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdFailedToLoad_4)); }
	inline EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * get_OnAdFailedToLoad_4() const { return ___OnAdFailedToLoad_4; }
	inline EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 ** get_address_of_OnAdFailedToLoad_4() { return &___OnAdFailedToLoad_4; }
	inline void set_OnAdFailedToLoad_4(EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * value)
	{
		___OnAdFailedToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdOpening_5() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdOpening_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdOpening_5() const { return ___OnAdOpening_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdOpening_5() { return &___OnAdOpening_5; }
	inline void set_OnAdOpening_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdOpening_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdOpening_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdClosed_6() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdClosed_6)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdClosed_6() const { return ___OnAdClosed_6; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdClosed_6() { return &___OnAdClosed_6; }
	inline void set_OnAdClosed_6(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdClosed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdClosed_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToShow_7() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdFailedToShow_7)); }
	inline EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * get_OnAdFailedToShow_7() const { return ___OnAdFailedToShow_7; }
	inline EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 ** get_address_of_OnAdFailedToShow_7() { return &___OnAdFailedToShow_7; }
	inline void set_OnAdFailedToShow_7(EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * value)
	{
		___OnAdFailedToShow_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToShow_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdDidRecordImpression_8() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnAdDidRecordImpression_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_OnAdDidRecordImpression_8() const { return ___OnAdDidRecordImpression_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_OnAdDidRecordImpression_8() { return &___OnAdDidRecordImpression_8; }
	inline void set_OnAdDidRecordImpression_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___OnAdDidRecordImpression_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdDidRecordImpression_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnUserEarnedReward_9() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnUserEarnedReward_9)); }
	inline EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * get_OnUserEarnedReward_9() const { return ___OnUserEarnedReward_9; }
	inline EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C ** get_address_of_OnUserEarnedReward_9() { return &___OnUserEarnedReward_9; }
	inline void set_OnUserEarnedReward_9(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * value)
	{
		___OnUserEarnedReward_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUserEarnedReward_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnPaidEvent_10() { return static_cast<int32_t>(offsetof(RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB, ___OnPaidEvent_10)); }
	inline EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * get_OnPaidEvent_10() const { return ___OnPaidEvent_10; }
	inline EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 ** get_address_of_OnPaidEvent_10() { return &___OnPaidEvent_10; }
	inline void set_OnPaidEvent_10(EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * value)
	{
		___OnPaidEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPaidEvent_10), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751, ___U3CAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAdErrorClientU3Ek__BackingField_1() const { return ___U3CAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAdErrorClientU3Ek__BackingField_1() { return &___U3CAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA, ___U3CAdErrorU3Ek__BackingField_1)); }
	inline AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * get_U3CAdErrorU3Ek__BackingField_1() const { return ___U3CAdErrorU3Ek__BackingField_1; }
	inline AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD ** get_address_of_U3CAdErrorU3Ek__BackingField_1() { return &___U3CAdErrorU3Ek__BackingField_1; }
	inline void set_U3CAdErrorU3Ek__BackingField_1(AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * value)
	{
		___U3CAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}
};


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * ___U3CLoadAdErrorU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766, ___U3CLoadAdErrorU3Ek__BackingField_1)); }
	inline LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * get_U3CLoadAdErrorU3Ek__BackingField_1() const { return ___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 ** get_address_of_U3CLoadAdErrorU3Ek__BackingField_1() { return &___U3CLoadAdErrorU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorU3Ek__BackingField_1(LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * value)
	{
		___U3CLoadAdErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_tDFF87F321A6B96533EB28DBD503BB07501B96921 * ___U3CAdValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CAdValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1, ___U3CAdValueU3Ek__BackingField_1)); }
	inline AdValue_tDFF87F321A6B96533EB28DBD503BB07501B96921 * get_U3CAdValueU3Ek__BackingField_1() const { return ___U3CAdValueU3Ek__BackingField_1; }
	inline AdValue_tDFF87F321A6B96533EB28DBD503BB07501B96921 ** get_address_of_U3CAdValueU3Ek__BackingField_1() { return &___U3CAdValueU3Ek__BackingField_1; }
	inline void set_U3CAdValueU3Ek__BackingField_1(AdValue_tDFF87F321A6B96533EB28DBD503BB07501B96921 * value)
	{
		___U3CAdValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650  : public AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;

public:
	inline static int32_t get_offset_of_client_1() { return static_cast<int32_t>(offsetof(LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650, ___client_1)); }
	inline RuntimeObject* get_client_1() const { return ___client_1; }
	inline RuntimeObject** get_address_of_client_1() { return &___client_1; }
	inline void set_client_1(RuntimeObject* value)
	{
		___client_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_1), (void*)value);
	}
};


// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5, ___U3CLoadAdErrorClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CLoadAdErrorClientU3Ek__BackingField_1() const { return ___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CLoadAdErrorClientU3Ek__BackingField_1() { return &___U3CLoadAdErrorClientU3Ek__BackingField_1; }
	inline void set_U3CLoadAdErrorClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CLoadAdErrorClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)value);
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m7BF68C87963D329EDDE619587D92DD1F775B67B6 (AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2 (const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m605658FC49F1D4EE44E887198302DE371429FE1E (EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228 (EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m4EAF1242867D25FF437D64F2F41AD0ECE3449EF4 (EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m290587D0CE2CA405481C99A81D0C48532D14A67E (EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m55B15D6747B269625FC10375E6008AA99BD498B4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m9595FE70873CF2C17A059FBBBF9108630FC92246_inline (LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m5B7F85C39BD7CFDA4D04921EFF2574F20C51D3A8 (LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8B973C5510A279882FD26FC6B2376508983BF923 (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCFAAFF2360E983F643A26649372B0582090F3CEB_inline (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * __this, LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m159DA07135EECAD35366CB7E9F9105B80B7C972E (EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * __this, RuntimeObject * ___sender0, AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *, RuntimeObject *, AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mBAC996C8D03B7EF0E65E71514316175E7733675E_inline (AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_m279D5BFB493DBA64C672797FCFE4ACCD42B33881 (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m44CB8007E32C3F78BF4875436E2FCEBA590DFF16_inline (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * __this, AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D (EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * __this, RuntimeObject * ___sender0, AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *, RuntimeObject *, AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7081A941D9F510D527E79E740CDDE1EF18DB8569 (EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * __this, RuntimeObject * ___sender0, Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *, RuntimeObject *, Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE18E6C8574207940EBF5860E282D9419241157B0 (EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * __this, RuntimeObject * ___sender0, AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 *, RuntimeObject *, AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
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
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m7BF68C87963D329EDDE619587D92DD1F775B67B6 (AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		__this->set_client_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_m35FA9E4215EBEDCFA5CA228FA0BD555FAC96A6E5 (AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_m279D5BFB493DBA64C672797FCFE4ACCD42B33881 (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m44CB8007E32C3F78BF4875436E2FCEBA590DFF16 (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * __this, AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m8B973C5510A279882FD26FC6B2376508983BF923 (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCFAAFF2360E983F643A26649372B0582090F3CEB (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * __this, LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
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
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m5B7F85C39BD7CFDA4D04921EFF2574F20C51D3A8 (LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m7BF68C87963D329EDDE619587D92DD1F775B67B6(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___client0;
		__this->set_client_1(L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_m989D4C2D73264D21403B1B6139E98F922DFEA030 (LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_client_1();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_il2cpp_TypeInfo_var))->get_clientFactory_0();
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = il2cpp_codegen_get_type(Type_GetType_m2D692327E10692E11116805CC604CD47F144A9E4_RuntimeMethod_var, L_3, MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2_RuntimeMethod_var);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_5, /*hidden argument*/NULL);
		((MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_il2cpp_TypeInfo_var))->set_clientFactory_0(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tF55694F5828ECE50F90EA8274731743F5F84C636_il2cpp_TypeInfo_var))->get_clientFactory_0();
		return L_7;
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
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_mBFE1D3F58D6649A7ED496CC8F21601BE99029333 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m290587D0CE2CA405481C99A81D0C48532D14A67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m4EAF1242867D25FF437D64F2F41AD0ECE3449EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m605658FC49F1D4EE44E887198302DE371429FE1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__0_m1DE5D264119D24C740793375AB3512E934DF2CEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__1_mD6BB47110CDD455D6D3B0B29414E7FC614DA84A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__2_mB0EABFA83F2727878A2A0EA1CFB190BCB036BB5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__3_mD12A86B17084E169F02F3F97A46C81BEC4E8D1EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__4_m00444A0D2E29EC6621B9877215898405C317AB3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__5_m0016D52A16EB3740569E9D13D5FE75B09F6A1F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__6_m02179762EE49A57E4E9412651BDD51286091668C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__7_mAF9BEDF955E270A1DA39E7125A6137CE6E0D5433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__8_m06DB47AC17FD718B8819C96EEBEEE7B44F033459_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mD4BC77B8B5E693689304474CAF05047AA8C276D2(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_t9D92C62679B6D0244A8BD39F40D5D0FE312A4660_il2cpp_TypeInfo_var, L_0);
		__this->set_client_0(L_1);
		String_t* L_2 = ___adUnitId0;
		__this->set_adUnitId_1(L_2);
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_3 = __this->get_client_0();
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_5 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_5, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__0_m1DE5D264119D24C740793375AB3512E934DF2CEC_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->get_client_0();
		EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7 * L_7 = (EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7 *)il2cpp_codegen_object_new(EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m605658FC49F1D4EE44E887198302DE371429FE1E(L_7, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__1_mD6BB47110CDD455D6D3B0B29414E7FC614DA84A9_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m605658FC49F1D4EE44E887198302DE371429FE1E_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tC3D2ADC87B138963F9F7965EE01A01E5A6C390B7 * >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->get_client_0();
		EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC * L_9 = (EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC *)il2cpp_codegen_object_new(EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228(L_9, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__2_mB0EABFA83F2727878A2A0EA1CFB190BCB036BB5C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_11 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_11, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__3_mD12A86B17084E169F02F3F97A46C81BEC4E8D1EB_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_13 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_13, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__4_m00444A0D2E29EC6621B9877215898405C317AB3B_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->get_client_0();
		EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC * L_15 = (EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC *)il2cpp_codegen_object_new(EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228(L_15, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__5_m0016D52A16EB3740569E9D13D5FE75B09F6A1F36_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_mE16E6A2A08A9F4E45822CC91EC09244599DBC228_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tC2285177E335B9BD5C051B5E4325D0D58BF25FBC * >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->get_client_0();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_17 = (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)il2cpp_codegen_object_new(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C(L_17, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__6_m02179762EE49A57E4E9412651BDD51286091668C_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m8148EF3B917382C44769399C79A42A3EA9C06C3C_RuntimeMethod_var);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->get_client_0();
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_19 = (EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)il2cpp_codegen_object_new(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m4EAF1242867D25FF437D64F2F41AD0ECE3449EF4(L_19, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__7_mAF9BEDF955E270A1DA39E7125A6137CE6E0D5433_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m4EAF1242867D25FF437D64F2F41AD0ECE3449EF4_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->get_client_0();
		EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * L_21 = (EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 *)il2cpp_codegen_object_new(EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m290587D0CE2CA405481C99A81D0C48532D14A67E(L_21, __this, (intptr_t)((intptr_t)RewardedAd_U3CRewardedAdU3Em__8_m06DB47AC17FD718B8819C96EEBEEE7B44F033459_RuntimeMethod_var), /*hidden argument*/EventHandler_1__ctor_m290587D0CE2CA405481C99A81D0C48532D14A67E_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_mD31AC7D5C3090E9F42BF140FEA7990E63150F2BA (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_m74F7FDA584A336F65C77C5864F053242B31B3D8E (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdLoaded_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_m580144EAF77E948C451A749296BB657F370C6A13 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * V_0 = NULL;
	EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * V_1 = NULL;
	{
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_3 = V_1;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_6 = V_0;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *>((EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 **)L_2, ((EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_8 = V_0;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToLoad_mB84487FF1119678F3C48B2CE693B851608B41AAA (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * V_0 = NULL;
	EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * V_1 = NULL;
	{
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_0 = __this->get_OnAdFailedToLoad_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 ** L_2 = __this->get_address_of_OnAdFailedToLoad_4();
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_3 = V_1;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_6 = V_0;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *>((EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 **)L_2, ((EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_8 = V_0;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)L_8) == ((RuntimeObject*)(EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_m1729357484226F48CDFE781B902B7632F3F2936B (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m7CFA00CCD330E62FD65D96B9317B8FEEA0A68A2C (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdOpening_5();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_m6B17E5AA3C8567394F4DBFE85F7DDEA00BADDCB7 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_mE310D9EB336BBC4D1CF9E2E6ABB9DABA00ABA311 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_OnAdClosed_6();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToShow_mB88418D671324873FE738A1095C98FAE42D118AB (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * V_0 = NULL;
	EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * V_1 = NULL;
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_3 = V_1;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_6 = V_0;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *>((EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 **)L_2, ((EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_8 = V_0;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)L_8) == ((RuntimeObject*)(EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToShow(System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToShow_m75017DE1756FFB6CABBD9F0F6E141BF414BDAE3D (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * V_0 = NULL;
	EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * V_1 = NULL;
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_0 = __this->get_OnAdFailedToShow_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 ** L_2 = __this->get_address_of_OnAdFailedToShow_7();
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_3 = V_1;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_6 = V_0;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *>((EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 **)L_2, ((EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_8 = V_0;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)L_8) == ((RuntimeObject*)(EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mF5299AEBADED9349806204CFF8343DB339124CA1 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * V_0 = NULL;
	EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * V_1 = NULL;
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_3 = V_1;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_6 = V_0;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *>((EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C **)L_2, ((EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_8 = V_0;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)L_8) == ((RuntimeObject*)(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m4B668A8A80243251BCF2B500E54C6DEAFFFDF380 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * V_0 = NULL;
	EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * V_1 = NULL;
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_0 = __this->get_OnUserEarnedReward_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C ** L_2 = __this->get_address_of_OnUserEarnedReward_9();
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_3 = V_1;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_4 = ___value0;
		Delegate_t * L_5;
		L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_6 = V_0;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *>((EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C **)L_2, ((EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_8 = V_0;
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)L_8) == ((RuntimeObject*)(EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_mD077AACC76346539017F23F174BCA299872BA444 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_client_0();
		String_t* L_1 = __this->get_adUnitId_1();
		AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486 * L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_t867B0230F95BF684DB87A8189B9875FFBE501486 * >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m0DA6503E727422B4BBA3C987B0E7324BDFFB5F49 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLoaded_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mAB0039A2C82B3EBF97AE57D9C7CED55C4F38E419 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)0);
		RuntimeObject* L_0 = __this->get_client_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t8E0B8B0C9F570C7D611140D6DE7EBDB00162A267_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_m1DE5D264119D24C740793375AB3512E934DF2CEC (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isLoaded_2((bool)1);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdLoaded_3();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdLoaded_3();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_mD6BB47110CDD455D6D3B0B29414E7FC614DA84A9 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m159DA07135EECAD35366CB7E9F9105B80B7C972E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * V_0 = NULL;
	AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * V_1 = NULL;
	{
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_0 = __this->get_OnAdFailedToLoad_4();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m9595FE70873CF2C17A059FBBBF9108630FC92246_inline(L_1, /*hidden argument*/NULL);
		LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * L_3 = (LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 *)il2cpp_codegen_object_new(LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650_il2cpp_TypeInfo_var);
		LoadAdError__ctor_m5B7F85C39BD7CFDA4D04921EFF2574F20C51D3A8(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t671C8A5D86A6BBA552C95C73198D2E57049B6BC2 * L_4 = __this->get_OnAdFailedToLoad_4();
		AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * L_5 = (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 *)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766_il2cpp_TypeInfo_var);
		AdFailedToLoadEventArgs__ctor_m8B973C5510A279882FD26FC6B2376508983BF923(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * L_6 = V_1;
		LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mCFAAFF2360E983F643A26649372B0582090F3CEB_inline(L_6, L_7, /*hidden argument*/NULL);
		AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m159DA07135EECAD35366CB7E9F9105B80B7C972E(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_m159DA07135EECAD35366CB7E9F9105B80B7C972E_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_mB0EABFA83F2727878A2A0EA1CFB190BCB036BB5C (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * V_0 = NULL;
	AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * V_1 = NULL;
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mBAC996C8D03B7EF0E65E71514316175E7733675E_inline(L_1, /*hidden argument*/NULL);
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_3 = (AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD *)il2cpp_codegen_object_new(AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD_il2cpp_TypeInfo_var);
		AdError__ctor_m7BF68C87963D329EDDE619587D92DD1F775B67B6(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_5 = (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA *)il2cpp_codegen_object_new(AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_m279D5BFB493DBA64C672797FCFE4ACCD42B33881(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_6 = V_1;
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m44CB8007E32C3F78BF4875436E2FCEBA590DFF16_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_mD12A86B17084E169F02F3F97A46C81BEC4E8D1EB (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdOpening_5();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdOpening_5();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m00444A0D2E29EC6621B9877215898405C317AB3B (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdClosed_6();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdClosed_6();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_m0016D52A16EB3740569E9D13D5FE75B09F6A1F36 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * V_0 = NULL;
	AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * V_1 = NULL;
	{
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_0 = __this->get_OnAdFailedToShow_7();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mBAC996C8D03B7EF0E65E71514316175E7733675E_inline(L_1, /*hidden argument*/NULL);
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_3 = (AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD *)il2cpp_codegen_object_new(AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD_il2cpp_TypeInfo_var);
		AdError__ctor_m7BF68C87963D329EDDE619587D92DD1F775B67B6(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		EventHandler_1_t7D7B46C6C5550D4832FE69C7D7E3D0B857222F75 * L_4 = __this->get_OnAdFailedToShow_7();
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_5 = (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA *)il2cpp_codegen_object_new(AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA_il2cpp_TypeInfo_var);
		AdErrorEventArgs__ctor_m279D5BFB493DBA64C672797FCFE4ACCD42B33881(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_6 = V_1;
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m44CB8007E32C3F78BF4875436E2FCEBA590DFF16_inline(L_6, L_7, /*hidden argument*/NULL);
		AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D(L_4, __this, L_8, /*hidden argument*/EventHandler_1_Invoke_mD86495A9C6A60B96082C46636171DE7727A8B32D_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_m02179762EE49A57E4E9412651BDD51286091668C (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_OnAdDidRecordImpression_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = __this->get_OnAdDidRecordImpression_8();
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_mAF9BEDF955E270A1DA39E7125A6137CE6E0D5433 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7081A941D9F510D527E79E740CDDE1EF18DB8569_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_0 = __this->get_OnUserEarnedReward_9();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tB08876F155D1214B7621D542CB44293C51D59F3C * L_1 = __this->get_OnUserEarnedReward_9();
		Reward_tD5AB9174BDAC1658FAA219311E889A44F28238CB * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m7081A941D9F510D527E79E740CDDE1EF18DB8569(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_m7081A941D9F510D527E79E740CDDE1EF18DB8569_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_m06DB47AC17FD718B8819C96EEBEEE7B44F033459 (RewardedAd_tD05799EF1AC9FDC28D80AC2882B9D8B3ECCF29CB * __this, RuntimeObject * ___sender0, AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE18E6C8574207940EBF5860E282D9419241157B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * L_0 = __this->get_OnPaidEvent_10();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tA3CA9B732754C4FA412434480BD1A3705DD6AA74 * L_1 = __this->get_OnPaidEvent_10();
		AdValueEventArgs_t4C7DE37A36167C0075A32C871F75345E373985E1 * L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_mE18E6C8574207940EBF5860E282D9419241157B0(L_1, __this, L_2, /*hidden argument*/EventHandler_1_Invoke_mE18E6C8574207940EBF5860E282D9419241157B0_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m9595FE70873CF2C17A059FBBBF9108630FC92246_inline (LoadAdErrorClientEventArgs_t59BD9423B3D2F1B3D767070A32D07B5D4B04B6F5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CLoadAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mCFAAFF2360E983F643A26649372B0582090F3CEB_inline (AdFailedToLoadEventArgs_tBC9A500966EE40D66E06530BB8C6F6FA9A658766 * __this, LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * ___value0, const RuntimeMethod* method)
{
	{
		LoadAdError_t2852AEBAE80CE6E705DB9CAE91F30019AE9DC650 * L_0 = ___value0;
		__this->set_U3CLoadAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mBAC996C8D03B7EF0E65E71514316175E7733675E_inline (AdErrorClientEventArgs_tA8AE0397989DB411F0F7966362A614646815C751 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAdErrorClientU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m44CB8007E32C3F78BF4875436E2FCEBA590DFF16_inline (AdErrorEventArgs_t208C30328D008C9EFF08E849469205F9EDB479CA * __this, AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * ___value0, const RuntimeMethod* method)
{
	{
		AdError_t4352448919D888F1712676B7DDB0811F6E0EF6AD * L_0 = ___value0;
		__this->set_U3CAdErrorU3Ek__BackingField_1(L_0);
		return;
	}
}

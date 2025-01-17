﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct IEnumerable_1_tBB99AF9544626908B7F394A8B9680A03D15400ED;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<Firebase.Crashlytics.FirebaseCrashlyticsFrame>
struct IEnumerator_1_t0BD94AEF0E788D0813F29C79B68E45B92FF26F4A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Firebase.Crashlytics.AndroidImpl
struct AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.Crashlytics.ExceptionHandler
struct ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2;
// Firebase.Crashlytics.FirebaseCrashlyticsFrame
struct FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6;
// Firebase.Crashlytics.FirebaseCrashlyticsInternal
struct FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// Firebase.Crashlytics.IOSImpl
struct IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD;
// Firebase.Crashlytics.Impl
struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Firebase.Crashlytics.LoggedException
struct LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Firebase.Crashlytics.Metadata
struct Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Firebase.Crashlytics.StackFrames
struct StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4;
// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8;
// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970;
// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B;
// Firebase.Crashlytics.StackFrames/StackFramesEnumerator
struct StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7;
// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8;
// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB;
// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14;
IL2CPP_EXTERN_C String_t* _stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB;
IL2CPP_EXTERN_C String_t* _stringLiteral324D2803BB6B3DD1B3536395FEC38B50ED1281C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD2F5AF88C152B2F91CF71DD68BAEBA297C3D0C;
IL2CPP_EXTERN_C String_t* _stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0;
IL2CPP_EXTERN_C String_t* _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3;
IL2CPP_EXTERN_C String_t* _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680;
IL2CPP_EXTERN_C String_t* _stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56;
IL2CPP_EXTERN_C String_t* _stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E;
IL2CPP_EXTERN_C String_t* _stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral865E2C8D46CB11CE0AF2692E2570B521A2687293;
IL2CPP_EXTERN_C String_t* _stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A;
IL2CPP_EXTERN_C String_t* _stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D;
IL2CPP_EXTERN_C String_t* _stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB;
IL2CPP_EXTERN_C String_t* _stringLiteral94EFF030C9A3F8836D2235E04B3792B04BC2F807;
IL2CPP_EXTERN_C String_t* _stringLiteral9B4764AFFD207D0B7AF7D7AB0CF29E7D5902B664;
IL2CPP_EXTERN_C String_t* _stringLiteral9DCE673A15F93E009DFB69F958FAFBBA5A7EF8B5;
IL2CPP_EXTERN_C String_t* _stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD1679B4D03C356BE642045EBD6252C205D1E0B84;
IL2CPP_EXTERN_C String_t* _stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242;
IL2CPP_EXTERN_C String_t* _stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidImpl_SetCustomKey_mCDEFCD6B84D8F1AE2798A5B312033D1C6057EECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsInternal_GetInstance_m7694E41DBD129C2659D76998342EA62F1BD1655B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsInternal_LogExceptionAsFatal_mAC6A59B7BC7CA43428C57BFAE742B10D08283595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsInternal_LogException_mE3B015FF0065897102D02198BD039A56FB41FF5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseCrashlyticsInternal_SetCustomKey_m9B8D0E4A846E3236A41643B16B25C2025AE4C175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackFrames_getitem_m96452DB2FAB36B546241F1790B7F5D583CAD7494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackFrames_size_mC2CBB9AE3E1B0C68C56037D4C8018A55D8392F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CSetCustomKeyU3Eb__0_m53E23B0462F4B953E3B295127EF0FBCA9C86D8A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CLogExceptionU3Eb__0_m3942CBB37AB288888545C3BF46D03B30572E39AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CLogExceptionAsFatalU3Eb__0_mC83930D3619DC28181CECB6F045867682ADD8DD1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD72281B98D15D89CD09C70337AAA4E4E93D2A64E 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Firebase.Crashlytics.Crashlytics
struct Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5  : public RuntimeObject
{
};

struct Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields
{
	// System.Boolean Firebase.Crashlytics.Crashlytics::<ReportUncaughtExceptionsAsFatal>k__BackingField
	bool ___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE
struct CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B  : public RuntimeObject
{
};

struct CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_StaticFields
{
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper Firebase.Crashlytics.CrashlyticsInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970* ___swigExceptionHelper_0;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper Firebase.Crashlytics.CrashlyticsInternalPINVOKE::swigStringHelper
	SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B* ___swigStringHelper_1;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Crashlytics.ExceptionHandler
struct ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B  : public RuntimeObject
{
	// System.Boolean Firebase.Crashlytics.ExceptionHandler::isRegistered
	bool ___isRegistered_0;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// Firebase.Crashlytics.Impl
struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF  : public RuntimeObject
{
};

struct Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields
{
	// System.String Firebase.Crashlytics.Impl::LogString
	String_t* ___LogString_0;
	// System.String Firebase.Crashlytics.Impl::SetKeyValueString
	String_t* ___SetKeyValueString_1;
	// System.String Firebase.Crashlytics.Impl::SetUserIdentifierString
	String_t* ___SetUserIdentifierString_2;
	// System.String Firebase.Crashlytics.Impl::LogExceptionString
	String_t* ___LogExceptionString_3;
	// System.String Firebase.Crashlytics.Impl::LogExceptionAsFatalString
	String_t* ___LogExceptionAsFatalString_4;
	// System.String Firebase.Crashlytics.Impl::IsCrashlyticsCollectionEnabledString
	String_t* ___IsCrashlyticsCollectionEnabledString_5;
	// System.String Firebase.Crashlytics.Impl::SetCrashlyticsCollectionEnabledString
	String_t* ___SetCrashlyticsCollectionEnabledString_6;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> System.Text.RegularExpressions.MatchCollection::_matches
	List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6* ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Firebase.Crashlytics.Metadata
struct Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094  : public RuntimeObject
{
	// System.String Firebase.Crashlytics.Metadata::uv
	String_t* ___uv_0;
	// System.Boolean Firebase.Crashlytics.Metadata::idb
	bool ___idb_1;
	// System.String Firebase.Crashlytics.Metadata::pt
	String_t* ___pt_2;
	// System.Int32 Firebase.Crashlytics.Metadata::pc
	int32_t ___pc_3;
	// System.Int32 Firebase.Crashlytics.Metadata::pf
	int32_t ___pf_4;
	// System.Int32 Firebase.Crashlytics.Metadata::sms
	int32_t ___sms_5;
	// System.Int32 Firebase.Crashlytics.Metadata::gms
	int32_t ___gms_6;
	// System.Int32 Firebase.Crashlytics.Metadata::gdid
	int32_t ___gdid_7;
	// System.Int32 Firebase.Crashlytics.Metadata::gdvid
	int32_t ___gdvid_8;
	// System.String Firebase.Crashlytics.Metadata::gdn
	String_t* ___gdn_9;
	// System.String Firebase.Crashlytics.Metadata::gdv
	String_t* ___gdv_10;
	// System.String Firebase.Crashlytics.Metadata::gdver
	String_t* ___gdver_11;
	// UnityEngine.Rendering.GraphicsDeviceType Firebase.Crashlytics.Metadata::gdt
	int32_t ___gdt_12;
	// System.Int32 Firebase.Crashlytics.Metadata::gsl
	int32_t ___gsl_13;
	// System.Int32 Firebase.Crashlytics.Metadata::grtc
	int32_t ___grtc_14;
	// UnityEngine.Rendering.CopyTextureSupport Firebase.Crashlytics.Metadata::gcts
	int32_t ___gcts_15;
	// System.Int32 Firebase.Crashlytics.Metadata::gmts
	int32_t ___gmts_16;
	// System.String Firebase.Crashlytics.Metadata::ss
	String_t* ___ss_17;
	// System.Single Firebase.Crashlytics.Metadata::sdpi
	float ___sdpi_18;
	// System.Int32 Firebase.Crashlytics.Metadata::srr
	int32_t ___srr_19;
};

// Firebase.Crashlytics.MetadataBuilder
struct MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9  : public RuntimeObject
{
};

struct MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields
{
	// System.String Firebase.Crashlytics.MetadataBuilder::METADATA_KEY
	String_t* ___METADATA_KEY_0;
};

// Firebase.Crashlytics.StackTraceParser
struct StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D  : public RuntimeObject
{
};

struct StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields
{
	// System.String Firebase.Crashlytics.StackTraceParser::FrameArgsRegex
	String_t* ___FrameArgsRegex_0;
	// System.String Firebase.Crashlytics.StackTraceParser::FrameRegexWithoutFileInfo
	String_t* ___FrameRegexWithoutFileInfo_1;
	// System.String Firebase.Crashlytics.StackTraceParser::FrameRegexWithFileInfo
	String_t* ___FrameRegexWithFileInfo_2;
	// System.String Firebase.Crashlytics.StackTraceParser::MonoFilenameUnknownString
	String_t* ___MonoFilenameUnknownString_3;
	// System.String[] Firebase.Crashlytics.StackTraceParser::StringDelimiters
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___StringDelimiters_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4  : public RuntimeObject
{
	// Firebase.Crashlytics.AndroidImpl Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::<>4__this
	AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* ___U3CU3E4__this_0;
	// System.String Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::key
	String_t* ___key_1;
	// System.String Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::value
	String_t* ___value_2;
};

// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8  : public RuntimeObject
{
	// Firebase.Crashlytics.AndroidImpl Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::<>4__this
	AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* ___U3CU3E4__this_0;
	// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::loggedException
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___loggedException_1;
	// Firebase.Crashlytics.StackFrames Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::frames
	StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames_2;
};

// Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02  : public RuntimeObject
{
	// Firebase.Crashlytics.AndroidImpl Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::<>4__this
	AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* ___U3CU3E4__this_0;
	// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::loggedException
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___loggedException_1;
	// Firebase.Crashlytics.StackFrames Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::frames
	StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames_2;
};

// Firebase.Crashlytics.Crashlytics/PlatformAccessor
struct PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D  : public RuntimeObject
{
};

struct PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields
{
	// Firebase.Crashlytics.ExceptionHandler Firebase.Crashlytics.Crashlytics/PlatformAccessor::_exceptionHandler
	ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* ____exceptionHandler_0;
	// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::_impl
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* ____impl_1;
	// Firebase.FirebaseApp Firebase.Crashlytics.Crashlytics/PlatformAccessor::_app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ____app_2;
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970  : public RuntimeObject
{
};

struct SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields
{
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___applicationDelegate_0;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___arithmeticDelegate_1;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___divideByZeroDelegate_2;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___indexOutOfRangeDelegate_3;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidCastDelegate_4;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidOperationDelegate_5;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___ioDelegate_6;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___nullReferenceDelegate_7;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___outOfMemoryDelegate_8;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___overflowDelegate_9;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___systemDelegate_10;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentDelegate_11;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentNullDelegate_12;
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35  : public RuntimeObject
{
};

struct SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields
{
	// System.Int32 Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject* ___exceptionsLock_2;
};

struct SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields
{
	// System.Exception Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B  : public RuntimeObject
{
};

struct SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_StaticFields
{
	// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* ___stringDelegate_0;
};

// Firebase.Crashlytics.StackFrames/StackFramesEnumerator
struct StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7  : public RuntimeObject
{
	// Firebase.Crashlytics.StackFrames Firebase.Crashlytics.StackFrames/StackFramesEnumerator::collectionRef
	StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___collectionRef_0;
	// System.Int32 Firebase.Crashlytics.StackFrames/StackFramesEnumerator::currentIndex
	int32_t ___currentIndex_1;
	// System.Object Firebase.Crashlytics.StackFrames/StackFramesEnumerator::currentObject
	RuntimeObject* ___currentObject_2;
	// System.Int32 Firebase.Crashlytics.StackFrames/StackFramesEnumerator::currentSize
	int32_t ___currentSize_3;
};

// Firebase.Crashlytics.AndroidImpl
struct AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76  : public Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF
{
	// Firebase.Crashlytics.FirebaseCrashlyticsInternal Firebase.Crashlytics.AndroidImpl::crashlyticsInternal
	FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* ___crashlyticsInternal_7;
	// Firebase.FirebaseApp Firebase.Crashlytics.AndroidImpl::firebaseApp
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___firebaseApp_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// Firebase.Crashlytics.IOSImpl
struct IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD  : public Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object System.UnhandledExceptionEventArgs::_exception
	RuntimeObject* ____exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_isTerminating
	bool ____isTerminating_2;
};

// System.Void
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_5;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_6;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_7;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_8;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_9;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_10;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_11;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_12;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_13;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_14;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_15;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_16;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_17;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_18;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_19;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_4;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t5AD8517EA34467536BAC8C7C6EB4D4B6880312A2* ___appPlatform_15;
};

struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_14;
};

// Firebase.Crashlytics.FirebaseCrashlyticsFrame
struct FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.FirebaseCrashlyticsFrame::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Crashlytics.FirebaseCrashlyticsFrame::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Crashlytics.FirebaseCrashlyticsInternal
struct FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.FirebaseCrashlyticsInternal::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Crashlytics.FirebaseCrashlyticsInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.InitializationException
struct InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E  : public Exception_t
{
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_18;
};

// Firebase.Crashlytics.LoggedException
struct LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887  : public Exception_t
{
	// System.String Firebase.Crashlytics.LoggedException::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// System.String Firebase.Crashlytics.LoggedException::<CustomStackTrace>k__BackingField
	String_t* ___U3CCustomStackTraceU3Ek__BackingField_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::<ParsedStackTrace>k__BackingField
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___U3CParsedStackTraceU3Ek__BackingField_20;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Firebase.Crashlytics.StackFrames
struct StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.StackFrames::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Crashlytics.StackFrames::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8  : public MulticastDelegate_t
{
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB  : public MulticastDelegate_t
{
};

// Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* m_Items[1];

	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) ;
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Impl::Make()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36 (const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0 (const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.ExceptionHandler::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6 (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___handler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___value0, const RuntimeMethod* method) ;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) ;
// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.LoggedException::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.String[] Firebase.Crashlytics.ExceptionHandler::getMessageParts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___name0, String_t* ___message1, String_t* ___stackTrace2, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m2BE72C065A76F6655308BAB67057CD03FED80D56 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___count1, int32_t ___options2, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean Firebase.Crashlytics.Crashlytics::get_ReportUncaughtExceptionsAsFatal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Crashlytics::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Crashlytics::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.IOSImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_CustomStackTrace(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.LoggedException::get_CustomStackTrace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.StackTraceParser::ParseStackTraceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0 (String_t* ___stackTrace0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.LoggedException::set_ParsedStackTrace(System.Collections.Generic.Dictionary`2<System.String,System.String>[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___value0, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_processorType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_processorFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_processorFrequency_mC3B994657AC07ECDFFF09E2B67AA90F5ED7F39E8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_systemMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsMemorySize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsDeviceVendorID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_graphicsDeviceVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C (const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_supportedRenderTargetCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.CopyTextureSupport UnityEngine.SystemInfo::get_copyTextureSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92 (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207 (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::ToArray()
inline Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926 (MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Crashlytics.StackTraceParser::ParseFrameString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2 (String_t* ___regex0, String_t* ___frameString1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::Add(T)
inline void List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_inline (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___groupname0, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// Firebase.Crashlytics.FirebaseCrashlyticsInternal Firebase.Crashlytics.FirebaseCrashlyticsInternal::GetInstance(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* FirebaseCrashlyticsInternal_GetInstance_m7694E41DBD129C2659D76998342EA62F1BD1655B (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method) ;
// System.String Firebase.ErrorMessages::get_DependencyNotFoundErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7 (const RuntimeMethod* method) ;
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* __this, int32_t ___result0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.MetadataBuilder::GenerateMetadataJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC (const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_Dispose_m714BD421D57553F92279EBBA6102F5975BE24626 (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_Dispose_mEC68C9F82F64E23D0B1A14A32DC456861F9CF86E (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Crashlytics.FirebaseCrashlyticsInternal::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseCrashlyticsInternal_get_IsDisposed_m47E32597ACDF3FAC963438574982F9D43965EEB2 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl::LogOperationFailedWarningDueToShutdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_LogOperationFailedWarningDueToShutdown_m7FF1B7FA100D2AA4AE5D871CB6845FA5B0FE0FCF (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, String_t* ___operation0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF147C7CE8AC90010A41E5DA84972C087A2AA59D0 (U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl::CallInternalMethod(System.Action,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_CallInternalMethod_m9C5C34687B2BF68323167272BD8CA776EFD9721C (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___methodCall0, String_t* ___operation1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mF9651A0100550DB8DAD1092D7BAD4DE337BC07D8 (U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.StackFrames::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::get_ParsedStackTrace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_library(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_fileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_lineNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.StackFrames::Add(Firebase.Crashlytics.FirebaseCrashlyticsFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* ___x0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m565FD7D8C742F6C17ACC16F39F84058941DB1DB6 (U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D (const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.LoggedException::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___source0, ___count1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared)(___source0, ___count1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Collections.Generic.Dictionary`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::SetCustomKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_SetCustomKey_m9B8D0E4A846E3236A41643B16B25C2025AE4C175 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::LogException(System.String,System.String,Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_LogException_mE3B015FF0065897102D02198BD039A56FB41FF5F (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___name0, String_t* ___reason1, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames2, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::LogExceptionAsFatal(System.String,System.String,Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_LogExceptionAsFatal_mAC6A59B7BC7CA43428C57BFAE742B10D08283595 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___name0, String_t* ___reason1, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::delete_StackFrames(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_delete_StackFrames_m4EA34D0C701894E8795AE665576A1F62A3D9618D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames::getitem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFrames_getitem_m96452DB2FAB36B546241F1790B7F5D583CAD7494 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.UInt32 Firebase.Crashlytics.StackFrames::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StackFrames_size_mC2CBB9AE3E1B0C68C56037D4C8018A55D8392F1C (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.StackFrames/StackFramesEnumerator::.ctor(Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFramesEnumerator__ctor_mD55C7A38A2CE7623C9ADAEB17530A3777BD35B4C (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___collection0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.FirebaseCrashlyticsFrame::getCPtr(Firebase.Crashlytics.FirebaseCrashlyticsFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseCrashlyticsFrame_getCPtr_m4281734D57B9AF8E872175F2FA917F8EE65A09E8 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_Add(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_StackFrames_Add_mDF89291DE8B9599F728D14830690566AE531D516 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg21, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51 (const RuntimeMethod* method) ;
// System.UInt32 Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CrashlyticsInternalPINVOKE_StackFrames_size_m090FEF39B03B5484DD49C9701E31E2B7F076359F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::new_StackFrames__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_new_StackFrames__SWIG_0_mFC4A4B65630ECC987339CD38873E792E061347D4 (const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.StackFrames::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames__ctor_m2E63D872A684465CF450AF466FF6FE41A676B301 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_StackFrames_getitem_m8A1DAF2D47FA9205AED13CCE05913E0F53752344 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, int32_t ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame__ctor_m8EFB5DD66A14E7684F3D46FED84D22B70EFE7EE1 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Int32 Firebase.Crashlytics.StackFrames::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrames_get_Count_m0958035410232E160BEC1A9460ACC066BFAD28AF (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames/StackFramesEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8 (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, const RuntimeMethod* method) ;
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFrames_get_Item_m32836E4763E91A672FF9B4DB4F25AFAEA002191F (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::delete_FirebaseCrashlyticsFrame(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_delete_FirebaseCrashlyticsFrame_mEC95B6399A6738043AC5194825BE82E99250CCB5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_library_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_library_set_mF96EE34A687E1AA525355FEB4FC4FDF2959A5043 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_symbol_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_symbol_set_m0D1E4AE62FF2FDF75BAF87E25861A9BE9A7B32B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_fileName_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_fileName_set_m73BDE8555783084CFA79EE639ABE1206066B58E4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_lineNumber_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_lineNumber_set_mA3BE7A0676C748ECFA463EFAD7081EB2E90EAF6E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::new_FirebaseCrashlyticsFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_new_FirebaseCrashlyticsFrame_m3330BC946A155D6A98677FE5A57727C0B58BE7B2 (const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_GetInstance__SWIG_0(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_GetInstance__SWIG_0_m4CDA19D7A13B164DC98C35862F5BBC9078905D70 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal__ctor_m0F036F78B6C768B5E41BC035AD4A05AE1AFF6B4E (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_SetCustomKey(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_SetCustomKey_m7E64C42B3D81D23AD0D34D6C995EC646196A3515 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.StackFrames::getCPtr(Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F StackFrames_getCPtr_m30A24B0C2DE1FED2672EB1BB5DF07FE09D409CCC (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_LogException(System.Runtime.InteropServices.HandleRef,System.String,System.String,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogException_mA62769499269758561B5C9D0F8784D4772195286 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg43, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_LogExceptionAsFatal(System.Runtime.InteropServices.HandleRef,System.String,System.String,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogExceptionAsFatal_m26B5841969232D99C21E396AA7455A7D952B8C0F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg43, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mF409E5795DF0D4C8B410A552093AA9F1E2C29237 (SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m95ABC184E68900F762EF1107ACEE3C2BA370319F (SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Exception Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427 (Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDAC537D87898CF3B04F0EC9C694EF4DC98D7DC03 (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_CrashlyticsInternal_mBB0DFC9F1612E2E41DA95D12AC0DFC4B9918E875 (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___applicationDelegate0, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___arithmeticDelegate1, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___divideByZeroDelegate2, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___indexOutOfRangeDelegate3, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidCastDelegate4, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidOperationDelegate5, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___ioDelegate6, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___nullReferenceDelegate7, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___outOfMemoryDelegate8, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___overflowDelegate9, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___systemExceptionDelegate10, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_CrashlyticsInternal_mC80B2E02B2EA6558A578B4E588F52340E354A802 (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentDelegate0, ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentNullDelegate1, ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) ;
// System.String Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD (String_t* ___cString0, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m6D9162F9A14874C135F545DA77E00EBD67D17E51 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_CrashlyticsInternal_m90DCF1734E3FA330D0093ADB2A0AD067EC585934 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* ___stringDelegate0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_StackFrames_Add(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Crashlytics_CSharp_StackFrames_size(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Crashlytics_CSharp_new_StackFrames__SWIG_0();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Crashlytics_CSharp_StackFrames_getitem(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_delete_StackFrames(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_library_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_symbol_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_fileName_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_lineNumber_set(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Crashlytics_CSharp_new_FirebaseCrashlyticsFrame();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_delete_FirebaseCrashlyticsFrame(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_GetInstance__SWIG_0(void*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_SetCustomKey(void*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogException(void*, char*, char*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogExceptionAsFatal(void*, char*, char*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_CrashlyticsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_CrashlyticsInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_CrashlyticsInternal(Il2CppMethodPointer);
#endif
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
// System.Boolean Firebase.Crashlytics.Crashlytics::get_ReportUncaughtExceptionsAsFatal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_Initialize_m6CF4D2B9E6FC44184E71739DD67A918222A0B79B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		V_0 = L_0;
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		VirtualActionInvoker1< Exception_t* >::Invoke(6 /* System.Void Firebase.Crashlytics.Impl::LogException(System.Exception) */, L_0, L_1);
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0;
		L_0 = PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0(NULL);
		Exception_t* L_1 = ___exception0;
		NullCheck(L_0);
		VirtualActionInvoker1< Exception_t* >::Invoke(7 /* System.Void Firebase.Crashlytics.Impl::LogExceptionAsFatal(System.Exception) */, L_0, L_1);
		return;
	}
}
// System.Void Firebase.Crashlytics.Crashlytics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crashlytics__cctor_m33D126C89E4ACBCA8B23B332B6E363955A1E11FD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0 = (bool)0;
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
// System.Void Firebase.Crashlytics.Crashlytics/PlatformAccessor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformAccessor__cctor_m06ED3208BB78889FAD2C364D3B12EA0498DF7941 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_0 = (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B*)il2cpp_codegen_object_new(ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268(L_0, NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_1;
		L_1 = Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36(NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2), (void*)L_2);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_3 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Firebase.Crashlytics.Impl::IsSDKInitialized() */, L_3);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, _stringLiteral6D33B14DB067EECF8C3B3E9865F06820B6E0FE56, NULL);
		goto IL_004a;
	}

IL_003f:
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_6 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0;
		NullCheck(L_6);
		ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A(L_6, NULL);
	}

IL_004a:
	{
		return;
	}
}
// Firebase.Crashlytics.ExceptionHandler Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_ExceptionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* PlatformAccessor_get_ExceptionHandler_m8AF8A9273B091E976CC694134BD4C6497EDF1D88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____exceptionHandler_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* L_1 = V_0;
		return L_1;
	}
}
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* PlatformAccessor_get_Impl_m54C83B529355CC79F44F1A4EA8BFD5277E2083E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____impl_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_1 = V_0;
		return L_1;
	}
}
// Firebase.FirebaseApp Firebase.Crashlytics.Crashlytics/PlatformAccessor::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* PlatformAccessor_get_App_m5FE468924AC3D288FEB582C4C10DC12BAA2BDDE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ((PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_StaticFields*)il2cpp_codegen_static_fields_for(PlatformAccessor_tB02E4C5B35E2A951376B828D3F51E6623A65336D_il2cpp_TypeInfo_var))->____app_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
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
// System.Void Firebase.Crashlytics.ExceptionHandler::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_Register_mE30C7CB413E2A8E667406AA948E71D01F086AB6A (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___isRegistered_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		goto IL_0076;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, _stringLiteral5A4CFF02A93B9B578AEFBB165D5837F2A3B4A9F3, NULL);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* L_3 = (UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C*)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnhandledExceptionEventHandler__ctor_m97305729C8FD4CB2370169FBEB8E4364A9EE803A(L_3, __this, (intptr_t)((void*)ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AppDomain_add_UnhandledException_m14767641F2904E88E142CA76D4EAD955E67354C7(L_2, L_3, NULL);
		String_t* L_4;
		L_4 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_4, _stringLiteral918DADB10CAA24134994433C2D451F166C4F7B0D, 5, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_7 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_7, __this, (intptr_t)((void*)ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var), NULL);
		Application_RegisterLogCallback_mE0FF6CCC29725C4B7FDA75AF48B8522A585335E6(L_7, NULL);
		goto IL_006f;
	}

IL_005b:
	{
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_8 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_8, __this, (intptr_t)((void*)ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_8, NULL);
	}

IL_006f:
	{
		__this->___isRegistered_0 = (bool)1;
	}

IL_0076:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::HandleException(System.Object,System.UnhandledExceptionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_HandleException_m019C3CCDB0E4A56D7EF1D613A92A9405985D8DD1 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, RuntimeObject* ___sender0, UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* ___eArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_1 = NULL;
	{
		UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* L_0 = ___eArgs1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline(L_0, NULL);
		V_0 = ((Exception_t*)CastclassClass((RuntimeObject*)L_1, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_2 = V_0;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_3;
		L_3 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_2, NULL);
		V_1 = L_3;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4 = V_1;
		VirtualActionInvoker1< LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* >::Invoke(4 /* System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException) */, __this, L_4);
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_HandleLog_mB827A404BA118DF75799C14138B7AD36C9E4F80F (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___message0, String_t* ___stackTraceString1, int32_t ___type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_2 = NULL;
	{
		int32_t L_0 = ___type2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ___message0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C(__this, L_2, NULL);
		V_1 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = ___stackTraceString1;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_11 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_11, L_6, L_9, L_10, NULL);
		V_2 = L_11;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_12 = V_2;
		VirtualActionInvoker1< LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* >::Invoke(4 /* System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException) */, __this, L_12);
	}

IL_0028:
	{
		return;
	}
}
// System.String[] Firebase.Crashlytics.ExceptionHandler::getMessageParts(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ExceptionHandler_getMessageParts_mC1066AD48D7CF0C8E1A8CCEBD4E70F5F559EA04C (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		V_0 = L_1;
		String_t* L_2 = ___message0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = V_0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m2BE72C065A76F6655308BAB67057CD03FED80D56(L_2, L_3, 2, 0, NULL);
		V_1 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		V_3 = L_7;
		V_4 = 0;
		goto IL_0043;
	}

IL_002e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_3;
		int32_t L_9 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_13, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_14);
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0043:
	{
		int32_t L_16 = V_4;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)2))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_002e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		bool L_21;
		L_21 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_20, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_006a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_3;
		V_7 = L_23;
		goto IL_0081;
	}

IL_006a:
	{
	}

IL_006b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral57A5B9F3116ECBC21D1419A60997CB549020FC53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		String_t* L_27 = ___message0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_27);
		V_7 = L_26;
		goto IL_0081;
	}

IL_0081:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_7;
		return L_28;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::LogException(Firebase.Crashlytics.LoggedException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler_LogException_m6F538C16D74EDF3EE2256312DF6C87ABAD5155B6 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_0 = ___e0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_0);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = ___e0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_2);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral73CFB0B100DCFB0240F5F961DCC32569C0D22AED, L_1, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline(NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_7 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		Crashlytics_LogExceptionAsFatal_m8B0E15D37EFA76ADC82898B12275228D952BFF6D(L_7, NULL);
		goto IL_003b;
	}

IL_0032:
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_8 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		Crashlytics_LogException_mACA1BB2ED2669E632854AB55478710EC0C281618(L_8, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.ExceptionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHandler__ctor_m58A8415C857D6D2BE34A4E3AAAB1B825F9A0E268 (ExceptionHandler_t2DDC3721AFC96975EA180F4E7A4902FFB2CE138B* __this, const RuntimeMethod* method) 
{
	{
		__this->___isRegistered_0 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Firebase.Crashlytics.Impl Firebase.Crashlytics.Impl::Make()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* Impl_Make_mFFEA30C47F99C9779D5EDCD228396DD73243FF36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* L_2 = (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD*)il2cpp_codegen_object_new(IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E(L_2, NULL);
		V_1 = L_2;
		goto IL_002d;
	}

IL_0013:
	{
		bool L_3;
		L_3 = PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B(NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_5 = (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76*)il2cpp_codegen_object_new(AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD(L_5, NULL);
		V_1 = L_5;
		goto IL_002d;
	}

IL_0025:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_6 = (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF*)il2cpp_codegen_object_new(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(L_6, NULL);
		V_1 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Firebase.Crashlytics.Impl::IsSDKInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Impl_IsSDKInitialized_m908ADF3BBFDB0D9DBDBC0DD58BF892EA1721CEAD (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.Impl::SetCustomKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_SetCustomKey_m16E43EB997C00A9D7AB5A0A2337B25B04EDB0ABD (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetKeyValueString_1;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		String_t* L_3;
		L_3 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_3, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_LogException_mD43F6B4E311EE7D1E62F38AF096EBA19FD9130C0 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3;
		Exception_t* L_1 = ___exception0;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl_LogExceptionAsFatal_mC4B598CB8D4F18B85F2084EF6E96B16CA0C349F7 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4;
		Exception_t* L_1 = ___exception0;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(1, L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6 (Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.Impl::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Impl__cctor_mD41926AA62E73080BADB30857B67FDA73D83112D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogString_0 = _stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogString_0), (void*)_stringLiteral31589BBA58A25664603E1D2DC687F87365BA9CFB);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetKeyValueString_1 = _stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetKeyValueString_1), (void*)_stringLiteral9084C0AE5B471F4073C715BDAC3F750C32FE483A);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetUserIdentifierString_2 = _stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetUserIdentifierString_2), (void*)_stringLiteralE5FCE0B9BAB969557C9E40E4FB4EFF9C00C5F242);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3 = _stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionString_3), (void*)_stringLiteral6F58E55899F98AFC5E1E6EA30DD8C9C5B9EC984E);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4 = _stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___LogExceptionAsFatalString_4), (void*)_stringLiteral4765970D0D7133F1C1A69C95B203411B88124CF0);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___IsCrashlyticsCollectionEnabledString_5 = _stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___IsCrashlyticsCollectionEnabledString_5), (void*)_stringLiteral9F9B4EE95D601BB0BC08F3411BA88D91604FD8F9);
		((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetCrashlyticsCollectionEnabledString_6 = _stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14;
		Il2CppCodeGenWriteBarrier((void**)(&((Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_StaticFields*)il2cpp_codegen_static_fields_for(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var))->___SetCrashlyticsCollectionEnabledString_6), (void*)_stringLiteral295135142B09D162981C567F1D15A5ED78CAAE14);
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
// System.Void Firebase.Crashlytics.LoggedException::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___name0, String_t* ___message1, String_t* ___stackTrace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___name0;
		LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline(__this, L_1, NULL);
		String_t* L_2 = ___stackTrace2;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline(__this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		goto IL_0033;
	}

IL_0029:
	{
		String_t* L_4 = ___stackTrace2;
		LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline(__this, L_4, NULL);
	}

IL_0033:
	{
		String_t* L_5;
		L_5 = LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_6;
		L_6 = StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0(L_5, NULL);
		LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline(__this, L_6, NULL);
		return;
	}
}
// Firebase.Crashlytics.LoggedException Firebase.Crashlytics.LoggedException::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_4 = NULL;
	{
		Exception_t* L_0 = ___exception0;
		V_3 = (bool)((!(((RuntimeObject*)(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)((LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)IsInstClass((RuntimeObject*)L_0, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___exception0;
		V_4 = ((LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)CastclassClass((RuntimeObject*)L_2, LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var));
		goto IL_003f;
	}

IL_0019:
	{
		Exception_t* L_3 = ___exception0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		V_0 = L_5;
		Exception_t* L_6 = ___exception0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_6);
		V_1 = L_7;
		Exception_t* L_8 = ___exception0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_8);
		V_2 = L_9;
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_13 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_13, L_10, L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_003f;
	}

IL_003f:
	{
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_14 = V_4;
		return L_14;
	}
}
// System.String Firebase.Crashlytics.LoggedException::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.String Firebase.Crashlytics.LoggedException::get_CustomStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCustomStackTraceU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_CustomStackTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCustomStackTraceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomStackTraceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.LoggedException::get_ParsedStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = __this->___U3CParsedStackTraceU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Firebase.Crashlytics.LoggedException::set_ParsedStackTrace(System.Collections.Generic.Dictionary`2<System.String,System.String>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20 (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = ___value0;
		__this->___U3CParsedStackTraceU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParsedStackTraceU3Ek__BackingField_20), (void*)L_0);
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
// System.Void Firebase.Crashlytics.Metadata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92 (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		__this->___uv_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uv_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		__this->___idb_1 = L_1;
		String_t* L_2;
		L_2 = SystemInfo_get_processorType_m985AB6C66E69918DF641BC1A589A3F9B4CE76FBE(NULL);
		__this->___pt_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pt_2), (void*)L_2);
		int32_t L_3;
		L_3 = SystemInfo_get_processorCount_m6B20AC11AEA09CA06278FBC47BAAEAA01BC7DB55(NULL);
		__this->___pc_3 = L_3;
		int32_t L_4;
		L_4 = SystemInfo_get_processorFrequency_mC3B994657AC07ECDFFF09E2B67AA90F5ED7F39E8(NULL);
		__this->___pf_4 = L_4;
		int32_t L_5;
		L_5 = SystemInfo_get_systemMemorySize_m3BFE40CF5A43FEAB94F5C552A47D04ECD88B771E(NULL);
		__this->___sms_5 = L_5;
		int32_t L_6;
		L_6 = SystemInfo_get_graphicsMemorySize_m05C833741F5F5C06FE9B4B9F50078A21E9E71ACF(NULL);
		__this->___gms_6 = L_6;
		int32_t L_7;
		L_7 = SystemInfo_get_graphicsDeviceID_m9CB876E71515AF035A36AF3185992D10AE2ED646(NULL);
		__this->___gdid_7 = L_7;
		int32_t L_8;
		L_8 = SystemInfo_get_graphicsDeviceVendorID_m9806D2F3459612C9FFE1A152BEB6BFB9D02C3309(NULL);
		__this->___gdvid_8 = L_8;
		String_t* L_9;
		L_9 = SystemInfo_get_graphicsDeviceName_mA3F2E2CA587AD5E212A38AD7D28559FD017451A2(NULL);
		__this->___gdn_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdn_9), (void*)L_9);
		String_t* L_10;
		L_10 = SystemInfo_get_graphicsDeviceVendor_mE2D7A85437C820636639ADC124C965DB37B52204(NULL);
		__this->___gdv_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdv_10), (void*)L_10);
		String_t* L_11;
		L_11 = SystemInfo_get_graphicsDeviceVersion_m8A157C76206F3CF7D9A3DA6F4BE188A6FEC0769C(NULL);
		__this->___gdver_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gdver_11), (void*)L_11);
		int32_t L_12;
		L_12 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		__this->___gdt_12 = L_12;
		int32_t L_13;
		L_13 = SystemInfo_get_graphicsShaderLevel_m9E6B001FA80EFBFC92EF4E7440AE64828B15070F(NULL);
		__this->___gsl_13 = L_13;
		int32_t L_14;
		L_14 = SystemInfo_get_supportedRenderTargetCount_mA8696B2D9AB343F9D04B0F4F14A4A1F7098DBC34(NULL);
		__this->___grtc_14 = L_14;
		int32_t L_15;
		L_15 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		__this->___gcts_15 = L_15;
		int32_t L_16;
		L_16 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		__this->___gmts_16 = L_16;
		int32_t L_17;
		L_17 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralC5D8AF07339C92C1C8A544FB0AED646C001200E8, L_19, L_22, NULL);
		__this->___ss_17 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ss_17), (void*)L_23);
		float L_24;
		L_24 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		__this->___sdpi_18 = L_24;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_25;
		L_25 = Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD(NULL);
		V_0 = L_25;
		int32_t L_26;
		L_26 = Resolution_get_refreshRate_mBA65C6BC920F0045E798C9F096E830C135F37870((&V_0), NULL);
		__this->___srr_19 = L_26;
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
// System.String Firebase.Crashlytics.MetadataBuilder::GenerateMetadataJSON()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* L_0 = (Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094*)il2cpp_codegen_object_new(Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Metadata__ctor_m152B834D7423AF0ED2D3A500786662C4350BEE92(L_0, NULL);
		V_0 = L_0;
		Metadata_tC80E86736BA3888D72B8344C8F8DB0E7AA5AB094* L_1 = V_0;
		String_t* L_2;
		L_2 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_1, NULL);
		V_1 = L_2;
		goto IL_0031;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0011;
		}
		throw e;
	}

CATCH_0011:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_2;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94EFF030C9A3F8836D2235E04B3792B04BC2F807)), L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0031;
	}// end catch (depth: 1)

IL_0031:
	{
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Firebase.Crashlytics.MetadataBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataBuilder__cctor_mEB269BA2D8F3CB67EF1F25C9D64B4DB84504B540 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0 = _stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318;
		Il2CppCodeGenWriteBarrier((void**)(&((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0), (void*)_stringLiteralF2BFAE70197C0E422760DF3A996C13C7A418B318);
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
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Firebase.Crashlytics.StackTraceParser::ParseStackTraceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* StackTraceParser_ParseStackTraceString_m8C1BCC3D040CAA6827E0EFFE408EC500E0A485D0 (String_t* ___stackTrace0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	bool V_3 = false;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		V_0 = (String_t*)NULL;
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_0 = (List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C*)il2cpp_codegen_object_new(List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207(L_0, List_1__ctor_m4AA6E535BC1DD1E1308FD2D14FFE0E6A75A63207_RuntimeMethod_var);
		V_1 = L_0;
		String_t* L_1 = ___stackTrace0;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_1, L_2, 0, NULL);
		V_2 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_2;
		NullCheck(L_4);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_6 = V_1;
		NullCheck(L_6);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_7;
		L_7 = List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E(L_6, List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		V_4 = L_7;
		goto IL_00c6;
	}

IL_002e:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		V_5 = L_8;
		V_6 = 0;
		goto IL_00b1;
	}

IL_0037:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_5;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		String_t* L_13 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_14 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_15;
		L_15 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_13, L_14, NULL);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_15, NULL);
		V_9 = (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_18 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2;
		V_0 = L_18;
		goto IL_008a;
	}

IL_0063:
	{
		String_t* L_19 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_20 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_21;
		L_21 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_19, L_20, NULL);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_21, NULL);
		V_10 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		bool L_23 = V_10;
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_24 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		V_0 = L_24;
		goto IL_008a;
	}

IL_0087:
	{
		goto IL_00ab;
	}

IL_008a:
	{
		String_t* L_25 = V_0;
		String_t* L_26 = V_7;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27;
		L_27 = StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2(L_25, L_26, NULL);
		V_8 = L_27;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = V_8;
		V_11 = (bool)((!(((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_30 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_8;
		NullCheck(L_30);
		List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_inline(L_30, L_31, List_1_Add_m468CC11F68E7B1323DBC33BC15634AA8C520224A_RuntimeMethod_var);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b1:
	{
		int32_t L_33 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		List_1_t57C4718BFC29C0490EDA5E5E0FD72088A3797A7C* L_35 = V_1;
		NullCheck(L_35);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_36;
		L_36 = List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E(L_35, List_1_ToArray_m9E06DB4CA8D1508D73839BB47732C5FECFD88E5E_RuntimeMethod_var);
		V_4 = L_36;
		goto IL_00c6;
	}

IL_00c6:
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_37 = V_4;
		return L_37;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Crashlytics.StackTraceParser::ParseFrameString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StackTraceParser_ParseFrameString_m4A987A4B13FCA52A4B510B4FB7A1C7C0E85B62C2 (String_t* ___regex0, String_t* ___frameString1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* V_0 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_4 = NULL;
	bool V_5 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	String_t* G_B10_0 = NULL;
	String_t* G_B13_0 = NULL;
	{
		String_t* L_0 = ___frameString1;
		String_t* L_1 = ___regex0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_2;
		L_2 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_0, L_1, NULL);
		V_0 = L_2;
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_3, NULL);
		V_5 = (bool)((((int32_t)L_4) < ((int32_t)1))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		V_6 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		goto IL_017e;
	}

IL_0021:
	{
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_6 = V_0;
		NullCheck(L_6);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7;
		L_7 = VirtualFuncInvoker1< Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*, int32_t >::Invoke(27 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_6, 0);
		V_1 = L_7;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_8 = V_1;
		NullCheck(L_8);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_9;
		L_9 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_8);
		NullCheck(L_9);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_10;
		L_10 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_9, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_10, NULL);
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_12 = V_1;
		NullCheck(L_12);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_13;
		L_13 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		NullCheck(L_13);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_14;
		L_14 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_13, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_14, NULL);
		G_B5_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 1;
	}

IL_005b:
	{
		V_7 = (bool)G_B5_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		V_6 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		goto IL_017e;
	}

IL_006a:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_17 = V_1;
		NullCheck(L_17);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_18;
		L_18 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_17);
		NullCheck(L_18);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_19;
		L_19 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_18, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_19, NULL);
		if (L_20)
		{
			goto IL_0098;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_21 = V_1;
		NullCheck(L_21);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_22;
		L_22 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_21);
		NullCheck(L_22);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_23;
		L_23 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_22, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_23, NULL);
		G_B10_0 = L_24;
		goto IL_00ad;
	}

IL_0098:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_25 = V_1;
		NullCheck(L_25);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_26;
		L_26 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_25);
		NullCheck(L_26);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_27;
		L_27 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_26, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_27, NULL);
		G_B10_0 = L_28;
	}

IL_00ad:
	{
		V_2 = G_B10_0;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_29 = V_1;
		NullCheck(L_29);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_30;
		L_30 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_29);
		NullCheck(L_30);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_31;
		L_31 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_30, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, NULL);
		NullCheck(L_31);
		bool L_32;
		L_32 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_31, NULL);
		if (L_32)
		{
			goto IL_00cc;
		}
	}
	{
		G_B13_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		goto IL_00e1;
	}

IL_00cc:
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_33 = V_1;
		NullCheck(L_33);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_34;
		L_34 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_33);
		NullCheck(L_34);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_35;
		L_35 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_34, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_35, NULL);
		G_B13_0 = L_36;
	}

IL_00e1:
	{
		V_3 = G_B13_0;
		String_t* L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		String_t* L_38 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, L_38, NULL);
		V_8 = L_39;
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0111;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_41 = V_1;
		NullCheck(L_41);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_42;
		L_42 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
		NullCheck(L_42);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_43;
		L_43 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_42, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_43, NULL);
		V_2 = L_44;
		V_3 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_0111:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_45, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_4 = L_45;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = V_4;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_47 = V_1;
		NullCheck(L_47);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_48;
		L_48 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_47);
		NullCheck(L_48);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_49;
		L_49 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_48, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, NULL);
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_49, NULL);
		NullCheck(L_46);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_46, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, L_50, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = V_4;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_52 = V_1;
		NullCheck(L_52);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_53;
		L_53 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_52);
		NullCheck(L_53);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_54;
		L_54 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_53, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, NULL);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_54, NULL);
		NullCheck(L_51);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_51, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, L_55, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_56 = V_4;
		String_t* L_57 = V_2;
		NullCheck(L_56);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_56, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, L_57, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = V_4;
		String_t* L_59 = V_3;
		NullCheck(L_58);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_58, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, L_59, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = V_4;
		V_6 = L_60;
		goto IL_017e;
	}

IL_017e:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_61 = V_6;
		return L_61;
	}
}
// System.Void Firebase.Crashlytics.StackTraceParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceParser__cctor_m8414564CE5C51F358C64A7814D32BF603A26359E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0 = _stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0), (void*)_stringLiteralD36337CE50D01489EBB3C0651FFACABE7674F341);
		String_t* L_0 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameArgsRegex_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBE84FE8ECE4A6DB8454F274D15DECBFFE3DE403F, L_0, NULL);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1), (void*)L_1);
		String_t* L_2 = ((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithoutFileInfo_1;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral94638D7F4A43B841B52AF845739D3C73F4D2A8BB, NULL);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___FrameRegexWithFileInfo_2), (void*)L_3);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3 = _stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___MonoFilenameUnknownString_3), (void*)_stringLiteral0C6D64B7A0CDB6E3207FA23727AD41AA18ED8FF5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6;
		L_6 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceParser_tCD308CD049C1C2B3A198DBBDB3357B628F793B7D_il2cpp_TypeInfo_var))->___StringDelimiters_4), (void*)L_5);
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
// System.Void Firebase.Crashlytics.IOSImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSImpl__ctor_mB8C8A9D9B5516E0F464BFD962656ED87ACA6E70E (IOSImpl_tEF2F7F764B96CC904685F5137112DB87893D8CBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(__this, NULL);
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
// System.Void Firebase.Crashlytics.AndroidImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral865E2C8D46CB11CE0AF2692E2570B521A2687293);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		Impl__ctor_m761BF52C0FBB4326D40254285021B9E3F67404C6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_m2387909BEFA7CA8F51D87B62700EAE8DA6FC13A0(NULL);
		__this->___firebaseApp_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firebaseApp_8), (void*)L_0);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = __this->___firebaseApp_8;
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_2;
		L_2 = FirebaseCrashlyticsInternal_GetInstance_m7694E41DBD129C2659D76998342EA62F1BD1655B(L_1, (&V_0), NULL);
		__this->___crashlyticsInternal_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crashlyticsInternal_7), (void*)L_2);
		int32_t L_3 = V_0;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ErrorMessages_t2367D208FBD8BCCCA1785A2713B206653DEC47BE_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = ErrorMessages_get_DependencyNotFoundErrorMessage_mA71EBFCD6E5CC0C61BD0E3624738175EADBCC0F7(NULL);
		InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E* L_7 = (InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InitializationException_t20C1D7EF5FABCAF5A71F226B433ABC58C64A1E2E_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InitializationException__ctor_mC48C74EE90B137CDEA82068C2E1695D81974C5BF(L_7, L_5, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidImpl__ctor_m94EE2C86B032B1858535A88AE69EBCF297634EDD_RuntimeMethod_var)));
	}

IL_003b:
	{
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_8 = __this->___crashlyticsInternal_7;
		V_2 = (bool)((((RuntimeObject*)(FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(3, _stringLiteral865E2C8D46CB11CE0AF2692E2570B521A2687293, NULL);
		goto IL_0068;
	}

IL_0057:
	{
		il2cpp_codegen_runtime_class_init_inline(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var);
		String_t* L_10 = ((MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_StaticFields*)il2cpp_codegen_static_fields_for(MetadataBuilder_t7BB701F903E4674E17AF9A4C8EE07943B6616FE9_il2cpp_TypeInfo_var))->___METADATA_KEY_0;
		String_t* L_11;
		L_11 = MetadataBuilder_GenerateMetadataJSON_m9C53E7A4FEE2F79806EE7A176AC1FADA1080CBFC(NULL);
		il2cpp_codegen_runtime_class_init_inline(Impl_t9BC9F6C5466C4F180F0FE9B6736ED9B2354D87DF_il2cpp_TypeInfo_var);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void Firebase.Crashlytics.Impl::SetCustomKey(System.String,System.String) */, __this, L_10, L_11);
	}

IL_0068:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_Finalize_m5FA94B9946EE378EDF3572626D2D0674F69A227A (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			AndroidImpl_Dispose_m714BD421D57553F92279EBBA6102F5975BE24626(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_Dispose_m714BD421D57553F92279EBBA6102F5975BE24626 (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_0045;
					}
				}
				{
					AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_1, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_2, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_3 = __this->___crashlyticsInternal_7;
				V_2 = (bool)((!(((RuntimeObject*)(FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0038_1;
				}
			}
			{
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_5 = __this->___crashlyticsInternal_7;
				NullCheck(L_5);
				FirebaseCrashlyticsInternal_Dispose_mEC68C9F82F64E23D0B1A14A32DC456861F9CF86E(L_5, NULL);
				__this->___crashlyticsInternal_7 = (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___crashlyticsInternal_7), (void*)(FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)NULL);
			}

IL_0038_1:
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		return;
	}
}
// System.Boolean Firebase.Crashlytics.AndroidImpl::IsSDKInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidImpl_IsSDKInitialized_mF7824BB125EE65FCF064C156633AFF0667917739 (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_0 = __this->___crashlyticsInternal_7;
		V_0 = (bool)((!(((RuntimeObject*)(FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::LogOperationFailedWarningDueToShutdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_LogOperationFailedWarningDueToShutdown_m7FF1B7FA100D2AA4AE5D871CB6845FA5B0FE0FCF (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, String_t* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B4764AFFD207D0B7AF7D7AB0CF29E7D5902B664);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___operation0;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9B4764AFFD207D0B7AF7D7AB0CF29E7D5902B664, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mA96CEACFEBC0F9B08D7F282A4E55685F6E803A49(3, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::CallInternalMethod(System.Action,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_CallInternalMethod_m9C5C34687B2BF68323167272BD8CA776EFD9721C (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___methodCall0, String_t* ___operation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0047;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_4 = __this->___crashlyticsInternal_7;
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_5 = __this->___crashlyticsInternal_7;
				NullCheck(L_5);
				bool L_6;
				L_6 = FirebaseCrashlyticsInternal_get_IsDisposed_m47E32597ACDF3FAC963438574982F9D43965EEB2(L_5, NULL);
				G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
				goto IL_002c_1;
			}

IL_002b_1:
			{
				G_B4_0 = 0;
			}

IL_002c_1:
			{
				V_2 = (bool)G_B4_0;
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_003a_1;
				}
			}
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = ___methodCall0;
				NullCheck(L_8);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
				goto IL_0050;
			}

IL_003a_1:
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		String_t* L_9 = ___operation1;
		AndroidImpl_LogOperationFailedWarningDueToShutdown_m7FF1B7FA100D2AA4AE5D871CB6845FA5B0FE0FCF(__this, L_9, NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::SetCustomKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_SetCustomKey_mCDEFCD6B84D8F1AE2798A5B312033D1C6057EECF (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CSetCustomKeyU3Eb__0_m53E23B0462F4B953E3B295127EF0FBCA9C86D8A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324D2803BB6B3DD1B3536395FEC38B50ED1281C8);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_0 = (U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mF147C7CE8AC90010A41E5DA84972C087A2AA59D0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_2 = V_0;
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		L_2->___key_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___key_1), (void*)L_3);
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_4 = V_0;
		String_t* L_5 = ___value1;
		NullCheck(L_4);
		L_4->___value_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_2), (void*)L_5);
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___key_1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___value_2;
		G_B3_0 = ((((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1679B4D03C356BE642045EBD6252C205D1E0B84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidImpl_SetCustomKey_mCDEFCD6B84D8F1AE2798A5B312033D1C6057EECF_RuntimeMethod_var)));
	}

IL_0040:
	{
		U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CSetCustomKeyU3Eb__0_m53E23B0462F4B953E3B295127EF0FBCA9C86D8A4_RuntimeMethod_var), NULL);
		AndroidImpl_CallInternalMethod_m9C5C34687B2BF68323167272BD8CA776EFD9721C(__this, L_13, _stringLiteral324D2803BB6B3DD1B3536395FEC38B50ED1281C8, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_LogException_mDF90FB374AD907E3271DEC3E7FED30E6CEA9533A (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CLogExceptionU3Eb__0_m3942CBB37AB288888545C3BF46D03B30572E39AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DCE673A15F93E009DFB69F958FAFBBA5A7EF8B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* V_0 = NULL;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_1 = NULL;
	int32_t V_2 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_0 = (U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_mF9651A0100550DB8DAD1092D7BAD4DE337BC07D8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_2 = V_0;
		Exception_t* L_3 = ___exception0;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4;
		L_4 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_3, NULL);
		NullCheck(L_2);
		L_2->___loggedException_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___loggedException_1), (void*)L_4);
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_5 = V_0;
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_6 = (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC*)il2cpp_codegen_object_new(StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6(L_6, NULL);
		NullCheck(L_5);
		L_5->___frames_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___frames_2), (void*)L_6);
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_7 = V_0;
		NullCheck(L_7);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_8 = L_7->___loggedException_1;
		NullCheck(L_8);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_9;
		L_9 = LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline(L_8, NULL);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0099;
	}

IL_0036:
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_14 = V_0;
		NullCheck(L_14);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_15 = L_14->___frames_2;
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_16 = (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6*)il2cpp_codegen_object_new(FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF(L_16, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_17 = L_16;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18 = V_3;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_18, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_17);
		FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415(L_17, L_19, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_20 = L_17;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_3;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_21, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_20);
		FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52(L_20, L_22, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_23 = L_20;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_24, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_23);
		FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF(L_23, L_25, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_26 = L_23;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_27 = V_3;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_27, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_26);
		FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C(L_26, L_28, NULL);
		NullCheck(L_15);
		StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2(L_15, L_26, NULL);
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0099:
	{
		int32_t L_30 = V_2;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* L_32 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CLogExceptionU3Eb__0_m3942CBB37AB288888545C3BF46D03B30572E39AE_RuntimeMethod_var), NULL);
		AndroidImpl_CallInternalMethod_m9C5C34687B2BF68323167272BD8CA776EFD9721C(__this, L_33, _stringLiteral9DCE673A15F93E009DFB69F958FAFBBA5A7EF8B5, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl::LogExceptionAsFatal(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidImpl_LogExceptionAsFatal_m7F0B0FD81D937E01333B0622432B447BBD0C618C (AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CLogExceptionAsFatalU3Eb__0_mC83930D3619DC28181CECB6F045867682ADD8DD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AD2F5AF88C152B2F91CF71DD68BAEBA297C3D0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* V_0 = NULL;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* V_4 = NULL;
	bool V_5 = false;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_6 = NULL;
	Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* V_7 = NULL;
	int32_t V_8 = 0;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_9 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_0 = (U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m565FD7D8C742F6C17ACC16F39F84058941DB1DB6(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_2 = V_0;
		Exception_t* L_3 = ___exception0;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4;
		L_4 = LoggedException_FromException_mB66098F5B3617FE9C23C100DB4C1DE21B5704E6E(L_3, NULL);
		NullCheck(L_2);
		L_2->___loggedException_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___loggedException_1), (void*)L_4);
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_5 = V_0;
		NullCheck(L_5);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_6 = L_5->___loggedException_1;
		NullCheck(L_6);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_7;
		L_7 = LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline(L_6, NULL);
		V_1 = L_7;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_8 = V_1;
		NullCheck(L_8);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_8)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_10;
		L_10 = Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D(NULL);
		V_3 = L_10;
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_11 = V_0;
		NullCheck(L_11);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_12 = L_11->___loggedException_1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline(L_12, NULL);
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_14 = V_0;
		NullCheck(L_14);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_15 = L_14->___loggedException_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_15);
		String_t* L_17 = V_3;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_18 = (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887*)il2cpp_codegen_object_new(LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		LoggedException__ctor_m36E35A2257C4C4E77F61E97CDDF654E2E6B81A07(L_18, L_13, L_16, L_17, NULL);
		V_4 = L_18;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_19 = V_4;
		NullCheck(L_19);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_20;
		L_20 = LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline(L_19, NULL);
		V_1 = L_20;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_21 = V_1;
		NullCheck(L_21);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) > ((int32_t)3))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_23 = V_1;
		RuntimeObject* L_24;
		L_24 = Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96((RuntimeObject*)L_23, 3, Enumerable_Skip_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mF95EB107F9B1D2AEF1A34FA4D682DAF1954BDE96_RuntimeMethod_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_25 = V_1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258(L_24, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 3)), Enumerable_Take_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_mBB883D0427D32B9BDF80D680BC69EC474F874258_RuntimeMethod_var);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_27;
		L_27 = Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD(L_26, Enumerable_ToArray_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_m274B6528560C1E1DE5B74049843690753D75F9FD_RuntimeMethod_var);
		V_6 = L_27;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_28 = V_6;
		V_1 = L_28;
	}

IL_0085:
	{
	}

IL_0086:
	{
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_29 = V_0;
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_30 = (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC*)il2cpp_codegen_object_new(StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6(L_30, NULL);
		NullCheck(L_29);
		L_29->___frames_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___frames_2), (void*)L_30);
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_31 = V_1;
		V_7 = L_31;
		V_8 = 0;
		goto IL_0106;
	}

IL_009a:
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_32 = V_7;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = L_35;
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_36 = V_0;
		NullCheck(L_36);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_37 = L_36->___frames_2;
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_38 = (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6*)il2cpp_codegen_object_new(FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF(L_38, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_39 = L_38;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_40 = V_9;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_40, _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_39);
		FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415(L_39, L_41, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_42 = L_39;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_43 = V_9;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_43, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_42);
		FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52(L_42, L_44, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_45 = L_42;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_46 = V_9;
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_46, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_45);
		FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF(L_45, L_47, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_48 = L_45;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = V_9;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_49, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_48);
		FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C(L_48, L_50, NULL);
		NullCheck(L_37);
		StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2(L_37, L_48, NULL);
		int32_t L_51 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0106:
	{
		int32_t L_52 = V_8;
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_53 = V_7;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_009a;
		}
	}
	{
		U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* L_54 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_55 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_55, L_54, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CLogExceptionAsFatalU3Eb__0_mC83930D3619DC28181CECB6F045867682ADD8DD1_RuntimeMethod_var), NULL);
		AndroidImpl_CallInternalMethod_m9C5C34687B2BF68323167272BD8CA776EFD9721C(__this, L_55, _stringLiteral3AD2F5AF88C152B2F91CF71DD68BAEBA297C3D0C, NULL);
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
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mF147C7CE8AC90010A41E5DA84972C087A2AA59D0 (U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass10_0::<SetCustomKey>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CSetCustomKeyU3Eb__0_m53E23B0462F4B953E3B295127EF0FBCA9C86D8A4 (U3CU3Ec__DisplayClass10_0_tA6F97120F2E5B2ABEAD9A699B89CD4634A18A5C4* __this, const RuntimeMethod* method) 
{
	{
		AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_1 = L_0->___crashlyticsInternal_7;
		String_t* L_2 = __this->___key_1;
		String_t* L_3 = __this->___value_2;
		NullCheck(L_1);
		FirebaseCrashlyticsInternal_SetCustomKey_m9B8D0E4A846E3236A41643B16B25C2025AE4C175(L_1, L_2, L_3, NULL);
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
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mF9651A0100550DB8DAD1092D7BAD4DE337BC07D8 (U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass12_0::<LogException>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CLogExceptionU3Eb__0_m3942CBB37AB288888545C3BF46D03B30572E39AE (U3CU3Ec__DisplayClass12_0_tA94F8B49166D662B0158EE54B686BAC3CA6277A8* __this, const RuntimeMethod* method) 
{
	{
		AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_1 = L_0->___crashlyticsInternal_7;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = __this->___loggedException_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline(L_2, NULL);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4 = __this->___loggedException_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_6 = __this->___frames_2;
		NullCheck(L_1);
		FirebaseCrashlyticsInternal_LogException_mE3B015FF0065897102D02198BD039A56FB41FF5F(L_1, L_3, L_5, L_6, NULL);
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
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m565FD7D8C742F6C17ACC16F39F84058941DB1DB6 (U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.AndroidImpl/<>c__DisplayClass13_0::<LogExceptionAsFatal>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CLogExceptionAsFatalU3Eb__0_mC83930D3619DC28181CECB6F045867682ADD8DD1 (U3CU3Ec__DisplayClass13_0_tC07A3B673C37AD43EA7C7F21E09A8F6D7E359D02* __this, const RuntimeMethod* method) 
{
	{
		AndroidImpl_t09BB72854905028A1DF3FBA8772392723D2CCD76* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_1 = L_0->___crashlyticsInternal_7;
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_2 = __this->___loggedException_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline(L_2, NULL);
		LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* L_4 = __this->___loggedException_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_6 = __this->___frames_2;
		NullCheck(L_1);
		FirebaseCrashlyticsInternal_LogExceptionAsFatal_mAC6A59B7BC7CA43428C57BFAE742B10D08283595(L_1, L_3, L_5, L_6, NULL);
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
// System.Void Firebase.Crashlytics.StackFrames::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames__ctor_m2E63D872A684465CF450AF466FF6FE41A676B301 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.StackFrames::getCPtr(Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F StackFrames_getCPtr_m30A24B0C2DE1FED2672EB1BB5DF07FE09D409CCC (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Crashlytics.StackFrames::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames_Finalize_m51374BE37772CAB650674C32A77C17F2D9BD49EE (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(7 /* System.Void Firebase.Crashlytics.StackFrames::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.StackFrames::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames_Dispose_m7A1ACF349202CD7EC2B8C076BD38F97A48D4B570 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void Firebase.Crashlytics.StackFrames::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.StackFrames::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames_Dispose_m4737E3605EE955A8A02F2F9BDE9D0D5863C8D0BD (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
				CrashlyticsInternalPINVOKE_delete_StackFrames_m4EA34D0C701894E8795AE665576A1F62A3D9618D(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFrames_get_Item_m32836E4763E91A672FF9B4DB4F25AFAEA002191F (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_1;
		L_1 = StackFrames_getitem_m96452DB2FAB36B546241F1790B7F5D583CAD7494(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Firebase.Crashlytics.StackFrames::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackFrames_get_Count_m0958035410232E160BEC1A9460ACC066BFAD28AF (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = StackFrames_size_mC2CBB9AE3E1B0C68C56037D4C8018A55D8392F1C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<Firebase.Crashlytics.FirebaseCrashlyticsFrame> Firebase.Crashlytics.StackFrames::global::System.Collections.Generic.IEnumerable<Firebase.Crashlytics.FirebaseCrashlyticsFrame>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackFrames_globalU3AU3ASystem_Collections_Generic_IEnumerableU3CFirebase_Crashlytics_FirebaseCrashlyticsFrameU3E_GetEnumerator_m89A2704A394963DE8458C3FBE541AF97458FA677 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* L_0 = (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7*)il2cpp_codegen_object_new(StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StackFramesEnumerator__ctor_mD55C7A38A2CE7623C9ADAEB17530A3777BD35B4C(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Firebase.Crashlytics.StackFrames::global::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackFrames_globalU3AU3ASystem_Collections_IEnumerable_GetEnumerator_m6AE5D04A7C8E8BDA047A765BBD09277932F932F5 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* L_0 = (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7*)il2cpp_codegen_object_new(StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StackFramesEnumerator__ctor_mD55C7A38A2CE7623C9ADAEB17530A3777BD35B4C(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Crashlytics.StackFrames::Add(Firebase.Crashlytics.FirebaseCrashlyticsFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_1 = ___x0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		L_2 = FirebaseCrashlyticsFrame_getCPtr_m4281734D57B9AF8E872175F2FA917F8EE65A09E8(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_StackFrames_Add_mDF89291DE8B9599F728D14830690566AE531D516(L_0, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFrames_Add_m188426B94129413908EFB8B1B3C1BA8810A582F2_RuntimeMethod_var)));
	}

IL_0022:
	{
		return;
	}
}
// System.UInt32 Firebase.Crashlytics.StackFrames::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t StackFrames_size_mC2CBB9AE3E1B0C68C56037D4C8018A55D8392F1C (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = CrashlyticsInternalPINVOKE_StackFrames_size_m090FEF39B03B5484DD49C9701E31E2B7F076359F(L_0, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFrames_size_mC2CBB9AE3E1B0C68C56037D4C8018A55D8392F1C_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.Crashlytics.StackFrames::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CrashlyticsInternalPINVOKE_new_StackFrames__SWIG_0_mFC4A4B65630ECC987339CD38873E792E061347D4(NULL);
		StackFrames__ctor_m2E63D872A684465CF450AF466FF6FE41A676B301(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFrames__ctor_mA81CB50CD3418AD62D91B904EEBE772326550BF6_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames::getitem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFrames_getitem_m96452DB2FAB36B546241F1790B7F5D583CAD7494 (StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* V_0 = NULL;
	bool V_1 = false;
	FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* V_2 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		int32_t L_1 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = CrashlyticsInternalPINVOKE_StackFrames_getitem_m8A1DAF2D47FA9205AED13CCE05913E0F53752344(L_0, L_1, NULL);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_3 = (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6*)il2cpp_codegen_object_new(FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FirebaseCrashlyticsFrame__ctor_m8EFB5DD66A14E7684F3D46FED84D22B70EFE7EE1(L_3, L_2, (bool)0, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_6;
		L_6 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFrames_getitem_m96452DB2FAB36B546241F1790B7F5D583CAD7494_RuntimeMethod_var)));
	}

IL_0023:
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_8 = V_2;
		return L_8;
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
// System.Void Firebase.Crashlytics.StackFrames/StackFramesEnumerator::.ctor(Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFramesEnumerator__ctor_mD55C7A38A2CE7623C9ADAEB17530A3777BD35B4C (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___collection0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_0 = ___collection0;
		__this->___collectionRef_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collectionRef_0), (void*)L_0);
		__this->___currentIndex_1 = (-1);
		__this->___currentObject_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_2), (void*)NULL);
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_1 = __this->___collectionRef_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = StackFrames_get_Count_m0958035410232E160BEC1A9460ACC066BFAD28AF(L_1, NULL);
		__this->___currentSize_3 = L_2;
		return;
	}
}
// Firebase.Crashlytics.FirebaseCrashlyticsFrame Firebase.Crashlytics.StackFrames/StackFramesEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8 (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* V_3 = NULL;
	{
		int32_t L_0 = __this->___currentIndex_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = __this->___currentIndex_1;
		int32_t L_4 = __this->___currentSize_3;
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8_RuntimeMethod_var)));
	}

IL_0038:
	{
		RuntimeObject* L_7 = __this->___currentObject_2;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject* L_10 = __this->___currentObject_2;
		V_3 = ((FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6*)CastclassClass((RuntimeObject*)L_10, FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6_il2cpp_TypeInfo_var));
		goto IL_005e;
	}

IL_005e:
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_11 = V_3;
		return L_11;
	}
}
// System.Object Firebase.Crashlytics.StackFrames/StackFramesEnumerator::global::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StackFramesEnumerator_globalU3AU3ASystem_Collections_IEnumerator_get_Current_mB8D85EF907C85E1C4397A869CB93B15D0620B523 (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_0;
		L_0 = StackFramesEnumerator_get_Current_m62894756C8E5C2A869EE03F2B680545834419AF8(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Crashlytics.StackFrames/StackFramesEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackFramesEnumerator_MoveNext_m7A790EB54E3801580758ED507001F918B9908312 (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_0 = __this->___collectionRef_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StackFrames_get_Count_m0958035410232E160BEC1A9460ACC066BFAD28AF(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___currentIndex_1;
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1))) >= ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___currentSize_3;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->___currentIndex_1;
		__this->___currentIndex_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_9 = __this->___collectionRef_0;
		int32_t L_10 = __this->___currentIndex_1;
		NullCheck(L_9);
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_11;
		L_11 = StackFrames_get_Item_m32836E4763E91A672FF9B4DB4F25AFAEA002191F(L_9, L_10, NULL);
		__this->___currentObject_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_2), (void*)L_11);
		goto IL_005c;
	}

IL_0053:
	{
		__this->___currentObject_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_2), (void*)NULL);
	}

IL_005c:
	{
		bool L_12 = V_1;
		V_3 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Crashlytics.StackFrames/StackFramesEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackFramesEnumerator_Dispose_mA1E8DAD0FDA6D0C580299A4466E99270BCD53B6D (StackFramesEnumerator_tDC4E1B8FC390A2688F9CAF90ACF938CBD75605A7* __this, const RuntimeMethod* method) 
{
	{
		__this->___currentIndex_1 = (-1);
		__this->___currentObject_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_2), (void*)NULL);
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
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame__ctor_m8EFB5DD66A14E7684F3D46FED84D22B70EFE7EE1 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Crashlytics.FirebaseCrashlyticsFrame::getCPtr(Firebase.Crashlytics.FirebaseCrashlyticsFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseCrashlyticsFrame_getCPtr_m4281734D57B9AF8E872175F2FA917F8EE65A09E8 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2 = L_1->___swigCPtr_0;
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), NULL, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_Finalize_m040EF00BD32D42B991D6839884FBBB07FA1FE857 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_Dispose_m4CA40983D62BF45C9565198571F3E2457D538D20 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_Dispose_m7963824976123BE0921675A71352846FEBD75B94 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_4 = (&__this->___swigCPtr_0);
				intptr_t L_5;
				L_5 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_4, NULL);
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_005e_1;
				}
			}
			{
				bool L_9 = __this->___swigCMemOwn_1;
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004c_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_11 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
				CrashlyticsInternalPINVOKE_delete_FirebaseCrashlyticsFrame_mEC95B6399A6738043AC5194825BE82E99250CCB5(L_11, NULL);
			}

IL_004c_1:
			{
				intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_13;
				memset((&L_13), 0, sizeof(L_13));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_13), NULL, L_12, /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_005e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_library(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_library_set_mF96EE34A687E1AA525355FEB4FC4FDF2959A5043(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsFrame_set_library_mB81DF0DDF42C58EA110682BD125D8F22C46C6415_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_symbol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52 (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_symbol_set_m0D1E4AE62FF2FDF75BAF87E25861A9BE9A7B32B5(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsFrame_set_symbol_m503E5CBE71D6BF7C9A2D3A369881D4EA53C1FD52_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_fileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_fileName_set_m73BDE8555783084CFA79EE639ABE1206066B58E4(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsFrame_set_fileName_m3AFA0BF3D283C4C1D9FE5A5ABAE4313C830430BF_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::set_lineNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_lineNumber_set_mA3BE7A0676C748ECFA463EFAD7081EB2E90EAF6E(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsFrame_set_lineNumber_m6781FC7BCF6E06470EFAB334A586AEDB396B3A1C_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF (FirebaseCrashlyticsFrame_tF9A1EF7CF973F7510734D32E076E07391C77B7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = CrashlyticsInternalPINVOKE_new_FirebaseCrashlyticsFrame_m3330BC946A155D6A98677FE5A57727C0B58BE7B2(NULL);
		FirebaseCrashlyticsFrame__ctor_m8EFB5DD66A14E7684F3D46FED84D22B70EFE7EE1(__this, L_0, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsFrame__ctor_m9DA1BB6CA3308B17F33415FEE2AED3DC82C29DEF_RuntimeMethod_var)));
	}

IL_001d:
	{
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
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal__ctor_m0F036F78B6C768B5E41BC035AD4A05AE1AFF6B4E (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_Finalize_m5B09164D2F57415BE10DD21BD668FEA55F02E89A (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_Dispose_mEC68C9F82F64E23D0B1A14A32DC456861F9CF86E (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_Dispose_m215847702E7944797E17AC760D1425A164DD9D4E (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			__this->___swigCMemOwn_1 = (bool)0;
			intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_5;
			memset((&L_5), 0, sizeof(L_5));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_5), NULL, L_4, /*hidden argument*/NULL);
			__this->___swigCPtr_0 = L_5;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
			goto IL_0040;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		return;
	}
}
// System.Boolean Firebase.Crashlytics.FirebaseCrashlyticsInternal::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseCrashlyticsInternal_get_IsDisposed_m47E32597ACDF3FAC963438574982F9D43965EEB2 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_0);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// Firebase.Crashlytics.FirebaseCrashlyticsInternal Firebase.Crashlytics.FirebaseCrashlyticsInternal::GetInstance(Firebase.FirebaseApp,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* FirebaseCrashlyticsInternal_GetInstance_m7694E41DBD129C2659D76998342EA62F1BD1655B (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* V_2 = NULL;
	bool V_3 = false;
	FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* V_4 = NULL;
	FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* G_B4_0 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				int32_t* L_0 = ___init_result_out1;
				int32_t L_1 = V_0;
				*((int32_t*)L_0) = (int32_t)L_1;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = ___app0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
				L_3 = FirebaseApp_getCPtr_m54B5DAC73BA43E79771E0181BEFD846BBE06C84F(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
				intptr_t L_4;
				L_4 = CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_GetInstance__SWIG_0_m4CDA19D7A13B164DC98C35862F5BBC9078905D70(L_3, (&V_0), NULL);
				V_1 = L_4;
				intptr_t L_5 = V_1;
				intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				bool L_7;
				L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
				if (L_7)
				{
					goto IL_0028_1;
				}
			}
			{
				intptr_t L_8 = V_1;
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_9 = (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)il2cpp_codegen_object_new(FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				FirebaseCrashlyticsInternal__ctor_m0F036F78B6C768B5E41BC035AD4A05AE1AFF6B4E(L_9, L_8, (bool)0, NULL);
				G_B4_0 = L_9;
				goto IL_0029_1;
			}

IL_0028_1:
			{
				G_B4_0 = ((FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40*)(NULL));
			}

IL_0029_1:
			{
				V_2 = G_B4_0;
				il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
				V_3 = L_10;
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0039_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
				Exception_t* L_12;
				L_12 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsInternal_GetInstance_m7694E41DBD129C2659D76998342EA62F1BD1655B_RuntimeMethod_var)));
			}

IL_0039_1:
			{
				FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_13 = V_2;
				V_4 = L_13;
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* L_14 = V_4;
		return L_14;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::SetCustomKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_SetCustomKey_m9B8D0E4A846E3236A41643B16B25C2025AE4C175 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_SetCustomKey_m7E64C42B3D81D23AD0D34D6C995EC646196A3515(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsInternal_SetCustomKey_m9B8D0E4A846E3236A41643B16B25C2025AE4C175_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::LogException(System.String,System.String,Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_LogException_mE3B015FF0065897102D02198BD039A56FB41FF5F (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___name0, String_t* ___reason1, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___reason1;
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_3 = ___frames2;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		L_4 = StackFrames_getCPtr_m30A24B0C2DE1FED2672EB1BB5DF07FE09D409CCC(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogException_mA62769499269758561B5C9D0F8784D4772195286(L_0, L_1, L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_7;
		L_7 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsInternal_LogException_mE3B015FF0065897102D02198BD039A56FB41FF5F_RuntimeMethod_var)));
	}

IL_0024:
	{
		return;
	}
}
// System.Void Firebase.Crashlytics.FirebaseCrashlyticsInternal::LogExceptionAsFatal(System.String,System.String,Firebase.Crashlytics.StackFrames)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseCrashlyticsInternal_LogExceptionAsFatal_mAC6A59B7BC7CA43428C57BFAE742B10D08283595 (FirebaseCrashlyticsInternal_t674756D0479C8ED14FE9E114B533CD274F9D6F40* __this, String_t* ___name0, String_t* ___reason1, StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* ___frames2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___name0;
		String_t* L_2 = ___reason1;
		StackFrames_t8F4306185C13967101E94E78F0D2312DDC4401AC* L_3 = ___frames2;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		L_4 = StackFrames_getCPtr_m30A24B0C2DE1FED2672EB1BB5DF07FE09D409CCC(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogExceptionAsFatal_m26B5841969232D99C21E396AA7455A7D952B8C0F(L_0, L_1, L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_mFF0B94BEAD2C48E3CD3BB7EFB5EB23A0B6CF55EE(NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tABBC4E77437B082457DE5327A693947CE0C7CF63_il2cpp_TypeInfo_var)));
		Exception_t* L_7;
		L_7 = SWIGPendingException_Retrieve_m5AF2B72B0C255B87F0044137B357F55F50101D51(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseCrashlyticsInternal_LogExceptionAsFatal_mAC6A59B7BC7CA43428C57BFAE742B10D08283595_RuntimeMethod_var)));
	}

IL_0024:
	{
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
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE__cctor_m2C71F03CBFEF07AF82B4C66A5FBFFA8EF7715B88 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970* L_0 = (SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970*)il2cpp_codegen_object_new(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_mF409E5795DF0D4C8B410A552093AA9F1E2C29237(L_0, NULL);
		((CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_StaticFields*)il2cpp_codegen_static_fields_for(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_StaticFields*)il2cpp_codegen_static_fields_for(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B* L_1 = (SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B*)il2cpp_codegen_object_new(SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m95ABC184E68900F762EF1107ACEE3C2BA370319F(L_1, NULL);
		((CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_StaticFields*)il2cpp_codegen_static_fields_for(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_StaticFields*)il2cpp_codegen_static_fields_for(CrashlyticsInternalPINVOKE_t691F261E9A85343DA87F1275433EFC3767B4981B_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_Add(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_StackFrames_Add_mDF89291DE8B9599F728D14830690566AE531D516 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_StackFrames_Add", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_StackFrames_Add)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
// System.UInt32 Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CrashlyticsInternalPINVOKE_StackFrames_size_m090FEF39B03B5484DD49C9701E31E2B7F076359F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_StackFrames_size", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_StackFrames_size)(____jarg10_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::new_StackFrames__SWIG_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_new_StackFrames__SWIG_0_mFC4A4B65630ECC987339CD38873E792E061347D4 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_new_StackFrames__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_new_StackFrames__SWIG_0)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::StackFrames_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_StackFrames_getitem_m8A1DAF2D47FA9205AED13CCE05913E0F53752344 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, int32_t ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_StackFrames_getitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_StackFrames_getitem)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::delete_StackFrames(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_delete_StackFrames_m4EA34D0C701894E8795AE665576A1F62A3D9618D (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_delete_StackFrames", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_delete_StackFrames)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_library_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_library_set_mF96EE34A687E1AA525355FEB4FC4FDF2959A5043 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_library_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_library_set)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_symbol_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_symbol_set_m0D1E4AE62FF2FDF75BAF87E25861A9BE9A7B32B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_symbol_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_symbol_set)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_fileName_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_fileName_set_m73BDE8555783084CFA79EE639ABE1206066B58E4 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_fileName_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_fileName_set)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsFrame_lineNumber_set(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsFrame_lineNumber_set_mA3BE7A0676C748ECFA463EFAD7081EB2E90EAF6E (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_lineNumber_set", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsFrame_lineNumber_set)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

}
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::new_FirebaseCrashlyticsFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_new_FirebaseCrashlyticsFrame_m3330BC946A155D6A98677FE5A57727C0B58BE7B2 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_new_FirebaseCrashlyticsFrame", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_new_FirebaseCrashlyticsFrame)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::delete_FirebaseCrashlyticsFrame(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_delete_FirebaseCrashlyticsFrame_mEC95B6399A6738043AC5194825BE82E99250CCB5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_delete_FirebaseCrashlyticsFrame", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_delete_FirebaseCrashlyticsFrame)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_GetInstance__SWIG_0(System.Runtime.InteropServices.HandleRef,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_GetInstance__SWIG_0_m4CDA19D7A13B164DC98C35862F5BBC9078905D70 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_GetInstance__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_GetInstance__SWIG_0)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_SetCustomKey(System.Runtime.InteropServices.HandleRef,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_SetCustomKey_m7E64C42B3D81D23AD0D34D6C995EC646196A3515 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_SetCustomKey", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_SetCustomKey)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_LogException(System.Runtime.InteropServices.HandleRef,System.String,System.String,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogException_mA62769499269758561B5C9D0F8784D4772195286 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg43, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogException", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Marshaling of parameter '___jarg43' to native representation
	void* ____jarg43_marshaled = NULL;
	____jarg43_marshaled = (void*)___jarg43.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogException)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE::FirebaseCrashlyticsInternal_LogExceptionAsFatal(System.Runtime.InteropServices.HandleRef,System.String,System.String,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrashlyticsInternalPINVOKE_FirebaseCrashlyticsInternal_LogExceptionAsFatal_m26B5841969232D99C21E396AA7455A7D952B8C0F (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, String_t* ___jarg32, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg43, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(char*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogExceptionAsFatal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Marshaling of parameter '___jarg43' to native representation
	void* ____jarg43_marshaled = NULL;
	____jarg43_marshaled = (void*)___jarg43.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Crashlytics_CSharp_FirebaseCrashlyticsInternal_LogExceptionAsFatal)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled, ____jarg43_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_CrashlyticsInternal_mBB0DFC9F1612E2E41DA95D12AC0DFC4B9918E875 (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___applicationDelegate0, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___arithmeticDelegate1, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___divideByZeroDelegate2, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___indexOutOfRangeDelegate3, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidCastDelegate4, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___invalidOperationDelegate5, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___ioDelegate6, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___nullReferenceDelegate7, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___outOfMemoryDelegate8, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___overflowDelegate9, ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* ___systemExceptionDelegate10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterExceptionCallbacks_CrashlyticsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_CrashlyticsInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_CrashlyticsInternal_mC80B2E02B2EA6558A578B4E588F52340E354A802 (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentDelegate0, ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentNullDelegate1, ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterExceptionArgumentCallbacks_CrashlyticsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_CrashlyticsInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427(L_9, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mB60ECF13C4DED47D76189362B96B9479DC8892AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_0 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m03E10310C9BEA49D70510AE54FD69872BEB6223B_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_1 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m6D012A4E05C48170C997A2871F27F38AB063A69A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_2 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_m54067EBE88920805AB28472ED33CE3DB5212A0F7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_3 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mB2ACE9652C9860DBDCC0DC5194EFA13A2CE55727_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_4 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m68623120FA2541F90C3A4841451AEBC02AAFFF44_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_5 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m2A68AE67B33AB532674544EC10C4F5F779563B1F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_6 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mF9A0B67215855A711DE08F4BA2A3E75014557F0E_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_7 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m4C8C2D804AC4E330D2DEB2DBB5DE952A4CCA1A04_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_8 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m1EE6354A4417CA3BCA1DC79EB0F3E1E5D41A7931_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_9 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_m064964DA67BCC95474FB0366AE430DC6205676B2_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_10 = (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*)il2cpp_codegen_object_new(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m9485A13F4877E86D94B2738D8A809B7CC6C4EFD4_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_11 = (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mDAC537D87898CF3B04F0EC9C694EF4DC98D7DC03(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m9328D2B5324318692EA8649E9082486DB945D086_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_12 = (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mDAC537D87898CF3B04F0EC9C694EF4DC98D7DC03(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m557CD226F1BE122B3024C595BCB8128CF8647D01_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_13 = (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mDAC537D87898CF3B04F0EC9C694EF4DC98D7DC03(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mE74E25F37439F92F034A3D627ABFABCC90228584_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_14 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_15 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_16 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_17 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_18 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_19 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_20 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_21 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_22 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_23 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* L_24 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_CrashlyticsInternal_mBB0DFC9F1612E2E41DA95D12AC0DFC4B9918E875(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_25 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_26 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* L_27 = ((SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_CrashlyticsInternal_mC80B2E02B2EA6558A578B4E588F52340E354A802(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_mF409E5795DF0D4C8B410A552093AA9F1E2C29237 (SWIGExceptionHelper_t991C08ABAEC4AB8BB0C48ACEC6436F8B9C1F8970* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_Multicast(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* currentDelegate = reinterpret_cast<ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenInst(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenStatic(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenStaticInvoker(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_ClosedStaticInvoker(ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m325BD927515251BC55A1CE8B0F3DA92F3A79C68C (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77_Multicast;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m17CD779AD1ADF57BEEFFC70A641EED21780E9B77 (ExceptionDelegate_tA0B6FF90773F94E8F4ADB26E59C022EA9F4793BB* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_Multicast(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenInst(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenStatic(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenStaticInvoker(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0, ___paramName1);
}
void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_ClosedStaticInvoker(ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0, ___paramName1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8 (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mDAC537D87898CF3B04F0EC9C694EF4DC98D7DC03 (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF_Multicast;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m50B35BF2C22627C07B603FB7CFFA13E730386BDF (ExceptionArgumentDelegate_tE99B0B8FC5C781502FEC342E761FC29F4DB986B8* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_0 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var)));
		Exception_t* L_2 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_5 = ___e0;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_6 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_6, L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m6C815495194D85BC7B81F0B7996C1E9E3D275427_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t* L_7 = ___e0;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_7);
		RuntimeObject* L_8 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_1 = L_8;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_2;
					if (!L_9)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_10, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_11 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_11, (&V_2), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
			int32_t L_12 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		return;
	}
}
// System.Exception Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_mAF451D4DE70D882276BC7836CCD9C73834120BCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_2 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0;
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		Exception_t* L_4 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_4;
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeObject* L_5 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2;
		V_3 = L_5;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_4;
					if (!L_6)
					{
						goto IL_0056;
					}
				}
				{
					RuntimeObject* L_7 = V_3;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_7, NULL);
				}

IL_0056:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_8 = V_3;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_8, (&V_4), NULL);
			il2cpp_codegen_runtime_class_init_inline(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
			int32_t L_9 = ((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
			goto IL_0057;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		Exception_t* L_10 = V_0;
		V_5 = L_10;
		goto IL_005e;
	}

IL_005e:
	{
		Exception_t* L_11 = V_5;
		return L_11;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_mE1321482E3A3C3B521B0E6822F26F959BCD470C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = 0;
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9C3365ED3C047C6935279BA7C05F89F3BDE54E35_il2cpp_TypeInfo_var))->___exceptionsLock_2), (void*)L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_CrashlyticsInternal(Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_CrashlyticsInternal_m90DCF1734E3FA330D0093ADB2A0AD067EC585934 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* ___stringDelegate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-10_4_0"), "SWIGRegisterStringCallback_CrashlyticsInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_10_4_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_CrashlyticsInternal)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD (String_t* ___cString0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mE527AA10C1053FAC43670B9EBECC6AFA7B389683 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* L_0 = (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959*)il2cpp_codegen_object_new(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m6D9162F9A14874C135F545DA77E00EBD67D17E51(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m08B722FA58870A3DE3A0F8010490F9A042D28CCD_RuntimeMethod_var), NULL);
		((SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* L_1 = ((SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_CrashlyticsInternal_m90DCF1734E3FA330D0093ADB2A0AD067EC585934(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m95ABC184E68900F762EF1107ACEE3C2BA370319F (SWIGStringHelper_tA8CF9EF78BD75BC8C5CB597CC99E74764BFE361B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_Multicast(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* currentDelegate = reinterpret_cast<SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenInst(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenStatic(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenStaticInvoker(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_ClosedStaticInvoker(SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m6D9162F9A14874C135F545DA77E00EBD67D17E51 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0_Multicast;
}
// System.String Firebase.Crashlytics.CrashlyticsInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m9BCFD3654712ED936EC8CA40A19B3D82DFBC36C0 (SWIGStringDelegate_t37770D7DA2368AE963BFF83DE2B3FC28CC710959* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnhandledExceptionEventArgs_get_ExceptionObject_m8DC2648F45071BF54F6EF908704224A805032F33_inline (UnhandledExceptionEventArgs_tA03BC4C11522215795EF708F89F187AD312310C0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____exception_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Crashlytics_get_ReportUncaughtExceptionsAsFatal_mDE723695962FC10E3F0E20C673B668E7D73D4F11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var);
		bool L_0 = ((Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_StaticFields*)il2cpp_codegen_static_fields_for(Crashlytics_tF21B662C3F976D9980F52B473208474F6C31CBE5_il2cpp_TypeInfo_var))->___U3CReportUncaughtExceptionsAsFatalU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_Name_m1896D9976E235E316D5E9942212844B5A70830B0_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_CustomStackTrace_m96C1F56677E625D1E964AE5EE6657BC51DACB08B_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CCustomStackTraceU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCustomStackTraceU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_CustomStackTrace_m09CFBAE4B46B47D83C10DD64462E13C250A83289_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCustomStackTraceU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoggedException_set_ParsedStackTrace_m3B96F287A2952EC305C06EE0D55A8C6F002FDF20_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = ___value0;
		__this->___U3CParsedStackTraceU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParsedStackTraceU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* LoggedException_get_ParsedStackTrace_m672B6D6A5AFFA99DAB7C4001BCCB7E2B5B4B7E56_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2U5BU5D_tE4669D9AC2F1B83C2557CE335CA7669AED87E418* L_0 = __this->___U3CParsedStackTraceU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoggedException_get_Name_mDF6DE03566F5AF6854F272676AAFF9CCA93709E7_inline (LoggedException_t43B89090462BFFD9B76040EF52EE2EFD63359887* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}

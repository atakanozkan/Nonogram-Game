#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t2EFEFA739D64C7BAD901C3FE5F6CC722DC129AF2;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t8487F7D92634187297C55D53D69038ECF0AF1A5B;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t8BFAF960B7BEE098015CB3CA6B29F996B36CC194;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t515FBDD1AEFD246E698424D00267AE4685567C46;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>
struct DOGetter_1_t010E4CB38D51591C14A6B3A8EFFB33147BE776B9;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t0F370D46554FA08EB85F093101FF3731C6D93348;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t4596A2038D23C79F7EECD86309BBCD2D10AEEFA6;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t0DCF81889D1C60C27A92CA77FE462BF4DB6D88F7;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t198058A5DD6169F9B1255E114C660577A0F98D7F;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>
struct DOSetter_1_t3901D8B4EDB573054DB3F4F7D9449A6D35AC26A3;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F;
// DG.Tweening.Core.Easing.EaseCurve
struct EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060;
// DG.Tweening.EaseFunction
struct EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t98C01ECFC5E278EFEB1AEF3512475A4604A0AFF5;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_t9D226D0B072F9EA7690FA7A649856709CE00D725;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_tE10F18828A3B58083EDF713736377A9F10B2CEC5;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_tEB25032AFD776502392FFF377631C0A006EED8C4;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct ABSTweenPlugin_3_tBA64744294D01888C9064FD9974C259D189BFC36;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tF0F62B2C3E037FA76B2A6352C4C0E6C8B2D668FD;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_t59C22DD36F4259810DAE41F464AC73D990C88056;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t224A02B0B2F704CE5A82C0EC7719C0ADC0B382DD;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3;
// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_tFBBC119A67F0325BE8602E1E0CE0DC26F49318D0;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23;
// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
struct CubicBezierDecoder_t55EE696BAF0E9A3A9DD01BA8522F3973744CCCD1;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_tD8E3A5A6B08AB1F897D957356D04C67385809E70;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2;
// DG.Tweening.Sequence
struct Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass26_0
struct U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass35_0
struct U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass46_0
struct U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass71_0
struct U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass75_0
struct U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A;
// DG.Tweening.ShortcutExtensions/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6;
// DG.Tweening.Tween
struct Tween_t119487E0AB84EF563521F1043116BDBAE68AC437;
// DG.Tweening.TweenCallback
struct TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1;
// DG.Tweening.TweenParams
struct TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5;
// DG.Tweening.Tweener
struct Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<DG.Tweening.Tween,DG.Tweening.Core.TweenLink>
struct Dictionary_2_tDC9AFCAA009814FA58EC50E9F99EC6516905261D;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t57BB69F1AC3759152D9E750F6120000328D367B8;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212;
// System.Collections.Generic.Stack`1<DG.Tweening.Tween>
struct Stack_1_t6CA58A0BB4B4756170E9E83B26CD1DDE07AFA198;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean>
struct Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Light
struct Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C;
// UnityEngine.LineRenderer
struct LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.TrailRenderer
struct TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44;

IL2CPP_EXTERN_C RuntimeClass* DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tD9D47C252FB20009C8276590D54394E430619D16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringPluginExtensions_tB7BCF7EB9633300CDD2387F467B58782AE28F06B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA068776FD07897238E9E6FAB6A4D472BD9E34A08;
IL2CPP_EXTERN_C String_t* _stringLiteralF25D7E65A8BD2882BB6473AF9F51EFECCE24B0A3;
IL2CPP_EXTERN_C const RuntimeMethod* EaseCurve_Evaluate_m3F43E02364D139A8F9625DA2D6B427FC9A33A1D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mE0164C5AB9E1273D0BF45C7B570E470EC7CEBA67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m44301887057A6FBF0AC15087D0D1F132F727FE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096DOTween2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_Flip_m5F14E6305C5E7C768BB488FF5C9FCE831EDEA805_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_ForceInit_m30E3B2E7B69945EC6F8B3F697B14F4247EBCC7B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_GotoWaypoint_mAB5060D8435C68CA9986A7F1619E62FB751AFBAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_Kill_mE9A3C52FEC438801BEC9CC96435FFF18C72C8C44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_ManualUpdate_m76A65B041D8E0095E5106F6B16913091652887C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_PathGetDrawPoints_m873E81F246BFE99838E25CE377CEB1236FA48629_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_PathGetPoint_m3996FDC066EF7836D06B058C19971FBF3876A5A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_PathLength_mE9E51F89C68A3FF5AA606BB95C319CD341EBEE54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_PlayBackwards_mD35BBEE7660D338C3747BB216444BF15C45A97E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_PlayForward_mCAE462ED14463F38AA0DB324B4607246C975DA78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_Restart_m37CD65586342B552F7B4F3FCD7D005CC2BBA7DA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_SmoothRewind_mE96341406886AA0019E9F899FA744707A5BB4060_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_TogglePause_mB413085220461740827A9B6515D71FFEFCF803CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForCompletion_m8AB6E1EB9720C93C527DFF0A517EB84781F9E1E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForElapsedLoops_mA0CAE5403F1536638695992C549F2607D212184C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForKill_mBBD6B16ACABA23AE5E2AF02F9932213F3D535462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForPosition_m49352D4E3C9246A604A29454745BC0319EF77AC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForRewind_m5FAE01F79989078EB883DC569836C91C2AD8C9E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenExtensions_WaitForStart_m545578C1A52C9F5DACEAEFB861B4432A111185BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams_Clear_mDF49B6268B9BF32A62C7D9650A56F4CFD92AB60C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams_SetEase_mB9BFC3818B842BB6A62A33F2F43F915C0211F878_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams_SetEase_mEFA02AC92A0528C7CE4B334C7147E679E0A20A08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams_SetLoops_mBD39C577C1F85942AE99168A0A775D87F57428E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams_SetUpdate_mE5EF664BB8A520E0E758DC7B9F2D87459F374C78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenParams__cctor_m1CAE513B7BE52394431D0B14EF93E5073D1B714D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_From_m453D2A3E6FCAE8F79E2C009B090B8537C7199D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_From_mCE30D0C73DDE695CEE5F37F0F9EB92F3EDED3AA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_From_mDF62EF8BCAEB3DB0EBB125C7E2D02687D65DC472_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetLookAt_m0A3F15C94C18F1C5494D47D8F88F86A564AEDFFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetLookAt_m1BBF90CFDEF4EFB5F84AF0756715D109B789EF76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetLookAt_m4ACAB43BDC105F85944D13E559DADCEA1C3EB8FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetLookAt_mA4ACE4FF207B9433A30A75392A9CB7CC89AABBE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetOptions_mF5B0D3F3B6EEC1C79D91E770D3F00709C9931230_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TweenSettingsExtensions_SetPathForwardDirection_m7EA9A97A77D0EBB7542134E0D8224E06D5A56714_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CDOShakeRotationU3Eb__1_m2A463FFB6651A2BF5F5B14954140E0A6C1FC4702_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass11_0_U3CDOShakeRotationU3Eb__1_m45FB9225C726F51591335B73FD4B3073D3332959_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass54_0_U3CDOPunchRotationU3Eb__1_mABB40181A56F62F0BAD26DF9005E7DEFB8E2FF69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass57_0_U3CDOShakeRotationU3Eb__1_mB8D9DAF2DA69E622C779B34F9183D789E85F2BDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass58_0_U3CDOShakeRotationU3Eb__1_mD34FE9337330E8E16A44D668A36EF860A1F67085_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass72_0_U3CDOBlendableMoveByU3Eb__1_m14654EE83EC6E5059BC968D7B399171D2A08CB87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass73_0_U3CDOBlendableLocalMoveByU3Eb__1_mA6F95723C2577E0B813677938AA15C8ECC32650E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass74_0_U3CDOBlendableRotateByU3Eb__1_m0E5F1C80F08026327CFFDB5C33D1FE2E7C8DD341_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass75_0_U3CDOBlendableLocalRotateByU3Eb__1_m7955070105829FB6DF8C3A18DDA94D0474AABE33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass76_0_U3CDOBlendablePunchRotationU3Eb__1_mB7AEE5FAD64D3DB03128FE8D7FF8B4F18488898C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass77_0_U3CDOBlendableScaleByU3Eb__1_mB9D4AB7363F4EF3D4E8D5DF08A82F4A3114DF196_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// DG.Tweening.Core.Debugger
struct  Debugger_tD9D47C252FB20009C8276590D54394E430619D16  : public RuntimeObject
{
public:

public:
};

struct Debugger_tD9D47C252FB20009C8276590D54394E430619D16_StaticFields
{
public:
	// System.Int32 DG.Tweening.Core.Debugger::_logPriority
	int32_t ____logPriority_0;

public:
	inline static int32_t get_offset_of__logPriority_0() { return static_cast<int32_t>(offsetof(Debugger_tD9D47C252FB20009C8276590D54394E430619D16_StaticFields, ____logPriority_0)); }
	inline int32_t get__logPriority_0() const { return ____logPriority_0; }
	inline int32_t* get_address_of__logPriority_0() { return &____logPriority_0; }
	inline void set__logPriority_0(int32_t value)
	{
		____logPriority_0 = value;
	}
};


// DG.Tweening.Core.Easing.EaseCurve
struct  EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253  : public RuntimeObject
{
public:
	// UnityEngine.AnimationCurve DG.Tweening.Core.Easing.EaseCurve::_animCurve
	AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ____animCurve_0;

public:
	inline static int32_t get_offset_of__animCurve_0() { return static_cast<int32_t>(offsetof(EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253, ____animCurve_0)); }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * get__animCurve_0() const { return ____animCurve_0; }
	inline AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C ** get_address_of__animCurve_0() { return &____animCurve_0; }
	inline void set__animCurve_0(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * value)
	{
		____animCurve_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animCurve_0), (void*)value);
	}
};


// DG.Tweening.Core.TweenManager
struct  TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386  : public RuntimeObject
{
public:

public:
};

struct TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields
{
public:
	// System.Boolean DG.Tweening.Core.TweenManager::isUnityEditor
	bool ___isUnityEditor_4;
	// System.Boolean DG.Tweening.Core.TweenManager::isDebugBuild
	bool ___isDebugBuild_5;
	// System.Int32 DG.Tweening.Core.TweenManager::maxActive
	int32_t ___maxActive_6;
	// System.Int32 DG.Tweening.Core.TweenManager::maxTweeners
	int32_t ___maxTweeners_7;
	// System.Int32 DG.Tweening.Core.TweenManager::maxSequences
	int32_t ___maxSequences_8;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveTweens
	bool ___hasActiveTweens_9;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveDefaultTweens
	bool ___hasActiveDefaultTweens_10;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveLateTweens
	bool ___hasActiveLateTweens_11;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveFixedTweens
	bool ___hasActiveFixedTweens_12;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveManualTweens
	bool ___hasActiveManualTweens_13;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweens
	int32_t ___totActiveTweens_14;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveDefaultTweens
	int32_t ___totActiveDefaultTweens_15;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveLateTweens
	int32_t ___totActiveLateTweens_16;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveFixedTweens
	int32_t ___totActiveFixedTweens_17;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveManualTweens
	int32_t ___totActiveManualTweens_18;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweeners
	int32_t ___totActiveTweeners_19;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveSequences
	int32_t ___totActiveSequences_20;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledTweeners
	int32_t ___totPooledTweeners_21;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledSequences
	int32_t ___totPooledSequences_22;
	// System.Int32 DG.Tweening.Core.TweenManager::totTweeners
	int32_t ___totTweeners_23;
	// System.Int32 DG.Tweening.Core.TweenManager::totSequences
	int32_t ___totSequences_24;
	// System.Boolean DG.Tweening.Core.TweenManager::isUpdateLoop
	bool ___isUpdateLoop_25;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_activeTweens
	TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* ____activeTweens_26;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_pooledTweeners
	TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* ____pooledTweeners_27;
	// System.Collections.Generic.Stack`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_PooledSequences
	Stack_1_t6CA58A0BB4B4756170E9E83B26CD1DDE07AFA198 * ____PooledSequences_28;
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_KillList
	List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * ____KillList_29;
	// System.Collections.Generic.Dictionary`2<DG.Tweening.Tween,DG.Tweening.Core.TweenLink> DG.Tweening.Core.TweenManager::_TweenLinks
	Dictionary_2_tDC9AFCAA009814FA58EC50E9F99EC6516905261D * ____TweenLinks_30;
	// System.Int32 DG.Tweening.Core.TweenManager::_totTweenLinks
	int32_t ____totTweenLinks_31;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxActiveLookupId
	int32_t ____maxActiveLookupId_32;
	// System.Boolean DG.Tweening.Core.TweenManager::_requiresActiveReorganization
	bool ____requiresActiveReorganization_33;
	// System.Int32 DG.Tweening.Core.TweenManager::_reorganizeFromId
	int32_t ____reorganizeFromId_34;
	// System.Int32 DG.Tweening.Core.TweenManager::_minPooledTweenerId
	int32_t ____minPooledTweenerId_35;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxPooledTweenerId
	int32_t ____maxPooledTweenerId_36;
	// System.Boolean DG.Tweening.Core.TweenManager::_despawnAllCalledFromUpdateLoopCallback
	bool ____despawnAllCalledFromUpdateLoopCallback_37;

public:
	inline static int32_t get_offset_of_isUnityEditor_4() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___isUnityEditor_4)); }
	inline bool get_isUnityEditor_4() const { return ___isUnityEditor_4; }
	inline bool* get_address_of_isUnityEditor_4() { return &___isUnityEditor_4; }
	inline void set_isUnityEditor_4(bool value)
	{
		___isUnityEditor_4 = value;
	}

	inline static int32_t get_offset_of_isDebugBuild_5() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___isDebugBuild_5)); }
	inline bool get_isDebugBuild_5() const { return ___isDebugBuild_5; }
	inline bool* get_address_of_isDebugBuild_5() { return &___isDebugBuild_5; }
	inline void set_isDebugBuild_5(bool value)
	{
		___isDebugBuild_5 = value;
	}

	inline static int32_t get_offset_of_maxActive_6() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___maxActive_6)); }
	inline int32_t get_maxActive_6() const { return ___maxActive_6; }
	inline int32_t* get_address_of_maxActive_6() { return &___maxActive_6; }
	inline void set_maxActive_6(int32_t value)
	{
		___maxActive_6 = value;
	}

	inline static int32_t get_offset_of_maxTweeners_7() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___maxTweeners_7)); }
	inline int32_t get_maxTweeners_7() const { return ___maxTweeners_7; }
	inline int32_t* get_address_of_maxTweeners_7() { return &___maxTweeners_7; }
	inline void set_maxTweeners_7(int32_t value)
	{
		___maxTweeners_7 = value;
	}

	inline static int32_t get_offset_of_maxSequences_8() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___maxSequences_8)); }
	inline int32_t get_maxSequences_8() const { return ___maxSequences_8; }
	inline int32_t* get_address_of_maxSequences_8() { return &___maxSequences_8; }
	inline void set_maxSequences_8(int32_t value)
	{
		___maxSequences_8 = value;
	}

	inline static int32_t get_offset_of_hasActiveTweens_9() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___hasActiveTweens_9)); }
	inline bool get_hasActiveTweens_9() const { return ___hasActiveTweens_9; }
	inline bool* get_address_of_hasActiveTweens_9() { return &___hasActiveTweens_9; }
	inline void set_hasActiveTweens_9(bool value)
	{
		___hasActiveTweens_9 = value;
	}

	inline static int32_t get_offset_of_hasActiveDefaultTweens_10() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___hasActiveDefaultTweens_10)); }
	inline bool get_hasActiveDefaultTweens_10() const { return ___hasActiveDefaultTweens_10; }
	inline bool* get_address_of_hasActiveDefaultTweens_10() { return &___hasActiveDefaultTweens_10; }
	inline void set_hasActiveDefaultTweens_10(bool value)
	{
		___hasActiveDefaultTweens_10 = value;
	}

	inline static int32_t get_offset_of_hasActiveLateTweens_11() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___hasActiveLateTweens_11)); }
	inline bool get_hasActiveLateTweens_11() const { return ___hasActiveLateTweens_11; }
	inline bool* get_address_of_hasActiveLateTweens_11() { return &___hasActiveLateTweens_11; }
	inline void set_hasActiveLateTweens_11(bool value)
	{
		___hasActiveLateTweens_11 = value;
	}

	inline static int32_t get_offset_of_hasActiveFixedTweens_12() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___hasActiveFixedTweens_12)); }
	inline bool get_hasActiveFixedTweens_12() const { return ___hasActiveFixedTweens_12; }
	inline bool* get_address_of_hasActiveFixedTweens_12() { return &___hasActiveFixedTweens_12; }
	inline void set_hasActiveFixedTweens_12(bool value)
	{
		___hasActiveFixedTweens_12 = value;
	}

	inline static int32_t get_offset_of_hasActiveManualTweens_13() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___hasActiveManualTweens_13)); }
	inline bool get_hasActiveManualTweens_13() const { return ___hasActiveManualTweens_13; }
	inline bool* get_address_of_hasActiveManualTweens_13() { return &___hasActiveManualTweens_13; }
	inline void set_hasActiveManualTweens_13(bool value)
	{
		___hasActiveManualTweens_13 = value;
	}

	inline static int32_t get_offset_of_totActiveTweens_14() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveTweens_14)); }
	inline int32_t get_totActiveTweens_14() const { return ___totActiveTweens_14; }
	inline int32_t* get_address_of_totActiveTweens_14() { return &___totActiveTweens_14; }
	inline void set_totActiveTweens_14(int32_t value)
	{
		___totActiveTweens_14 = value;
	}

	inline static int32_t get_offset_of_totActiveDefaultTweens_15() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveDefaultTweens_15)); }
	inline int32_t get_totActiveDefaultTweens_15() const { return ___totActiveDefaultTweens_15; }
	inline int32_t* get_address_of_totActiveDefaultTweens_15() { return &___totActiveDefaultTweens_15; }
	inline void set_totActiveDefaultTweens_15(int32_t value)
	{
		___totActiveDefaultTweens_15 = value;
	}

	inline static int32_t get_offset_of_totActiveLateTweens_16() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveLateTweens_16)); }
	inline int32_t get_totActiveLateTweens_16() const { return ___totActiveLateTweens_16; }
	inline int32_t* get_address_of_totActiveLateTweens_16() { return &___totActiveLateTweens_16; }
	inline void set_totActiveLateTweens_16(int32_t value)
	{
		___totActiveLateTweens_16 = value;
	}

	inline static int32_t get_offset_of_totActiveFixedTweens_17() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveFixedTweens_17)); }
	inline int32_t get_totActiveFixedTweens_17() const { return ___totActiveFixedTweens_17; }
	inline int32_t* get_address_of_totActiveFixedTweens_17() { return &___totActiveFixedTweens_17; }
	inline void set_totActiveFixedTweens_17(int32_t value)
	{
		___totActiveFixedTweens_17 = value;
	}

	inline static int32_t get_offset_of_totActiveManualTweens_18() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveManualTweens_18)); }
	inline int32_t get_totActiveManualTweens_18() const { return ___totActiveManualTweens_18; }
	inline int32_t* get_address_of_totActiveManualTweens_18() { return &___totActiveManualTweens_18; }
	inline void set_totActiveManualTweens_18(int32_t value)
	{
		___totActiveManualTweens_18 = value;
	}

	inline static int32_t get_offset_of_totActiveTweeners_19() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveTweeners_19)); }
	inline int32_t get_totActiveTweeners_19() const { return ___totActiveTweeners_19; }
	inline int32_t* get_address_of_totActiveTweeners_19() { return &___totActiveTweeners_19; }
	inline void set_totActiveTweeners_19(int32_t value)
	{
		___totActiveTweeners_19 = value;
	}

	inline static int32_t get_offset_of_totActiveSequences_20() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totActiveSequences_20)); }
	inline int32_t get_totActiveSequences_20() const { return ___totActiveSequences_20; }
	inline int32_t* get_address_of_totActiveSequences_20() { return &___totActiveSequences_20; }
	inline void set_totActiveSequences_20(int32_t value)
	{
		___totActiveSequences_20 = value;
	}

	inline static int32_t get_offset_of_totPooledTweeners_21() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totPooledTweeners_21)); }
	inline int32_t get_totPooledTweeners_21() const { return ___totPooledTweeners_21; }
	inline int32_t* get_address_of_totPooledTweeners_21() { return &___totPooledTweeners_21; }
	inline void set_totPooledTweeners_21(int32_t value)
	{
		___totPooledTweeners_21 = value;
	}

	inline static int32_t get_offset_of_totPooledSequences_22() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totPooledSequences_22)); }
	inline int32_t get_totPooledSequences_22() const { return ___totPooledSequences_22; }
	inline int32_t* get_address_of_totPooledSequences_22() { return &___totPooledSequences_22; }
	inline void set_totPooledSequences_22(int32_t value)
	{
		___totPooledSequences_22 = value;
	}

	inline static int32_t get_offset_of_totTweeners_23() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totTweeners_23)); }
	inline int32_t get_totTweeners_23() const { return ___totTweeners_23; }
	inline int32_t* get_address_of_totTweeners_23() { return &___totTweeners_23; }
	inline void set_totTweeners_23(int32_t value)
	{
		___totTweeners_23 = value;
	}

	inline static int32_t get_offset_of_totSequences_24() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___totSequences_24)); }
	inline int32_t get_totSequences_24() const { return ___totSequences_24; }
	inline int32_t* get_address_of_totSequences_24() { return &___totSequences_24; }
	inline void set_totSequences_24(int32_t value)
	{
		___totSequences_24 = value;
	}

	inline static int32_t get_offset_of_isUpdateLoop_25() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ___isUpdateLoop_25)); }
	inline bool get_isUpdateLoop_25() const { return ___isUpdateLoop_25; }
	inline bool* get_address_of_isUpdateLoop_25() { return &___isUpdateLoop_25; }
	inline void set_isUpdateLoop_25(bool value)
	{
		___isUpdateLoop_25 = value;
	}

	inline static int32_t get_offset_of__activeTweens_26() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____activeTweens_26)); }
	inline TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* get__activeTweens_26() const { return ____activeTweens_26; }
	inline TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5** get_address_of__activeTweens_26() { return &____activeTweens_26; }
	inline void set__activeTweens_26(TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* value)
	{
		____activeTweens_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTweens_26), (void*)value);
	}

	inline static int32_t get_offset_of__pooledTweeners_27() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____pooledTweeners_27)); }
	inline TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* get__pooledTweeners_27() const { return ____pooledTweeners_27; }
	inline TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5** get_address_of__pooledTweeners_27() { return &____pooledTweeners_27; }
	inline void set__pooledTweeners_27(TweenU5BU5D_t59E878639D2690DEB50DB29D6D3871EB68312DD5* value)
	{
		____pooledTweeners_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pooledTweeners_27), (void*)value);
	}

	inline static int32_t get_offset_of__PooledSequences_28() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____PooledSequences_28)); }
	inline Stack_1_t6CA58A0BB4B4756170E9E83B26CD1DDE07AFA198 * get__PooledSequences_28() const { return ____PooledSequences_28; }
	inline Stack_1_t6CA58A0BB4B4756170E9E83B26CD1DDE07AFA198 ** get_address_of__PooledSequences_28() { return &____PooledSequences_28; }
	inline void set__PooledSequences_28(Stack_1_t6CA58A0BB4B4756170E9E83B26CD1DDE07AFA198 * value)
	{
		____PooledSequences_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PooledSequences_28), (void*)value);
	}

	inline static int32_t get_offset_of__KillList_29() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____KillList_29)); }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * get__KillList_29() const { return ____KillList_29; }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 ** get_address_of__KillList_29() { return &____KillList_29; }
	inline void set__KillList_29(List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * value)
	{
		____KillList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____KillList_29), (void*)value);
	}

	inline static int32_t get_offset_of__TweenLinks_30() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____TweenLinks_30)); }
	inline Dictionary_2_tDC9AFCAA009814FA58EC50E9F99EC6516905261D * get__TweenLinks_30() const { return ____TweenLinks_30; }
	inline Dictionary_2_tDC9AFCAA009814FA58EC50E9F99EC6516905261D ** get_address_of__TweenLinks_30() { return &____TweenLinks_30; }
	inline void set__TweenLinks_30(Dictionary_2_tDC9AFCAA009814FA58EC50E9F99EC6516905261D * value)
	{
		____TweenLinks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TweenLinks_30), (void*)value);
	}

	inline static int32_t get_offset_of__totTweenLinks_31() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____totTweenLinks_31)); }
	inline int32_t get__totTweenLinks_31() const { return ____totTweenLinks_31; }
	inline int32_t* get_address_of__totTweenLinks_31() { return &____totTweenLinks_31; }
	inline void set__totTweenLinks_31(int32_t value)
	{
		____totTweenLinks_31 = value;
	}

	inline static int32_t get_offset_of__maxActiveLookupId_32() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____maxActiveLookupId_32)); }
	inline int32_t get__maxActiveLookupId_32() const { return ____maxActiveLookupId_32; }
	inline int32_t* get_address_of__maxActiveLookupId_32() { return &____maxActiveLookupId_32; }
	inline void set__maxActiveLookupId_32(int32_t value)
	{
		____maxActiveLookupId_32 = value;
	}

	inline static int32_t get_offset_of__requiresActiveReorganization_33() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____requiresActiveReorganization_33)); }
	inline bool get__requiresActiveReorganization_33() const { return ____requiresActiveReorganization_33; }
	inline bool* get_address_of__requiresActiveReorganization_33() { return &____requiresActiveReorganization_33; }
	inline void set__requiresActiveReorganization_33(bool value)
	{
		____requiresActiveReorganization_33 = value;
	}

	inline static int32_t get_offset_of__reorganizeFromId_34() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____reorganizeFromId_34)); }
	inline int32_t get__reorganizeFromId_34() const { return ____reorganizeFromId_34; }
	inline int32_t* get_address_of__reorganizeFromId_34() { return &____reorganizeFromId_34; }
	inline void set__reorganizeFromId_34(int32_t value)
	{
		____reorganizeFromId_34 = value;
	}

	inline static int32_t get_offset_of__minPooledTweenerId_35() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____minPooledTweenerId_35)); }
	inline int32_t get__minPooledTweenerId_35() const { return ____minPooledTweenerId_35; }
	inline int32_t* get_address_of__minPooledTweenerId_35() { return &____minPooledTweenerId_35; }
	inline void set__minPooledTweenerId_35(int32_t value)
	{
		____minPooledTweenerId_35 = value;
	}

	inline static int32_t get_offset_of__maxPooledTweenerId_36() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____maxPooledTweenerId_36)); }
	inline int32_t get__maxPooledTweenerId_36() const { return ____maxPooledTweenerId_36; }
	inline int32_t* get_address_of__maxPooledTweenerId_36() { return &____maxPooledTweenerId_36; }
	inline void set__maxPooledTweenerId_36(int32_t value)
	{
		____maxPooledTweenerId_36 = value;
	}

	inline static int32_t get_offset_of__despawnAllCalledFromUpdateLoopCallback_37() { return static_cast<int32_t>(offsetof(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields, ____despawnAllCalledFromUpdateLoopCallback_37)); }
	inline bool get__despawnAllCalledFromUpdateLoopCallback_37() const { return ____despawnAllCalledFromUpdateLoopCallback_37; }
	inline bool* get_address_of__despawnAllCalledFromUpdateLoopCallback_37() { return &____despawnAllCalledFromUpdateLoopCallback_37; }
	inline void set__despawnAllCalledFromUpdateLoopCallback_37(bool value)
	{
		____despawnAllCalledFromUpdateLoopCallback_37 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass0_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass10_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass11_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F  : public RuntimeObject
{
public:
	// UnityEngine.Light DG.Tweening.ShortcutExtensions_<>c__DisplayClass12_0::target
	Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F, ___target_0)); }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * get_target_0() const { return ___target_0; }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131  : public RuntimeObject
{
public:
	// UnityEngine.Light DG.Tweening.ShortcutExtensions_<>c__DisplayClass13_0::target
	Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131, ___target_0)); }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * get_target_0() const { return ___target_0; }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE  : public RuntimeObject
{
public:
	// UnityEngine.Light DG.Tweening.ShortcutExtensions_<>c__DisplayClass14_0::target
	Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE, ___target_0)); }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * get_target_0() const { return ___target_0; }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass16_0
struct  U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass16_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0
struct  U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.Int32 DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass19_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass1_0
struct  U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass1_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0
struct  U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.Int32 DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0
struct  U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.Int32 DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass24_0
struct  U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass24_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0
struct  U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass26_0
struct  U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass26_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0
struct  U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0::property
	String_t* ___property_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_property_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C, ___property_1)); }
	inline String_t* get_property_1() const { return ___property_1; }
	inline String_t** get_address_of_property_1() { return &___property_1; }
	inline void set_property_1(String_t* value)
	{
		___property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0
struct  U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9  : public RuntimeObject
{
public:
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_0;
	// System.Int32 DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0::propertyID
	int32_t ___propertyID_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9, ___target_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_0() const { return ___target_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9, ___propertyID_1)); }
	inline int32_t get_propertyID_1() const { return ___propertyID_1; }
	inline int32_t* get_address_of_propertyID_1() { return &___propertyID_1; }
	inline void set_propertyID_1(int32_t value)
	{
		___propertyID_1 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass2_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01  : public RuntimeObject
{
public:
	// UnityEngine.TrailRenderer DG.Tweening.ShortcutExtensions_<>c__DisplayClass30_0::target
	TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01, ___target_0)); }
	inline TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * get_target_0() const { return ___target_0; }
	inline TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass31_0
struct  U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F  : public RuntimeObject
{
public:
	// UnityEngine.TrailRenderer DG.Tweening.ShortcutExtensions_<>c__DisplayClass31_0::target
	TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F, ___target_0)); }
	inline TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * get_target_0() const { return ___target_0; }
	inline TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0
struct  U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass33_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass34_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass35_0
struct  U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass35_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass37_0
struct  U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass37_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass38_0
struct  U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass38_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass39_0
struct  U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass39_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass3_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass40_0
struct  U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass40_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass41_0
struct  U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass41_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass42_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass43_0
struct  U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass43_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass44_0
struct  U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass44_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0
struct  U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass46_0
struct  U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass46_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass47_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass48_0
struct  U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass48_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass4_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass51_0
struct  U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass51_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass52_0
struct  U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass52_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass53_0
struct  U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass53_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass54_0
struct  U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass54_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass55_0
struct  U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass55_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass56_0
struct  U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass56_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass57_0
struct  U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass57_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass58_0
struct  U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass58_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass59_0
struct  U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass59_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass5_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass60_0
struct  U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass60_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass63_0
struct  U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass63_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass64_0
struct  U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass64_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0
struct  U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0
struct  U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass67_0
struct  U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8  : public RuntimeObject
{
public:
	// DG.Tweening.Tween DG.Tweening.ShortcutExtensions_<>c__DisplayClass67_0::target
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8, ___target_0)); }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * get_target_0() const { return ___target_0; }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass6_0
struct  U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass6_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass7_0
struct  U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass7_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass8_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6  : public RuntimeObject
{
public:
	// UnityEngine.Camera DG.Tweening.ShortcutExtensions_<>c__DisplayClass9_0::target
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___target_0;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6, ___target_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_target_0() const { return ___target_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}
};


// DG.Tweening.TweenExtensions
struct  TweenExtensions_t78459AB2239BB3B0E4273A32381FAF97BF0B308D  : public RuntimeObject
{
public:

public:
};


// DG.Tweening.TweenSettingsExtensions
struct  TweenSettingsExtensions_t61A3DCA4F25E31E73F0104D8DE15B2D9AC78CCCA  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// DG.Tweening.Core.SafeModeReport
struct  SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totMissingTargetOrFieldErrors>k__BackingField
	int32_t ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totCallbackErrors>k__BackingField
	int32_t ___U3CtotCallbackErrorsU3Ek__BackingField_1;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totStartupErrors>k__BackingField
	int32_t ___U3CtotStartupErrorsU3Ek__BackingField_2;
	// System.Int32 DG.Tweening.Core.SafeModeReport::<totUnsetErrors>k__BackingField
	int32_t ___U3CtotUnsetErrorsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0)); }
	inline int32_t get_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() const { return ___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0() { return &___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0; }
	inline void set_U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0(int32_t value)
	{
		___U3CtotMissingTargetOrFieldErrorsU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotCallbackErrorsU3Ek__BackingField_1)); }
	inline int32_t get_U3CtotCallbackErrorsU3Ek__BackingField_1() const { return ___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtotCallbackErrorsU3Ek__BackingField_1() { return &___U3CtotCallbackErrorsU3Ek__BackingField_1; }
	inline void set_U3CtotCallbackErrorsU3Ek__BackingField_1(int32_t value)
	{
		___U3CtotCallbackErrorsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotStartupErrorsU3Ek__BackingField_2)); }
	inline int32_t get_U3CtotStartupErrorsU3Ek__BackingField_2() const { return ___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CtotStartupErrorsU3Ek__BackingField_2() { return &___U3CtotStartupErrorsU3Ek__BackingField_2; }
	inline void set_U3CtotStartupErrorsU3Ek__BackingField_2(int32_t value)
	{
		___U3CtotStartupErrorsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A, ___U3CtotUnsetErrorsU3Ek__BackingField_3)); }
	inline int32_t get_U3CtotUnsetErrorsU3Ek__BackingField_3() const { return ___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CtotUnsetErrorsU3Ek__BackingField_3() { return &___U3CtotUnsetErrorsU3Ek__BackingField_3; }
	inline void set_U3CtotUnsetErrorsU3Ek__BackingField_3(int32_t value)
	{
		___U3CtotUnsetErrorsU3Ek__BackingField_3 = value;
	}
};


// DG.Tweening.Plugins.Options.ColorOptions
struct  ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;

public:
	inline static int32_t get_offset_of_alphaOnly_0() { return static_cast<int32_t>(offsetof(ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA, ___alphaOnly_0)); }
	inline bool get_alphaOnly_0() const { return ___alphaOnly_0; }
	inline bool* get_address_of_alphaOnly_0() { return &___alphaOnly_0; }
	inline void set_alphaOnly_0(bool value)
	{
		___alphaOnly_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// DG.Tweening.Plugins.Options.FloatOptions
struct  FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B_marshaled_com
{
	int32_t ___snapping_0;
};

// DG.Tweening.Plugins.Options.RectOptions
struct  RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.RectOptions::snapping
	bool ___snapping_0;

public:
	inline static int32_t get_offset_of_snapping_0() { return static_cast<int32_t>(offsetof(RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E, ___snapping_0)); }
	inline bool get_snapping_0() const { return ___snapping_0; }
	inline bool* get_address_of_snapping_0() { return &___snapping_0; }
	inline void set_snapping_0(bool value)
	{
		___snapping_0 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Nullable`1<System.Single>
struct  Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// DG.Tweening.AutoPlay
struct  AutoPlay_t17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12 
{
public:
	// System.Int32 DG.Tweening.AutoPlay::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoPlay_t17E2BFFF87FCE2B8BAD2FD23B2B65379B515EC12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.AxisConstraint
struct  AxisConstraint_t6929580E28515C207FCC805981F73EC49354E48A 
{
public:
	// System.Int32 DG.Tweening.AxisConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisConstraint_t6929580E28515C207FCC805981F73EC49354E48A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Color2
struct  Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E 
{
public:
	// UnityEngine.Color DG.Tweening.Color2::ca
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___ca_0;
	// UnityEngine.Color DG.Tweening.Color2::cb
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___cb_1;

public:
	inline static int32_t get_offset_of_ca_0() { return static_cast<int32_t>(offsetof(Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E, ___ca_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_ca_0() const { return ___ca_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_ca_0() { return &___ca_0; }
	inline void set_ca_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___ca_0 = value;
	}

	inline static int32_t get_offset_of_cb_1() { return static_cast<int32_t>(offsetof(Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E, ___cb_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_cb_1() const { return ___cb_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_cb_1() { return &___cb_1; }
	inline void set_cb_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___cb_1 = value;
	}
};


// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour
struct  NestedTweenFailureBehaviour_tC6EED7548BA8FCF6B20E0909C2D7355CD09BB183 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.NestedTweenFailureBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NestedTweenFailureBehaviour_tC6EED7548BA8FCF6B20E0909C2D7355CD09BB183, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.RewindCallbackMode
struct  RewindCallbackMode_t2F1DD72D77203C98698C6FDD4C6B5683E019F84A 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.RewindCallbackMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RewindCallbackMode_t2F1DD72D77203C98698C6FDD4C6B5683E019F84A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SafeModeLogBehaviour
struct  SafeModeLogBehaviour_t0827C661947C9A5882B1E8A304964D557882815B 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SafeModeLogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeLogBehaviour_t0827C661947C9A5882B1E8A304964D557882815B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.SpecialStartupMode
struct  SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.SpecialStartupMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialStartupMode_tE272D2FEC46F4A5FC68E9A99E0093494AA4E0E49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.UpdateMode
struct  UpdateMode_tF271804A5FF87FE0CBFBD3FF6011D9499D5C6662 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateMode_tF271804A5FF87FE0CBFBD3FF6011D9499D5C6662, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.Enums.UpdateNotice
struct  UpdateNotice_t03AF68BDDDBD2D8575BA411C06D96FC886C74D39 
{
public:
	// System.Int32 DG.Tweening.Core.Enums.UpdateNotice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateNotice_t03AF68BDDDBD2D8575BA411C06D96FC886C74D39, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Core.SafeModeReport_SafeModeReportType
struct  SafeModeReportType_t4B366E7F25192A80094CD2BAC43B1A470103B5E2 
{
public:
	// System.Int32 DG.Tweening.Core.SafeModeReport_SafeModeReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SafeModeReportType_t4B366E7F25192A80094CD2BAC43B1A470103B5E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Ease
struct  Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E 
{
public:
	// System.Int32 DG.Tweening.Ease::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Ease_tC8B7BB21FCD1947DD4A1DD8025D4E9C6CC01DA0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LogBehaviour
struct  LogBehaviour_tD1A4AACD65E9C63844373CF59B8E9A576814F813 
{
public:
	// System.Int32 DG.Tweening.LogBehaviour::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogBehaviour_tD1A4AACD65E9C63844373CF59B8E9A576814F813, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.LoopType
struct  LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A 
{
public:
	// System.Int32 DG.Tweening.LoopType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopType_t1F864F717700724AC772E79CCF167C3C44D6EE1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.PathMode
struct  PathMode_t2ACD9081A852C6AE7EBBC384C9BC14805080366B 
{
public:
	// System.Int32 DG.Tweening.PathMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathMode_t2ACD9081A852C6AE7EBBC384C9BC14805080366B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.PathType
struct  PathType_t90AD7223A91AEA11EEF2E0646D064AFE49C92BCD 
{
public:
	// System.Int32 DG.Tweening.PathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathType_t90AD7223A91AEA11EEF2E0646D064AFE49C92BCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.Plugins.CircleOptions
struct  CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A 
{
public:
	// System.Single DG.Tweening.Plugins.CircleOptions::endValueDegrees
	float ___endValueDegrees_0;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::relativeCenter
	bool ___relativeCenter_1;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::snapping
	bool ___snapping_2;
	// UnityEngine.Vector2 DG.Tweening.Plugins.CircleOptions::center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_3;
	// System.Single DG.Tweening.Plugins.CircleOptions::radius
	float ___radius_4;
	// System.Single DG.Tweening.Plugins.CircleOptions::startValueDegrees
	float ___startValueDegrees_5;
	// System.Boolean DG.Tweening.Plugins.CircleOptions::initialized
	bool ___initialized_6;

public:
	inline static int32_t get_offset_of_endValueDegrees_0() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___endValueDegrees_0)); }
	inline float get_endValueDegrees_0() const { return ___endValueDegrees_0; }
	inline float* get_address_of_endValueDegrees_0() { return &___endValueDegrees_0; }
	inline void set_endValueDegrees_0(float value)
	{
		___endValueDegrees_0 = value;
	}

	inline static int32_t get_offset_of_relativeCenter_1() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___relativeCenter_1)); }
	inline bool get_relativeCenter_1() const { return ___relativeCenter_1; }
	inline bool* get_address_of_relativeCenter_1() { return &___relativeCenter_1; }
	inline void set_relativeCenter_1(bool value)
	{
		___relativeCenter_1 = value;
	}

	inline static int32_t get_offset_of_snapping_2() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___snapping_2)); }
	inline bool get_snapping_2() const { return ___snapping_2; }
	inline bool* get_address_of_snapping_2() { return &___snapping_2; }
	inline void set_snapping_2(bool value)
	{
		___snapping_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___center_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_center_3() const { return ___center_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_startValueDegrees_5() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___startValueDegrees_5)); }
	inline float get_startValueDegrees_5() const { return ___startValueDegrees_5; }
	inline float* get_address_of_startValueDegrees_5() { return &___startValueDegrees_5; }
	inline void set_startValueDegrees_5(float value)
	{
		___startValueDegrees_5 = value;
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.CircleOptions
struct CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A_marshaled_pinvoke
{
	float ___endValueDegrees_0;
	int32_t ___relativeCenter_1;
	int32_t ___snapping_2;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_3;
	float ___radius_4;
	float ___startValueDegrees_5;
	int32_t ___initialized_6;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.CircleOptions
struct CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A_marshaled_com
{
	float ___endValueDegrees_0;
	int32_t ___relativeCenter_1;
	int32_t ___snapping_2;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_3;
	float ___radius_4;
	float ___startValueDegrees_5;
	int32_t ___initialized_6;
};

// DG.Tweening.Plugins.Options.OrientType
struct  OrientType_tA561E2F4F794660D71F18B057A4C6488691EA237 
{
public:
	// System.Int32 DG.Tweening.Plugins.Options.OrientType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientType_tA561E2F4F794660D71F18B057A4C6488691EA237, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.RotateMode
struct  RotateMode_t7DB9BF2546AEC18F78B34B2B7111AED4416368C7 
{
public:
	// System.Int32 DG.Tweening.RotateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateMode_t7DB9BF2546AEC18F78B34B2B7111AED4416368C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.ScrambleMode
struct  ScrambleMode_tB2CAB82E2A9149E917AF3B1261C86133CBF83551 
{
public:
	// System.Int32 DG.Tweening.ScrambleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrambleMode_tB2CAB82E2A9149E917AF3B1261C86133CBF83551, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0
struct  U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;
	// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::s
	Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s_4;
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::endValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue_5;
	// DG.Tweening.Tween DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::yTween
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___yTween_6;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___startPosY_1)); }
	inline float get_startPosY_1() const { return ___startPosY_1; }
	inline float* get_address_of_startPosY_1() { return &___startPosY_1; }
	inline void set_startPosY_1(float value)
	{
		___startPosY_1 = value;
	}

	inline static int32_t get_offset_of_offsetYSet_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___offsetYSet_2)); }
	inline bool get_offsetYSet_2() const { return ___offsetYSet_2; }
	inline bool* get_address_of_offsetYSet_2() { return &___offsetYSet_2; }
	inline void set_offsetYSet_2(bool value)
	{
		___offsetYSet_2 = value;
	}

	inline static int32_t get_offset_of_offsetY_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___offsetY_3)); }
	inline float get_offsetY_3() const { return ___offsetY_3; }
	inline float* get_address_of_offsetY_3() { return &___offsetY_3; }
	inline void set_offsetY_3(float value)
	{
		___offsetY_3 = value;
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___s_4)); }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * get_s_4() const { return ___s_4; }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___endValue_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endValue_5() const { return ___endValue_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endValue_5() { return &___endValue_5; }
	inline void set_endValue_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endValue_5 = value;
	}

	inline static int32_t get_offset_of_yTween_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D, ___yTween_6)); }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * get_yTween_6() const { return ___yTween_6; }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 ** get_address_of_yTween_6() { return &___yTween_6; }
	inline void set_yTween_6(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * value)
	{
		___yTween_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yTween_6), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0
struct  U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647  : public RuntimeObject
{
public:
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_0;
	// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::startPosY
	float ___startPosY_1;
	// System.Boolean DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::offsetYSet
	bool ___offsetYSet_2;
	// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::offsetY
	float ___offsetY_3;
	// DG.Tweening.Sequence DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::s
	Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s_4;
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::endValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue_5;
	// DG.Tweening.Tween DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::yTween
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___yTween_6;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___target_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_0() const { return ___target_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_startPosY_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___startPosY_1)); }
	inline float get_startPosY_1() const { return ___startPosY_1; }
	inline float* get_address_of_startPosY_1() { return &___startPosY_1; }
	inline void set_startPosY_1(float value)
	{
		___startPosY_1 = value;
	}

	inline static int32_t get_offset_of_offsetYSet_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___offsetYSet_2)); }
	inline bool get_offsetYSet_2() const { return ___offsetYSet_2; }
	inline bool* get_address_of_offsetYSet_2() { return &___offsetYSet_2; }
	inline void set_offsetYSet_2(bool value)
	{
		___offsetYSet_2 = value;
	}

	inline static int32_t get_offset_of_offsetY_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___offsetY_3)); }
	inline float get_offsetY_3() const { return ___offsetY_3; }
	inline float* get_address_of_offsetY_3() { return &___offsetY_3; }
	inline void set_offsetY_3(float value)
	{
		___offsetY_3 = value;
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___s_4)); }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * get_s_4() const { return ___s_4; }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 ** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___endValue_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endValue_5() const { return ___endValue_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endValue_5() { return &___endValue_5; }
	inline void set_endValue_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endValue_5 = value;
	}

	inline static int32_t get_offset_of_yTween_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647, ___yTween_6)); }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * get_yTween_6() const { return ___yTween_6; }
	inline Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 ** get_address_of_yTween_6() { return &___yTween_6; }
	inline void set_yTween_6(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * value)
	{
		___yTween_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yTween_6), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0
struct  U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0::to
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to_0;
	// UnityEngine.Light DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0::target
	Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB, ___to_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_to_0() const { return ___to_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB, ___target_1)); }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * get_target_1() const { return ___target_1; }
	inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0
struct  U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0::to
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to_0;
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8, ___to_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_to_0() const { return ___to_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8, ___target_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_1() const { return ___target_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0
struct  U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::to
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to_0;
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_1;
	// System.String DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::property
	String_t* ___property_2;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15, ___to_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_to_0() const { return ___to_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15, ___target_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_1() const { return ___target_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}

	inline static int32_t get_offset_of_property_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15, ___property_2)); }
	inline String_t* get_property_2() const { return ___property_2; }
	inline String_t** get_address_of_property_2() { return &___property_2; }
	inline void set_property_2(String_t* value)
	{
		___property_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_2), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0
struct  U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C  : public RuntimeObject
{
public:
	// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::to
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___to_0;
	// UnityEngine.Material DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::target
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___target_1;
	// System.Int32 DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::propertyID
	int32_t ___propertyID_2;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C, ___to_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_to_0() const { return ___to_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C, ___target_1)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_target_1() const { return ___target_1; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}

	inline static int32_t get_offset_of_propertyID_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C, ___propertyID_2)); }
	inline int32_t get_propertyID_2() const { return ___propertyID_2; }
	inline int32_t* get_address_of_propertyID_2() { return &___propertyID_2; }
	inline void set_propertyID_2(int32_t value)
	{
		___propertyID_2 = value;
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0
struct  U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0::to
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D, ___to_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_to_0() const { return ___to_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0
struct  U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0::to
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F, ___to_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_to_0() const { return ___to_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0
struct  U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0  : public RuntimeObject
{
public:
	// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0::to
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0, ___to_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_to_0() const { return ___to_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0
struct  U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670  : public RuntimeObject
{
public:
	// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0::to
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670, ___to_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_to_0() const { return ___to_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0::to
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9, ___to_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_to_0() const { return ___to_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0
struct  U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0::to
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to_0;
	// UnityEngine.Transform DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_1;

public:
	inline static int32_t get_offset_of_to_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874, ___to_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_to_0() const { return ___to_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_to_0() { return &___to_0; }
	inline void set_to_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___to_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874, ___target_1)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_1() const { return ___target_1; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.TweenType
struct  TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F 
{
public:
	// System.Int32 DG.Tweening.TweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenType_t13FCD3DFD7DD8AE49EA4A7BA70695D3936EAF71F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DG.Tweening.UpdateType
struct  UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63 
{
public:
	// System.Int32 DG.Tweening.UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t0EBAB258B7D72D4959A3835E554B7958CAFDAF63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE 
{
public:
	// T System.Nullable`1::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.Core.ABSSequentiable
struct  ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757  : public RuntimeObject
{
public:
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStart_3;

public:
	inline static int32_t get_offset_of_tweenType_0() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___tweenType_0)); }
	inline int32_t get_tweenType_0() const { return ___tweenType_0; }
	inline int32_t* get_address_of_tweenType_0() { return &___tweenType_0; }
	inline void set_tweenType_0(int32_t value)
	{
		___tweenType_0 = value;
	}

	inline static int32_t get_offset_of_sequencedPosition_1() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedPosition_1)); }
	inline float get_sequencedPosition_1() const { return ___sequencedPosition_1; }
	inline float* get_address_of_sequencedPosition_1() { return &___sequencedPosition_1; }
	inline void set_sequencedPosition_1(float value)
	{
		___sequencedPosition_1 = value;
	}

	inline static int32_t get_offset_of_sequencedEndPosition_2() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___sequencedEndPosition_2)); }
	inline float get_sequencedEndPosition_2() const { return ___sequencedEndPosition_2; }
	inline float* get_address_of_sequencedEndPosition_2() { return &___sequencedEndPosition_2; }
	inline void set_sequencedEndPosition_2(float value)
	{
		___sequencedEndPosition_2 = value;
	}

	inline static int32_t get_offset_of_onStart_3() { return static_cast<int32_t>(offsetof(ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757, ___onStart_3)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStart_3() const { return ___onStart_3; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStart_3() { return &___onStart_3; }
	inline void set_onStart_3(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStart_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_3), (void*)value);
	}
};


// DG.Tweening.DOTween
struct  DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D  : public RuntimeObject
{
public:

public:
};

struct DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// DG.Tweening.Core.Enums.SafeModeLogBehaviour DG.Tweening.DOTween::safeModeLogBehaviour
	int32_t ___safeModeLogBehaviour_2;
	// DG.Tweening.Core.Enums.NestedTweenFailureBehaviour DG.Tweening.DOTween::nestedTweenFailureBehaviour
	int32_t ___nestedTweenFailureBehaviour_3;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_4;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_5;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_6;
	// System.Single DG.Tweening.DOTween::maxSmoothUnscaledTime
	float ___maxSmoothUnscaledTime_7;
	// DG.Tweening.Core.Enums.RewindCallbackMode DG.Tweening.DOTween::rewindCallbackMode
	int32_t ___rewindCallbackMode_8;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_9;
	// System.Func`3<UnityEngine.LogType,System.Object,System.Boolean> DG.Tweening.DOTween::onWillLog
	Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * ___onWillLog_10;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_11;
	// System.Boolean DG.Tweening.DOTween::debugMode
	bool ___debugMode_12;
	// System.Boolean DG.Tweening.DOTween::_fooDebugStoreTargetId
	bool ____fooDebugStoreTargetId_13;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_14;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_15;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_16;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_17;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_18;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_19;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_20;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_21;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_22;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * ___instance_23;
	// System.Boolean DG.Tweening.DOTween::_foo_isQuitting
	bool ____foo_isQuitting_24;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_25;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_26;
	// DG.Tweening.Core.SafeModeReport DG.Tweening.DOTween::safeModeReport
	SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  ___safeModeReport_27;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * ___GizmosDelegates_28;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_29;
	// System.Int32 DG.Tweening.DOTween::_isQuittingFrame
	int32_t ____isQuittingFrame_30;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version_0), (void*)value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_safeModeLogBehaviour_2() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___safeModeLogBehaviour_2)); }
	inline int32_t get_safeModeLogBehaviour_2() const { return ___safeModeLogBehaviour_2; }
	inline int32_t* get_address_of_safeModeLogBehaviour_2() { return &___safeModeLogBehaviour_2; }
	inline void set_safeModeLogBehaviour_2(int32_t value)
	{
		___safeModeLogBehaviour_2 = value;
	}

	inline static int32_t get_offset_of_nestedTweenFailureBehaviour_3() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___nestedTweenFailureBehaviour_3)); }
	inline int32_t get_nestedTweenFailureBehaviour_3() const { return ___nestedTweenFailureBehaviour_3; }
	inline int32_t* get_address_of_nestedTweenFailureBehaviour_3() { return &___nestedTweenFailureBehaviour_3; }
	inline void set_nestedTweenFailureBehaviour_3(int32_t value)
	{
		___nestedTweenFailureBehaviour_3 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_4() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___showUnityEditorReport_4)); }
	inline bool get_showUnityEditorReport_4() const { return ___showUnityEditorReport_4; }
	inline bool* get_address_of_showUnityEditorReport_4() { return &___showUnityEditorReport_4; }
	inline void set_showUnityEditorReport_4(bool value)
	{
		___showUnityEditorReport_4 = value;
	}

	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of_useSmoothDeltaTime_6() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___useSmoothDeltaTime_6)); }
	inline bool get_useSmoothDeltaTime_6() const { return ___useSmoothDeltaTime_6; }
	inline bool* get_address_of_useSmoothDeltaTime_6() { return &___useSmoothDeltaTime_6; }
	inline void set_useSmoothDeltaTime_6(bool value)
	{
		___useSmoothDeltaTime_6 = value;
	}

	inline static int32_t get_offset_of_maxSmoothUnscaledTime_7() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxSmoothUnscaledTime_7)); }
	inline float get_maxSmoothUnscaledTime_7() const { return ___maxSmoothUnscaledTime_7; }
	inline float* get_address_of_maxSmoothUnscaledTime_7() { return &___maxSmoothUnscaledTime_7; }
	inline void set_maxSmoothUnscaledTime_7(float value)
	{
		___maxSmoothUnscaledTime_7 = value;
	}

	inline static int32_t get_offset_of_rewindCallbackMode_8() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___rewindCallbackMode_8)); }
	inline int32_t get_rewindCallbackMode_8() const { return ___rewindCallbackMode_8; }
	inline int32_t* get_address_of_rewindCallbackMode_8() { return &___rewindCallbackMode_8; }
	inline void set_rewindCallbackMode_8(int32_t value)
	{
		___rewindCallbackMode_8 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_9() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____logBehaviour_9)); }
	inline int32_t get__logBehaviour_9() const { return ____logBehaviour_9; }
	inline int32_t* get_address_of__logBehaviour_9() { return &____logBehaviour_9; }
	inline void set__logBehaviour_9(int32_t value)
	{
		____logBehaviour_9 = value;
	}

	inline static int32_t get_offset_of_onWillLog_10() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___onWillLog_10)); }
	inline Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * get_onWillLog_10() const { return ___onWillLog_10; }
	inline Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB ** get_address_of_onWillLog_10() { return &___onWillLog_10; }
	inline void set_onWillLog_10(Func_3_t438CBBFB0B5FB2391C878B5C188BF587009211EB * value)
	{
		___onWillLog_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWillLog_10), (void*)value);
	}

	inline static int32_t get_offset_of_drawGizmos_11() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___drawGizmos_11)); }
	inline bool get_drawGizmos_11() const { return ___drawGizmos_11; }
	inline bool* get_address_of_drawGizmos_11() { return &___drawGizmos_11; }
	inline void set_drawGizmos_11(bool value)
	{
		___drawGizmos_11 = value;
	}

	inline static int32_t get_offset_of_debugMode_12() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___debugMode_12)); }
	inline bool get_debugMode_12() const { return ___debugMode_12; }
	inline bool* get_address_of_debugMode_12() { return &___debugMode_12; }
	inline void set_debugMode_12(bool value)
	{
		___debugMode_12 = value;
	}

	inline static int32_t get_offset_of__fooDebugStoreTargetId_13() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____fooDebugStoreTargetId_13)); }
	inline bool get__fooDebugStoreTargetId_13() const { return ____fooDebugStoreTargetId_13; }
	inline bool* get_address_of__fooDebugStoreTargetId_13() { return &____fooDebugStoreTargetId_13; }
	inline void set__fooDebugStoreTargetId_13(bool value)
	{
		____fooDebugStoreTargetId_13 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_14() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultUpdateType_14)); }
	inline int32_t get_defaultUpdateType_14() const { return ___defaultUpdateType_14; }
	inline int32_t* get_address_of_defaultUpdateType_14() { return &___defaultUpdateType_14; }
	inline void set_defaultUpdateType_14(int32_t value)
	{
		___defaultUpdateType_14 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_15() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultTimeScaleIndependent_15)); }
	inline bool get_defaultTimeScaleIndependent_15() const { return ___defaultTimeScaleIndependent_15; }
	inline bool* get_address_of_defaultTimeScaleIndependent_15() { return &___defaultTimeScaleIndependent_15; }
	inline void set_defaultTimeScaleIndependent_15(bool value)
	{
		___defaultTimeScaleIndependent_15 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_16() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultAutoPlay_16)); }
	inline int32_t get_defaultAutoPlay_16() const { return ___defaultAutoPlay_16; }
	inline int32_t* get_address_of_defaultAutoPlay_16() { return &___defaultAutoPlay_16; }
	inline void set_defaultAutoPlay_16(int32_t value)
	{
		___defaultAutoPlay_16 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_17() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultAutoKill_17)); }
	inline bool get_defaultAutoKill_17() const { return ___defaultAutoKill_17; }
	inline bool* get_address_of_defaultAutoKill_17() { return &___defaultAutoKill_17; }
	inline void set_defaultAutoKill_17(bool value)
	{
		___defaultAutoKill_17 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_18() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultLoopType_18)); }
	inline int32_t get_defaultLoopType_18() const { return ___defaultLoopType_18; }
	inline int32_t* get_address_of_defaultLoopType_18() { return &___defaultLoopType_18; }
	inline void set_defaultLoopType_18(int32_t value)
	{
		___defaultLoopType_18 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_19() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultRecyclable_19)); }
	inline bool get_defaultRecyclable_19() const { return ___defaultRecyclable_19; }
	inline bool* get_address_of_defaultRecyclable_19() { return &___defaultRecyclable_19; }
	inline void set_defaultRecyclable_19(bool value)
	{
		___defaultRecyclable_19 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_20() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEaseType_20)); }
	inline int32_t get_defaultEaseType_20() const { return ___defaultEaseType_20; }
	inline int32_t* get_address_of_defaultEaseType_20() { return &___defaultEaseType_20; }
	inline void set_defaultEaseType_20(int32_t value)
	{
		___defaultEaseType_20 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_21() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEaseOvershootOrAmplitude_21)); }
	inline float get_defaultEaseOvershootOrAmplitude_21() const { return ___defaultEaseOvershootOrAmplitude_21; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_21() { return &___defaultEaseOvershootOrAmplitude_21; }
	inline void set_defaultEaseOvershootOrAmplitude_21(float value)
	{
		___defaultEaseOvershootOrAmplitude_21 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_22() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___defaultEasePeriod_22)); }
	inline float get_defaultEasePeriod_22() const { return ___defaultEasePeriod_22; }
	inline float* get_address_of_defaultEasePeriod_22() { return &___defaultEasePeriod_22; }
	inline void set_defaultEasePeriod_22(float value)
	{
		___defaultEasePeriod_22 = value;
	}

	inline static int32_t get_offset_of_instance_23() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___instance_23)); }
	inline DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * get_instance_23() const { return ___instance_23; }
	inline DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F ** get_address_of_instance_23() { return &___instance_23; }
	inline void set_instance_23(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * value)
	{
		___instance_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_23), (void*)value);
	}

	inline static int32_t get_offset_of__foo_isQuitting_24() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____foo_isQuitting_24)); }
	inline bool get__foo_isQuitting_24() const { return ____foo_isQuitting_24; }
	inline bool* get_address_of__foo_isQuitting_24() { return &____foo_isQuitting_24; }
	inline void set__foo_isQuitting_24(bool value)
	{
		____foo_isQuitting_24 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_25() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxActiveTweenersReached_25)); }
	inline int32_t get_maxActiveTweenersReached_25() const { return ___maxActiveTweenersReached_25; }
	inline int32_t* get_address_of_maxActiveTweenersReached_25() { return &___maxActiveTweenersReached_25; }
	inline void set_maxActiveTweenersReached_25(int32_t value)
	{
		___maxActiveTweenersReached_25 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_26() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___maxActiveSequencesReached_26)); }
	inline int32_t get_maxActiveSequencesReached_26() const { return ___maxActiveSequencesReached_26; }
	inline int32_t* get_address_of_maxActiveSequencesReached_26() { return &___maxActiveSequencesReached_26; }
	inline void set_maxActiveSequencesReached_26(int32_t value)
	{
		___maxActiveSequencesReached_26 = value;
	}

	inline static int32_t get_offset_of_safeModeReport_27() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___safeModeReport_27)); }
	inline SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  get_safeModeReport_27() const { return ___safeModeReport_27; }
	inline SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A * get_address_of_safeModeReport_27() { return &___safeModeReport_27; }
	inline void set_safeModeReport_27(SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A  value)
	{
		___safeModeReport_27 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_28() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___GizmosDelegates_28)); }
	inline List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * get_GizmosDelegates_28() const { return ___GizmosDelegates_28; }
	inline List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 ** get_address_of_GizmosDelegates_28() { return &___GizmosDelegates_28; }
	inline void set_GizmosDelegates_28(List_1_tA91E07DF8FDCABF79352C03D79A9D29DE3BBA212 * value)
	{
		___GizmosDelegates_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GizmosDelegates_28), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_29() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ___initialized_29)); }
	inline bool get_initialized_29() const { return ___initialized_29; }
	inline bool* get_address_of_initialized_29() { return &___initialized_29; }
	inline void set_initialized_29(bool value)
	{
		___initialized_29 = value;
	}

	inline static int32_t get_offset_of__isQuittingFrame_30() { return static_cast<int32_t>(offsetof(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields, ____isQuittingFrame_30)); }
	inline int32_t get__isQuittingFrame_30() const { return ____isQuittingFrame_30; }
	inline int32_t* get_address_of__isQuittingFrame_30() { return &____isQuittingFrame_30; }
	inline void set__isQuittingFrame_30(int32_t value)
	{
		____isQuittingFrame_30 = value;
	}
};


// DG.Tweening.Plugins.Options.PathOptions
struct  PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 
{
public:
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody2D
	bool ___isRigidbody2D_13;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::stableZRotation
	bool ___stableZRotation_14;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_16;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_17;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_18;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_orientType_1() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___orientType_1)); }
	inline int32_t get_orientType_1() const { return ___orientType_1; }
	inline int32_t* get_address_of_orientType_1() { return &___orientType_1; }
	inline void set_orientType_1(int32_t value)
	{
		___orientType_1 = value;
	}

	inline static int32_t get_offset_of_lockPositionAxis_2() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lockPositionAxis_2)); }
	inline int32_t get_lockPositionAxis_2() const { return ___lockPositionAxis_2; }
	inline int32_t* get_address_of_lockPositionAxis_2() { return &___lockPositionAxis_2; }
	inline void set_lockPositionAxis_2(int32_t value)
	{
		___lockPositionAxis_2 = value;
	}

	inline static int32_t get_offset_of_lockRotationAxis_3() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lockRotationAxis_3)); }
	inline int32_t get_lockRotationAxis_3() const { return ___lockRotationAxis_3; }
	inline int32_t* get_address_of_lockRotationAxis_3() { return &___lockRotationAxis_3; }
	inline void set_lockRotationAxis_3(int32_t value)
	{
		___lockRotationAxis_3 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_4() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isClosedPath_4)); }
	inline bool get_isClosedPath_4() const { return ___isClosedPath_4; }
	inline bool* get_address_of_isClosedPath_4() { return &___isClosedPath_4; }
	inline void set_isClosedPath_4(bool value)
	{
		___isClosedPath_4 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_5() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAtPosition_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lookAtPosition_5() const { return ___lookAtPosition_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lookAtPosition_5() { return &___lookAtPosition_5; }
	inline void set_lookAtPosition_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lookAtPosition_5 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_6() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAtTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_lookAtTransform_6() const { return ___lookAtTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_lookAtTransform_6() { return &___lookAtTransform_6; }
	inline void set_lookAtTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___lookAtTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookAtTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_lookAhead_7() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___lookAhead_7)); }
	inline float get_lookAhead_7() const { return ___lookAhead_7; }
	inline float* get_address_of_lookAhead_7() { return &___lookAhead_7; }
	inline void set_lookAhead_7(float value)
	{
		___lookAhead_7 = value;
	}

	inline static int32_t get_offset_of_hasCustomForwardDirection_8() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___hasCustomForwardDirection_8)); }
	inline bool get_hasCustomForwardDirection_8() const { return ___hasCustomForwardDirection_8; }
	inline bool* get_address_of_hasCustomForwardDirection_8() { return &___hasCustomForwardDirection_8; }
	inline void set_hasCustomForwardDirection_8(bool value)
	{
		___hasCustomForwardDirection_8 = value;
	}

	inline static int32_t get_offset_of_forward_9() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___forward_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_forward_9() const { return ___forward_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_forward_9() { return &___forward_9; }
	inline void set_forward_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___forward_9 = value;
	}

	inline static int32_t get_offset_of_useLocalPosition_10() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___useLocalPosition_10)); }
	inline bool get_useLocalPosition_10() const { return ___useLocalPosition_10; }
	inline bool* get_address_of_useLocalPosition_10() { return &___useLocalPosition_10; }
	inline void set_useLocalPosition_10(bool value)
	{
		___useLocalPosition_10 = value;
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___parent_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_parent_11() const { return ___parent_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_11), (void*)value);
	}

	inline static int32_t get_offset_of_isRigidbody_12() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isRigidbody_12)); }
	inline bool get_isRigidbody_12() const { return ___isRigidbody_12; }
	inline bool* get_address_of_isRigidbody_12() { return &___isRigidbody_12; }
	inline void set_isRigidbody_12(bool value)
	{
		___isRigidbody_12 = value;
	}

	inline static int32_t get_offset_of_isRigidbody2D_13() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___isRigidbody2D_13)); }
	inline bool get_isRigidbody2D_13() const { return ___isRigidbody2D_13; }
	inline bool* get_address_of_isRigidbody2D_13() { return &___isRigidbody2D_13; }
	inline void set_isRigidbody2D_13(bool value)
	{
		___isRigidbody2D_13 = value;
	}

	inline static int32_t get_offset_of_stableZRotation_14() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___stableZRotation_14)); }
	inline bool get_stableZRotation_14() const { return ___stableZRotation_14; }
	inline bool* get_address_of_stableZRotation_14() { return &___stableZRotation_14; }
	inline void set_stableZRotation_14(bool value)
	{
		___stableZRotation_14 = value;
	}

	inline static int32_t get_offset_of_startupRot_15() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___startupRot_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_startupRot_15() const { return ___startupRot_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_startupRot_15() { return &___startupRot_15; }
	inline void set_startupRot_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___startupRot_15 = value;
	}

	inline static int32_t get_offset_of_startupZRot_16() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___startupZRot_16)); }
	inline float get_startupZRot_16() const { return ___startupZRot_16; }
	inline float* get_address_of_startupZRot_16() { return &___startupZRot_16; }
	inline void set_startupZRot_16(float value)
	{
		___startupZRot_16 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_17() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___addedExtraStartWp_17)); }
	inline bool get_addedExtraStartWp_17() const { return ___addedExtraStartWp_17; }
	inline bool* get_address_of_addedExtraStartWp_17() { return &___addedExtraStartWp_17; }
	inline void set_addedExtraStartWp_17(bool value)
	{
		___addedExtraStartWp_17 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_18() { return static_cast<int32_t>(offsetof(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7, ___addedExtraEndWp_18)); }
	inline bool get_addedExtraEndWp_18() const { return ___addedExtraEndWp_18; }
	inline bool* get_address_of_addedExtraEndWp_18() { return &___addedExtraEndWp_18; }
	inline void set_addedExtraEndWp_18(bool value)
	{
		___addedExtraEndWp_18 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition_5;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent_11;
	int32_t ___isRigidbody_12;
	int32_t ___isRigidbody2D_13;
	int32_t ___stableZRotation_14;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___startupRot_15;
	float ___startupZRot_16;
	int32_t ___addedExtraStartWp_17;
	int32_t ___addedExtraEndWp_18;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct  QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B 
{
public:
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dynamicLookAtWorldPosition_4;

public:
	inline static int32_t get_offset_of_rotateMode_0() { return static_cast<int32_t>(offsetof(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B, ___rotateMode_0)); }
	inline int32_t get_rotateMode_0() const { return ___rotateMode_0; }
	inline int32_t* get_address_of_rotateMode_0() { return &___rotateMode_0; }
	inline void set_rotateMode_0(int32_t value)
	{
		___rotateMode_0 = value;
	}

	inline static int32_t get_offset_of_axisConstraint_1() { return static_cast<int32_t>(offsetof(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B, ___axisConstraint_1)); }
	inline int32_t get_axisConstraint_1() const { return ___axisConstraint_1; }
	inline int32_t* get_address_of_axisConstraint_1() { return &___axisConstraint_1; }
	inline void set_axisConstraint_1(int32_t value)
	{
		___axisConstraint_1 = value;
	}

	inline static int32_t get_offset_of_up_2() { return static_cast<int32_t>(offsetof(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B, ___up_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_up_2() const { return ___up_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_up_2() { return &___up_2; }
	inline void set_up_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___up_2 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAt_3() { return static_cast<int32_t>(offsetof(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B, ___dynamicLookAt_3)); }
	inline bool get_dynamicLookAt_3() const { return ___dynamicLookAt_3; }
	inline bool* get_address_of_dynamicLookAt_3() { return &___dynamicLookAt_3; }
	inline void set_dynamicLookAt_3(bool value)
	{
		___dynamicLookAt_3 = value;
	}

	inline static int32_t get_offset_of_dynamicLookAtWorldPosition_4() { return static_cast<int32_t>(offsetof(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B, ___dynamicLookAtWorldPosition_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dynamicLookAtWorldPosition_4() const { return ___dynamicLookAtWorldPosition_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dynamicLookAtWorldPosition_4() { return &___dynamicLookAtWorldPosition_4; }
	inline void set_dynamicLookAtWorldPosition_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dynamicLookAtWorldPosition_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dynamicLookAtWorldPosition_4;
};

// DG.Tweening.Plugins.Options.StringOptions
struct  StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC 
{
public:
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;

public:
	inline static int32_t get_offset_of_richTextEnabled_0() { return static_cast<int32_t>(offsetof(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC, ___richTextEnabled_0)); }
	inline bool get_richTextEnabled_0() const { return ___richTextEnabled_0; }
	inline bool* get_address_of_richTextEnabled_0() { return &___richTextEnabled_0; }
	inline void set_richTextEnabled_0(bool value)
	{
		___richTextEnabled_0 = value;
	}

	inline static int32_t get_offset_of_scrambleMode_1() { return static_cast<int32_t>(offsetof(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC, ___scrambleMode_1)); }
	inline int32_t get_scrambleMode_1() const { return ___scrambleMode_1; }
	inline int32_t* get_address_of_scrambleMode_1() { return &___scrambleMode_1; }
	inline void set_scrambleMode_1(int32_t value)
	{
		___scrambleMode_1 = value;
	}

	inline static int32_t get_offset_of_scrambledChars_2() { return static_cast<int32_t>(offsetof(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC, ___scrambledChars_2)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_scrambledChars_2() const { return ___scrambledChars_2; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_scrambledChars_2() { return &___scrambledChars_2; }
	inline void set_scrambledChars_2(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___scrambledChars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrambledChars_2), (void*)value);
	}

	inline static int32_t get_offset_of_startValueStrippedLength_3() { return static_cast<int32_t>(offsetof(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC, ___startValueStrippedLength_3)); }
	inline int32_t get_startValueStrippedLength_3() const { return ___startValueStrippedLength_3; }
	inline int32_t* get_address_of_startValueStrippedLength_3() { return &___startValueStrippedLength_3; }
	inline void set_startValueStrippedLength_3(int32_t value)
	{
		___startValueStrippedLength_3 = value;
	}

	inline static int32_t get_offset_of_changeValueStrippedLength_4() { return static_cast<int32_t>(offsetof(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC, ___changeValueStrippedLength_4)); }
	inline int32_t get_changeValueStrippedLength_4() const { return ___changeValueStrippedLength_4; }
	inline int32_t* get_address_of_changeValueStrippedLength_4() { return &___changeValueStrippedLength_4; }
	inline void set_changeValueStrippedLength_4(int32_t value)
	{
		___changeValueStrippedLength_4 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};

// DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct  Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.Vector3ArrayOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.Vector3ArrayOptions::snapping
	bool ___snapping_1;
	// System.Single[] DG.Tweening.Plugins.Options.Vector3ArrayOptions::durations
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___durations_2;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}

	inline static int32_t get_offset_of_durations_2() { return static_cast<int32_t>(offsetof(Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257, ___durations_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_durations_2() const { return ___durations_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_durations_2() { return &___durations_2; }
	inline void set_durations_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___durations_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___durations_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.Vector3ArrayOptions
struct Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
	Il2CppSafeArray/*NONE*/* ___durations_2;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct  VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 
{
public:
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;

public:
	inline static int32_t get_offset_of_axisConstraint_0() { return static_cast<int32_t>(offsetof(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322, ___axisConstraint_0)); }
	inline int32_t get_axisConstraint_0() const { return ___axisConstraint_0; }
	inline int32_t* get_address_of_axisConstraint_0() { return &___axisConstraint_0; }
	inline void set_axisConstraint_0(int32_t value)
	{
		___axisConstraint_0 = value;
	}

	inline static int32_t get_offset_of_snapping_1() { return static_cast<int32_t>(offsetof(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322, ___snapping_1)); }
	inline bool get_snapping_1() const { return ___snapping_1; }
	inline bool* get_address_of_snapping_1() { return &___snapping_1; }
	inline void set_snapping_1(bool value)
	{
		___snapping_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863  : public RuntimeObject
{
public:
	// DG.Tweening.Color2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0::startValue
	Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  ___startValue_0;
	// UnityEngine.LineRenderer DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0::target
	LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * ___target_1;

public:
	inline static int32_t get_offset_of_startValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863, ___startValue_0)); }
	inline Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  get_startValue_0() const { return ___startValue_0; }
	inline Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E * get_address_of_startValue_0() { return &___startValue_0; }
	inline void set_startValue_0(Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  value)
	{
		___startValue_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863, ___target_1)); }
	inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * get_target_1() const { return ___target_1; }
	inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_1), (void*)value);
	}
};


// DG.Tweening.TweenParams
struct  TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51  : public RuntimeObject
{
public:
	// System.Object DG.Tweening.TweenParams::id
	RuntimeObject * ___id_1;
	// System.Object DG.Tweening.TweenParams::target
	RuntimeObject * ___target_2;
	// DG.Tweening.UpdateType DG.Tweening.TweenParams::updateType
	int32_t ___updateType_3;
	// System.Boolean DG.Tweening.TweenParams::isIndependentUpdate
	bool ___isIndependentUpdate_4;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStart
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStart_5;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onPlay
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPlay_6;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onRewind
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onRewind_7;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onUpdate
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onUpdate_8;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStepComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStepComplete_9;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onComplete_10;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onKill
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onKill_11;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.TweenParams::onWaypointChange
	TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * ___onWaypointChange_12;
	// System.Boolean DG.Tweening.TweenParams::isRecyclable
	bool ___isRecyclable_13;
	// System.Boolean DG.Tweening.TweenParams::isSpeedBased
	bool ___isSpeedBased_14;
	// System.Boolean DG.Tweening.TweenParams::autoKill
	bool ___autoKill_15;
	// System.Int32 DG.Tweening.TweenParams::loops
	int32_t ___loops_16;
	// DG.Tweening.LoopType DG.Tweening.TweenParams::loopType
	int32_t ___loopType_17;
	// System.Single DG.Tweening.TweenParams::delay
	float ___delay_18;
	// System.Boolean DG.Tweening.TweenParams::isRelative
	bool ___isRelative_19;
	// DG.Tweening.Ease DG.Tweening.TweenParams::easeType
	int32_t ___easeType_20;
	// DG.Tweening.EaseFunction DG.Tweening.TweenParams::customEase
	EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * ___customEase_21;
	// System.Single DG.Tweening.TweenParams::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_22;
	// System.Single DG.Tweening.TweenParams::easePeriod
	float ___easePeriod_23;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___id_1)); }
	inline RuntimeObject * get_id_1() const { return ___id_1; }
	inline RuntimeObject ** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(RuntimeObject * value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_3() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___updateType_3)); }
	inline int32_t get_updateType_3() const { return ___updateType_3; }
	inline int32_t* get_address_of_updateType_3() { return &___updateType_3; }
	inline void set_updateType_3(int32_t value)
	{
		___updateType_3 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_4() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___isIndependentUpdate_4)); }
	inline bool get_isIndependentUpdate_4() const { return ___isIndependentUpdate_4; }
	inline bool* get_address_of_isIndependentUpdate_4() { return &___isIndependentUpdate_4; }
	inline void set_isIndependentUpdate_4(bool value)
	{
		___isIndependentUpdate_4 = value;
	}

	inline static int32_t get_offset_of_onStart_5() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onStart_5)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStart_5() const { return ___onStart_5; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStart_5() { return &___onStart_5; }
	inline void set_onStart_5(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStart_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStart_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPlay_6() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onPlay_6)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPlay_6() const { return ___onPlay_6; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPlay_6() { return &___onPlay_6; }
	inline void set_onPlay_6(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPlay_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_6), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_7() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onRewind_7)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onRewind_7() const { return ___onRewind_7; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onRewind_7() { return &___onRewind_7; }
	inline void set_onRewind_7(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onRewind_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_7), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_8() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onUpdate_8)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onUpdate_8() const { return ___onUpdate_8; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onUpdate_8() { return &___onUpdate_8; }
	inline void set_onUpdate_8(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onUpdate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_8), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_9() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onStepComplete_9)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStepComplete_9() const { return ___onStepComplete_9; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStepComplete_9() { return &___onStepComplete_9; }
	inline void set_onStepComplete_9(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStepComplete_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_9), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_10() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onComplete_10)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onComplete_10() const { return ___onComplete_10; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onComplete_10() { return &___onComplete_10; }
	inline void set_onComplete_10(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onComplete_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_10), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_11() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onKill_11)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onKill_11() const { return ___onKill_11; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onKill_11() { return &___onKill_11; }
	inline void set_onKill_11(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onKill_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_11), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_12() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___onWaypointChange_12)); }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * get_onWaypointChange_12() const { return ___onWaypointChange_12; }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 ** get_address_of_onWaypointChange_12() { return &___onWaypointChange_12; }
	inline void set_onWaypointChange_12(TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * value)
	{
		___onWaypointChange_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_12), (void*)value);
	}

	inline static int32_t get_offset_of_isRecyclable_13() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___isRecyclable_13)); }
	inline bool get_isRecyclable_13() const { return ___isRecyclable_13; }
	inline bool* get_address_of_isRecyclable_13() { return &___isRecyclable_13; }
	inline void set_isRecyclable_13(bool value)
	{
		___isRecyclable_13 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_14() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___isSpeedBased_14)); }
	inline bool get_isSpeedBased_14() const { return ___isSpeedBased_14; }
	inline bool* get_address_of_isSpeedBased_14() { return &___isSpeedBased_14; }
	inline void set_isSpeedBased_14(bool value)
	{
		___isSpeedBased_14 = value;
	}

	inline static int32_t get_offset_of_autoKill_15() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___autoKill_15)); }
	inline bool get_autoKill_15() const { return ___autoKill_15; }
	inline bool* get_address_of_autoKill_15() { return &___autoKill_15; }
	inline void set_autoKill_15(bool value)
	{
		___autoKill_15 = value;
	}

	inline static int32_t get_offset_of_loops_16() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___loops_16)); }
	inline int32_t get_loops_16() const { return ___loops_16; }
	inline int32_t* get_address_of_loops_16() { return &___loops_16; }
	inline void set_loops_16(int32_t value)
	{
		___loops_16 = value;
	}

	inline static int32_t get_offset_of_loopType_17() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___loopType_17)); }
	inline int32_t get_loopType_17() const { return ___loopType_17; }
	inline int32_t* get_address_of_loopType_17() { return &___loopType_17; }
	inline void set_loopType_17(int32_t value)
	{
		___loopType_17 = value;
	}

	inline static int32_t get_offset_of_delay_18() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___delay_18)); }
	inline float get_delay_18() const { return ___delay_18; }
	inline float* get_address_of_delay_18() { return &___delay_18; }
	inline void set_delay_18(float value)
	{
		___delay_18 = value;
	}

	inline static int32_t get_offset_of_isRelative_19() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___isRelative_19)); }
	inline bool get_isRelative_19() const { return ___isRelative_19; }
	inline bool* get_address_of_isRelative_19() { return &___isRelative_19; }
	inline void set_isRelative_19(bool value)
	{
		___isRelative_19 = value;
	}

	inline static int32_t get_offset_of_easeType_20() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___easeType_20)); }
	inline int32_t get_easeType_20() const { return ___easeType_20; }
	inline int32_t* get_address_of_easeType_20() { return &___easeType_20; }
	inline void set_easeType_20(int32_t value)
	{
		___easeType_20 = value;
	}

	inline static int32_t get_offset_of_customEase_21() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___customEase_21)); }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * get_customEase_21() const { return ___customEase_21; }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 ** get_address_of_customEase_21() { return &___customEase_21; }
	inline void set_customEase_21(EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * value)
	{
		___customEase_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_21), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_22() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___easeOvershootOrAmplitude_22)); }
	inline float get_easeOvershootOrAmplitude_22() const { return ___easeOvershootOrAmplitude_22; }
	inline float* get_address_of_easeOvershootOrAmplitude_22() { return &___easeOvershootOrAmplitude_22; }
	inline void set_easeOvershootOrAmplitude_22(float value)
	{
		___easeOvershootOrAmplitude_22 = value;
	}

	inline static int32_t get_offset_of_easePeriod_23() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51, ___easePeriod_23)); }
	inline float get_easePeriod_23() const { return ___easePeriod_23; }
	inline float* get_address_of_easePeriod_23() { return &___easePeriod_23; }
	inline void set_easePeriod_23(float value)
	{
		___easePeriod_23 = value;
	}
};

struct TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_StaticFields
{
public:
	// DG.Tweening.TweenParams DG.Tweening.TweenParams::Params
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * ___Params_0;

public:
	inline static int32_t get_offset_of_Params_0() { return static_cast<int32_t>(offsetof(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_StaticFields, ___Params_0)); }
	inline TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * get_Params_0() const { return ___Params_0; }
	inline TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 ** get_address_of_Params_0() { return &___Params_0; }
	inline void set_Params_0(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * value)
	{
		___Params_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Params_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Nullable`1<DG.Tweening.LoopType>
struct  Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// DG.Tweening.EaseFunction
struct  EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.Plugins.Core.PathCore.Path
struct  Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2  : public RuntimeObject
{
public:
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___wpLengths_3;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___wps_4;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_5;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_6;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_7;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* ___controlPoints_8;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_9;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___timesTable_11;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___lengthsTable_12;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_14;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_15;
	// DG.Tweening.Plugins.Options.PathOptions DG.Tweening.Plugins.Core.PathCore.Path::plugOptions
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  ___plugOptions_16;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ____incrementalClone_17;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_18;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * ____decoder_19;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_20;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___nonLinearDrawWps_21;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition_22;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___lookAtPosition_23;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___gizmoColor_24;

public:
	inline static int32_t get_offset_of_wpLengths_3() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___wpLengths_3)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_wpLengths_3() const { return ___wpLengths_3; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_wpLengths_3() { return &___wpLengths_3; }
	inline void set_wpLengths_3(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___wpLengths_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wpLengths_3), (void*)value);
	}

	inline static int32_t get_offset_of_wps_4() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___wps_4)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_wps_4() const { return ___wps_4; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_wps_4() { return &___wps_4; }
	inline void set_wps_4(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___wps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wps_4), (void*)value);
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_6() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___subdivisionsXSegment_6)); }
	inline int32_t get_subdivisionsXSegment_6() const { return ___subdivisionsXSegment_6; }
	inline int32_t* get_address_of_subdivisionsXSegment_6() { return &___subdivisionsXSegment_6; }
	inline void set_subdivisionsXSegment_6(int32_t value)
	{
		___subdivisionsXSegment_6 = value;
	}

	inline static int32_t get_offset_of_subdivisions_7() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___subdivisions_7)); }
	inline int32_t get_subdivisions_7() const { return ___subdivisions_7; }
	inline int32_t* get_address_of_subdivisions_7() { return &___subdivisions_7; }
	inline void set_subdivisions_7(int32_t value)
	{
		___subdivisions_7 = value;
	}

	inline static int32_t get_offset_of_controlPoints_8() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___controlPoints_8)); }
	inline ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* get_controlPoints_8() const { return ___controlPoints_8; }
	inline ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23** get_address_of_controlPoints_8() { return &___controlPoints_8; }
	inline void set_controlPoints_8(ControlPointU5BU5D_t2DB910C5F59A537E360FE72975DBD54BC626AC23* value)
	{
		___controlPoints_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlPoints_8), (void*)value);
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_isFinalized_10() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___isFinalized_10)); }
	inline bool get_isFinalized_10() const { return ___isFinalized_10; }
	inline bool* get_address_of_isFinalized_10() { return &___isFinalized_10; }
	inline void set_isFinalized_10(bool value)
	{
		___isFinalized_10 = value;
	}

	inline static int32_t get_offset_of_timesTable_11() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___timesTable_11)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_timesTable_11() const { return ___timesTable_11; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_timesTable_11() { return &___timesTable_11; }
	inline void set_timesTable_11(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___timesTable_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timesTable_11), (void*)value);
	}

	inline static int32_t get_offset_of_lengthsTable_12() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___lengthsTable_12)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_lengthsTable_12() const { return ___lengthsTable_12; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_lengthsTable_12() { return &___lengthsTable_12; }
	inline void set_lengthsTable_12(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___lengthsTable_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthsTable_12), (void*)value);
	}

	inline static int32_t get_offset_of_linearWPIndex_13() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___linearWPIndex_13)); }
	inline int32_t get_linearWPIndex_13() const { return ___linearWPIndex_13; }
	inline int32_t* get_address_of_linearWPIndex_13() { return &___linearWPIndex_13; }
	inline void set_linearWPIndex_13(int32_t value)
	{
		___linearWPIndex_13 = value;
	}

	inline static int32_t get_offset_of_addedExtraStartWp_14() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___addedExtraStartWp_14)); }
	inline bool get_addedExtraStartWp_14() const { return ___addedExtraStartWp_14; }
	inline bool* get_address_of_addedExtraStartWp_14() { return &___addedExtraStartWp_14; }
	inline void set_addedExtraStartWp_14(bool value)
	{
		___addedExtraStartWp_14 = value;
	}

	inline static int32_t get_offset_of_addedExtraEndWp_15() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___addedExtraEndWp_15)); }
	inline bool get_addedExtraEndWp_15() const { return ___addedExtraEndWp_15; }
	inline bool* get_address_of_addedExtraEndWp_15() { return &___addedExtraEndWp_15; }
	inline void set_addedExtraEndWp_15(bool value)
	{
		___addedExtraEndWp_15 = value;
	}

	inline static int32_t get_offset_of_plugOptions_16() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___plugOptions_16)); }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  get_plugOptions_16() const { return ___plugOptions_16; }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * get_address_of_plugOptions_16() { return &___plugOptions_16; }
	inline void set_plugOptions_16(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  value)
	{
		___plugOptions_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_16))->___lookAtTransform_6), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_16))->___parent_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__incrementalClone_17() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____incrementalClone_17)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get__incrementalClone_17() const { return ____incrementalClone_17; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of__incrementalClone_17() { return &____incrementalClone_17; }
	inline void set__incrementalClone_17(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		____incrementalClone_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____incrementalClone_17), (void*)value);
	}

	inline static int32_t get_offset_of__incrementalIndex_18() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____incrementalIndex_18)); }
	inline int32_t get__incrementalIndex_18() const { return ____incrementalIndex_18; }
	inline int32_t* get_address_of__incrementalIndex_18() { return &____incrementalIndex_18; }
	inline void set__incrementalIndex_18(int32_t value)
	{
		____incrementalIndex_18 = value;
	}

	inline static int32_t get_offset_of__decoder_19() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____decoder_19)); }
	inline ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * get__decoder_19() const { return ____decoder_19; }
	inline ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 ** get_address_of__decoder_19() { return &____decoder_19; }
	inline void set__decoder_19(ABSPathDecoder_t806CE75B2C1300A5CFFAE7112795DE5A560780D3 * value)
	{
		____decoder_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____decoder_19), (void*)value);
	}

	inline static int32_t get_offset_of__changed_20() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ____changed_20)); }
	inline bool get__changed_20() const { return ____changed_20; }
	inline bool* get_address_of__changed_20() { return &____changed_20; }
	inline void set__changed_20(bool value)
	{
		____changed_20 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_21() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___nonLinearDrawWps_21)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_nonLinearDrawWps_21() const { return ___nonLinearDrawWps_21; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_nonLinearDrawWps_21() { return &___nonLinearDrawWps_21; }
	inline void set_nonLinearDrawWps_21(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___nonLinearDrawWps_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nonLinearDrawWps_21), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_22() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___targetPosition_22)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetPosition_22() const { return ___targetPosition_22; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetPosition_22() { return &___targetPosition_22; }
	inline void set_targetPosition_22(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetPosition_22 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_23() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___lookAtPosition_23)); }
	inline Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  get_lookAtPosition_23() const { return ___lookAtPosition_23; }
	inline Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * get_address_of_lookAtPosition_23() { return &___lookAtPosition_23; }
	inline void set_lookAtPosition_23(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  value)
	{
		___lookAtPosition_23 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_24() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2, ___gizmoColor_24)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_gizmoColor_24() const { return ___gizmoColor_24; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_gizmoColor_24() { return &___gizmoColor_24; }
	inline void set_gizmoColor_24(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___gizmoColor_24 = value;
	}
};

struct Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_tFBBC119A67F0325BE8602E1E0CE0DC26F49318D0 * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_tD8E3A5A6B08AB1F897D957356D04C67385809E70 * ____linearDecoder_1;
	// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder DG.Tweening.Plugins.Core.PathCore.Path::_cubicBezierDecoder
	CubicBezierDecoder_t55EE696BAF0E9A3A9DD01BA8522F3973744CCCD1 * ____cubicBezierDecoder_2;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_tFBBC119A67F0325BE8602E1E0CE0DC26F49318D0 * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_tFBBC119A67F0325BE8602E1E0CE0DC26F49318D0 ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_tFBBC119A67F0325BE8602E1E0CE0DC26F49318D0 * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____catmullRomDecoder_0), (void*)value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_tD8E3A5A6B08AB1F897D957356D04C67385809E70 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_tD8E3A5A6B08AB1F897D957356D04C67385809E70 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_tD8E3A5A6B08AB1F897D957356D04C67385809E70 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____linearDecoder_1), (void*)value);
	}

	inline static int32_t get_offset_of__cubicBezierDecoder_2() { return static_cast<int32_t>(offsetof(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2_StaticFields, ____cubicBezierDecoder_2)); }
	inline CubicBezierDecoder_t55EE696BAF0E9A3A9DD01BA8522F3973744CCCD1 * get__cubicBezierDecoder_2() const { return ____cubicBezierDecoder_2; }
	inline CubicBezierDecoder_t55EE696BAF0E9A3A9DD01BA8522F3973744CCCD1 ** get_address_of__cubicBezierDecoder_2() { return &____cubicBezierDecoder_2; }
	inline void set__cubicBezierDecoder_2(CubicBezierDecoder_t55EE696BAF0E9A3A9DD01BA8522F3973744CCCD1 * value)
	{
		____cubicBezierDecoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cubicBezierDecoder_2), (void*)value);
	}
};


// DG.Tweening.Tween
struct  Tween_t119487E0AB84EF563521F1043116BDBAE68AC437  : public ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject * ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject * ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_isInverted_6() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isInverted_6)); }
	inline bool get_isInverted_6() const { return ___isInverted_6; }
	inline bool* get_address_of_isInverted_6() { return &___isInverted_6; }
	inline void set_isInverted_6(bool value)
	{
		___isInverted_6 = value;
	}

	inline static int32_t get_offset_of_id_7() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___id_7)); }
	inline RuntimeObject * get_id_7() const { return ___id_7; }
	inline RuntimeObject ** get_address_of_id_7() { return &___id_7; }
	inline void set_id_7(RuntimeObject * value)
	{
		___id_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_7), (void*)value);
	}

	inline static int32_t get_offset_of_stringId_8() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___stringId_8)); }
	inline String_t* get_stringId_8() const { return ___stringId_8; }
	inline String_t** get_address_of_stringId_8() { return &___stringId_8; }
	inline void set_stringId_8(String_t* value)
	{
		___stringId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringId_8), (void*)value);
	}

	inline static int32_t get_offset_of_intId_9() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___intId_9)); }
	inline int32_t get_intId_9() const { return ___intId_9; }
	inline int32_t* get_address_of_intId_9() { return &___intId_9; }
	inline void set_intId_9(int32_t value)
	{
		___intId_9 = value;
	}

	inline static int32_t get_offset_of_target_10() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___target_10)); }
	inline RuntimeObject * get_target_10() const { return ___target_10; }
	inline RuntimeObject ** get_address_of_target_10() { return &___target_10; }
	inline void set_target_10(RuntimeObject * value)
	{
		___target_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_10), (void*)value);
	}

	inline static int32_t get_offset_of_updateType_11() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___updateType_11)); }
	inline int32_t get_updateType_11() const { return ___updateType_11; }
	inline int32_t* get_address_of_updateType_11() { return &___updateType_11; }
	inline void set_updateType_11(int32_t value)
	{
		___updateType_11 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_12() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isIndependentUpdate_12)); }
	inline bool get_isIndependentUpdate_12() const { return ___isIndependentUpdate_12; }
	inline bool* get_address_of_isIndependentUpdate_12() { return &___isIndependentUpdate_12; }
	inline void set_isIndependentUpdate_12(bool value)
	{
		___isIndependentUpdate_12 = value;
	}

	inline static int32_t get_offset_of_onPlay_13() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPlay_13)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPlay_13() const { return ___onPlay_13; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPlay_13() { return &___onPlay_13; }
	inline void set_onPlay_13(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPlay_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlay_13), (void*)value);
	}

	inline static int32_t get_offset_of_onPause_14() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onPause_14)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onPause_14() const { return ___onPause_14; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onPause_14() { return &___onPause_14; }
	inline void set_onPause_14(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onPause_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPause_14), (void*)value);
	}

	inline static int32_t get_offset_of_onRewind_15() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onRewind_15)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onRewind_15() const { return ___onRewind_15; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onRewind_15() { return &___onRewind_15; }
	inline void set_onRewind_15(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onRewind_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRewind_15), (void*)value);
	}

	inline static int32_t get_offset_of_onUpdate_16() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onUpdate_16)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onUpdate_16() const { return ___onUpdate_16; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onUpdate_16() { return &___onUpdate_16; }
	inline void set_onUpdate_16(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onUpdate_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onUpdate_16), (void*)value);
	}

	inline static int32_t get_offset_of_onStepComplete_17() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onStepComplete_17)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onStepComplete_17() const { return ___onStepComplete_17; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onStepComplete_17() { return &___onStepComplete_17; }
	inline void set_onStepComplete_17(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onStepComplete_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStepComplete_17), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_18() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onComplete_18)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onComplete_18() const { return ___onComplete_18; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onComplete_18() { return &___onComplete_18; }
	inline void set_onComplete_18(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onComplete_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_18), (void*)value);
	}

	inline static int32_t get_offset_of_onKill_19() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onKill_19)); }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * get_onKill_19() const { return ___onKill_19; }
	inline TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 ** get_address_of_onKill_19() { return &___onKill_19; }
	inline void set_onKill_19(TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * value)
	{
		___onKill_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKill_19), (void*)value);
	}

	inline static int32_t get_offset_of_onWaypointChange_20() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___onWaypointChange_20)); }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * get_onWaypointChange_20() const { return ___onWaypointChange_20; }
	inline TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 ** get_address_of_onWaypointChange_20() { return &___onWaypointChange_20; }
	inline void set_onWaypointChange_20(TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * value)
	{
		___onWaypointChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onWaypointChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_isFrom_21() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isFrom_21)); }
	inline bool get_isFrom_21() const { return ___isFrom_21; }
	inline bool* get_address_of_isFrom_21() { return &___isFrom_21; }
	inline void set_isFrom_21(bool value)
	{
		___isFrom_21 = value;
	}

	inline static int32_t get_offset_of_isBlendable_22() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isBlendable_22)); }
	inline bool get_isBlendable_22() const { return ___isBlendable_22; }
	inline bool* get_address_of_isBlendable_22() { return &___isBlendable_22; }
	inline void set_isBlendable_22(bool value)
	{
		___isBlendable_22 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_23() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isRecyclable_23)); }
	inline bool get_isRecyclable_23() const { return ___isRecyclable_23; }
	inline bool* get_address_of_isRecyclable_23() { return &___isRecyclable_23; }
	inline void set_isRecyclable_23(bool value)
	{
		___isRecyclable_23 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_24() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSpeedBased_24)); }
	inline bool get_isSpeedBased_24() const { return ___isSpeedBased_24; }
	inline bool* get_address_of_isSpeedBased_24() { return &___isSpeedBased_24; }
	inline void set_isSpeedBased_24(bool value)
	{
		___isSpeedBased_24 = value;
	}

	inline static int32_t get_offset_of_autoKill_25() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___autoKill_25)); }
	inline bool get_autoKill_25() const { return ___autoKill_25; }
	inline bool* get_address_of_autoKill_25() { return &___autoKill_25; }
	inline void set_autoKill_25(bool value)
	{
		___autoKill_25 = value;
	}

	inline static int32_t get_offset_of_duration_26() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___duration_26)); }
	inline float get_duration_26() const { return ___duration_26; }
	inline float* get_address_of_duration_26() { return &___duration_26; }
	inline void set_duration_26(float value)
	{
		___duration_26 = value;
	}

	inline static int32_t get_offset_of_loops_27() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loops_27)); }
	inline int32_t get_loops_27() const { return ___loops_27; }
	inline int32_t* get_address_of_loops_27() { return &___loops_27; }
	inline void set_loops_27(int32_t value)
	{
		___loops_27 = value;
	}

	inline static int32_t get_offset_of_loopType_28() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___loopType_28)); }
	inline int32_t get_loopType_28() const { return ___loopType_28; }
	inline int32_t* get_address_of_loopType_28() { return &___loopType_28; }
	inline void set_loopType_28(int32_t value)
	{
		___loopType_28 = value;
	}

	inline static int32_t get_offset_of_delay_29() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delay_29)); }
	inline float get_delay_29() const { return ___delay_29; }
	inline float* get_address_of_delay_29() { return &___delay_29; }
	inline void set_delay_29(float value)
	{
		___delay_29 = value;
	}

	inline static int32_t get_offset_of_U3CisRelativeU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CisRelativeU3Ek__BackingField_30)); }
	inline bool get_U3CisRelativeU3Ek__BackingField_30() const { return ___U3CisRelativeU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CisRelativeU3Ek__BackingField_30() { return &___U3CisRelativeU3Ek__BackingField_30; }
	inline void set_U3CisRelativeU3Ek__BackingField_30(bool value)
	{
		___U3CisRelativeU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_easeType_31() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeType_31)); }
	inline int32_t get_easeType_31() const { return ___easeType_31; }
	inline int32_t* get_address_of_easeType_31() { return &___easeType_31; }
	inline void set_easeType_31(int32_t value)
	{
		___easeType_31 = value;
	}

	inline static int32_t get_offset_of_customEase_32() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___customEase_32)); }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * get_customEase_32() const { return ___customEase_32; }
	inline EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 ** get_address_of_customEase_32() { return &___customEase_32; }
	inline void set_customEase_32(EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * value)
	{
		___customEase_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customEase_32), (void*)value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_33() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easeOvershootOrAmplitude_33)); }
	inline float get_easeOvershootOrAmplitude_33() const { return ___easeOvershootOrAmplitude_33; }
	inline float* get_address_of_easeOvershootOrAmplitude_33() { return &___easeOvershootOrAmplitude_33; }
	inline void set_easeOvershootOrAmplitude_33(float value)
	{
		___easeOvershootOrAmplitude_33 = value;
	}

	inline static int32_t get_offset_of_easePeriod_34() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___easePeriod_34)); }
	inline float get_easePeriod_34() const { return ___easePeriod_34; }
	inline float* get_address_of_easePeriod_34() { return &___easePeriod_34; }
	inline void set_easePeriod_34(float value)
	{
		___easePeriod_34 = value;
	}

	inline static int32_t get_offset_of_debugTargetId_35() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___debugTargetId_35)); }
	inline String_t* get_debugTargetId_35() const { return ___debugTargetId_35; }
	inline String_t** get_address_of_debugTargetId_35() { return &___debugTargetId_35; }
	inline void set_debugTargetId_35(String_t* value)
	{
		___debugTargetId_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugTargetId_35), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT1_36() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT1_36)); }
	inline Type_t * get_typeofT1_36() const { return ___typeofT1_36; }
	inline Type_t ** get_address_of_typeofT1_36() { return &___typeofT1_36; }
	inline void set_typeofT1_36(Type_t * value)
	{
		___typeofT1_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT1_36), (void*)value);
	}

	inline static int32_t get_offset_of_typeofT2_37() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofT2_37)); }
	inline Type_t * get_typeofT2_37() const { return ___typeofT2_37; }
	inline Type_t ** get_address_of_typeofT2_37() { return &___typeofT2_37; }
	inline void set_typeofT2_37(Type_t * value)
	{
		___typeofT2_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofT2_37), (void*)value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_38() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___typeofTPlugOptions_38)); }
	inline Type_t * get_typeofTPlugOptions_38() const { return ___typeofTPlugOptions_38; }
	inline Type_t ** get_address_of_typeofTPlugOptions_38() { return &___typeofTPlugOptions_38; }
	inline void set_typeofTPlugOptions_38(Type_t * value)
	{
		___typeofTPlugOptions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeofTPlugOptions_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CactiveU3Ek__BackingField_39)); }
	inline bool get_U3CactiveU3Ek__BackingField_39() const { return ___U3CactiveU3Ek__BackingField_39; }
	inline bool* get_address_of_U3CactiveU3Ek__BackingField_39() { return &___U3CactiveU3Ek__BackingField_39; }
	inline void set_U3CactiveU3Ek__BackingField_39(bool value)
	{
		___U3CactiveU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_isSequenced_40() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isSequenced_40)); }
	inline bool get_isSequenced_40() const { return ___isSequenced_40; }
	inline bool* get_address_of_isSequenced_40() { return &___isSequenced_40; }
	inline void set_isSequenced_40(bool value)
	{
		___isSequenced_40 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_41() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___sequenceParent_41)); }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * get_sequenceParent_41() const { return ___sequenceParent_41; }
	inline Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 ** get_address_of_sequenceParent_41() { return &___sequenceParent_41; }
	inline void set_sequenceParent_41(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * value)
	{
		___sequenceParent_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequenceParent_41), (void*)value);
	}

	inline static int32_t get_offset_of_activeId_42() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___activeId_42)); }
	inline int32_t get_activeId_42() const { return ___activeId_42; }
	inline int32_t* get_address_of_activeId_42() { return &___activeId_42; }
	inline void set_activeId_42(int32_t value)
	{
		___activeId_42 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_43() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___specialStartupMode_43)); }
	inline int32_t get_specialStartupMode_43() const { return ___specialStartupMode_43; }
	inline int32_t* get_address_of_specialStartupMode_43() { return &___specialStartupMode_43; }
	inline void set_specialStartupMode_43(int32_t value)
	{
		___specialStartupMode_43 = value;
	}

	inline static int32_t get_offset_of_creationLocked_44() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___creationLocked_44)); }
	inline bool get_creationLocked_44() const { return ___creationLocked_44; }
	inline bool* get_address_of_creationLocked_44() { return &___creationLocked_44; }
	inline void set_creationLocked_44(bool value)
	{
		___creationLocked_44 = value;
	}

	inline static int32_t get_offset_of_startupDone_45() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___startupDone_45)); }
	inline bool get_startupDone_45() const { return ___startupDone_45; }
	inline bool* get_address_of_startupDone_45() { return &___startupDone_45; }
	inline void set_startupDone_45(bool value)
	{
		___startupDone_45 = value;
	}

	inline static int32_t get_offset_of_U3CplayedOnceU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CplayedOnceU3Ek__BackingField_46)); }
	inline bool get_U3CplayedOnceU3Ek__BackingField_46() const { return ___U3CplayedOnceU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CplayedOnceU3Ek__BackingField_46() { return &___U3CplayedOnceU3Ek__BackingField_46; }
	inline void set_U3CplayedOnceU3Ek__BackingField_46(bool value)
	{
		___U3CplayedOnceU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___U3CpositionU3Ek__BackingField_47)); }
	inline float get_U3CpositionU3Ek__BackingField_47() const { return ___U3CpositionU3Ek__BackingField_47; }
	inline float* get_address_of_U3CpositionU3Ek__BackingField_47() { return &___U3CpositionU3Ek__BackingField_47; }
	inline void set_U3CpositionU3Ek__BackingField_47(float value)
	{
		___U3CpositionU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_fullDuration_48() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___fullDuration_48)); }
	inline float get_fullDuration_48() const { return ___fullDuration_48; }
	inline float* get_address_of_fullDuration_48() { return &___fullDuration_48; }
	inline void set_fullDuration_48(float value)
	{
		___fullDuration_48 = value;
	}

	inline static int32_t get_offset_of_completedLoops_49() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___completedLoops_49)); }
	inline int32_t get_completedLoops_49() const { return ___completedLoops_49; }
	inline int32_t* get_address_of_completedLoops_49() { return &___completedLoops_49; }
	inline void set_completedLoops_49(int32_t value)
	{
		___completedLoops_49 = value;
	}

	inline static int32_t get_offset_of_isPlaying_50() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isPlaying_50)); }
	inline bool get_isPlaying_50() const { return ___isPlaying_50; }
	inline bool* get_address_of_isPlaying_50() { return &___isPlaying_50; }
	inline void set_isPlaying_50(bool value)
	{
		___isPlaying_50 = value;
	}

	inline static int32_t get_offset_of_isComplete_51() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___isComplete_51)); }
	inline bool get_isComplete_51() const { return ___isComplete_51; }
	inline bool* get_address_of_isComplete_51() { return &___isComplete_51; }
	inline void set_isComplete_51(bool value)
	{
		___isComplete_51 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_52() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___elapsedDelay_52)); }
	inline float get_elapsedDelay_52() const { return ___elapsedDelay_52; }
	inline float* get_address_of_elapsedDelay_52() { return &___elapsedDelay_52; }
	inline void set_elapsedDelay_52(float value)
	{
		___elapsedDelay_52 = value;
	}

	inline static int32_t get_offset_of_delayComplete_53() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___delayComplete_53)); }
	inline bool get_delayComplete_53() const { return ___delayComplete_53; }
	inline bool* get_address_of_delayComplete_53() { return &___delayComplete_53; }
	inline void set_delayComplete_53(bool value)
	{
		___delayComplete_53 = value;
	}

	inline static int32_t get_offset_of_miscInt_54() { return static_cast<int32_t>(offsetof(Tween_t119487E0AB84EF563521F1043116BDBAE68AC437, ___miscInt_54)); }
	inline int32_t get_miscInt_54() const { return ___miscInt_54; }
	inline int32_t* get_address_of_miscInt_54() { return &___miscInt_54; }
	inline void set_miscInt_54(int32_t value)
	{
		___miscInt_54 = value;
	}
};


// DG.Tweening.TweenCallback
struct  TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83  : public MulticastDelegate_t
{
public:

public:
};


// DG.Tweening.TweenCallback`1<System.Int32>
struct  TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// DG.Tweening.Sequence
struct  Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2  : public Tween_t119487E0AB84EF563521F1043116BDBAE68AC437
{
public:
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * ___sequencedTweens_55;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * ____sequencedObjs_56;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_57;

public:
	inline static int32_t get_offset_of_sequencedTweens_55() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ___sequencedTweens_55)); }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * get_sequencedTweens_55() const { return ___sequencedTweens_55; }
	inline List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 ** get_address_of_sequencedTweens_55() { return &___sequencedTweens_55; }
	inline void set_sequencedTweens_55(List_1_t57BB69F1AC3759152D9E750F6120000328D367B8 * value)
	{
		___sequencedTweens_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequencedTweens_55), (void*)value);
	}

	inline static int32_t get_offset_of__sequencedObjs_56() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ____sequencedObjs_56)); }
	inline List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * get__sequencedObjs_56() const { return ____sequencedObjs_56; }
	inline List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED ** get_address_of__sequencedObjs_56() { return &____sequencedObjs_56; }
	inline void set__sequencedObjs_56(List_1_t2E181C700331B7635DE1FD6A98300CEAEFABC4ED * value)
	{
		____sequencedObjs_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sequencedObjs_56), (void*)value);
	}

	inline static int32_t get_offset_of_lastTweenInsertTime_57() { return static_cast<int32_t>(offsetof(Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2, ___lastTweenInsertTime_57)); }
	inline float get_lastTweenInsertTime_57() const { return ___lastTweenInsertTime_57; }
	inline float* get_address_of_lastTweenInsertTime_57() { return &___lastTweenInsertTime_57; }
	inline void set_lastTweenInsertTime_57(float value)
	{
		___lastTweenInsertTime_57 = value;
	}
};


// DG.Tweening.Tweener
struct  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8  : public Tween_t119487E0AB84EF563521F1043116BDBAE68AC437
{
public:
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;

public:
	inline static int32_t get_offset_of_hasManuallySetStartValue_55() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___hasManuallySetStartValue_55)); }
	inline bool get_hasManuallySetStartValue_55() const { return ___hasManuallySetStartValue_55; }
	inline bool* get_address_of_hasManuallySetStartValue_55() { return &___hasManuallySetStartValue_55; }
	inline void set_hasManuallySetStartValue_55(bool value)
	{
		___hasManuallySetStartValue_55 = value;
	}

	inline static int32_t get_offset_of_isFromAllowed_56() { return static_cast<int32_t>(offsetof(Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8, ___isFromAllowed_56)); }
	inline bool get_isFromAllowed_56() const { return ___isFromAllowed_56; }
	inline bool* get_address_of_isFromAllowed_56() { return &___isFromAllowed_56; }
	inline void set_isFromAllowed_56(bool value)
	{
		___isFromAllowed_56 = value;
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.LineRenderer
struct  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.TrailRenderer
struct  TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// DG.Tweening.Core.DOTweenComponent
struct  DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 DG.Tweening.Core.DOTweenComponent::inspectorUpdater
	int32_t ___inspectorUpdater_4;
	// System.Single DG.Tweening.Core.DOTweenComponent::_unscaledTime
	float ____unscaledTime_5;
	// System.Single DG.Tweening.Core.DOTweenComponent::_unscaledDeltaTime
	float ____unscaledDeltaTime_6;
	// System.Boolean DG.Tweening.Core.DOTweenComponent::_paused
	bool ____paused_7;
	// System.Single DG.Tweening.Core.DOTweenComponent::_pausedTime
	float ____pausedTime_8;
	// System.Boolean DG.Tweening.Core.DOTweenComponent::_isQuitting
	bool ____isQuitting_9;
	// System.Boolean DG.Tweening.Core.DOTweenComponent::_duplicateToDestroy
	bool ____duplicateToDestroy_10;

public:
	inline static int32_t get_offset_of_inspectorUpdater_4() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ___inspectorUpdater_4)); }
	inline int32_t get_inspectorUpdater_4() const { return ___inspectorUpdater_4; }
	inline int32_t* get_address_of_inspectorUpdater_4() { return &___inspectorUpdater_4; }
	inline void set_inspectorUpdater_4(int32_t value)
	{
		___inspectorUpdater_4 = value;
	}

	inline static int32_t get_offset_of__unscaledTime_5() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____unscaledTime_5)); }
	inline float get__unscaledTime_5() const { return ____unscaledTime_5; }
	inline float* get_address_of__unscaledTime_5() { return &____unscaledTime_5; }
	inline void set__unscaledTime_5(float value)
	{
		____unscaledTime_5 = value;
	}

	inline static int32_t get_offset_of__unscaledDeltaTime_6() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____unscaledDeltaTime_6)); }
	inline float get__unscaledDeltaTime_6() const { return ____unscaledDeltaTime_6; }
	inline float* get_address_of__unscaledDeltaTime_6() { return &____unscaledDeltaTime_6; }
	inline void set__unscaledDeltaTime_6(float value)
	{
		____unscaledDeltaTime_6 = value;
	}

	inline static int32_t get_offset_of__paused_7() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____paused_7)); }
	inline bool get__paused_7() const { return ____paused_7; }
	inline bool* get_address_of__paused_7() { return &____paused_7; }
	inline void set__paused_7(bool value)
	{
		____paused_7 = value;
	}

	inline static int32_t get_offset_of__pausedTime_8() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____pausedTime_8)); }
	inline float get__pausedTime_8() const { return ____pausedTime_8; }
	inline float* get_address_of__pausedTime_8() { return &____pausedTime_8; }
	inline void set__pausedTime_8(float value)
	{
		____pausedTime_8 = value;
	}

	inline static int32_t get_offset_of__isQuitting_9() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____isQuitting_9)); }
	inline bool get__isQuitting_9() const { return ____isQuitting_9; }
	inline bool* get_address_of__isQuitting_9() { return &____isQuitting_9; }
	inline void set__isQuitting_9(bool value)
	{
		____isQuitting_9 = value;
	}

	inline static int32_t get_offset_of__duplicateToDestroy_10() { return static_cast<int32_t>(offsetof(DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F, ____duplicateToDestroy_10)); }
	inline bool get__duplicateToDestroy_10() const { return ____duplicateToDestroy_10; }
	inline bool* get_address_of__duplicateToDestroy_10() { return &____duplicateToDestroy_10; }
	inline void set__duplicateToDestroy_10(bool value)
	{
		____duplicateToDestroy_10 = value;
	}
};


// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct  TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2EFEFA739D64C7BAD901C3FE5F6CC722DC129AF2 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0F370D46554FA08EB85F093101FF3731C6D93348 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t98C01ECFC5E278EFEB1AEF3512475A4604A0AFF5 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___startValue_57)); }
	inline float get_startValue_57() const { return ___startValue_57; }
	inline float* get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(float value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___endValue_58)); }
	inline float get_endValue_58() const { return ___endValue_58; }
	inline float* get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(float value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___changeValue_59)); }
	inline float get_changeValue_59() const { return ___changeValue_59; }
	inline float* get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(float value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___plugOptions_60)); }
	inline FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B  get_plugOptions_60() const { return ___plugOptions_60; }
	inline FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___getter_61)); }
	inline DOGetter_1_t2EFEFA739D64C7BAD901C3FE5F6CC722DC129AF2 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t2EFEFA739D64C7BAD901C3FE5F6CC722DC129AF2 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t2EFEFA739D64C7BAD901C3FE5F6CC722DC129AF2 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___setter_62)); }
	inline DOSetter_1_t0F370D46554FA08EB85F093101FF3731C6D93348 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t0F370D46554FA08EB85F093101FF3731C6D93348 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t0F370D46554FA08EB85F093101FF3731C6D93348 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t98C01ECFC5E278EFEB1AEF3512475A4604A0AFF5 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t98C01ECFC5E278EFEB1AEF3512475A4604A0AFF5 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t98C01ECFC5E278EFEB1AEF3512475A4604A0AFF5 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct  TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	String_t* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	String_t* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	String_t* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t8487F7D92634187297C55D53D69038ECF0AF1A5B * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t4596A2038D23C79F7EECD86309BBCD2D10AEEFA6 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t9D226D0B072F9EA7690FA7A649856709CE00D725 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___startValue_57)); }
	inline String_t* get_startValue_57() const { return ___startValue_57; }
	inline String_t** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(String_t* value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___endValue_58)); }
	inline String_t* get_endValue_58() const { return ___endValue_58; }
	inline String_t** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(String_t* value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___changeValue_59)); }
	inline String_t* get_changeValue_59() const { return ___changeValue_59; }
	inline String_t** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(String_t* value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___plugOptions_60)); }
	inline StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC  get_plugOptions_60() const { return ___plugOptions_60; }
	inline StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___scrambledChars_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___getter_61)); }
	inline DOGetter_1_t8487F7D92634187297C55D53D69038ECF0AF1A5B * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t8487F7D92634187297C55D53D69038ECF0AF1A5B ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t8487F7D92634187297C55D53D69038ECF0AF1A5B * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___setter_62)); }
	inline DOSetter_1_t4596A2038D23C79F7EECD86309BBCD2D10AEEFA6 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t4596A2038D23C79F7EECD86309BBCD2D10AEEFA6 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t4596A2038D23C79F7EECD86309BBCD2D10AEEFA6 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t9D226D0B072F9EA7690FA7A649856709CE00D725 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t9D226D0B072F9EA7690FA7A649856709CE00D725 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t9D226D0B072F9EA7690FA7A649856709CE00D725 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___startValue_57)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_startValue_57() const { return ___startValue_57; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___endValue_58)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_endValue_58() const { return ___endValue_58; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___changeValue_59)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_changeValue_59() const { return ___changeValue_59; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___plugOptions_60)); }
	inline ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  get_plugOptions_60() const { return ___plugOptions_60; }
	inline ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___getter_61)); }
	inline DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t1CBCAE9C5512210401294F691A3DA53221D4D519 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___setter_62)); }
	inline DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t15DB9D23118C9930751CE2A17C20F7E010D0C9D1 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tD58649751AD5C680679FE9F34E72C693082D2950 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct  TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t8BFAF960B7BEE098015CB3CA6B29F996B36CC194 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DCF81889D1C60C27A92CA77FE462BF4DB6D88F7 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE10F18828A3B58083EDF713736377A9F10B2CEC5 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___startValue_57)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___endValue_58)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___changeValue_59)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___plugOptions_60)); }
	inline QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B  get_plugOptions_60() const { return ___plugOptions_60; }
	inline QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___getter_61)); }
	inline DOGetter_1_t8BFAF960B7BEE098015CB3CA6B29F996B36CC194 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t8BFAF960B7BEE098015CB3CA6B29F996B36CC194 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t8BFAF960B7BEE098015CB3CA6B29F996B36CC194 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___setter_62)); }
	inline DOSetter_1_t0DCF81889D1C60C27A92CA77FE462BF4DB6D88F7 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t0DCF81889D1C60C27A92CA77FE462BF4DB6D88F7 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t0DCF81889D1C60C27A92CA77FE462BF4DB6D88F7 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tE10F18828A3B58083EDF713736377A9F10B2CEC5 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tE10F18828A3B58083EDF713736377A9F10B2CEC5 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tE10F18828A3B58083EDF713736377A9F10B2CEC5 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct  TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t515FBDD1AEFD246E698424D00267AE4685567C46 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t198058A5DD6169F9B1255E114C660577A0F98D7F * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tEB25032AFD776502392FFF377631C0A006EED8C4 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___startValue_57)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_startValue_57() const { return ___startValue_57; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___endValue_58)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_endValue_58() const { return ___endValue_58; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___changeValue_59)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_changeValue_59() const { return ___changeValue_59; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___plugOptions_60)); }
	inline RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E  get_plugOptions_60() const { return ___plugOptions_60; }
	inline RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___getter_61)); }
	inline DOGetter_1_t515FBDD1AEFD246E698424D00267AE4685567C46 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t515FBDD1AEFD246E698424D00267AE4685567C46 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t515FBDD1AEFD246E698424D00267AE4685567C46 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___setter_62)); }
	inline DOSetter_1_t198058A5DD6169F9B1255E114C660577A0F98D7F * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t198058A5DD6169F9B1255E114C660577A0F98D7F ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t198058A5DD6169F9B1255E114C660577A0F98D7F * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tEB25032AFD776502392FFF377631C0A006EED8C4 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tEB25032AFD776502392FFF377631C0A006EED8C4 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tEB25032AFD776502392FFF377631C0A006EED8C4 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>
struct  TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tBA64744294D01888C9064FD9974C259D189BFC36 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___startValue_57)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_startValue_57() const { return ___startValue_57; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___endValue_58)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_endValue_58() const { return ___endValue_58; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___changeValue_59)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___plugOptions_60)); }
	inline CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A  get_plugOptions_60() const { return ___plugOptions_60; }
	inline CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___getter_61)); }
	inline DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___setter_62)); }
	inline DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tBA64744294D01888C9064FD9974C259D189BFC36 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tBA64744294D01888C9064FD9974C259D189BFC36 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tBA64744294D01888C9064FD9974C259D189BFC36 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tF0F62B2C3E037FA76B2A6352C4C0E6C8B2D668FD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___startValue_57)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_startValue_57() const { return ___startValue_57; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___endValue_58)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_endValue_58() const { return ___endValue_58; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___changeValue_59)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___plugOptions_60)); }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___getter_61)); }
	inline DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_tED4D2C955A43A16638D892A1DBA007D1098B34D1 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___setter_62)); }
	inline DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t6957431283D538C65C791011FE5AECB0235D641F * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_tF0F62B2C3E037FA76B2A6352C4C0E6C8B2D668FD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_tF0F62B2C3E037FA76B2A6352C4C0E6C8B2D668FD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_tF0F62B2C3E037FA76B2A6352C4C0E6C8B2D668FD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct  TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___startValue_57)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_startValue_57() const { return ___startValue_57; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___endValue_58)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_endValue_58() const { return ___endValue_58; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___changeValue_59)); }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * get_changeValue_59() const { return ___changeValue_59; }
	inline Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 ** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___plugOptions_60)); }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  get_plugOptions_60() const { return ___plugOptions_60; }
	inline PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___lookAtTransform_6), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___parent_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___getter_61)); }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___setter_62)); }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t4B150004C6035544DAF0205D76D11C3A5ADFE3D3 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___startValue_57)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_startValue_57() const { return ___startValue_57; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___endValue_58)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_endValue_58() const { return ___endValue_58; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___changeValue_59)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___plugOptions_60)); }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___getter_61)); }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___setter_62)); }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t50462951CA2C372D1A9BC7C38C6ECC1810944678 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct  TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t59C22DD36F4259810DAE41F464AC73D990C88056 * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___startValue_57)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_startValue_57() const { return ___startValue_57; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___startValue_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startValue_57), (void*)value);
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___endValue_58)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_endValue_58() const { return ___endValue_58; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___endValue_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endValue_58), (void*)value);
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___changeValue_59)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_changeValue_59() const { return ___changeValue_59; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___changeValue_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeValue_59), (void*)value);
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___plugOptions_60)); }
	inline Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257  get_plugOptions_60() const { return ___plugOptions_60; }
	inline Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257  value)
	{
		___plugOptions_60 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___plugOptions_60))->___durations_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___getter_61)); }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t6A6DB6A183AD6D7F4B2F3656C4AB9326994D8CA4 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___setter_62)); }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t528C4470268C88CABD1BFDF039B98D72E012AF46 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t59C22DD36F4259810DAE41F464AC73D990C88056 * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t59C22DD36F4259810DAE41F464AC73D990C88056 ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t59C22DD36F4259810DAE41F464AC73D990C88056 * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};


// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>
struct  TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060  : public Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t010E4CB38D51591C14A6B3A8EFFB33147BE776B9 * ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3901D8B4EDB573054DB3F4F7D9449A6D35AC26A3 * ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t224A02B0B2F704CE5A82C0EC7719C0ADC0B382DD * ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t * ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t * ____color32Type_66;

public:
	inline static int32_t get_offset_of_startValue_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___startValue_57)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_startValue_57() const { return ___startValue_57; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_startValue_57() { return &___startValue_57; }
	inline void set_startValue_57(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___startValue_57 = value;
	}

	inline static int32_t get_offset_of_endValue_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___endValue_58)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_endValue_58() const { return ___endValue_58; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_endValue_58() { return &___endValue_58; }
	inline void set_endValue_58(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___endValue_58 = value;
	}

	inline static int32_t get_offset_of_changeValue_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___changeValue_59)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_changeValue_59() const { return ___changeValue_59; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_changeValue_59() { return &___changeValue_59; }
	inline void set_changeValue_59(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___changeValue_59 = value;
	}

	inline static int32_t get_offset_of_plugOptions_60() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___plugOptions_60)); }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  get_plugOptions_60() const { return ___plugOptions_60; }
	inline VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * get_address_of_plugOptions_60() { return &___plugOptions_60; }
	inline void set_plugOptions_60(VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322  value)
	{
		___plugOptions_60 = value;
	}

	inline static int32_t get_offset_of_getter_61() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___getter_61)); }
	inline DOGetter_1_t010E4CB38D51591C14A6B3A8EFFB33147BE776B9 * get_getter_61() const { return ___getter_61; }
	inline DOGetter_1_t010E4CB38D51591C14A6B3A8EFFB33147BE776B9 ** get_address_of_getter_61() { return &___getter_61; }
	inline void set_getter_61(DOGetter_1_t010E4CB38D51591C14A6B3A8EFFB33147BE776B9 * value)
	{
		___getter_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getter_61), (void*)value);
	}

	inline static int32_t get_offset_of_setter_62() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___setter_62)); }
	inline DOSetter_1_t3901D8B4EDB573054DB3F4F7D9449A6D35AC26A3 * get_setter_62() const { return ___setter_62; }
	inline DOSetter_1_t3901D8B4EDB573054DB3F4F7D9449A6D35AC26A3 ** get_address_of_setter_62() { return &___setter_62; }
	inline void set_setter_62(DOSetter_1_t3901D8B4EDB573054DB3F4F7D9449A6D35AC26A3 * value)
	{
		___setter_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setter_62), (void*)value);
	}

	inline static int32_t get_offset_of_tweenPlugin_63() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ___tweenPlugin_63)); }
	inline ABSTweenPlugin_3_t224A02B0B2F704CE5A82C0EC7719C0ADC0B382DD * get_tweenPlugin_63() const { return ___tweenPlugin_63; }
	inline ABSTweenPlugin_3_t224A02B0B2F704CE5A82C0EC7719C0ADC0B382DD ** get_address_of_tweenPlugin_63() { return &___tweenPlugin_63; }
	inline void set_tweenPlugin_63(ABSTweenPlugin_3_t224A02B0B2F704CE5A82C0EC7719C0ADC0B382DD * value)
	{
		___tweenPlugin_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenPlugin_63), (void*)value);
	}

	inline static int32_t get_offset_of__colorType_65() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ____colorType_65)); }
	inline Type_t * get__colorType_65() const { return ____colorType_65; }
	inline Type_t ** get_address_of__colorType_65() { return &____colorType_65; }
	inline void set__colorType_65(Type_t * value)
	{
		____colorType_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorType_65), (void*)value);
	}

	inline static int32_t get_offset_of__color32Type_66() { return static_cast<int32_t>(offsetof(TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060, ____color32Type_66)); }
	inline Type_t * get__color32Type_66() const { return ____color32Type_66; }
	inline Type_t ** get_address_of__color32Type_66() { return &____color32Type_66; }
	inline void set__color32Type_66(Type_t * value)
	{
		____color32Type_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____color32Type_66), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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


// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB0A6989529561627BBB65E6E4342DAA6549DD5A9_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m32D4CD9D36108D7EE445A232AAB86E6DD0CB001B_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_gshared_inline (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2_gshared (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 * __this, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetFrom(T2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7_gshared (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(T2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE_gshared (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetFrom(T2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC_gshared (TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_gshared_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_gshared_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057_gshared (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C_gshared (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m84BE4641686B30B8F9FFEA47BB1D7D88E27344EE (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Light::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Light_get_color_m7A83B30FE716A1A931D450A6035A0069A2DD7698 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Light::get_shadowStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_shadowStrength_mB46E58530AF939421D198670434F15D331BFB672 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowStrength_m447AC9B66C28129AA3B2D62AE918FB511E27E2FE (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetColors(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetColors_mAE8931C4C8A8FE7A1E0CE71B8E69832DA83BC773 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___start0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___end1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_GetColor_m1FFF5ECB4967771D751C60205635A0D3F7AA2F0E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m48FBB701F6177B367EDFAC6BE896D183EF640725 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Camera::get_backgroundColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Camera_get_backgroundColor_m14496C5DC24582D7227277AF71DBE96F8E9E64FF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m8A4243FC6619B4E0E820E87754035700FD4913F0 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Material::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_mC1764F8B39FD31C6B7629D417BC8375D6E6AC60C (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_get_mainTextureOffset_mCD63885CCB91B4E901FC4847FCCDFDA2E45B3590 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m8602C6F3E7FC358C5F8B9C3709325F676B1ACF5E (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_GetTextureOffset_m3C0722B8C77DF728586E121E4DD81AED28097789 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_get_mainTextureScale_m882447FB9D8EF5873279BF15C62AD977EEEFE062 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_m4E1ED22B62AD02B61921AD392A6D2E5B727383BA (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Material_GetVector_m068E8828C9E9FB017161F018E80818C2D1651477 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, String_t* ___name0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Material_GetVector_mDE1F87F355E0ECAD883E4F2CF62DB338C2E00C38 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m95B7CB07B91F004B4DD9DB5DFA5146472737B8EA (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_mF51F1FF5BE87719CFAC293E272B1138DC1EFFD4B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.TrailRenderer::get_startWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrailRenderer_get_startWidth_mA5EE0531BEBF2E69495047E0527B13DA1ADB0D9D (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TrailRenderer::get_endWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrailRenderer_get_endWidth_m7AF079A0351C238CBE24A21EEC20241365269C86 (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_startWidth_mA60DF0277CDD09E9C98BDEC76A670BA428FF6872 (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_endWidth_m50CCB4931A6019B0D24BD18C9C349FF2FAFF42F6 (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.TrailRenderer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TrailRenderer_get_time_mE4E051F908FAA39CD6D18658B943F5B28F625024 (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TrailRenderer::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_set_time_mC4B9324EBEF334A58C498806B478E1D296276359 (TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5006BA0D01A27619A053704D3BD6A8938F7DEDA5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Single DG.Tweening.TweenExtensions::ElapsedPercentage(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedPercentage_m520A7D1F25EF5FB863C4755C2911743590EB9A8E (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeLoops1, const RuntimeMethod* method);
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DOVirtual_EasedValue_m613C63862A3734C806C81F6DBCF1BF66AAD97517 (float ___from0, float ___to1, float ___lifetimePercentage2, int32_t ___easeType3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Subtraction_mCEE40D3CDA3D99C65D055D69585BB68B0C1C2C49 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___a0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_op_Addition_m26E4EEFAF21C0C0DC2FD93CE594E02F61DB1F7DF (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___a0, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___b1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  Camera_get_pixelRect_mBA87D6C23FD7A5E1A7F3CE0E8F9B86A9318B5317 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_pixelRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_pixelRect_m9380482EFA5D7912988D585E9538A58988C8E0E9 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  Camera_get_rect_m3570AA056526AB01C7733B4E7BE69F332E128A08 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_m6DB9964EA6E519E2B07561C8CE6AA423980FEC11 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method);
// System.Single DG.Tweening.TweenExtensions::Elapsed(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Elapsed_mBE57D458C7EA7B2179254A30A352075E41D4C772 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeLoops1, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::Goto(DG.Tweening.Tween,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Goto_mFEDCD28E24DBB38B50C6BEA494F20687500C6E79 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_playedOnce(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_position(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_playedOnce()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Tween::get_hasLoops()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.Debugger::ShouldLogSafeModeCapturedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debugger_ShouldLogSafeModeCapturedError_m95BE116E00DBF31A416096091AA64D1F23DD6513 (const RuntimeMethod* method);
// System.Reflection.MethodBase System.Exception::get_TargetSite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * Exception_get_TargetSite_m8EEF23C6BD91447A8DC7CA686737D1E1C9FC834B (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogSafeModeCapturedError(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogSafeModeCapturedError_mF24B818E481B2CA0C8626606801C63F04A3ADDED (RuntimeObject * ___message0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.SafeModeReport::Add(DG.Tweening.Core.SafeModeReport/SafeModeReportType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeModeReport_Add_m1596E2CEE9DC3BBA6649AA1326936821F6995891 (SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.ABSSequentiable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSSequentiable__ctor_mC0A3D985974279B385789BC4FA4EFD616033DD31 (ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 * __this, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___withCallbacks1, const RuntimeMethod* method);
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNestedTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Complete_m7E5BF65A61D0EEB6CF4605C35F9D6B56EF6CF7EC (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___modifyActiveLists1, int32_t ___updateMode2, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Flip(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Flip_m7B5284D67687677728C4DCAC9182B790618A9123 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.TweenManager::ForceInit(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_ForceInit_mFAEA2CEBA55C724832D90D813FE1B442F8EC0B31 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___isSequenced1, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenExtensions::DoGoto(DG.Tweening.Tween,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, bool ___withCallbacks3, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Goto_mB5397C1984C440757DAC5F491FE9D7D97F88DBAF (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, int32_t ___updateMode3, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::set_active(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_active_m8D47B88C314554514ED04A6A0C921F83F6B40168_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenManager_Despawn_mCBBD003E4779D54699E368376958FB6BB681E63D (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___modifyActiveLists1, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Update(DG.Tweening.Tween,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Update_mE374B5C03C7725F973F3AF78A20CA7A6B9124F89 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___deltaTime1, float ___independentTime2, bool ___isSingleTweenManualUpdate3, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::PlayBackwards(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_PlayBackwards_m30A0A66D801549233E04D406718BAA299711B7CA (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::PlayForward(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_PlayForward_mF14238D7B13F5E7EA0BEF7DD672AEA65365F8BE6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Restart(DG.Tweening.Tween,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Restart_m425C116003BE9C64069C89548112EDCC5DD420C2 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, float ___changeDelayTo2, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_Rewind_mEEBAAC2FEA9A2CE7B3739002EB030D0AADD8C150 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::SmoothRewind(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_SmoothRewind_m2AC861C9D6BC5343D6D40F3A5AF3BE53668A57ED (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Boolean DG.Tweening.Core.TweenManager::TogglePause(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenManager_TogglePause_m1EDBB6356ECB219E9E59DA20605ABBA51F35036B (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogNonPathTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNonPathTween_m17D900AB10880767CE4F723D865282E7302E360F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForCompletion(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForCompletion_mACA2AED04729C14274C6155968D6E4D28A62318B (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForRewind(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForRewind_mF2EC31BE7243D949E84970075963CC4C32252829 (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForKill(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForKill_m2602E814C81C63D5BC981B56FCB1DCDBDAED02CB (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForElapsedLoops_m09F7AAF0881DD3AF6E4F491CFDC89800CB4777CD (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, int32_t ___elapsedLoops1, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForPosition(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForPosition_m4CCC8D4B2AD63BCAF3EDB072D6168D07450F1FF0 (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___position1, const RuntimeMethod* method);
// System.Collections.IEnumerator DG.Tweening.Core.DOTweenComponent::WaitForStart(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DOTweenComponent_WaitForStart_m672FFF950259160EA22F50A78E5E376BFA86EAE9 (DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * __this, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger::LogWarning(System.Object,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogWarning_m012435A7A9F817E5387AB572C5ED0714CEFA98A2 (RuntimeObject * ___message0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::GetPoint(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Path_GetPoint_mCDAD7D0FD5B182DBCA2A7B0EECDD48E018C791E5 (Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * __this, float ___perc0, bool ___convertToConstantPerc1, const RuntimeMethod* method);
// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::GetDrawPoints(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Path_GetDrawPoints_mCEA9A48A5AECF90E31F119017993E8FD9D1B3033 (Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * ___p0, int32_t ___drawSubdivisionsXSegment1, const RuntimeMethod* method);
// DG.Tweening.TweenParams DG.Tweening.TweenParams::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_Clear_mDF49B6268B9BF32A62C7D9650A56F4CFD92AB60C (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<DG.Tweening.LoopType>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE0164C5AB9E1273D0BF45C7B570E470EC7CEBA67_inline (Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 *, const RuntimeMethod*))Nullable_1_get_HasValue_mB0A6989529561627BBB65E6E4342DAA6549DD5A9_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<DG.Tweening.LoopType>::get_Value()
inline int32_t Nullable_1_get_Value_m44301887057A6FBF0AC15087D0D1F132F727FE8E (Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 *, const RuntimeMethod*))Nullable_1_get_Value_m32D4CD9D36108D7EE445A232AAB86E6DD0CB001B_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_inline (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *, const RuntimeMethod*))Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2 (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *, const RuntimeMethod*))Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2_gshared)(__this, method);
}
// System.Void DG.Tweening.Core.Easing.EaseCurve::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseCurve__ctor_m26123479574864FBB3E03392C168D1A13812E2F7 (EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___animCurve0, const RuntimeMethod* method);
// System.Void DG.Tweening.EaseFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaseFunction__ctor_mF98B765DDDA8DE8B3B9D6F18F3972A76ABD73502 (EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParams__ctor_m2621E8474EA565065742745450E7C16CDC585F01 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, const RuntimeMethod* method);
// System.Boolean DG.Tweening.TweenSettingsExtensions::ValidateAddToSequence(DG.Tweening.Sequence,DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, bool ___ignoreTween2, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.Sequence::DoInsert(DG.Tweening.Sequence,DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * Sequence_DoInsert_m3D20EAC3DCAE54D0FE4EC70344B5DF3D2167C263 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___inSequence0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, float ___atPosition2, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.Sequence::DoPrepend(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * Sequence_DoPrepend_m4CE82251127A532A66EEC6C0F1FC353356D9E59A (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___inSequence0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.Sequence::DoAppendInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * Sequence_DoAppendInterval_mE84F1389FF900B1DC7898C84F2B627B7E818E2E4 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___inSequence0, float ___interval1, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.Sequence::DoPrependInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * Sequence_DoPrependInterval_mFFC4EB2AA760286A1009E56E4A43E4D09EAE86D6 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___inSequence0, float ___interval1, const RuntimeMethod* method);
// DG.Tweening.Sequence DG.Tweening.Sequence::DoInsertCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * Sequence_DoInsertCallback_m068073382E1FA95111E35B7340DB53A28C707E76 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___inSequence0, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback1, float ___atPosition2, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddToNullSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddToNullSequence_m4DB4949C878BD3D726D844084D13646942CC5B0C (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddToInactiveSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddToInactiveSequence_m836A8D0EB90BEC678355427322D1CEF7464069D6 (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddToLockedSequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddToLockedSequence_m6B643F4811299B4D58F748F2A347B5B2872AFE7F (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddNullTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddNullTween_mE6768D2A1D2C652D6EE2FC97364AB70B5998C0C1 (const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddInactiveTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddInactiveTween_m2718FA35D8D8C88D05626F8CC2A359845AD5179F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void DG.Tweening.Core.Debugger/Sequence::LogAddAlreadySequencedTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_LogAddAlreadySequencedTween_m4A23C9D7F45B549B5A59827089C130873AC0D9C8 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>::SetFrom(T2,System.Boolean,System.Boolean)
inline Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7 (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method)
{
	return ((  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * (*) (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 *, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 , bool, bool, const RuntimeMethod*))TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7_gshared)(__this, ___fromValue0, ___setImmediately1, ___relative2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>::SetFrom(T2,System.Boolean,System.Boolean)
inline Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method)
{
	return ((  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * (*) (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , bool, bool, const RuntimeMethod*))TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE_gshared)(__this, ___fromValue0, ___setImmediately1, ___relative2, method);
}
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>::SetFrom(T2,System.Boolean,System.Boolean)
inline Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC (TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___fromValue0, bool ___setImmediately1, bool ___relative2, const RuntimeMethod* method)
{
	return ((  Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * (*) (TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , bool, bool, const RuntimeMethod*))TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC_gshared)(__this, ___fromValue0, ___setImmediately1, ___relative2, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6 (String_t* __this, const RuntimeMethod* method);
// System.Void DG.Tweening.Plugins.StringPluginExtensions::ScrambleChars(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPluginExtensions_ScrambleChars_m5D48CF427E493F0CFB0C1A6D52C4E4C0F8DC54A2 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___chars0, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetOptions_mD4DDAD5C05009CC8EE99277336157B59C2B95B1C (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, bool ___closePath1, int32_t ___lockPosition2, int32_t ___lockRotation3, const RuntimeMethod* method);
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,DG.Tweening.Plugins.Options.OrientType,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, int32_t ___orientType1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform3, float ___lookAhead4, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection5, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up6, bool ___stableZRotation7, const RuntimeMethod* method);
// System.Void DG.Tweening.TweenSettingsExtensions::SetPathForwardDirection(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenSettingsExtensions_SetPathForwardDirection_m7EA9A97A77D0EBB7542134E0D8224E06D5A56714 (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection1, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up2, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *, const RuntimeMethod*))Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(!0)
inline void Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057 (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *, const RuntimeMethod*))Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// System.Void DG.Tweening.Tween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m4D549F68B5066791B73FA4F44ECA43123D42EBC8 (U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass0_0::<DOAspect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass0_0_U3CDOAspectU3Eb__0_m97607C45CE4A39CBB05C0F4B36D851C1CBBE7A1B (U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass0_0::<DOAspect>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CDOAspectU3Eb__1_mEFC31EB011AF35B756824C5FC32FDE53798CCC5F (U3CU3Ec__DisplayClass0_0_t529F4B945CBDFBE521B881CB0BA2F95E7610C98A * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_aspect_m84BE4641686B30B8F9FFEA47BB1D7D88E27344EE(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mDE9BA5F8AA9B545FF61D435AB84C93ED75E4E099 (U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass10_0::<DOShakeRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass10_0_U3CDOShakeRotationU3Eb__0_m6EFD62668B8FB3837272D1DFA2BBA5A53FADA862 (U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass10_0::<DOShakeRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CDOShakeRotationU3Eb__1_m2A463FFB6651A2BF5F5B14954140E0A6C1FC4702 (U3CU3Ec__DisplayClass10_0_t3C7E3CF6BB0DB847305A944CB71D97DD244D9A00 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CDOShakeRotationU3Eb__1_m2A463FFB6651A2BF5F5B14954140E0A6C1FC4702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mFBB28C586100845475B0F913423D6701E1E88774 (U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass11_0::<DOShakeRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass11_0_U3CDOShakeRotationU3Eb__0_mAB2763F3BC5B5EE839C6C8DC4BD2CBBC18341FE4 (U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass11_0::<DOShakeRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CDOShakeRotationU3Eb__1_m45FB9225C726F51591335B73FD4B3073D3332959 (U3CU3Ec__DisplayClass11_0_t0B1A71594FF486B6C1B7CD8555AAF95B51707B29 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass11_0_U3CDOShakeRotationU3Eb__1_m45FB9225C726F51591335B73FD4B3073D3332959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_mA7708DEFC0A31AFF09F661C541DB95A331ECFC65 (U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass12_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass12_0_U3CDOColorU3Eb__0_mBD283D0A5AA42CF20C58B2CEE897B95D0FE02141 (U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F * __this, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Light_get_color_m7A83B30FE716A1A931D450A6035A0069A2DD7698(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass12_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CDOColorU3Eb__1_m4E3CC5D9D7E512CD9559926D7F4EB66109377046 (U3CU3Ec__DisplayClass12_0_t78FDA2767D9E4DE07544881D8218C48CAEA98A2F * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___x0;
		NullCheck(L_0);
		Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m5827FE1DE48FC6EF4D0FB72177332EB2B8BF6A1E (U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass13_0::<DOIntensity>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass13_0_U3CDOIntensityU3Eb__0_m242878D8A4841F592C477940C5EB7BFB554C2AA5 (U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131 * __this, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass13_0::<DOIntensity>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CDOIntensityU3Eb__1_m2CDF8CE508281E5E5D5678C04A254C99F0A759BA (U3CU3Ec__DisplayClass13_0_t786076D22E771E4CDC8DC49822D7DBBA5E18B131 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m8F5624E9020BE4CAB3A323A2A004EFC9750C64D7 (U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass14_0::<DOShadowStrength>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass14_0_U3CDOShadowStrengthU3Eb__0_m7E781D5C0B56CFED8DB9639407B1E3096AF8F11F (U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE * __this, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Light_get_shadowStrength_mB46E58530AF939421D198670434F15D331BFB672(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass14_0::<DOShadowStrength>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CDOShadowStrengthU3Eb__1_mE2C7D8511D30A88791268D7902471EB41423BCE8 (U3CU3Ec__DisplayClass14_0_t9C4FB9894D435EEAC086A5AB8E1D7A536A7BA5FE * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Light_set_shadowStrength_m447AC9B66C28129AA3B2D62AE918FB511E27E2FE(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m6B8F73670808A5B4033126AC1282C762855E7933 (U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// DG.Tweening.Color2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  U3CU3Ec__DisplayClass15_0_U3CDOColorU3Eb__0_m4277EA228BB1442A92FE65E3FB1DC04158B936FC (U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863 * __this, const RuntimeMethod* method)
{
	{
		Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  L_0 = __this->get_startValue_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass15_0::<DOColor>b__1(DG.Tweening.Color2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CDOColorU3Eb__1_mA67E27C2568AB269A42DCDC19113745D39992A6E (U3CU3Ec__DisplayClass15_0_t19295EF607F531885D4F48265BECCF31408EE863 * __this, Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  ___x0, const RuntimeMethod* method)
{
	{
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_0 = __this->get_target_1();
		Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  L_1 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = L_1.get_ca_0();
		Color2_t04D7DADEE8440A02309444A79F7FCD19FAD7313E  L_3 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = L_3.get_cb_1();
		NullCheck(L_0);
		LineRenderer_SetColors_mAE8931C4C8A8FE7A1E0CE71B8E69832DA83BC773(L_0, L_2, L_4, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mC443F4A8E04145B6ECAB30B67F2D581BF911A5A0 (U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass16_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass16_0_U3CDOColorU3Eb__0_mF2233570F2267C678B95C2A2C149C5775E217014 (U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass16_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CDOColorU3Eb__1_mCAC2DAFF7F32A601425828257D2F22310BAFDE6E (U3CU3Ec__DisplayClass16_0_tFDEC691D47A87E7BBC261B8792EB05AAD01B17DB * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___x0;
		NullCheck(L_0);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mABBDC7CD5F0086A6B43E9A0DFA4D66989B608EE2 (U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass17_0_U3CDOColorU3Eb__0_m5C540C179300AC6AC42003FD01A7DA33F90EBA65 (U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass17_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CDOColorU3Eb__1_mCF4FC604B3520216B26EF825E129F0CC3380DF4B (U3CU3Ec__DisplayClass17_0_t95B5A20BD764B49D46FF25D2EE44C5D9A7ACB7EA * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_mFD2BD7E8EAB402EA86C90845B321B3FE9642FE7E (U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass18_0_U3CDOColorU3Eb__0_mC578ED0FE4BD071EAA8F8063E374F69F2A216771 (U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Material_GetColor_m1FFF5ECB4967771D751C60205635A0D3F7AA2F0E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass18_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0_U3CDOColorU3Eb__1_m02D80DDC337B49FA689E35A3E42018C3DC10130B (U3CU3Ec__DisplayClass18_0_tDC9A8911F0E77E62FCE74C5F5E6EB54716A5279A * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetColor_m48FBB701F6177B367EDFAC6BE896D183EF640725(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mADFEF6B2FCC846020DFFAFE7245456EE48B0ADC3 (U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass19_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass19_0_U3CDOFadeU3Eb__0_m617CFF4200AF6B1C6C2D7AFBB3A71CF346140E9B (U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass19_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CDOFadeU3Eb__1_mED964E63D8125E6CD2C9CE8F8EC5EBB76ACAAEBF (U3CU3Ec__DisplayClass19_0_tE2E32D473C67D0D6AE786E11EC7112A4779A9CC1 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___x0;
		NullCheck(L_0);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m6C6EED272BD57CF67D6C0FEA281FB3C19F80D6FC (U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass1_0::<DOColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_m69D8D1D9B96071F427A6F8C3AA7D375D02598FE8 (U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Camera_get_backgroundColor_m14496C5DC24582D7227277AF71DBE96F8E9E64FF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass1_0::<DOColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_m73B518FD8ED96E95E4C05B35C12290464C002A92 (U3CU3Ec__DisplayClass1_0_t27DA7E2D53D799ABDC21B9D28642A230E456C71C * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m1AC73200EC0C854E89BFF6F2B12650084B45529A (U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass20_0_U3CDOFadeU3Eb__0_m9EE2BEE017CC5E37C6025ADC0487458F0F64E5B6 (U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass20_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CDOFadeU3Eb__1_mC8B05CE555F226493275B214224BEACBFDF015E1 (U3CU3Ec__DisplayClass20_0_tBE9458385D14F23224B7640AA80FAD26B25E28FE * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mACFD4C6390F2EBD05170914973A5C1DC3E13D042 (U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0::<DOFade>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass21_0_U3CDOFadeU3Eb__0_mDA00B1BDE547E75D3F0B3DAE41A1AC7CFB15E909 (U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Material_GetColor_m1FFF5ECB4967771D751C60205635A0D3F7AA2F0E(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass21_0::<DOFade>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CDOFadeU3Eb__1_m1A7ADF0CF6AFACF25281A4726704ED11D42FCA8A (U3CU3Ec__DisplayClass21_0_t8278024CA1EAB5A6B4499E85244926B05CE0094C * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetColor_m48FBB701F6177B367EDFAC6BE896D183EF640725(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mDA1C9565A3402E2175D2B1B0F160C69DD5B5683C (U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0::<DOFloat>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass22_0_U3CDOFloatU3Eb__0_mF5CB265BEC8AD741B8A6B22A3896F9AB0D125B09 (U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		float L_2 = Material_GetFloat_m8A4243FC6619B4E0E820E87754035700FD4913F0(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass22_0::<DOFloat>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CDOFloatU3Eb__1_mB245A5AAF7B8524E49D7C643E6F0C034458180E2 (U3CU3Ec__DisplayClass22_0_tB5B465285D7FFF91248D1E8228DE28417E12E08C * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		float L_2 = ___x0;
		NullCheck(L_0);
		Material_SetFloat_m4B7D3FAA00D20BCB3C487E72B7E4B2691D5ECAD2(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m9E089F6204B9DBF133434DE1DA01C39E1550BB0F (U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0::<DOFloat>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass23_0_U3CDOFloatU3Eb__0_mA70C663CA86BB850445CB0EB855B040B51129986 (U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		float L_2 = Material_GetFloat_mC1764F8B39FD31C6B7629D417BC8375D6E6AC60C(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass23_0::<DOFloat>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CDOFloatU3Eb__1_m44FCC71D8AF5B8B690EE9448999214AB7312F396 (U3CU3Ec__DisplayClass23_0_t15AAFBD072134B7CCAAB16F385DD08D601263A52 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		float L_2 = ___x0;
		NullCheck(L_0);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m19B8266BE83BC5D226BDDDBA7B60D2969E762259 (U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass24_0::<DOOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass24_0_U3CDOOffsetU3Eb__0_m1EA726EF2DF62543C64CC686A6EC6F431E485174 (U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_get_mainTextureOffset_mCD63885CCB91B4E901FC4847FCCDFDA2E45B3590(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass24_0::<DOOffset>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CDOOffsetU3Eb__1_mB9A3CA5567B78A8F5FC0D48EE72D091F1F5123FA (U3CU3Ec__DisplayClass24_0_tBE1D644A1D24342F5DAF0C141E0B89B8F41549C3 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___x0;
		NullCheck(L_0);
		Material_set_mainTextureOffset_m8602C6F3E7FC358C5F8B9C3709325F676B1ACF5E(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m3646B60182C4BEB1C0F194F27FBEC61E2FADF649 (U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0::<DOOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass25_0_U3CDOOffsetU3Eb__0_m6DFAE442595A79723CEC6538AAD6E2463810A893 (U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Material_GetTextureOffset_m3C0722B8C77DF728586E121E4DD81AED28097789(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass25_0::<DOOffset>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CDOOffsetU3Eb__1_mBAFDE5E2CD9B61DF6473ACD9778874A8E4E9ACA1 (U3CU3Ec__DisplayClass25_0_tAD76423F318EF1FE4F0CCAC63775E52BE4455157 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureOffset_mAF1B6A6AD9E952262F7AE80B17B31D8FF720ADE7(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass26_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0__ctor_mB9EAEE993C92479B71A14CE89BD0B22B7FC6C445 (U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass26_0::<DOTiling>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass26_0_U3CDOTilingU3Eb__0_m7AD5BCDACA4D74E12C179B38D2062D93B179B59A (U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Material_get_mainTextureScale_m882447FB9D8EF5873279BF15C62AD977EEEFE062(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass26_0::<DOTiling>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass26_0_U3CDOTilingU3Eb__1_mA3AAADA8FA030AEC84929465DC654BC35EC82923 (U3CU3Ec__DisplayClass26_0_t08CE4A572F5018919CEA6EE36B00A1D9B8A00247 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___x0;
		NullCheck(L_0);
		Material_set_mainTextureScale_m4E1ED22B62AD02B61921AD392A6D2E5B727383BA(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m07DB7F42FC6DB6B07551080AD5734223F596EF56 (U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0::<DOTiling>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass27_0_U3CDOTilingU3Eb__0_m0112099F61931453497D1FE2013DB88307B1E836 (U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Material_GetTextureScale_m2B1FFB0B67C22C3544E2E66E3E0D5B8DEE7EA859(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass27_0::<DOTiling>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CDOTilingU3Eb__1_m14F1A82D8D72A6EF054147794D5DC8621A3EB3C9 (U3CU3Ec__DisplayClass27_0_tC3862D1202598273CE8CD459063D617DB9649F23 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureScale_m9D9C2ADD50088A1712891A6A2AAAAFA734703BBF(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mFC8B5070140D4153B6C18BF3EBC83617DAFBE8C9 (U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector4 DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0::<DOVector>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  U3CU3Ec__DisplayClass28_0_U3CDOVectorU3Eb__0_mEFA48C80F0DD50D7E14DFCE410D76955DC991AC7 (U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		NullCheck(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Material_GetVector_m068E8828C9E9FB017161F018E80818C2D1651477(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass28_0::<DOVector>b__1(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CDOVectorU3Eb__1_m5F2B7DEA7AD417BB151C481140CC1A39FFD6B9F8 (U3CU3Ec__DisplayClass28_0_tEA565A87400EA6DDCE0A3DFAEAF16FEF0409C14C * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		String_t* L_1 = __this->get_property_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetVector_m6FC2CC4EBE6C45D48D8B9164148A0CB3124335EC(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mA71B5CF4029DB262C931F9830A7D4A3B4CFF2DD8 (U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector4 DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0::<DOVector>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  U3CU3Ec__DisplayClass29_0_U3CDOVectorU3Eb__0_m76ADDB937B6FCF2819FDBB2E7E387851A462E748 (U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9 * __this, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		NullCheck(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Material_GetVector_mDE1F87F355E0ECAD883E4F2CF62DB338C2E00C38(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass29_0::<DOVector>b__1(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CDOVectorU3Eb__1_m41E86C62E241887ACD99FCB51D2CD6D39FBB8728 (U3CU3Ec__DisplayClass29_0_tB518711AEF80504C046A75F811E561E619096FA9 * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___x0, const RuntimeMethod* method)
{
	{
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_target_0();
		int32_t L_1 = __this->get_propertyID_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___x0;
		NullCheck(L_0);
		Material_SetVector_m95B7CB07B91F004B4DD9DB5DFA5146472737B8EA(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE74FA418B45280E16081AA55B8BAD82753B5331A (U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass2_0::<DOFarClipPlane>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass2_0_U3CDOFarClipPlaneU3Eb__0_m060CC22BCD77EB6E053400C37346CB90464EC17C (U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Camera_get_farClipPlane_mF51F1FF5BE87719CFAC293E272B1138DC1EFFD4B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass2_0::<DOFarClipPlane>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CDOFarClipPlaneU3Eb__1_mFF47266720D766EEDEE0790DBA9BBF0AB6B06467 (U3CU3Ec__DisplayClass2_0_tA702905C958D9107B6F506C7A0F9D5A94A2BAB0C * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_farClipPlane_m52986DC40B7F577255C4D5A4F780FD8A7D862626(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mBDA773768049C2BE7AE60C473ECA3543E4B07789 (U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.ShortcutExtensions_<>c__DisplayClass30_0::<DOResize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass30_0_U3CDOResizeU3Eb__0_m4BC66C1B23CC711F8ED3EC7C7DD3C8DB966E0135 (U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01 * __this, const RuntimeMethod* method)
{
	{
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = TrailRenderer_get_startWidth_mA5EE0531BEBF2E69495047E0527B13DA1ADB0D9D(L_0, /*hidden argument*/NULL);
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_2 = __this->get_target_0();
		NullCheck(L_2);
		float L_3 = TrailRenderer_get_endWidth_m7AF079A0351C238CBE24A21EEC20241365269C86(L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass30_0::<DOResize>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CDOResizeU3Eb__1_mBE7578FFE5F37DC4FDA061A3853BF7DAF29CF225 (U3CU3Ec__DisplayClass30_0_tA7AFB88109EFA0E7CDEBC6157FA5812903693A01 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	{
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_0 = __this->get_target_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___x0;
		float L_2 = L_1.get_x_0();
		NullCheck(L_0);
		TrailRenderer_set_startWidth_mA60DF0277CDD09E9C98BDEC76A670BA428FF6872(L_0, L_2, /*hidden argument*/NULL);
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_3 = __this->get_target_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___x0;
		float L_5 = L_4.get_y_1();
		NullCheck(L_3);
		TrailRenderer_set_endWidth_m50CCB4931A6019B0D24BD18C9C349FF2FAFF42F6(L_3, L_5, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m220AF3C24C37FA3451EE041F1BE2BEE74C8BABF7 (U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass31_0::<DOTime>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass31_0_U3CDOTimeU3Eb__0_m39E0F894B3F37E0D82C87022B82DFFB96C0DC5AD (U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F * __this, const RuntimeMethod* method)
{
	{
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = TrailRenderer_get_time_mE4E051F908FAA39CD6D18658B943F5B28F625024(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass31_0::<DOTime>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CDOTimeU3Eb__1_m51A2D2E25C6547F373A5560E2BDD840D216AF0CC (U3CU3Ec__DisplayClass31_0_tF709F65D0896E1D7CD71B8EB2204CEA670585F0F * __this, float ___x0, const RuntimeMethod* method)
{
	{
		TrailRenderer_t9AC23ED5E8A7955A3288A9C37865C11382DA668D * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		TrailRenderer_set_time_mC4B9324EBEF334A58C498806B478E1D296276359(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_mCF5270DD50B15D9B7DBE969548C91795D1CDF288 (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::<DOMove>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__0_mA37AB6CC0EDFA789A63F37E518FDE9130F65B8D8 (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass32_0::<DOMove>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0_U3CDOMoveU3Eb__1_m9B4BBBE1745115729B314E4B3A54AD4234CD0A9B (U3CU3Ec__DisplayClass32_0_t6BFFD86389C90745CC434795EBFB8214462AEB2F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m885B187BDF3F2404D28186A7B99E876C0D1921B4 (U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass33_0::<DOMoveX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass33_0_U3CDOMoveXU3Eb__0_m79E3116AD5FAD7A90B7EEFA2CFADB4E3F76CE624 (U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass33_0::<DOMoveX>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CDOMoveXU3Eb__1_m6471C54DC7E126C8DDADB4D417937BE6567BC2F5 (U3CU3Ec__DisplayClass33_0_tC87B32BAFF4C18264EB2581A30930D62F9679BD2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mD72141D83EB6C48C6E3088AD3A65F11E346BC187 (U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass34_0::<DOMoveY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass34_0_U3CDOMoveYU3Eb__0_m9665A839A25493CB513CA060640227968E08EE73 (U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass34_0::<DOMoveY>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CDOMoveYU3Eb__1_mC32F09615F3C2B73703590AE56C215EB4CB6DDA8 (U3CU3Ec__DisplayClass34_0_tB8FEDDBD0BE7394CA71C9CE8E9A297E660E6DAA6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass35_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0__ctor_m31D05B480495AF6BB5F4DCE1B88359040E8A30BE (U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass35_0::<DOMoveZ>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass35_0_U3CDOMoveZU3Eb__0_m6284C4153659747AAECFFF36769664700BCA4DF9 (U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass35_0::<DOMoveZ>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass35_0_U3CDOMoveZU3Eb__1_m599CF82F3127599708BC53192ECAEBAAC53405E1 (U3CU3Ec__DisplayClass35_0_t83E8D4F846A26FCCA954738427809BCCC5EDB343 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m023A119F1DFB79AA8FFD5B35C7E440FBE0059B8D (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::<DOLocalMove>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__0_mF14E40C93E8335DAC99184A3E7C2AF364C185E3F (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass36_0::<DOLocalMove>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3CDOLocalMoveU3Eb__1_m21EA33520A520BE57874649C81D9B3918A128515 (U3CU3Ec__DisplayClass36_0_tA71D2003D06895FF152CC3D6092C2BCFDE409EE4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m1084DF749818E55D68F64E2D79FA03B49D189283 (U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass37_0::<DOLocalMoveX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass37_0_U3CDOLocalMoveXU3Eb__0_mF5AB0D0007EA18D570FB0AAC7574E0129E5D1458 (U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass37_0::<DOLocalMoveX>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CDOLocalMoveXU3Eb__1_m219B3E9EEB5B7BBB85CBBF7169E937F55A262E8E (U3CU3Ec__DisplayClass37_0_t4CAFCEF2E7E9D20263E15E8103F18270673499D4 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m0190538F676B28A3E6EFA8845B7B71356E657994 (U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass38_0::<DOLocalMoveY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass38_0_U3CDOLocalMoveYU3Eb__0_mFBC08A6C94205F2BC3E5B8467254667A9C8BB47B (U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass38_0::<DOLocalMoveY>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CDOLocalMoveYU3Eb__1_mFC47A51462D29B5C69EF6562C381FECA636FE785 (U3CU3Ec__DisplayClass38_0_t3E6F7B736FBA080C60633E7DD818B5C9B13BEB4B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_mE77A50C7285E4BBD157F0448C3E0B563070AD3F0 (U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass39_0::<DOLocalMoveZ>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass39_0_U3CDOLocalMoveZU3Eb__0_mB4A8FA4447CBD09D4408DEC15AE25B60ED06CE0A (U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass39_0::<DOLocalMoveZ>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CDOLocalMoveZU3Eb__1_m634938F24B1ACD44A29243A8C7E0D73F121CC87B (U3CU3Ec__DisplayClass39_0_tFF8BD74C7D580DB4016BB35C5F7EBABF7CEAF8D3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m70D0AAD6B6A763D6754E9D90D08C32F71CE883E8 (U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass3_0::<DOFieldOfView>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass3_0_U3CDOFieldOfViewU3Eb__0_m13CA68F9CD82CDEB87E1546054C4D6BB0F11D52B (U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass3_0::<DOFieldOfView>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CDOFieldOfViewU3Eb__1_mF242417370C3CA93B4E49B307E16A4C0C0383731 (U3CU3Ec__DisplayClass3_0_t1FD628E94B239B3423149DE82BB9904DAE371931 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_fieldOfView_m5006BA0D01A27619A053704D3BD6A8938F7DEDA5(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_m0DD40BF76C86A2B826CFF6C79933A8FED1635F1D (U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass40_0::<DORotate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass40_0_U3CDORotateU3Eb__0_m0624EEA767D8214962BCFEACF4A2CFB0C5EA7CE3 (U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass40_0::<DORotate>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CDORotateU3Eb__1_m0455E8E9AEC058D822DD22DCCFD819DEB5C19BAF (U3CU3Ec__DisplayClass40_0_t4DE2C8849BDDB23B45DD31E9DDCD3B9A2175C047 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_mFE7995BD27751B1B93ED4A8A31F48195C9358FC1 (U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass41_0::<DORotateQuaternion>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass41_0_U3CDORotateQuaternionU3Eb__0_m37879CFF23AD6879EECBD5F02DED6FFAAC0685E1 (U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass41_0::<DORotateQuaternion>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0_U3CDORotateQuaternionU3Eb__1_m9FC6FAABF16C5571C87278EC4D4BEEB38B2E4421 (U3CU3Ec__DisplayClass41_0_tFAA38E06FCDC2A58D29D87FE82C5C07098024512 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mBE127C905548028AE565B20DDEAAFC43D73893D8 (U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass42_0::<DOLocalRotate>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass42_0_U3CDOLocalRotateU3Eb__0_mB06DACBC3DF8FD09B81122DC77EADB1B0207440F (U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass42_0::<DOLocalRotate>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0_U3CDOLocalRotateU3Eb__1_mF8B95AE13CC77E4415B2DDCFE2350C01E2174DE9 (U3CU3Ec__DisplayClass42_0_t1DA2F66EF4617D84A1E9B0280AFC67BA7C02BD6C * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m95D22CC20E1D3B541E85B0A97925D3EA64CB57B2 (U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass43_0::<DOLocalRotateQuaternion>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass43_0_U3CDOLocalRotateQuaternionU3Eb__0_mEE4DEFE929184439D54DAA50C5AF93A50AF64A1F (U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass43_0::<DOLocalRotateQuaternion>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0_U3CDOLocalRotateQuaternionU3Eb__1_m5809836E3E520D6ACD2ACB1700623923D572EE27 (U3CU3Ec__DisplayClass43_0_t9F7D038FE3DAD3149EA263A82FB93104082BB9A8 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m1DE14961F73946A2ECEA31AA358D5DD6876531C1 (U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass44_0::<DOScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass44_0_U3CDOScaleU3Eb__0_m28933A917A5836260D59548B54C2730B1FBEB58E (U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass44_0::<DOScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0_U3CDOScaleU3Eb__1_m1AEAFEC7A23B3A8240DB45898F7F3DDA588291A8 (U3CU3Ec__DisplayClass44_0_t5B645FB4BEB65E00CCFC98886C015EC7F56B86D0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m81422299A588744AA0AC331766B20BA571996C84 (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::<DOScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__0_m6B0E3686ABCA0128F13CDA1D19C00930E8A50ADE (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass45_0::<DOScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0_U3CDOScaleU3Eb__1_mD7C8F38B247EF8B2F10704CBBBBF9A2FD68053DD (U3CU3Ec__DisplayClass45_0_t9CE7989470D6C04B04C4B01C9B5983160DBCB5CE * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass46_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0__ctor_m0EB30723B595602EDA4F23D92B76920DF247D03A (U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass46_0::<DOScaleX>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass46_0_U3CDOScaleXU3Eb__0_m114CBDC82EFADFBA536C587B6035D01CA4B0AAA4 (U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass46_0::<DOScaleX>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass46_0_U3CDOScaleXU3Eb__1_mC5A075ED58BCA88C355BCE03EAD8AA865836F5A0 (U3CU3Ec__DisplayClass46_0_t16F78AC8095C54F48C59554548806969DC380048 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m1A1707FC262176386CD426B2388B1722B88FD00A (U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass47_0::<DOScaleY>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass47_0_U3CDOScaleYU3Eb__0_m8E09245BE75F399DB1B31BD55415B18C09FDF1C8 (U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass47_0::<DOScaleY>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CDOScaleYU3Eb__1_m9D78B7837A274CF43406E5C13347913BA9222E47 (U3CU3Ec__DisplayClass47_0_t1A8980540C422D39A8777BE93E6B47E767CC965E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m02F608E28287CFECD401DB54BEF7207339EC688B (U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass48_0::<DOScaleZ>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass48_0_U3CDOScaleZU3Eb__0_m1BEAA6A6BC9302A16727C8C991D7B7201CD1068C (U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass48_0::<DOScaleZ>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CDOScaleZU3Eb__1_m8A921A538C89A8E6D18DCDA7A547C9E00F6F2140 (U3CU3Ec__DisplayClass48_0_t2BA64670AF5644C493DA491974859D9AE5C7D954 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m7BE3CDB10880F85A8046717170D80460E92A4284 (U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass4_0::<DONearClipPlane>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3CDONearClipPlaneU3Eb__0_m131F581DF5EF200259EFBD05B8B603A8B120EA81 (U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass4_0::<DONearClipPlane>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CDONearClipPlaneU3Eb__1_m14E400548F4E6084F9BFAC66D388C305E64F860D (U3CU3Ec__DisplayClass4_0_t36BCD978D3EFE009F360227CE3544F53DFB102FB * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_nearClipPlane_m9D81E50F8658C16319BEF3774E78B93DEB208C6B(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_mFEAE20DD48E09301D7532D938AC0AC7CC7BA7A2B (U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass51_0::<LookAt>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass51_0_U3CLookAtU3Eb__0_m58A86B1E2B08A78EE696C8FCB2A43F03124176F6 (U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass51_0::<LookAt>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3CLookAtU3Eb__1_m43D97D40D39F4810DB709D406DFC8485314D00DB (U3CU3Ec__DisplayClass51_0_tD5A729C5F69DC7CBA317963B2930AAC3F9FE0F69 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m06CCEE0A6C53EEB6F3D0429F286884DB6E25A54E (U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass52_0::<DOPunchPosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass52_0_U3CDOPunchPositionU3Eb__0_m39E519453DB5272A88E3AAB2A7017DC0E062900C (U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass52_0::<DOPunchPosition>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CDOPunchPositionU3Eb__1_m8329AD012E691CFC95FC4C702F274CA9037715C1 (U3CU3Ec__DisplayClass52_0_t218AE21FDB9486F8C395B4DC19B1D1287D8F15B8 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_m5201866F31E5DE2513A12F108B94F75ADFCF2435 (U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass53_0::<DOPunchScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass53_0_U3CDOPunchScaleU3Eb__0_mAE37606750D6AF876851D4B682BE8EFCA0633977 (U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass53_0::<DOPunchScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3CDOPunchScaleU3Eb__1_mD2949E16FB01E7B5B51F964233AAAD71948E2DEF (U3CU3Ec__DisplayClass53_0_t294F28420D13334EC1CE887477F8E83D1166A8CA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass54_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0__ctor_mB8E157279E7EFF6C4D1565376240F389183BCF2D (U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass54_0::<DOPunchRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass54_0_U3CDOPunchRotationU3Eb__0_mB16E5F9091E8B8FC02F281DE51C68130CAA7CAB7 (U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass54_0::<DOPunchRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0_U3CDOPunchRotationU3Eb__1_mABB40181A56F62F0BAD26DF9005E7DEFB8E2FF69 (U3CU3Ec__DisplayClass54_0_tE4341BC8C6779D9DFDEDE4A7B628B7CA356D517E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass54_0_U3CDOPunchRotationU3Eb__1_mABB40181A56F62F0BAD26DF9005E7DEFB8E2FF69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_mFE10DC3374B857EE0B15839A967716B54E948787 (U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass55_0::<DOShakePosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass55_0_U3CDOShakePositionU3Eb__0_m5C8C4CB5837472B99F33F9A5BE26674B9E3AC6D0 (U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass55_0::<DOShakePosition>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3CDOShakePositionU3Eb__1_m6C83C8754C7E4FE075C1183A69710F3C387487A5 (U3CU3Ec__DisplayClass55_0_t3EE55BB2077B1ECD8FD60E8297CC58CA43E48FAA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m59EB9C2CCF2ED0B3D57A1E4879AB1A7FF8DCE82F (U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass56_0::<DOShakePosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass56_0_U3CDOShakePositionU3Eb__0_mABA76D3145FC53EF93B91DAF1042C15491456AA8 (U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass56_0::<DOShakePosition>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0_U3CDOShakePositionU3Eb__1_m30B443AC33DA2A7153691300CBE38EC4F639ED00 (U3CU3Ec__DisplayClass56_0_t5DC5ECF2894D6851C31297E79B0BE245E2217D64 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mAA5EFE0FD54F6ED784F40F4432A9E1A0A9BCEC46 (U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass57_0::<DOShakeRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass57_0_U3CDOShakeRotationU3Eb__0_m14F43A07CCE0644341EBE2B1A27A266398460E9E (U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass57_0::<DOShakeRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CDOShakeRotationU3Eb__1_mB8D9DAF2DA69E622C779B34F9183D789E85F2BDD (U3CU3Ec__DisplayClass57_0_tC7EF3C8737ECEA3FFCA62057ADDE60E3C6CA19EA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass57_0_U3CDOShakeRotationU3Eb__1_mB8D9DAF2DA69E622C779B34F9183D789E85F2BDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m9D1826C1AE6CAEA3C45B012A9313AEB54867D45D (U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass58_0::<DOShakeRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass58_0_U3CDOShakeRotationU3Eb__0_mB44EA4E437BC615597E855065179CD8BD9A92921 (U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass58_0::<DOShakeRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CDOShakeRotationU3Eb__1_mD34FE9337330E8E16A44D668A36EF860A1F67085 (U3CU3Ec__DisplayClass58_0_tE35985A8CF63F4D00E037C645EAE60AFE735451A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass58_0_U3CDOShakeRotationU3Eb__1_mD34FE9337330E8E16A44D668A36EF860A1F67085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_0, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m6C083C2AB9D7A52E199CC6D435CD1C97D00FE9BE (U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass59_0::<DOShakeScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass59_0_U3CDOShakeScaleU3Eb__0_mD757FC9B236E19164592D5D3DFB08AC62BB7C228 (U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass59_0::<DOShakeScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3CDOShakeScaleU3Eb__1_m19393265E63F246F805715D92F054C1D9157AD10 (U3CU3Ec__DisplayClass59_0_t4B04657B2C80C860D9699497166F507E9F487138 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF574A4415DA38A85C7AA0ADA5E49013E4E289F0A (U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass5_0::<DOOrthoSize>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass5_0_U3CDOOrthoSizeU3Eb__0_m1E14255799C56B23EFF7A800E440DBC837F22034 (U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = Camera_get_orthographicSize_m700FCD8CF48BC59A0415A624328B4A627B88D958(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass5_0::<DOOrthoSize>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CDOOrthoSizeU3Eb__1_mFC2EF0BF58343091C4EB21B7C66DD78540C61E60 (U3CU3Ec__DisplayClass5_0_t0294840F1728F14EA887704FFCB9252D82E4EC7E * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_orthographicSize_mF15F37A294A7AA2ADD9519728A495DFA0A836428(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_mCD965183FB033897172EFFD0F75622F3061E9B5E (U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass60_0::<DOShakeScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass60_0_U3CDOShakeScaleU3Eb__0_m98B52578D2CFC91B3F3E90474856B190A91E5445 (U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass60_0::<DOShakeScale>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0_U3CDOShakeScaleU3Eb__1_m805408811D3F26B3BED9D31811A3CA9041E9487D (U3CU3Ec__DisplayClass60_0_t64409C37981CA8094BF58D3393801152AC68A43B * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_mF345C47A756E31687080506BBDB663B9DAAC0F17 (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__0_m9C15E29E93B8846ABA496A0A8CF9392C0B9776AC (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__1_m9A27FBC593091183119E7F8C09C29DAB4D8C655E (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__2_m1BAA0AD95BDB90EC567DF6D8D3CBC14548911204 (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		__this->set_startPosY_1(L_2);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__3_m92B37314FAE441810F8F5475FF6CDAE12A7DC837 (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__4_mCE253B7995C858DAFD14E856A248B644649F0370 (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__5_mD37CD9B8093C9EDC0F731439976133573AA234C7 (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__6(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__6_m1991CAA33932A306D24D2DDCD23C48476296A53F (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass61_0::<DOJump>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3CDOJumpU3Eb__7_m95DA4A681CD4CBA935526D808F94C050B027128D (U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass61_0_t957FFC2F58F77B9B7FA5D393B788130D7B43984D * G_B4_1 = NULL;
	{
		bool L_0 = __this->get_offsetYSet_2();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_offsetYSet_2((bool)1);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_1 = __this->get_s_4();
		NullCheck(L_1);
		bool L_2 = Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159_inline(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_endValue_5();
		float L_4 = L_3->get_y_3();
		float L_5 = __this->get_startPosY_1();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_endValue_5();
		float L_7 = L_6->get_y_3();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_offsetY_3(G_B4_0);
	}

IL_0041:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_target_0();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float* L_10 = (&V_0)->get_address_of_y_3();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = __this->get_offsetY_3();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = __this->get_yTween_6();
		float L_15 = TweenExtensions_ElapsedPercentage_m520A7D1F25EF5FB863C4755C2911743590EB9A8E(L_14, (bool)1, /*hidden argument*/NULL);
		float L_16 = DOVirtual_EasedValue_m613C63862A3734C806C81F6DBCF1BF66AAD97517((0.0f), L_13, L_15, 6, /*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)L_16));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		NullCheck(L_17);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_18, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m3860690B8C6D54F0808A9205C3361BBCE3DF5FAC (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__0_mDCDBB741861656773520115D61371CBC562F1E4B (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__1_m9078FC19CF6C39FF29AD892944D81D470C94F264 (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__2_mA8DB80B3A7466F1D8913263CE5A61F9E79A190EC (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		__this->set_startPosY_1(L_2);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__3_m8D221112208CED325850D57812B1E999C53F1ED2 (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__4_mEC10E571D7DACDBD06B8ABE0CE625B032CA7C525 (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__5_m4FCA5C1E91D35CFCBBF03038378D5402DD7B255A (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__6(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__6_mFDAA29796E36ADCD2BD9D03985E926374A250441 (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass62_0::<DOLocalJump>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CDOLocalJumpU3Eb__7_mB9A5B6FFF8BB213B1E7F797423FC4688372CCA35 (U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	U3CU3Ec__DisplayClass62_0_tD793C8216AD8829032C868AC918FE5705CEB0647 * G_B4_1 = NULL;
	{
		bool L_0 = __this->get_offsetYSet_2();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_offsetYSet_2((bool)1);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_1 = __this->get_s_4();
		NullCheck(L_1);
		bool L_2 = Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159_inline(L_1, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_0031;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_endValue_5();
		float L_4 = L_3->get_y_3();
		float L_5 = __this->get_startPosY_1();
		G_B4_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		G_B4_1 = G_B2_0;
		goto IL_003c;
	}

IL_0031:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = __this->get_address_of_endValue_5();
		float L_7 = L_6->get_y_3();
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_003c:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_offsetY_3(G_B4_0);
	}

IL_0041:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = __this->get_target_0();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float* L_10 = (&V_0)->get_address_of_y_3();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = __this->get_offsetY_3();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = __this->get_yTween_6();
		float L_15 = TweenExtensions_ElapsedPercentage_m520A7D1F25EF5FB863C4755C2911743590EB9A8E(L_14, (bool)1, /*hidden argument*/NULL);
		float L_16 = DOVirtual_EasedValue_m613C63862A3734C806C81F6DBCF1BF66AAD97517((0.0f), L_13, L_15, 6, /*hidden argument*/NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add((float)L_12, (float)L_16));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		NullCheck(L_17);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_17, L_18, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m5526AB45D099943814895B2C254CFB3125FB3987 (U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass63_0::<DOPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass63_0_U3CDOPathU3Eb__0_m869A0CEC0CDA4C3CD1E9F5E7D9A13E3666F32274 (U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass63_0::<DOPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3CDOPathU3Eb__1_mB919B50D20A67A5D9C968BF278D4C47E54393E0F (U3CU3Ec__DisplayClass63_0_t393A45FD5597143F8271AE00698B89FBE09D98EC * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_m7624A70C2FA7A02D2BEE98692AAA06FD9C713FB7 (U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass64_0::<DOLocalPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass64_0_U3CDOLocalPathU3Eb__0_m2D022D5B73BD5CBEAB20266EE1C632CD7CB5EE00 (U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass64_0::<DOLocalPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0_U3CDOLocalPathU3Eb__1_m7BD14807280222A099698DD58072AD487FA6BF58 (U3CU3Ec__DisplayClass64_0_t0596E9F602247D172271264B66F0666BA39ADF64 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_mE9A18BFCF7467244132DCFEA3483C896982974FD (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::<DOPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__0_m18C11775AA9B5336D74168E62EC0999CBB9E0A31 (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass65_0::<DOPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0_U3CDOPathU3Eb__1_mDF77A62D08D0DB1C857F68C9F355DB811041CE72 (U3CU3Ec__DisplayClass65_0_t4C80C1D14DE7027914D4AC3AB3185FE912A398E7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_m868845212A1E3C070074A8E598D2655203115742 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::<DOLocalPath>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__0_mBBF7944CADB2E69CED840A007D06E63BF0A15789 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass66_0::<DOLocalPath>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3CDOLocalPathU3Eb__1_mAB1A2F4499CE98930F063700EB644DF33B6A77A8 (U3CU3Ec__DisplayClass66_0_tC078E5A6C5E7531F93A21516D5C22208B4193997 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_mCE898489F4D9D8899E95E9C701861D4B2D3BC1FA (U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single DG.Tweening.ShortcutExtensions_<>c__DisplayClass67_0::<DOTimeScale>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass67_0_U3CDOTimeScaleU3Eb__0_mE24945560651B49AB3B7AB9F536B83730FAE9442 (U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8 * __this, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		float L_1 = L_0->get_timeScale_4();
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass67_0::<DOTimeScale>b__1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0_U3CDOTimeScaleU3Eb__1_m14B2963903E918A074BB142F061972B9E44F157B (U3CU3Ec__DisplayClass67_0_tA8250FB6A8DA59A8EE5D67B309155D0C6B4146A8 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = __this->get_target_0();
		float L_1 = ___x0;
		NullCheck(L_0);
		L_0->set_timeScale_4(L_1);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0__ctor_m54788AB09DDF27635037DCCCA8D5C06BDE3BE751 (U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass68_0_U3CDOBlendableColorU3Eb__0_m0F75D0F42DC644FFBBFC3BD8071AA9A79200FF99 (U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB * __this, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass68_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0_U3CDOBlendableColorU3Eb__1_m1BE3A3F7F183925EF748A3B690795F4EF63FED51 (U3CU3Ec__DisplayClass68_0_tFB5ACEE9675061994D39EE1A703CD48869DAFBBB * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_to_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_op_Subtraction_mCEE40D3CDA3D99C65D055D69585BB68B0C1C2C49(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___x0;
		__this->set_to_0(L_3);
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_4 = __this->get_target_1();
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_5 = L_4;
		NullCheck(L_5);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = Light_get_color_m7A83B30FE716A1A931D450A6035A0069A2DD7698(L_5, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_op_Addition_m26E4EEFAF21C0C0DC2FD93CE594E02F61DB1F7DF(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Light_set_color_mCC1582CECB03F511169444C9498B7FFBED8EAF63(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_mAC67FD3A97F8553048AF196D6A7612AF3F9075A5 (U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass69_0_U3CDOBlendableColorU3Eb__0_m03125B64D6E13052BA9E58DDEA2C8777CA0DE1AA (U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8 * __this, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass69_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0_U3CDOBlendableColorU3Eb__1_m3264839AF8FD60D21E3849BEAA3901DB38FDEB5C (U3CU3Ec__DisplayClass69_0_t3B5BA57CAB5AE7DA793FAC2EF378E01C4CBAFED8 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_to_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_op_Subtraction_mCEE40D3CDA3D99C65D055D69585BB68B0C1C2C49(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___x0;
		__this->set_to_0(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_target_1();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = L_4;
		NullCheck(L_5);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_6 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_5, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_op_Addition_m26E4EEFAF21C0C0DC2FD93CE594E02F61DB1F7DF(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mBA0F830DB8A7D7B523403EA923266EC6F093543D (U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect DG.Tweening.ShortcutExtensions_<>c__DisplayClass6_0::<DOPixelRect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  U3CU3Ec__DisplayClass6_0_U3CDOPixelRectU3Eb__0_m6254D175811F35C1493A6E827B52C1BC986B3E17 (U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = Camera_get_pixelRect_mBA87D6C23FD7A5E1A7F3CE0E8F9B86A9318B5317(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass6_0::<DOPixelRect>b__1(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CDOPixelRectU3Eb__1_mEF5C4DE450105599D02B880FE1E1F68FD4270DFC (U3CU3Ec__DisplayClass6_0_t674A1CF381B29333580B9CDFDE3696A60C3BDF90 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_pixelRect_m9380482EFA5D7912988D585E9538A58988C8E0E9(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_m387FCD835605706339210497864E1BDCD8A65DEA (U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass70_0_U3CDOBlendableColorU3Eb__0_mBC3C9DD47D5A5505CA5761CA0D6C3F5997045E45 (U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15 * __this, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass70_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3CDOBlendableColorU3Eb__1_mF0D54C419F33B5A8CC78286D6819FDB193F5AE61 (U3CU3Ec__DisplayClass70_0_tD365CB5E1B8C42063C67B7062FAB362B85207A15 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_to_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_op_Subtraction_mCEE40D3CDA3D99C65D055D69585BB68B0C1C2C49(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___x0;
		__this->set_to_0(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_target_1();
		String_t* L_5 = __this->get_property_2();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_target_1();
		String_t* L_7 = __this->get_property_2();
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Material_GetColor_m95E13C52410F7CE01E8DC32668ABBCBF19BB8808(L_6, L_7, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Color_op_Addition_m26E4EEFAF21C0C0DC2FD93CE594E02F61DB1F7DF(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetColor_mB91EF8CAC3AB3B39D2535BF9F7FECECF3EC2161C(L_4, L_5, L_10, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0__ctor_m197EA5A271D7537ED5AFEB8A2559067F56E0FE06 (U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::<DOBlendableColor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec__DisplayClass71_0_U3CDOBlendableColorU3Eb__0_mCD5255E82D5F2988BD564F3C1D9A3DF3ABEDFE59 (U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C * __this, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass71_0::<DOBlendableColor>b__1(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass71_0_U3CDOBlendableColorU3Eb__1_mAF2FF6E33B5F0548B875914E4139B5318962DFE4 (U3CU3Ec__DisplayClass71_0_t72652EAE28FE5ED097D5182AC9941455D1B1176C * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___x0, const RuntimeMethod* method)
{
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___x0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = __this->get_to_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_op_Subtraction_mCEE40D3CDA3D99C65D055D69585BB68B0C1C2C49(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___x0;
		__this->set_to_0(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = __this->get_target_1();
		int32_t L_5 = __this->get_propertyID_2();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_6 = __this->get_target_1();
		int32_t L_7 = __this->get_propertyID_2();
		NullCheck(L_6);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Material_GetColor_m1FFF5ECB4967771D751C60205635A0D3F7AA2F0E(L_6, L_7, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = V_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Color_op_Addition_m26E4EEFAF21C0C0DC2FD93CE594E02F61DB1F7DF(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		Material_SetColor_m48FBB701F6177B367EDFAC6BE896D183EF640725(L_4, L_5, L_10, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0__ctor_m416BF33FDCE603B0D66F97EAC149E4FD996E4B93 (U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0::<DOBlendableMoveBy>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass72_0_U3CDOBlendableMoveByU3Eb__0_m192A606B503F9009B762C40F117ADA35132A37B1 (U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass72_0::<DOBlendableMoveBy>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0_U3CDOBlendableMoveByU3Eb__1_m14654EE83EC6E5059BC968D7B399171D2A08CB87 (U3CU3Ec__DisplayClass72_0_tA44F4E23AD9835B387C62412C78E1DB21C87983D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass72_0_U3CDOBlendableMoveByU3Eb__1_m14654EE83EC6E5059BC968D7B399171D2A08CB87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___x0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___x0;
		__this->set_to_0(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_target_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_4;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_m910D517FF316A345943A086AC73022EC04A3DC45 (U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0::<DOBlendableLocalMoveBy>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass73_0_U3CDOBlendableLocalMoveByU3Eb__0_mDB60EEE20446EE1CAEDEBB81315704BE2280DEE2 (U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass73_0::<DOBlendableLocalMoveBy>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CDOBlendableLocalMoveByU3Eb__1_mA6F95723C2577E0B813677938AA15C8ECC32650E (U3CU3Ec__DisplayClass73_0_t27C90D8EABA13D19C1EDDCCF3E2E7F0FF71E7C8F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass73_0_U3CDOBlendableLocalMoveByU3Eb__1_mA6F95723C2577E0B813677938AA15C8ECC32650E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___x0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___x0;
		__this->set_to_0(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_target_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_4;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m3FC8E7396DC9AE67297999E35BBEEFB003D2949D (U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0::<DOBlendableRotateBy>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass74_0_U3CDOBlendableRotateByU3Eb__0_m4BE6FF74A2B692534A9AFAB6381D83D16DDD8674 (U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass74_0::<DOBlendableRotateBy>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CDOBlendableRotateByU3Eb__1_m0E5F1C80F08026327CFFDB5C33D1FE2E7C8DD341 (U3CU3Ec__DisplayClass74_0_t5B88A0AE13DA27F60EB4CE03AD47DD48C3F05DD0 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass74_0_U3CDOBlendableRotateByU3Eb__1_m0E5F1C80F08026327CFFDB5C33D1FE2E7C8DD341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___x0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_1, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___x0;
		__this->set_to_0(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_target_1();
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_target_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_9, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_8, L_10, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_11, L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_7, L_15, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0__ctor_m3589A7984D8B876313D44D708743951FA8676D9E (U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0::<DOBlendableLocalRotateBy>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  U3CU3Ec__DisplayClass75_0_U3CDOBlendableLocalRotateByU3Eb__0_m98F7439A903909947E4B139E955733D38C90710E (U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass75_0::<DOBlendableLocalRotateBy>b__1(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass75_0_U3CDOBlendableLocalRotateByU3Eb__1_m7955070105829FB6DF8C3A18DDA94D0474AABE33 (U3CU3Ec__DisplayClass75_0_t55ABBD215EED3ABE86D15D592BB40CD0350C6670 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass75_0_U3CDOBlendableLocalRotateByU3Eb__1_m7955070105829FB6DF8C3A18DDA94D0474AABE33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___x0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_1, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___x0;
		__this->set_to_0(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_target_1();
		NullCheck(L_5);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_target_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_9, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_8, L_10, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_11, L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_7, L_15, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_m84F15EA315791BC5EE2645268F0856B0E9C95B37 (U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0::<DOBlendablePunchRotation>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass76_0_U3CDOBlendablePunchRotationU3Eb__0_mD7A2B6449D0481F81D76BDEA2E2BD853BC146E16 (U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass76_0::<DOBlendablePunchRotation>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0_U3CDOBlendablePunchRotationU3Eb__1_mB7AEE5FAD64D3DB03128FE8D7FF8B4F18488898C (U3CU3Ec__DisplayClass76_0_t22A239AB4C97263ED0948DDF035E4CD38788EDF9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass76_0_U3CDOBlendablePunchRotationU3Eb__1_mB7AEE5FAD64D3DB03128FE8D7FF8B4F18488898C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_to_0();
		float L_1 = L_0->get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_to_0();
		float L_3 = L_2->get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = __this->get_address_of_to_0();
		float L_5 = L_4->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___v0;
		float L_8 = L_7.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___v0;
		float L_10 = L_9.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___v0;
		float L_12 = L_11.get_z_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_8, L_10, L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_14, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___v0;
		__this->set_to_0(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_target_1();
		NullCheck(L_18);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_target_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_22, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_21, L_23, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_24, L_25, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_20, L_28, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_mDCF6AC34E072178A7D849928EFCDB9B6A5FFE460 (U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0::<DOBlendableScaleBy>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass77_0_U3CDOBlendableScaleByU3Eb__0_mA57142B9553B91DA851B7C5A088304168F760001 (U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_to_0();
		return L_0;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass77_0::<DOBlendableScaleBy>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0_U3CDOBlendableScaleByU3Eb__1_mB9D4AB7363F4EF3D4E8D5DF08A82F4A3114DF196 (U3CU3Ec__DisplayClass77_0_tB6FA7762925BBB9F28DE18B89409871E1B893874 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass77_0_U3CDOBlendableScaleByU3Eb__1_mB9D4AB7363F4EF3D4E8D5DF08A82F4A3114DF196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___x0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_to_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___x0;
		__this->set_to_0(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_target_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = L_4;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_5, L_8, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m9B1D5CA05803F85EFA403BBC8E63CF70B76BABA2 (U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect DG.Tweening.ShortcutExtensions_<>c__DisplayClass7_0::<DORect>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  U3CU3Ec__DisplayClass7_0_U3CDORectU3Eb__0_m21CB95680E62A06ABF0826A526778426D75DF4CA (U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = Camera_get_rect_m3570AA056526AB01C7733B4E7BE69F332E128A08(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass7_0::<DORect>b__1(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CDORectU3Eb__1_mA1FDA196595FE2F10895574BFF19F4F7F4A47D34 (U3CU3Ec__DisplayClass7_0_t6E4F61EAA8C292D846458352901920AF71E89282 * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_1 = ___x0;
		NullCheck(L_0);
		Camera_set_rect_m6DB9964EA6E519E2B07561C8CE6AA423980FEC11(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m92751C17E461363493841A47DAAD0B30853D1993 (U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass8_0::<DOShakePosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass8_0_U3CDOShakePositionU3Eb__0_m4B2481D6960F1D39A8AE8790B05DAD0D883C07FD (U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass8_0::<DOShakePosition>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOShakePositionU3Eb__1_mA530CC057822C42D0B24E3248784C38B5A0235A0 (U3CU3Ec__DisplayClass8_0_tF8E6133AF4996831457151D2E9849C83754F6A3A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___x0;
		NullCheck(L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m17133373A6F40A05F642DDA2C7ECC357F7D99422 (U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.ShortcutExtensions_<>c__DisplayClass9_0::<DOShakePosition>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec__DisplayClass9_0_U3CDOShakePositionU3Eb__0_m41F7385733754C2261CA5A7FB626778D09A67C29 (U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6 * __this, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.ShortcutExtensions_<>c__DisplayClass9_0::<DOShakePosition>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CDOShakePositionU3Eb__1_mF63EAFC59A60FD50C14B7424B0FBEEC30ACFC145 (U3CU3Ec__DisplayClass9_0_tBA6280172AA9F4C7E8A7F2806301D0304AFEEDF6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___x0, const RuntimeMethod* method)
{
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_target_0();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___x0;
		NullCheck(L_1);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_1, L_2, /*hidden argument*/NULL);
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
// System.Boolean DG.Tweening.Tween::get_isRelative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_isRelative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisRelativeU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CactiveU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_active_m8D47B88C314554514ED04A6A0C921F83F6B40168 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CactiveU3Ek__BackingField_39(L_0);
		return;
	}
}
// System.Single DG.Tweening.Tween::get_fullPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tween_get_fullPosition_m13F19AD187ACFB01158A1A78082F31B88B31B0D6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = TweenExtensions_Elapsed_mBE57D458C7EA7B2179254A30A352075E41D4C772(__this, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_fullPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_fullPosition_m0A71616E741641A187BD3614353FD7E87E64BAB4 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		bool L_1 = __this->get_isPlaying_50();
		TweenExtensions_Goto_mFEDCD28E24DBB38B50C6BEA494F20687500C6E79(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DG.Tweening.Tween::get_hasLoops()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_loops_27();
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_loops_27();
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Boolean DG.Tweening.Tween::get_playedOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CplayedOnceU3Ek__BackingField_46();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_playedOnce(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CplayedOnceU3Ek__BackingField_46(L_0);
		return;
	}
}
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CpositionU3Ek__BackingField_47();
		return L_0;
	}
}
// System.Void DG.Tweening.Tween::set_position(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_47(L_0);
		return;
	}
}
// System.Void DG.Tweening.Tween::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween_Reset_m19FD86205257E86C439326E56D63778D37C9CB25 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		__this->set_timeScale_4((1.0f));
		__this->set_isBackwards_5((bool)0);
		__this->set_id_7(NULL);
		__this->set_stringId_8((String_t*)NULL);
		__this->set_intId_9(((int32_t)-999));
		__this->set_isIndependentUpdate_12((bool)0);
		V_0 = (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL;
		__this->set_onKill_19((TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_1 = L_0;
		V_0 = L_1;
		__this->set_onStepComplete_17(L_1);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_2 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = L_2;
		V_0 = L_3;
		__this->set_onComplete_18(L_3);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_4 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_5 = L_4;
		V_0 = L_5;
		__this->set_onUpdate_16(L_5);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_7 = L_6;
		V_0 = L_7;
		__this->set_onRewind_15(L_7);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_8 = V_0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_9 = L_8;
		V_0 = L_9;
		__this->set_onPlay_13(L_9);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_10 = V_0;
		((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)__this)->set_onStart_3(L_10);
		__this->set_onWaypointChange_20((TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 *)NULL);
		__this->set_debugTargetId_35((String_t*)NULL);
		__this->set_target_10(NULL);
		__this->set_isFrom_21((bool)0);
		__this->set_isBlendable_22((bool)0);
		__this->set_isSpeedBased_24((bool)0);
		__this->set_duration_26((0.0f));
		__this->set_loops_27(1);
		__this->set_delay_29((0.0f));
		Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190_inline(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_customEase_32((EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 *)NULL);
		__this->set_isSequenced_40((bool)0);
		__this->set_sequenceParent_41((Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 *)NULL);
		__this->set_specialStartupMode_43(0);
		int32_t L_11 = 0;
		V_1 = (bool)L_11;
		Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB_inline(__this, (bool)L_11, /*hidden argument*/NULL);
		bool L_12 = V_1;
		bool L_13 = L_12;
		V_1 = L_13;
		__this->set_startupDone_45(L_13);
		bool L_14 = V_1;
		__this->set_creationLocked_44(L_14);
		int32_t L_15 = 0;
		V_2 = L_15;
		__this->set_completedLoops_49(L_15);
		int32_t L_16 = V_2;
		float L_17 = (((float)((float)L_16)));
		V_3 = L_17;
		__this->set_fullDuration_48(L_17);
		float L_18 = V_3;
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline(__this, L_18, /*hidden argument*/NULL);
		int32_t L_19 = 0;
		V_1 = (bool)L_19;
		__this->set_isComplete_51((bool)L_19);
		bool L_20 = V_1;
		__this->set_isPlaying_50(L_20);
		__this->set_elapsedDelay_52((0.0f));
		__this->set_delayComplete_53((bool)1);
		__this->set_miscInt_54((-1));
		return;
	}
}
// System.Single DG.Tweening.Tween::UpdateDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tween_UpdateDelay_mEA7AF731935210EF6B87485EB0F2A342C49B73F6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___elapsed0, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_DoGoto_mB1D6E7D8535744E5030B21129B9B396CEC6BBE60 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___toPosition1, int32_t ___toCompletedLoops2, int32_t ___updateMode3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B29_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B45_0 = NULL;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B46_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B66_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = L_0->get_startupDone_45();
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean DG.Tweening.Tween::Startup() */, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___updateMode3;
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB_inline(L_7, (bool)1, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_8 = ___t0;
		NullCheck(L_8);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_9 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_8)->get_onStart_3();
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		NullCheck(L_10);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_11 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_10)->get_onStart_3();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_12 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_11, L_12, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_13 = ___t0;
		NullCheck(L_13);
		bool L_14 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0043;
		}
	}
	{
		return (bool)1;
	}

IL_0043:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		NullCheck(L_15);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_16 = L_15->get_onPlay_13();
		if (!L_16)
		{
			goto IL_0062;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_17 = ___t0;
		NullCheck(L_17);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_18 = L_17->get_onPlay_13();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_18, L_19, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_20 = ___t0;
		NullCheck(L_20);
		bool L_21 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0062;
		}
	}
	{
		return (bool)1;
	}

IL_0062:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_22 = ___t0;
		NullCheck(L_22);
		float L_23 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_24 = ___t0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_completedLoops_49();
		V_1 = L_25;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_26 = ___t0;
		int32_t L_27 = ___toCompletedLoops2;
		NullCheck(L_26);
		L_26->set_completedLoops_49(L_27);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_28 = ___t0;
		NullCheck(L_28);
		float L_29 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_28, /*hidden argument*/NULL);
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_30 = V_1;
		G_B14_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B14_0 = 0;
	}

IL_008e:
	{
		V_2 = (bool)G_B14_0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_31 = ___t0;
		NullCheck(L_31);
		bool L_32 = L_31->get_isComplete_51();
		V_3 = L_32;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_33 = ___t0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_loops_27();
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00b3;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_35 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_36 = ___t0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_completedLoops_49();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_38 = ___t0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_loops_27();
		NullCheck(L_35);
		L_35->set_isComplete_51((bool)((((int32_t)L_37) == ((int32_t)L_39))? 1 : 0));
	}

IL_00b3:
	{
		V_4 = 0;
		int32_t L_40 = ___updateMode3;
		if (L_40)
		{
			goto IL_0108;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_41 = ___t0;
		NullCheck(L_41);
		bool L_42 = L_41->get_isBackwards_5();
		if (!L_42)
		{
			goto IL_00f0;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_43 = ___t0;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_completedLoops_49();
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00db;
		}
	}
	{
		float L_46 = ___toPosition1;
		if ((!(((float)L_46) <= ((float)(0.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		bool L_47 = V_2;
		if (!L_47)
		{
			goto IL_00d8;
		}
	}

IL_00d5:
	{
		G_B24_0 = 0;
		goto IL_00e3;
	}

IL_00d8:
	{
		G_B24_0 = 1;
		goto IL_00e3;
	}

IL_00db:
	{
		int32_t L_48 = V_1;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_49 = ___t0;
		NullCheck(L_49);
		int32_t L_50 = L_49->get_completedLoops_49();
		G_B24_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_50));
	}

IL_00e3:
	{
		V_4 = G_B24_0;
		bool L_51 = V_3;
		if (!L_51)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1));
		goto IL_0120;
	}

IL_00f0:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_53 = ___t0;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_completedLoops_49();
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) > ((int32_t)L_55)))
		{
			goto IL_00fc;
		}
	}
	{
		G_B29_0 = 0;
		goto IL_0104;
	}

IL_00fc:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_56 = ___t0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_completedLoops_49();
		int32_t L_58 = V_1;
		G_B29_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)L_58));
	}

IL_0104:
	{
		V_4 = G_B29_0;
		goto IL_0120;
	}

IL_0108:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_59 = ___t0;
		NullCheck(L_59);
		int32_t L_60 = ((ABSSequentiable_tDA1366907669973CC0BB553EF4159D45FC46A757 *)L_59)->get_tweenType_0();
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_61 = V_1;
		int32_t L_62 = ___toCompletedLoops2;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_62));
		int32_t L_63 = V_4;
		if ((((int32_t)L_63) >= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_64 = V_4;
		V_4 = ((-L_64));
	}

IL_0120:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_65 = ___t0;
		float L_66 = ___toPosition1;
		NullCheck(L_65);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline(L_65, L_66, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_67 = ___t0;
		NullCheck(L_67);
		float L_68 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_67, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_69 = ___t0;
		NullCheck(L_69);
		float L_70 = L_69->get_duration_26();
		if ((!(((float)L_68) > ((float)L_70))))
		{
			goto IL_0143;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_71 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_72 = ___t0;
		NullCheck(L_72);
		float L_73 = L_72->get_duration_26();
		NullCheck(L_71);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline(L_71, L_73, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_0143:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_74 = ___t0;
		NullCheck(L_74);
		float L_75 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_74, /*hidden argument*/NULL);
		if ((!(((float)L_75) <= ((float)(0.0f)))))
		{
			goto IL_017a;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_76 = ___t0;
		NullCheck(L_76);
		int32_t L_77 = L_76->get_completedLoops_49();
		if ((((int32_t)L_77) > ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_78 = ___t0;
		NullCheck(L_78);
		bool L_79 = L_78->get_isComplete_51();
		if (!L_79)
		{
			goto IL_016f;
		}
	}

IL_0161:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_80 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_81 = ___t0;
		NullCheck(L_81);
		float L_82 = L_81->get_duration_26();
		NullCheck(L_80);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline(L_80, L_82, /*hidden argument*/NULL);
		goto IL_017a;
	}

IL_016f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_83 = ___t0;
		NullCheck(L_83);
		Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline(L_83, (0.0f), /*hidden argument*/NULL);
	}

IL_017a:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_84 = ___t0;
		NullCheck(L_84);
		bool L_85 = L_84->get_isPlaying_50();
		V_5 = L_85;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_86 = ___t0;
		NullCheck(L_86);
		bool L_87 = L_86->get_isPlaying_50();
		if (!L_87)
		{
			goto IL_01c1;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_88 = ___t0;
		NullCheck(L_88);
		bool L_89 = L_88->get_isBackwards_5();
		if (L_89)
		{
			goto IL_01a3;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_90 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_91 = ___t0;
		NullCheck(L_91);
		bool L_92 = L_91->get_isComplete_51();
		NullCheck(L_90);
		L_90->set_isPlaying_50((bool)((((int32_t)L_92) == ((int32_t)0))? 1 : 0));
		goto IL_01c1;
	}

IL_01a3:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_93 = ___t0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_94 = ___t0;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_completedLoops_49();
		G_B44_0 = L_93;
		if (L_95)
		{
			G_B45_0 = L_93;
			goto IL_01bb;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_96 = ___t0;
		NullCheck(L_96);
		float L_97 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_96, /*hidden argument*/NULL);
		G_B46_0 = ((!(((float)L_97) <= ((float)(0.0f))))? 1 : 0);
		G_B46_1 = G_B44_0;
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B46_0 = 1;
		G_B46_1 = G_B45_0;
	}

IL_01bc:
	{
		NullCheck(G_B46_1);
		G_B46_1->set_isPlaying_50((bool)G_B46_0);
	}

IL_01c1:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_98 = ___t0;
		NullCheck(L_98);
		bool L_99 = Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_01fa;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_100 = ___t0;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_loopType_28();
		if ((!(((uint32_t)L_101) == ((uint32_t)1))))
		{
			goto IL_01fa;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_102 = ___t0;
		NullCheck(L_102);
		float L_103 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_102, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_104 = ___t0;
		NullCheck(L_104);
		float L_105 = L_104->get_duration_26();
		if ((((float)L_103) < ((float)L_105)))
		{
			goto IL_01ed;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_106 = ___t0;
		NullCheck(L_106);
		int32_t L_107 = L_106->get_completedLoops_49();
		G_B53_0 = ((((int32_t)((int32_t)((int32_t)L_107%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		goto IL_01fb;
	}

IL_01ed:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_108 = ___t0;
		NullCheck(L_108);
		int32_t L_109 = L_108->get_completedLoops_49();
		G_B53_0 = ((!(((uint32_t)((int32_t)((int32_t)L_109%(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_01fb;
	}

IL_01fa:
	{
		G_B53_0 = 0;
	}

IL_01fb:
	{
		V_6 = (bool)G_B53_0;
		bool L_110 = V_2;
		if (L_110)
		{
			goto IL_0249;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_111 = ___t0;
		NullCheck(L_111);
		int32_t L_112 = L_111->get_loopType_28();
		if (L_112)
		{
			goto IL_0228;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_113 = ___t0;
		NullCheck(L_113);
		int32_t L_114 = L_113->get_completedLoops_49();
		int32_t L_115 = V_1;
		if ((((int32_t)L_114) == ((int32_t)L_115)))
		{
			goto IL_0228;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_116 = ___t0;
		NullCheck(L_116);
		int32_t L_117 = L_116->get_loops_27();
		if ((((int32_t)L_117) == ((int32_t)(-1))))
		{
			goto IL_0246;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_118 = ___t0;
		NullCheck(L_118);
		int32_t L_119 = L_118->get_completedLoops_49();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_120 = ___t0;
		NullCheck(L_120);
		int32_t L_121 = L_120->get_loops_27();
		if ((((int32_t)L_119) < ((int32_t)L_121)))
		{
			goto IL_0246;
		}
	}

IL_0228:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_122 = ___t0;
		NullCheck(L_122);
		float L_123 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_122, /*hidden argument*/NULL);
		if ((!(((float)L_123) <= ((float)(0.0f)))))
		{
			goto IL_0243;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_124 = ___t0;
		NullCheck(L_124);
		int32_t L_125 = L_124->get_completedLoops_49();
		G_B63_0 = ((((int32_t)((((int32_t)L_125) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_024a;
	}

IL_0243:
	{
		G_B63_0 = 0;
		goto IL_024a;
	}

IL_0246:
	{
		G_B63_0 = 1;
		goto IL_024a;
	}

IL_0249:
	{
		G_B63_0 = 0;
	}

IL_024a:
	{
		if (G_B63_0)
		{
			goto IL_024f;
		}
	}
	{
		G_B66_0 = 0;
		goto IL_0250;
	}

IL_024f:
	{
		G_B66_0 = 1;
	}

IL_0250:
	{
		V_7 = G_B66_0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_126 = ___t0;
		float L_127 = V_0;
		int32_t L_128 = V_1;
		int32_t L_129 = V_4;
		bool L_130 = V_6;
		int32_t L_131 = ___updateMode3;
		int32_t L_132 = V_7;
		NullCheck(L_126);
		bool L_133 = VirtFuncInvoker6< bool, float, int32_t, int32_t, bool, int32_t, int32_t >::Invoke(8 /* System.Boolean DG.Tweening.Tween::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice) */, L_126, L_127, L_128, L_129, L_130, L_131, L_132);
		if (!L_133)
		{
			goto IL_0265;
		}
	}
	{
		return (bool)1;
	}

IL_0265:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_134 = ___t0;
		NullCheck(L_134);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_135 = L_134->get_onUpdate_16();
		if (!L_135)
		{
			goto IL_027e;
		}
	}
	{
		int32_t L_136 = ___updateMode3;
		if ((((int32_t)L_136) == ((int32_t)2)))
		{
			goto IL_027e;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_137 = ___t0;
		NullCheck(L_137);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_138 = L_137->get_onUpdate_16();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_139 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_138, L_139, /*hidden argument*/NULL);
	}

IL_027e:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_140 = ___t0;
		NullCheck(L_140);
		float L_141 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_140, /*hidden argument*/NULL);
		if ((!(((float)L_141) <= ((float)(0.0f)))))
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_142 = ___t0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_completedLoops_49();
		if ((((int32_t)L_143) > ((int32_t)0)))
		{
			goto IL_02ac;
		}
	}
	{
		bool L_144 = V_2;
		if (L_144)
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_145 = ___t0;
		NullCheck(L_145);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_146 = L_145->get_onRewind_15();
		if (!L_146)
		{
			goto IL_02ac;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_147 = ___t0;
		NullCheck(L_147);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_148 = L_147->get_onRewind_15();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_149 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_148, L_149, /*hidden argument*/NULL);
	}

IL_02ac:
	{
		int32_t L_150 = V_4;
		if ((((int32_t)L_150) <= ((int32_t)0)))
		{
			goto IL_02e2;
		}
	}
	{
		int32_t L_151 = ___updateMode3;
		if (L_151)
		{
			goto IL_02e2;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_152 = ___t0;
		NullCheck(L_152);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_153 = L_152->get_onStepComplete_17();
		if (!L_153)
		{
			goto IL_02e2;
		}
	}
	{
		V_8 = 0;
		goto IL_02dc;
	}

IL_02c1:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_154 = ___t0;
		NullCheck(L_154);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_155 = L_154->get_onStepComplete_17();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_156 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_155, L_156, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_157 = ___t0;
		NullCheck(L_157);
		bool L_158 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_157, /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_02e2;
		}
	}
	{
		int32_t L_159 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_02dc:
	{
		int32_t L_160 = V_8;
		int32_t L_161 = V_4;
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_02c1;
		}
	}

IL_02e2:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_162 = ___t0;
		NullCheck(L_162);
		bool L_163 = L_162->get_isComplete_51();
		if (!L_163)
		{
			goto IL_0306;
		}
	}
	{
		bool L_164 = V_3;
		if (L_164)
		{
			goto IL_0306;
		}
	}
	{
		int32_t L_165 = ___updateMode3;
		if ((((int32_t)L_165) == ((int32_t)3)))
		{
			goto IL_0306;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_166 = ___t0;
		NullCheck(L_166);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_167 = L_166->get_onComplete_18();
		if (!L_167)
		{
			goto IL_0306;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_168 = ___t0;
		NullCheck(L_168);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_169 = L_168->get_onComplete_18();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_170 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_169, L_170, /*hidden argument*/NULL);
	}

IL_0306:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_171 = ___t0;
		NullCheck(L_171);
		bool L_172 = L_171->get_isPlaying_50();
		bool L_173 = V_5;
		if (!((int32_t)((int32_t)((((int32_t)L_172) == ((int32_t)0))? 1 : 0)&(int32_t)L_173)))
		{
			goto IL_0339;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_174 = ___t0;
		NullCheck(L_174);
		bool L_175 = L_174->get_isComplete_51();
		if (!L_175)
		{
			goto IL_0324;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_176 = ___t0;
		NullCheck(L_176);
		bool L_177 = L_176->get_autoKill_25();
		if (L_177)
		{
			goto IL_0339;
		}
	}

IL_0324:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_178 = ___t0;
		NullCheck(L_178);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_179 = L_178->get_onPause_14();
		if (!L_179)
		{
			goto IL_0339;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_180 = ___t0;
		NullCheck(L_180);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_181 = L_180->get_onPause_14();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_182 = ___t0;
		Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC(L_181, L_182, /*hidden argument*/NULL);
	}

IL_0339:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_183 = ___t0;
		NullCheck(L_183);
		bool L_184 = L_183->get_autoKill_25();
		if (!L_184)
		{
			goto IL_0348;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_185 = ___t0;
		NullCheck(L_185);
		bool L_186 = L_185->get_isComplete_51();
		return L_186;
	}

IL_0348:
	{
		return (bool)0;
	}
}
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tween_OnTweenCallback_m1BD0FE3B2694BD9195B70FD7A43216F3A7E788DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		bool L_0 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_useSafeMode_1();
		if (!L_0)
		{
			goto IL_0048;
		}
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_1 = ___callback0;
		NullCheck(L_1);
		TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E(L_1, /*hidden argument*/NULL);
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			bool L_2 = Debugger_ShouldLogSafeModeCapturedError_m95BE116E00DBF31A416096091AA64D1F23DD6513(/*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_0039;
			}
		}

IL_0017:
		{
			Exception_t * L_3 = V_0;
			NullCheck(L_3);
			MethodBase_t * L_4 = Exception_get_TargetSite_m8EEF23C6BD91447A8DC7CA686737D1E1C9FC834B(L_3, /*hidden argument*/NULL);
			Exception_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
			Exception_t * L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_7);
			String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralF25D7E65A8BD2882BB6473AF9F51EFECCE24B0A3, L_4, L_6, L_8, /*hidden argument*/NULL);
			Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t1;
			Debugger_LogSafeModeCapturedError_mF24B818E481B2CA0C8626606801C63F04A3ADDED(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
			SafeModeReport_Add_m1596E2CEE9DC3BBA6649AA1326936821F6995891((SafeModeReport_t7322E92D043786EC9B23410CF9536FFC1085E12A *)(((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_address_of_safeModeReport_27()), 2, /*hidden argument*/NULL);
			V_1 = (bool)0;
			goto IL_0050;
		}
	} // end catch (depth: 1)

IL_0048:
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_11 = ___callback0;
		NullCheck(L_11);
		TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E(L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return (bool)1;
	}

IL_0050:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Void DG.Tweening.Tween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		__this->set_intId_9(((int32_t)-999));
		__this->set_activeId_42((-1));
		__this->set_delayComplete_53((bool)1);
		__this->set_miscInt_54((-1));
		ABSSequentiable__ctor_mC0A3D985974279B385789BC4FA4EFD616033DD31(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m55F59E9F7AA5CC1559E7CA16B1A98A6852F1E864 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void DG.Tweening.TweenCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_Invoke_mD2FE3DA243C1DC77043EF838081DC7BBD097DA9E (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult DG.Tweening.TweenCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenCallback_BeginInvoke_m6971EB2B3843E5A9E4ED89FB60626B8E12A3AB65 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void DG.Tweening.TweenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback_EndInvoke_m29A82E195EE45C05780890F98577BADE319C0F72 (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m2D7930B127444FC11872F868A7B581892526DD1F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Complete(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___withCallbacks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Complete_m35EEF42CE09E927A818443B4E25A5B5BD1BE7D4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B14_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B14_1 = NULL;
	int32_t G_B13_0 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B13_1 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B15_2 = NULL;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		bool L_12 = ___withCallbacks1;
		G_B13_0 = 1;
		G_B13_1 = L_11;
		if (L_12)
		{
			G_B14_0 = 1;
			G_B14_1 = L_11;
			goto IL_0048;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Complete_m7E5BF65A61D0EEB6CF4605C35F9D6B56EF6CF7EC(G_B15_2, (bool)G_B15_1, G_B15_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Flip(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Flip_m5F14E6305C5E7C768BB488FF5C9FCE831EDEA805 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Flip_m5F14E6305C5E7C768BB488FF5C9FCE831EDEA805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Flip_m7B5284D67687677728C4DCAC9182B790618A9123(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::ForceInit(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_ForceInit_m30E3B2E7B69945EC6F8B3F697B14F4247EBCC7B4 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_ForceInit_m30E3B2E7B69945EC6F8B3F697B14F4247EBCC7B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_ForceInit_mFAEA2CEBA55C724832D90D813FE1B442F8EC0B31(L_11, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Goto(DG.Tweening.Tween,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Goto_mFEDCD28E24DBB38B50C6BEA494F20687500C6E79 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		float L_1 = ___to1;
		bool L_2 = ___andPlay2;
		TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B(L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::GotoWithCallbacks(DG.Tweening.Tween,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_GotoWithCallbacks_m3941B931118E461258E3689581C1345B8A7EF277 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		float L_1 = ___to1;
		bool L_2 = ___andPlay2;
		TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B(L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::DoGoto(DG.Tweening.Tween,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___to1, bool ___andPlay2, bool ___withCallbacks3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_DoGoto_m343B80384C6575D2EF39892E0D18AAADACCFA76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B18_0 = false;
	float G_B18_1 = 0.0f;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B18_2 = NULL;
	bool G_B17_0 = false;
	float G_B17_1 = 0.0f;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B17_2 = NULL;
	int32_t G_B19_0 = 0;
	bool G_B19_1 = false;
	float G_B19_2 = 0.0f;
	Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * G_B19_3 = NULL;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		float L_11 = ___to1;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		___to1 = (0.0f);
	}

IL_004f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_12 = ___t0;
		NullCheck(L_12);
		bool L_13 = L_12->get_startupDone_45();
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_ForceInit_mFAEA2CEBA55C724832D90D813FE1B442F8EC0B31(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_005e:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		float L_16 = ___to1;
		bool L_17 = ___andPlay2;
		bool L_18 = ___withCallbacks3;
		G_B17_0 = L_17;
		G_B17_1 = L_16;
		G_B17_2 = L_15;
		if (L_18)
		{
			G_B18_0 = L_17;
			G_B18_1 = L_16;
			G_B18_2 = L_15;
			goto IL_0067;
		}
	}
	{
		G_B19_0 = 1;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_0068;
	}

IL_0067:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Goto_mB5397C1984C440757DAC5F491FE9D7D97F88DBAF(G_B19_3, G_B19_2, G_B19_1, G_B19_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mE9A3C52FEC438801BEC9CC96435FFF18C72C8C44 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___complete1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Kill_mE9A3C52FEC438801BEC9CC96435FFF18C72C8C44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		bool L_0 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_initialized_29();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}

IL_0031:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_8 = ___t0;
		NullCheck(L_8);
		bool L_9 = L_8->get_isSequenced_40();
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}

IL_0048:
	{
		bool L_12 = ___complete1;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_13 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Complete_m7E5BF65A61D0EEB6CF4605C35F9D6B56EF6CF7EC(L_13, (bool)1, 1, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		NullCheck(L_14);
		bool L_15 = L_14->get_autoKill_25();
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_16 = ___t0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_loops_27();
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		return;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		bool L_18 = ((TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_StaticFields*)il2cpp_codegen_static_fields_for(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var))->get_isUpdateLoop_25();
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		NullCheck(L_19);
		Tween_set_active_m8D47B88C314554514ED04A6A0C921F83F6B40168_inline(L_19, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_0075:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_20 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Despawn_mCBBD003E4779D54699E368376958FB6BB681E63D(L_20, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::ManualUpdate(DG.Tweening.Tween,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_ManualUpdate_m76A65B041D8E0095E5106F6B16913091652887C2 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___deltaTime1, float ___unscaledDeltaTime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_ManualUpdate_m76A65B041D8E0095E5106F6B16913091652887C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		float L_12 = ___deltaTime1;
		float L_13 = ___unscaledDeltaTime2;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Update_mE374B5C03C7725F973F3AF78A20CA7A6B9124F89(L_11, L_12, L_13, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::PlayBackwards(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_PlayBackwards_mD35BBEE7660D338C3747BB216444BF15C45A97E1 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_PlayBackwards_mD35BBEE7660D338C3747BB216444BF15C45A97E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_PlayBackwards_m30A0A66D801549233E04D406718BAA299711B7CA(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::PlayForward(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_PlayForward_mCAE462ED14463F38AA0DB324B4607246C975DA78 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_PlayForward_mCAE462ED14463F38AA0DB324B4607246C975DA78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_PlayForward_mF14238D7B13F5E7EA0BEF7DD672AEA65365F8BE6(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Restart(DG.Tweening.Tween,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Restart_m37CD65586342B552F7B4F3FCD7D005CC2BBA7DA0 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, float ___changeDelayTo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Restart_m37CD65586342B552F7B4F3FCD7D005CC2BBA7DA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		bool L_12 = ___includeDelay1;
		float L_13 = ___changeDelayTo2;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Restart_m425C116003BE9C64069C89548112EDCC5DD420C2(L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeDelay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_Rewind_mC401886E7657C9525C13771792B4B7A4684C757C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		bool L_12 = ___includeDelay1;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Rewind_mEEBAAC2FEA9A2CE7B3739002EB030D0AADD8C150(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::SmoothRewind(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_SmoothRewind_mE96341406886AA0019E9F899FA744707A5BB4060 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_SmoothRewind_mE96341406886AA0019E9F899FA744707A5BB4060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_SmoothRewind_m2AC861C9D6BC5343D6D40F3A5AF3BE53668A57ED(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::TogglePause(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_TogglePause_mB413085220461740827A9B6515D71FFEFCF803CB (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_TogglePause_mB413085220461740827A9B6515D71FFEFCF803CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_TogglePause_m1EDBB6356ECB219E9E59DA20605ABBA51F35036B(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DG.Tweening.TweenExtensions::GotoWaypoint(DG.Tweening.Tween,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_GotoWaypoint_mAB5060D8435C68CA9986A7F1619E62FB751AFBAD (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, int32_t ___waypointIndex1, bool ___andPlay2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_GotoWaypoint_mAB5060D8435C68CA9986A7F1619E62FB751AFBAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B36_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}

IL_0012:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}

IL_0029:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		V_0 = ((TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 *)IsInstClass((RuntimeObject*)L_11, TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_il2cpp_TypeInfo_var));
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_12 = V_0;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_13 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		Debugger_LogNonPathTween_m17D900AB10880767CE4F723D865282E7302E360F(L_14, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}

IL_0059:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		NullCheck(L_15);
		bool L_16 = L_15->get_startupDone_45();
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_17 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_ForceInit_mFAEA2CEBA55C724832D90D813FE1B442F8EC0B31(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_0068:
	{
		int32_t L_18 = ___waypointIndex1;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		___waypointIndex1 = 0;
		goto IL_0094;
	}

IL_0071:
	{
		int32_t L_19 = ___waypointIndex1;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_20 = V_0;
		NullCheck(L_20);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_21 = L_20->get_changeValue_59();
		NullCheck(L_21);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_22 = L_21->get_wps_4();
		NullCheck(L_22);
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))), (int32_t)1)))))
		{
			goto IL_0094;
		}
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_23 = V_0;
		NullCheck(L_23);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_24 = L_23->get_changeValue_59();
		NullCheck(L_24);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = L_24->get_wps_4();
		NullCheck(L_25);
		___waypointIndex1 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))), (int32_t)1));
	}

IL_0094:
	{
		V_1 = (0.0f);
		V_4 = 0;
		goto IL_00b6;
	}

IL_009f:
	{
		float L_26 = V_1;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_27 = V_0;
		NullCheck(L_27);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_28 = L_27->get_changeValue_59();
		NullCheck(L_28);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_29 = L_28->get_wpLengths_3();
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_1 = ((float)il2cpp_codegen_add((float)L_26, (float)L_32));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = ___waypointIndex1;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)))))
		{
			goto IL_009f;
		}
	}
	{
		float L_36 = V_1;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_37 = V_0;
		NullCheck(L_37);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_38 = L_37->get_changeValue_59();
		NullCheck(L_38);
		float L_39 = L_38->get_length_9();
		V_2 = ((float)((float)L_36/(float)L_39));
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_40 = ___t0;
		NullCheck(L_40);
		bool L_41 = Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0104;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_42 = ___t0;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_loopType_28();
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0104;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_44 = ___t0;
		NullCheck(L_44);
		float L_45 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_44, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_46 = ___t0;
		NullCheck(L_46);
		float L_47 = L_46->get_duration_26();
		if ((((float)L_45) < ((float)L_47)))
		{
			goto IL_00f7;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_48 = ___t0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_completedLoops_49();
		G_B31_0 = ((((int32_t)((int32_t)((int32_t)L_49%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		goto IL_0105;
	}

IL_00f7:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_50 = ___t0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_completedLoops_49();
		G_B31_0 = ((!(((uint32_t)((int32_t)((int32_t)L_51%(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0105;
	}

IL_0104:
	{
		G_B31_0 = 0;
	}

IL_0105:
	{
		if (!G_B31_0)
		{
			goto IL_010f;
		}
	}
	{
		float L_52 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_52));
	}

IL_010f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_53 = ___t0;
		NullCheck(L_53);
		bool L_54 = L_53->get_isComplete_51();
		if (L_54)
		{
			goto IL_011f;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_55 = ___t0;
		NullCheck(L_55);
		int32_t L_56 = L_55->get_completedLoops_49();
		G_B36_0 = L_56;
		goto IL_0127;
	}

IL_011f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_57 = ___t0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_completedLoops_49();
		G_B36_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)1));
	}

IL_0127:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_59 = ___t0;
		NullCheck(L_59);
		float L_60 = L_59->get_duration_26();
		float L_61 = V_2;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_62 = ___t0;
		NullCheck(L_62);
		float L_63 = L_62->get_duration_26();
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)G_B36_0))), (float)L_60)), (float)((float)il2cpp_codegen_multiply((float)L_61, (float)L_63))));
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_64 = ___t0;
		float L_65 = V_3;
		bool L_66 = ___andPlay2;
		IL2CPP_RUNTIME_CLASS_INIT(TweenManager_t60E1FACD2C008A79361FCD1037D92408C1DAF386_il2cpp_TypeInfo_var);
		TweenManager_Goto_mB5397C1984C440757DAC5F491FE9D7D97F88DBAF(L_64, L_65, L_66, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForCompletion(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * TweenExtensions_WaitForCompletion_m8AB6E1EB9720C93C527DFF0A517EB84781F9E1E6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForCompletion_m8AB6E1EB9720C93C527DFF0A517EB84781F9E1E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7 = DOTweenComponent_WaitForCompletion_mACA2AED04729C14274C6155968D6E4D28A62318B(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_8 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForRewind(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * TweenExtensions_WaitForRewind_m5FAE01F79989078EB883DC569836C91C2AD8C9E1 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForRewind_m5FAE01F79989078EB883DC569836C91C2AD8C9E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7 = DOTweenComponent_WaitForRewind_mF2EC31BE7243D949E84970075963CC4C32252829(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_8 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForKill(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * TweenExtensions_WaitForKill_mBBD6B16ACABA23AE5E2AF02F9932213F3D535462 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForKill_mBBD6B16ACABA23AE5E2AF02F9932213F3D535462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7 = DOTweenComponent_WaitForKill_m2602E814C81C63D5BC981B56FCB1DCDBDAED02CB(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_8 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * TweenExtensions_WaitForElapsedLoops_mA0CAE5403F1536638695992C549F2607D212184C (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, int32_t ___elapsedLoops1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForElapsedLoops_mA0CAE5403F1536638695992C549F2607D212184C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		int32_t L_7 = ___elapsedLoops1;
		NullCheck(L_5);
		RuntimeObject* L_8 = DOTweenComponent_WaitForElapsedLoops_m09F7AAF0881DD3AF6E4F491CFDC89800CB4777CD(L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_9 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.YieldInstruction DG.Tweening.TweenExtensions::WaitForPosition(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * TweenExtensions_WaitForPosition_m49352D4E3C9246A604A29454745BC0319EF77AC4 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForPosition_m49352D4E3C9246A604A29454745BC0319EF77AC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		float L_7 = ___position1;
		NullCheck(L_5);
		RuntimeObject* L_8 = DOTweenComponent_WaitForPosition_m4CCC8D4B2AD63BCAF3EDB072D6168D07450F1FF0(L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_9 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine DG.Tweening.TweenExtensions::WaitForStart(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * TweenExtensions_WaitForStart_m545578C1A52C9F5DACEAEFB861B4432A111185BC (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_WaitForStart_m545578C1A52C9F5DACEAEFB861B4432A111185BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_4 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		DOTweenComponent_t48118927332C9BFAE792209EEE42AF786370B05F * L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_instance_23();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7 = DOTweenComponent_WaitForStart_m672FFF950259160EA22F50A78E5E376BFA86EAE9(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_8 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 DG.Tweening.TweenExtensions::CompletedLoops(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenExtensions_CompletedLoops_m9DD7EA5BDECEDE4167569D50C661C5B6BDF1B25C (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return 0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_completedLoops_49();
		return L_5;
	}
}
// System.Single DG.Tweening.TweenExtensions::Delay(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Delay_mCCB52119974B8F86DBD153016AA77AFAC2655747 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		float L_5 = L_4->get_delay_29();
		return L_5;
	}
}
// System.Single DG.Tweening.TweenExtensions::ElapsedDelay(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedDelay_mAFAC83ED1B2992594F368AA5C29BF99C6F018DB1 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		float L_5 = L_4->get_elapsedDelay_52();
		return L_5;
	}
}
// System.Single DG.Tweening.TweenExtensions::Duration(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Duration_mAAD8331BEEF18D23A74C88FED754AA1EF7422079 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeLoops1, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		bool L_4 = ___includeLoops1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_loops_27();
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0037;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		float L_8 = L_7->get_duration_26();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_9 = ___t0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_loops_27();
		return ((float)il2cpp_codegen_multiply((float)L_8, (float)(((float)((float)L_10)))));
	}

IL_0037:
	{
		return (std::numeric_limits<float>::infinity());
	}

IL_003d:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		NullCheck(L_11);
		float L_12 = L_11->get_duration_26();
		return L_12;
	}
}
// System.Single DG.Tweening.TweenExtensions::Elapsed(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Elapsed_mBE57D458C7EA7B2179254A30A352075E41D4C772 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeLoops1, const RuntimeMethod* method)
{
	int32_t G_B8_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		bool L_4 = ___includeLoops1;
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t0;
		NullCheck(L_5);
		float L_6 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_5, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		float L_8 = L_7->get_duration_26();
		if ((((float)L_6) >= ((float)L_8)))
		{
			goto IL_0035;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_9 = ___t0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_completedLoops_49();
		G_B8_0 = L_10;
		goto IL_003d;
	}

IL_0035:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_completedLoops_49();
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_003d:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_13 = ___t0;
		NullCheck(L_13);
		float L_14 = L_13->get_duration_26();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		NullCheck(L_15);
		float L_16 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_15, /*hidden argument*/NULL);
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)G_B8_0))), (float)L_14)), (float)L_16));
	}

IL_004d:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_17 = ___t0;
		NullCheck(L_17);
		float L_18 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Single DG.Tweening.TweenExtensions::ElapsedPercentage(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedPercentage_m520A7D1F25EF5FB863C4755C2911743590EB9A8E (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, bool ___includeLoops1, const RuntimeMethod* method)
{
	int32_t G_B10_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		bool L_4 = ___includeLoops1;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t0;
		NullCheck(L_5);
		float L_6 = L_5->get_fullDuration_48();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		return (0.0f);
	}

IL_0032:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		float L_8 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_7, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_9 = ___t0;
		NullCheck(L_9);
		float L_10 = L_9->get_duration_26();
		if ((((float)L_8) >= ((float)L_10)))
		{
			goto IL_0048;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_completedLoops_49();
		G_B10_0 = L_12;
		goto IL_0050;
	}

IL_0048:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_13 = ___t0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_completedLoops_49();
		G_B10_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0050:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_15 = ___t0;
		NullCheck(L_15);
		float L_16 = L_15->get_duration_26();
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_17 = ___t0;
		NullCheck(L_17);
		float L_18 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_17, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		NullCheck(L_19);
		float L_20 = L_19->get_fullDuration_48();
		return ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)G_B10_0))), (float)L_16)), (float)L_18))/(float)L_20));
	}

IL_0067:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_21 = ___t0;
		NullCheck(L_21);
		float L_22 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_21, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_23 = ___t0;
		NullCheck(L_23);
		float L_24 = L_23->get_duration_26();
		return ((float)((float)L_22/(float)L_24));
	}
}
// System.Single DG.Tweening.TweenExtensions::ElapsedDirectionalPercentage(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_ElapsedDirectionalPercentage_m3E5D78FA32B1ECB591CA5E29F9168B76062A6CF2 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t G_B14_0 = 0;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (0.0f);
	}

IL_001c:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		float L_5 = Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline(L_4, /*hidden argument*/NULL);
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_6);
		float L_7 = L_6->get_duration_26();
		V_0 = ((float)((float)L_5/(float)L_7));
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_8 = ___t0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_completedLoops_49();
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		NullCheck(L_10);
		bool L_11 = Tween_get_hasLoops_mE818AFCEEF07E6C5B8FBE839B7A5D5FDC8FB9562(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_12 = ___t0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_loopType_28();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0071;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		NullCheck(L_14);
		bool L_15 = L_14->get_isComplete_51();
		if (L_15)
		{
			goto IL_0056;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_16 = ___t0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_completedLoops_49();
		if (((int32_t)((int32_t)L_17%(int32_t)2)))
		{
			goto IL_006e;
		}
	}

IL_0056:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_18 = ___t0;
		NullCheck(L_18);
		bool L_19 = L_18->get_isComplete_51();
		if (!L_19)
		{
			goto IL_006b;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_20 = ___t0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_completedLoops_49();
		G_B14_0 = ((((int32_t)((int32_t)((int32_t)L_21%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		goto IL_0072;
	}

IL_006b:
	{
		G_B14_0 = 0;
		goto IL_0072;
	}

IL_006e:
	{
		G_B14_0 = 1;
		goto IL_0072;
	}

IL_0071:
	{
		G_B14_0 = 0;
	}

IL_0072:
	{
		if (G_B14_0)
		{
			goto IL_0076;
		}
	}
	{
		float L_22 = V_0;
		return L_22;
	}

IL_0076:
	{
		float L_23 = V_0;
		return ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_23));
	}
}
// System.Boolean DG.Tweening.TweenExtensions::IsActive(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_mFCFF3122C0C3276A6093B42BAFC1258E1252110C (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Boolean DG.Tweening.TweenExtensions::IsBackwards(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsBackwards_m5B3D3622E0E19D61D740172AC28BF98D273595AE (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = L_4->get_isBackwards_5();
		return L_5;
	}
}
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_m058D78AC1B3A1E815331E06C8386AAA4CC236A0F (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = L_4->get_isComplete_51();
		return L_5;
	}
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m831388B524712F533A55A7D945B0501A68A144A9 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = L_4->get_startupDone_45();
		return L_5;
	}
}
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m27DD47C5CCC873CD11D4C6692F3798E3AD6E9FF9 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		bool L_5 = L_4->get_isPlaying_50();
		return L_5;
	}
}
// System.Int32 DG.Tweening.TweenExtensions::Loops(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenExtensions_Loops_m2839006E8745E7AC94BC2437A6580582A22EBCDD (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return 0;
	}

IL_0018:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_loops_27();
		return L_5;
	}
}
// UnityEngine.Vector3 DG.Tweening.TweenExtensions::PathGetPoint(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TweenExtensions_PathGetPoint_m3996FDC066EF7836D06B058C19971FBF3876A5A6 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, float ___pathPercentage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_PathGetPoint_m3996FDC066EF7836D06B058C19971FBF3876A5A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * V_0 = NULL;
	{
		float L_0 = ___pathPercentage1;
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		___pathPercentage1 = (1.0f);
		goto IL_0020;
	}

IL_0011:
	{
		float L_1 = ___pathPercentage1;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		___pathPercentage1 = (0.0f);
	}

IL_0020:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_4 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_5;
	}

IL_0037:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		NullCheck(L_6);
		bool L_7 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_9 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_9, /*hidden argument*/NULL);
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_10;
	}

IL_0053:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		NullCheck(L_11);
		bool L_12 = L_11->get_isSequenced_40();
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_13 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0069;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_14, /*hidden argument*/NULL);
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_15;
	}

IL_006f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_16 = ___t0;
		V_0 = ((TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 *)IsInstClass((RuntimeObject*)L_16, TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_il2cpp_TypeInfo_var));
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_17 = V_0;
		if (L_17)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_18 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		Debugger_LogNonPathTween_m17D900AB10880767CE4F723D865282E7302E360F(L_19, /*hidden argument*/NULL);
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_20;
	}

IL_008d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_21 = V_0;
		NullCheck(L_21);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_22 = L_21->get_endValue_58();
		NullCheck(L_22);
		bool L_23 = L_22->get_isFinalized_10();
		if (L_23)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_24 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_24) <= ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_25 = ___t0;
		Debugger_LogWarning_m012435A7A9F817E5387AB572C5ED0714CEFA98A2(_stringLiteralA068776FD07897238E9E6FAB6A4D472BD9E34A08, L_25, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		return L_26;
	}

IL_00b3:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_27 = V_0;
		NullCheck(L_27);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_28 = L_27->get_endValue_58();
		float L_29 = ___pathPercentage1;
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Path_GetPoint_mCDAD7D0FD5B182DBCA2A7B0EECDD48E018C791E5(L_28, L_29, (bool)1, /*hidden argument*/NULL);
		return L_30;
	}
}
// UnityEngine.Vector3[] DG.Tweening.TweenExtensions::PathGetDrawPoints(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* TweenExtensions_PathGetDrawPoints_m873E81F246BFE99838E25CE377CEB1236FA48629 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, int32_t ___subdivisionsXSegment1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_PathGetDrawPoints_m873E81F246BFE99838E25CE377CEB1236FA48629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * V_0 = NULL;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}

IL_0013:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}

IL_002b:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}

IL_0043:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		V_0 = ((TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 *)IsInstClass((RuntimeObject*)L_11, TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_il2cpp_TypeInfo_var));
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_12 = V_0;
		if (L_12)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_13 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		Debugger_LogNonPathTween_m17D900AB10880767CE4F723D865282E7302E360F(L_14, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}

IL_005d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_15 = V_0;
		NullCheck(L_15);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_16 = L_15->get_endValue_58();
		NullCheck(L_16);
		bool L_17 = L_16->get_isFinalized_10();
		if (L_17)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_18 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		Debugger_LogWarning_m012435A7A9F817E5387AB572C5ED0714CEFA98A2(_stringLiteralA068776FD07897238E9E6FAB6A4D472BD9E34A08, L_19, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)NULL;
	}

IL_007f:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_20 = V_0;
		NullCheck(L_20);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_21 = L_20->get_endValue_58();
		int32_t L_22 = ___subdivisionsXSegment1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = Path_GetDrawPoints_mCEA9A48A5AECF90E31F119017993E8FD9D1B3033(L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Single DG.Tweening.TweenExtensions::PathLength(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_PathLength_mE9E51F89C68A3FF5AA606BB95C319CD341EBEE54 (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenExtensions_PathLength_mE9E51F89C68A3FF5AA606BB95C319CD341EBEE54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * V_0 = NULL;
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_0 = ___t0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_2 = ___t0;
		Debugger_LogNullTween_m95F50B0509E4BA5566BF1FA12326EE00E746B789(L_2, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return (-1.0f);
	}

IL_0017:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t0;
		Debugger_LogInvalidTween_m55880CECD15EF4A1D09D98999536C602171A5B95(L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return (-1.0f);
	}

IL_0033:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t0;
		NullCheck(L_7);
		bool L_8 = L_7->get_isSequenced_40();
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t0;
		Debugger_LogNestedTween_m6C0A9EBE74114A15FDC181BF27996C1350A02EE9(L_10, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return (-1.0f);
	}

IL_004f:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_11 = ___t0;
		V_0 = ((TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 *)IsInstClass((RuntimeObject*)L_11, TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1_il2cpp_TypeInfo_var));
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_12 = V_0;
		if (L_12)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_13 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_14 = ___t0;
		Debugger_LogNonPathTween_m17D900AB10880767CE4F723D865282E7302E360F(L_14, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return (-1.0f);
	}

IL_006d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_15 = V_0;
		NullCheck(L_15);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_16 = L_15->get_endValue_58();
		NullCheck(L_16);
		bool L_17 = L_16->get_isFinalized_10();
		if (L_17)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_18 = Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline(/*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_19 = ___t0;
		Debugger_LogWarning_m012435A7A9F817E5387AB572C5ED0714CEFA98A2(_stringLiteralA068776FD07897238E9E6FAB6A4D472BD9E34A08, L_19, /*hidden argument*/NULL);
	}

IL_008d:
	{
		return (-1.0f);
	}

IL_0093:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_20 = V_0;
		NullCheck(L_20);
		Path_tCE251EA0F45EA8B91CAD11018E275B451FAC6FA2 * L_21 = L_20->get_endValue_58();
		NullCheck(L_21);
		float L_22 = L_21->get_length_9();
		return L_22;
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
// System.Void DG.Tweening.TweenParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParams__ctor_m2621E8474EA565065742745450E7C16CDC585F01 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TweenParams_Clear_mDF49B6268B9BF32A62C7D9650A56F4CFD92AB60C(__this, /*hidden argument*/NULL);
		return;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_Clear_mDF49B6268B9BF32A62C7D9650A56F4CFD92AB60C (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams_Clear_mDF49B6268B9BF32A62C7D9650A56F4CFD92AB60C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * V_1 = NULL;
	{
		V_0 = NULL;
		__this->set_target_2(NULL);
		RuntimeObject * L_0 = V_0;
		__this->set_id_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		int32_t L_1 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultUpdateType_14();
		__this->set_updateType_3(L_1);
		bool L_2 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultTimeScaleIndependent_15();
		__this->set_isIndependentUpdate_4(L_2);
		V_1 = (TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL;
		__this->set_onKill_11((TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 *)NULL);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = V_1;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_4 = L_3;
		V_1 = L_4;
		__this->set_onComplete_10(L_4);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_5 = V_1;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = L_5;
		V_1 = L_6;
		__this->set_onStepComplete_9(L_6);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_7 = V_1;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_8 = L_7;
		V_1 = L_8;
		__this->set_onUpdate_8(L_8);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_9 = V_1;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_10 = L_9;
		V_1 = L_10;
		__this->set_onRewind_7(L_10);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_11 = V_1;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_12 = L_11;
		V_1 = L_12;
		__this->set_onPlay_6(L_12);
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_13 = V_1;
		__this->set_onStart_5(L_13);
		__this->set_onWaypointChange_12((TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 *)NULL);
		bool L_14 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultRecyclable_19();
		__this->set_isRecyclable_13(L_14);
		__this->set_isSpeedBased_14((bool)0);
		bool L_15 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultAutoKill_17();
		__this->set_autoKill_15(L_15);
		__this->set_loops_16(1);
		int32_t L_16 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultLoopType_18();
		__this->set_loopType_17(L_16);
		__this->set_delay_18((0.0f));
		__this->set_isRelative_19((bool)0);
		__this->set_easeType_20(0);
		__this->set_customEase_21((EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 *)NULL);
		float L_17 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		__this->set_easeOvershootOrAmplitude_22(L_17);
		float L_18 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		__this->set_easePeriod_23(L_18);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetAutoKill(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetAutoKill_mD4717B96EE4FC2EDCDCC4629524085CD3D4D6648 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, bool ___autoKillOnCompletion0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___autoKillOnCompletion0;
		__this->set_autoKill_15(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetId_m309EB347779640A41189D748CC0EC28079FEE240 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, RuntimeObject * ___id0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___id0;
		__this->set_id_1(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetTarget_mCCED086E101AF685ECDC617A69E2D365AFD3B56E (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		__this->set_target_2(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetLoops(System.Int32,System.Nullable`1<DG.Tweening.LoopType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetLoops_mBD39C577C1F85942AE99168A0A775D87F57428E3 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, int32_t ___loops0, Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901  ___loopType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams_SetLoops_mBD39C577C1F85942AE99168A0A775D87F57428E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___loops0;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0009;
		}
	}
	{
		___loops0 = (-1);
		goto IL_000f;
	}

IL_0009:
	{
		int32_t L_1 = ___loops0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		___loops0 = 1;
	}

IL_000f:
	{
		int32_t L_2 = ___loops0;
		__this->set_loops_16(L_2);
		bool L_3 = Nullable_1_get_HasValue_mE0164C5AB9E1273D0BF45C7B570E470EC7CEBA67_inline((Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 *)(&___loopType1), /*hidden argument*/Nullable_1_get_HasValue_mE0164C5AB9E1273D0BF45C7B570E470EC7CEBA67_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = Nullable_1_get_Value_m44301887057A6FBF0AC15087D0D1F132F727FE8E((Nullable_1_tD18655D0F24A9728D9F62BB93B82347ED5736901 *)(&___loopType1), /*hidden argument*/Nullable_1_get_Value_m44301887057A6FBF0AC15087D0D1F132F727FE8E_RuntimeMethod_var);
		__this->set_loopType_17(L_4);
	}

IL_002c:
	{
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.Ease,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetEase_mB9BFC3818B842BB6A62A33F2F43F915C0211F878 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, int32_t ___ease0, Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0  ___overshootOrAmplitude1, Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0  ___period2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams_SetEase_mB9BFC3818B842BB6A62A33F2F43F915C0211F878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B2_0 = NULL;
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B3_1 = NULL;
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B5_0 = NULL;
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * G_B6_1 = NULL;
	{
		int32_t L_0 = ___ease0;
		__this->set_easeType_20(L_0);
		bool L_1 = Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_inline((Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *)(&___overshootOrAmplitude1), /*hidden argument*/Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_RuntimeMethod_var);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		float L_2 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultEaseOvershootOrAmplitude_21();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		float L_3 = Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2((Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *)(&___overshootOrAmplitude1), /*hidden argument*/Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2_RuntimeMethod_var);
		G_B3_0 = (((float)((float)L_3)));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_easeOvershootOrAmplitude_22(G_B3_0);
		bool L_4 = Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_inline((Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *)(&___period2), /*hidden argument*/Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_RuntimeMethod_var);
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		float L_5 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultEasePeriod_22();
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_003e;
	}

IL_0036:
	{
		float L_6 = Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2((Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 *)(&___period2), /*hidden argument*/Nullable_1_get_Value_m8ED77F1776BBC65874AF9D0ED769FF7B6B918DA2_RuntimeMethod_var);
		G_B6_0 = (((float)((float)L_6)));
		G_B6_1 = G_B5_0;
	}

IL_003e:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_easePeriod_23(G_B6_0);
		__this->set_customEase_21((EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 *)NULL);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetEase_mEFA02AC92A0528C7CE4B334C7147E679E0A20A08 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___animCurve0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams_SetEase_mEFA02AC92A0528C7CE4B334C7147E679E0A20A08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_easeType_20(((int32_t)37));
		AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * L_0 = ___animCurve0;
		EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253 * L_1 = (EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253 *)il2cpp_codegen_object_new(EaseCurve_t0C06B962FC6E8591BF01551CD0C2F3F6CAF0A253_il2cpp_TypeInfo_var);
		EaseCurve__ctor_m26123479574864FBB3E03392C168D1A13812E2F7(L_1, L_0, /*hidden argument*/NULL);
		EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * L_2 = (EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 *)il2cpp_codegen_object_new(EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691_il2cpp_TypeInfo_var);
		EaseFunction__ctor_mF98B765DDDA8DE8B3B9D6F18F3972A76ABD73502(L_2, L_1, (intptr_t)((intptr_t)EaseCurve_Evaluate_m3F43E02364D139A8F9625DA2D6B427FC9A33A1D4_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_customEase_21(L_2);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.EaseFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetEase_m5F595A6AACA3C789CEC6C4D2BFEE483CB5A416DE (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * ___customEase0, const RuntimeMethod* method)
{
	{
		__this->set_easeType_20(((int32_t)37));
		EaseFunction_tAC315FE3B057AC8DA87991C785F2595F3B761691 * L_0 = ___customEase0;
		__this->set_customEase_21(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRecyclable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetRecyclable_m0942A1246A5DCC08883391B053333E7C2AF29C86 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, bool ___recyclable0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___recyclable0;
		__this->set_isRecyclable_13(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetUpdate_mE5EF664BB8A520E0E758DC7B9F2D87459F374C78 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, bool ___isIndependentUpdate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams_SetUpdate_mE5EF664BB8A520E0E758DC7B9F2D87459F374C78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_StaticFields*)il2cpp_codegen_static_fields_for(DOTween_t6BB48F76E494B12781696AF3D0733CA8DC367E8D_il2cpp_TypeInfo_var))->get_defaultUpdateType_14();
		__this->set_updateType_3(L_0);
		bool L_1 = ___isIndependentUpdate0;
		__this->set_isIndependentUpdate_4(L_1);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(DG.Tweening.UpdateType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetUpdate_mA856AFA1CA51E4C51A5D13C27330712A4C65B70F (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, int32_t ___updateType0, bool ___isIndependentUpdate1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___updateType0;
		__this->set_updateType_3(L_0);
		bool L_1 = ___isIndependentUpdate1;
		__this->set_isIndependentUpdate_4(L_1);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStart(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnStart_m949DD308F6E94E24703D3B9124DA61D1972BF472 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onStart_5(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnPlay(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnPlay_mC61D3B261F4050585EDD29A513EE100A1DC6EEF3 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onPlay_6(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnRewind(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnRewind_m426465E667FFFA1A73EFB587E3DF48430A4D9479 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onRewind_7(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnUpdate(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnUpdate_mEE60B87AD29ABAE27746A501875BAAB5B4CEA375 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onUpdate_8(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStepComplete(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnStepComplete_mCDB4EAF31DB361483B62E6AC40ADEE6658FA536C (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onStepComplete_9(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnComplete(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnComplete_m0198767C53C028857E5F43A24507C6B1D5791DD2 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onComplete_10(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnKill(DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnKill_mD85C10ECD105800F4B15B9B2020F503CC05BE76A (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_0 = ___action0;
		__this->set_onKill_11(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnWaypointChange(DG.Tweening.TweenCallback`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_OnWaypointChange_mEDDCC2EB3BC50E558506E34354AC93F193BBBEB9 (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * ___action0, const RuntimeMethod* method)
{
	{
		TweenCallback_1_t46CB97F053453C4F41F8AE6213792813E455DDE1 * L_0 = ___action0;
		__this->set_onWaypointChange_12(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetDelay_m3D4D09ABE51557DDBC599AA180E40B84137600BD (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, float ___delay0, const RuntimeMethod* method)
{
	{
		float L_0 = ___delay0;
		__this->set_delay_18(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRelative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetRelative_mB7CB6042C913BD9F9EF3F43F8CE57B2A49A28DAF (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, bool ___isRelative0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___isRelative0;
		__this->set_isRelative_19(L_0);
		return __this;
	}
}
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetSpeedBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * TweenParams_SetSpeedBased_m139969ED981C81CD14F0D31877B32DED707E8C9E (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * __this, bool ___isSpeedBased0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___isSpeedBased0;
		__this->set_isSpeedBased_14(L_0);
		return __this;
	}
}
// System.Void DG.Tweening.TweenParams::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenParams__cctor_m1CAE513B7BE52394431D0B14EF93E5073D1B714D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenParams__cctor_m1CAE513B7BE52394431D0B14EF93E5073D1B714D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 * L_0 = (TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51 *)il2cpp_codegen_object_new(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_il2cpp_TypeInfo_var);
		TweenParams__ctor_m2621E8474EA565065742745450E7C16CDC585F01(L_0, /*hidden argument*/NULL);
		((TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_StaticFields*)il2cpp_codegen_static_fields_for(TweenParams_t2782F674588F80D6EC555C07AD139AF412177A51_il2cpp_TypeInfo_var))->set_Params_0(L_0);
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
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_Append_mF9230E38E4644D205DD7BB914EEDAAF03CF6B9FE (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t1;
		bool L_2 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		return L_3;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t1;
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_6 = ___s0;
		NullCheck(L_6);
		float L_7 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_6)->get_duration_26();
		Sequence_DoInsert_m3D20EAC3DCAE54D0FE4EC70344B5DF3D2167C263(L_4, L_5, L_7, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_8 = ___s0;
		return L_8;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Prepend(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_Prepend_mE90640BA5975ADEEC924365879725462F234DAEB (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t1;
		bool L_2 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		return L_3;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t1;
		Sequence_DoPrepend_m4CE82251127A532A66EEC6C0F1FC353356D9E59A(L_4, L_5, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_6 = ___s0;
		return L_6;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Join(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_Join_m06C6C53002FFC7BA7CAF8034D33E7B9E1E3ED819 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t1;
		bool L_2 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		return L_3;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t1;
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_6 = ___s0;
		NullCheck(L_6);
		float L_7 = L_6->get_lastTweenInsertTime_57();
		Sequence_DoInsert_m3D20EAC3DCAE54D0FE4EC70344B5DF3D2167C263(L_4, L_5, L_7, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_8 = ___s0;
		return L_8;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Insert(DG.Tweening.Sequence,System.Single,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_Insert_m0CF665E600E6040A47603C4C964CE5C6BB5D1839 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, float ___atPosition1, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t2, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_1 = ___t2;
		bool L_2 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, L_1, (bool)0, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		return L_3;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_5 = ___t2;
		float L_6 = ___atPosition1;
		Sequence_DoInsert_m3D20EAC3DCAE54D0FE4EC70344B5DF3D2167C263(L_4, L_5, L_6, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_7 = ___s0;
		return L_7;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_AppendInterval_m26AB5089B7BC7AD4F4380392926A9F8688E0D479 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, float ___interval1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		bool L_1 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)NULL, (bool)1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_2 = ___s0;
		return L_2;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		float L_4 = ___interval1;
		Sequence_DoAppendInterval_mE84F1389FF900B1DC7898C84F2B627B7E818E2E4(L_3, L_4, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_5 = ___s0;
		return L_5;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependInterval(DG.Tweening.Sequence,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_PrependInterval_m99C5D00E917D2DB4A79C6D2AD7B85ABD2499D770 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, float ___interval1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		bool L_1 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)NULL, (bool)1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_2 = ___s0;
		return L_2;
	}

IL_000c:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		float L_4 = ___interval1;
		Sequence_DoPrependInterval_mFFC4EB2AA760286A1009E56E4A43E4D09EAE86D6(L_3, L_4, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_5 = ___s0;
		return L_5;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::AppendCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_AppendCallback_m05759B85A3363E37856F9F32ACBA4AF1AB803BE0 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		bool L_1 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)NULL, (bool)1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_2 = ___s0;
		return L_2;
	}

IL_000c:
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = ___callback1;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		return L_4;
	}

IL_0011:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_5 = ___s0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = ___callback1;
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_7 = ___s0;
		NullCheck(L_7);
		float L_8 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_7)->get_duration_26();
		Sequence_DoInsertCallback_m068073382E1FA95111E35B7340DB53A28C707E76(L_5, L_6, L_8, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_9 = ___s0;
		return L_9;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::PrependCallback(DG.Tweening.Sequence,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_PrependCallback_m198148BF6D55C839D71329A386971294F7C21D3B (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback1, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		bool L_1 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)NULL, (bool)1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_2 = ___s0;
		return L_2;
	}

IL_000c:
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = ___callback1;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		return L_4;
	}

IL_0011:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_5 = ___s0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = ___callback1;
		Sequence_DoInsertCallback_m068073382E1FA95111E35B7340DB53A28C707E76(L_5, L_6, (0.0f), /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_7 = ___s0;
		return L_7;
	}
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::InsertCallback(DG.Tweening.Sequence,System.Single,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * TweenSettingsExtensions_InsertCallback_m5735CE8475A357C235BF98A00DACDF9CC0DF0197 (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, float ___atPosition1, TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * ___callback2, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		bool L_1 = TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF(L_0, (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)NULL, (bool)1, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_2 = ___s0;
		return L_2;
	}

IL_000c:
	{
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_3 = ___callback2;
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_4 = ___s0;
		return L_4;
	}

IL_0011:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_5 = ___s0;
		TweenCallback_tD2CEE8D219857E8D988DBEC4D2DE19FA5FCB3E83 * L_6 = ___callback2;
		float L_7 = ___atPosition1;
		Sequence_DoInsertCallback_m068073382E1FA95111E35B7340DB53A28C707E76(L_5, L_6, L_7, /*hidden argument*/NULL);
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_8 = ___s0;
		return L_8;
	}
}
// System.Boolean DG.Tweening.TweenSettingsExtensions::ValidateAddToSequence(DG.Tweening.Sequence,DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenSettingsExtensions_ValidateAddToSequence_m90CD6799D68C31E00014F5EDA73378EEC0C7F2EF (Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * ___s0, Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * ___t1, bool ___ignoreTween2, const RuntimeMethod* method)
{
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_0 = ___s0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Sequence_LogAddToNullSequence_m4DB4949C878BD3D726D844084D13646942CC5B0C(/*hidden argument*/NULL);
		return (bool)0;
	}

IL_000a:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_1 = ___s0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Sequence_LogAddToInactiveSequence_m836A8D0EB90BEC678355427322D1CEF7464069D6(/*hidden argument*/NULL);
		return (bool)0;
	}

IL_0019:
	{
		Sequence_tA6FA099F465933113D131DDC0EECB6A19A27BCB2 * L_3 = ___s0;
		NullCheck(L_3);
		bool L_4 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_3)->get_creationLocked_44();
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Sequence_LogAddToLockedSequence_m6B643F4811299B4D58F748F2A347B5B2872AFE7F(/*hidden argument*/NULL);
		return (bool)0;
	}

IL_0028:
	{
		bool L_5 = ___ignoreTween2;
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_6 = ___t1;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		Sequence_LogAddNullTween_mE6768D2A1D2C652D6EE2FC97364AB70B5998C0C1(/*hidden argument*/NULL);
		return (bool)0;
	}

IL_0035:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_7 = ___t1;
		NullCheck(L_7);
		bool L_8 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_9 = ___t1;
		Sequence_LogAddInactiveTween_m2718FA35D8D8C88D05626F8CC2A359845AD5179F(L_9, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0045:
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_10 = ___t1;
		NullCheck(L_10);
		bool L_11 = L_10->get_isSequenced_40();
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * L_12 = ___t1;
		Sequence_LogAddAlreadySequencedTween_m4A23C9D7F45B549B5A59827089C130873AC0D9C8(L_12, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0055:
	{
		return (bool)1;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.TweenSettingsExtensions::From(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * TweenSettingsExtensions_From_mCE30D0C73DDE695CEE5F37F0F9EB92F3EDED3AA0 (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * ___t0, float ___fromAlphaValue1, bool ___setImmediately2, bool ___isRelative3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_From_mCE30D0C73DDE695CEE5F37F0F9EB92F3EDED3AA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_3)->get_creationLocked_44();
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = ((Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 *)L_5)->get_isFromAllowed_56();
		if (L_6)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_7 = ___t0;
		return L_7;
	}

IL_001d:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_8 = ___t0;
		NullCheck(L_8);
		((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_8)->set_isFrom_21((bool)1);
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_9 = ___t0;
		float L_10 = ___fromAlphaValue1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_11), (0.0f), (0.0f), (0.0f), L_10, /*hidden argument*/NULL);
		bool L_12 = ___setImmediately2;
		bool L_13 = ___isRelative3;
		NullCheck(L_9);
		TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7(L_9, L_11, L_12, L_13, /*hidden argument*/TweenerCore_3_SetFrom_m3DF3C5668CEEA5A0F6966A7146D156DEB95C6DA7_RuntimeMethod_var);
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_14 = ___t0;
		return L_14;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.TweenSettingsExtensions::From(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * TweenSettingsExtensions_From_m453D2A3E6FCAE8F79E2C009B090B8537C7199D8B (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, float ___fromValue1, bool ___setImmediately2, bool ___isRelative3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_From_m453D2A3E6FCAE8F79E2C009B090B8537C7199D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_3)->get_creationLocked_44();
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = ((Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 *)L_5)->get_isFromAllowed_56();
		if (L_6)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_7 = ___t0;
		return L_7;
	}

IL_001d:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_8 = ___t0;
		NullCheck(L_8);
		((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_8)->set_isFrom_21((bool)1);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_9 = ___t0;
		float L_10 = ___fromValue1;
		float L_11 = ___fromValue1;
		float L_12 = ___fromValue1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), L_10, L_11, L_12, /*hidden argument*/NULL);
		bool L_14 = ___setImmediately2;
		bool L_15 = ___isRelative3;
		NullCheck(L_9);
		TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE(L_9, L_13, L_14, L_15, /*hidden argument*/TweenerCore_3_SetFrom_m755796030617AE6B4208975D9E7E69C1C6FE75BE_RuntimeMethod_var);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_16 = ___t0;
		return L_16;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions> DG.Tweening.TweenSettingsExtensions::From(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * TweenSettingsExtensions_From_mDF62EF8BCAEB3DB0EBB125C7E2D02687D65DC472 (TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * ___t0, float ___fromValueDegrees1, bool ___setImmediately2, bool ___isRelative3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_From_mDF62EF8BCAEB3DB0EBB125C7E2D02687D65DC472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_3 = ___t0;
		NullCheck(L_3);
		bool L_4 = ((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_3)->get_creationLocked_44();
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_5 = ___t0;
		NullCheck(L_5);
		bool L_6 = ((Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 *)L_5)->get_isFromAllowed_56();
		if (L_6)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_7 = ___t0;
		return L_7;
	}

IL_001d:
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_8 = ___t0;
		NullCheck(L_8);
		((Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 *)L_8)->set_isFrom_21((bool)1);
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_9 = ___t0;
		float L_10 = ___fromValueDegrees1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_11), L_10, (0.0f), /*hidden argument*/NULL);
		bool L_12 = ___setImmediately2;
		bool L_13 = ___isRelative3;
		NullCheck(L_9);
		TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC(L_9, L_11, L_12, L_13, /*hidden argument*/TweenerCore_3_SetFrom_mA39B0DC7A1F2FFE6159E292BC350ACF715C937BC_RuntimeMethod_var);
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_14 = ___t0;
		return L_14;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_mAE40CB7D4ACEF27C8851D91F77F2235053843DA5 (TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * L_4 = ___t0;
		NullCheck(L_4);
		FloatOptions_t7285C3D13285197B6B003786B85DAAD83E654C1B * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_0(L_6);
		TweenerCore_3_t6A4E7F20811D0CB63AE8F43B7879680C2273EB71 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m8E426FE7E94D7B685CA5DA3DD7E636FC17B495F1 (TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_1(L_6);
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m844D53B155500F2BFCF0F7AC75E11A58F5B9256A (TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		int32_t L_6 = ___axisConstraint1;
		L_5->set_axisConstraint_0(L_6);
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_7 = ___t0;
		NullCheck(L_7);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_8 = L_7->get_address_of_plugOptions_60();
		bool L_9 = ___snapping2;
		L_8->set_snapping_1(L_9);
		TweenerCore_3_tEF3CF5BF3AF3C462924E66EFF3839D0D49C74066 * L_10 = ___t0;
		return L_10;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m24B2A6FDAC0B998DFA33B4B0E2BB736C65F01937 (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_1(L_6);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m355BECDFA70A8EA4F748D6C8280387C6F011C739 (TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		int32_t L_6 = ___axisConstraint1;
		L_5->set_axisConstraint_0(L_6);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_7 = ___t0;
		NullCheck(L_7);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_8 = L_7->get_address_of_plugOptions_60();
		bool L_9 = ___snapping2;
		L_8->set_snapping_1(L_9);
		TweenerCore_3_t104C232CA5A703780F416D4E8F2D71E42FE9C46B * L_10 = ___t0;
		return L_10;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_mE123228E2EA639DC5DFB4E124C878DCBFA9F0E86 (TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_1(L_6);
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector4,UnityEngine.Vector4,DG.Tweening.Plugins.Options.VectorOptions>,DG.Tweening.AxisConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m8A59EACA63FC17BBC6288E331788697DFC779BCE (TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_4 = ___t0;
		NullCheck(L_4);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_5 = L_4->get_address_of_plugOptions_60();
		int32_t L_6 = ___axisConstraint1;
		L_5->set_axisConstraint_0(L_6);
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_7 = ___t0;
		NullCheck(L_7);
		VectorOptions_t385A0AFDBE150CC9F61EA0DC03FEA860BA5EA322 * L_8 = L_7->get_address_of_plugOptions_60();
		bool L_9 = ___snapping2;
		L_8->set_snapping_1(L_9);
		TweenerCore_3_t8EBA5A8E670BB1C9B0419D35F5C3BC5402AF4060 * L_10 = ___t0;
		return L_10;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m1F7AD1AB8FA101E6843A9482F1678309A3F5FC04 (TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * ___t0, bool ___useShortest360Route1, const RuntimeMethod* method)
{
	QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B * G_B5_0 = NULL;
	QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B * G_B6_1 = NULL;
	{
		TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * L_4 = ___t0;
		NullCheck(L_4);
		QuaternionOptions_t217D095C19651CE87896F40C41802FA82552880B * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___useShortest360Route1;
		G_B4_0 = L_5;
		if (L_6)
		{
			G_B5_0 = L_5;
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_001a:
	{
		G_B6_1->set_rotateMode_0(G_B6_0);
		TweenerCore_3_t28337BA0D49286D69BD167D985C0FB11E3330033 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m91F3015F32F080493FFBFB24F144D4112D86B6A8 (TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * ___t0, bool ___alphaOnly1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_4 = ___t0;
		NullCheck(L_4);
		ColorOptions_tD57E512D2F4329BEE7EAEE0D1B2C4A0683D288DA * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___alphaOnly1;
		L_5->set_alphaOnly_0(L_6);
		TweenerCore_3_t135A028153B5C8F7030BB331039A6C1C8B41AC65 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m5A749980BA3E0C2A1399581C072AF5D9A7B39C0B (TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * L_4 = ___t0;
		NullCheck(L_4);
		RectOptions_t1C4579A85851F16B3300F373FC807B4913D59A5E * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_0(L_6);
		TweenerCore_3_tB2FA880BC817C4926A563415BADC6E06CADD4BEF * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_mF5B0D3F3B6EEC1C79D91E770D3F00709C9931230 (TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * ___t0, bool ___richTextEnabled1, int32_t ___scrambleMode2, String_t* ___scrambleChars3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetOptions_mF5B0D3F3B6EEC1C79D91E770D3F00709C9931230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_4 = ___t0;
		NullCheck(L_4);
		StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___richTextEnabled1;
		L_5->set_richTextEnabled_0(L_6);
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_7 = ___t0;
		NullCheck(L_7);
		StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC * L_8 = L_7->get_address_of_plugOptions_60();
		int32_t L_9 = ___scrambleMode2;
		L_8->set_scrambleMode_1(L_9);
		String_t* L_10 = ___scrambleChars3;
		bool L_11 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_12 = ___scrambleChars3;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_14 = ___scrambleChars3;
		String_t* L_15 = ___scrambleChars3;
		String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_14, L_15, /*hidden argument*/NULL);
		___scrambleChars3 = L_16;
	}

IL_003f:
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_17 = ___t0;
		NullCheck(L_17);
		StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC * L_18 = L_17->get_address_of_plugOptions_60();
		String_t* L_19 = ___scrambleChars3;
		NullCheck(L_19);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_20 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_19, /*hidden argument*/NULL);
		L_18->set_scrambledChars_2(L_20);
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_21 = ___t0;
		NullCheck(L_21);
		StringOptions_t58D6011099873A39926A99C00EE24D0D80B231FC * L_22 = L_21->get_address_of_plugOptions_60();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_23 = L_22->get_scrambledChars_2();
		IL2CPP_RUNTIME_CLASS_INIT(StringPluginExtensions_tB7BCF7EB9633300CDD2387F467B58782AE28F06B_il2cpp_TypeInfo_var);
		StringPluginExtensions_ScrambleChars_m5D48CF427E493F0CFB0C1A6D52C4E4C0F8DC54A2(L_23, /*hidden argument*/NULL);
	}

IL_0060:
	{
		TweenerCore_3_t5CC4896707276A1DD128E986B753C9447C7E8FA8 * L_24 = ___t0;
		return L_24;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m4C4BFBC96D45F95BE811A330299AEE2B98898CA6 (TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * ___t0, bool ___snapping1, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_4 = ___t0;
		NullCheck(L_4);
		Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___snapping1;
		L_5->set_snapping_1(L_6);
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_7 = ___t0;
		return L_7;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,DG.Tweening.AxisConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_m2F802BAE76B8994AFA6E1A3368DAB76673A9108F (TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * ___t0, int32_t ___axisConstraint1, bool ___snapping2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_4 = ___t0;
		NullCheck(L_4);
		Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257 * L_5 = L_4->get_address_of_plugOptions_60();
		int32_t L_6 = ___axisConstraint1;
		L_5->set_axisConstraint_0(L_6);
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_7 = ___t0;
		NullCheck(L_7);
		Vector3ArrayOptions_t3E84666D670017F133C32243F0709A3852F05257 * L_8 = L_7->get_address_of_plugOptions_60();
		bool L_9 = ___snapping2;
		L_8->set_snapping_1(L_9);
		TweenerCore_3_t8144D2B7915783E42476714D21E639420B0EDC30 * L_10 = ___t0;
		return L_10;
	}
}
// DG.Tweening.Tweener DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions>,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * TweenSettingsExtensions_SetOptions_mAE227F417853D426A608A45107F0BA8AB6D37E6F (TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * ___t0, float ___endValueDegrees1, bool ___relativeCenter2, bool ___snapping3, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_4 = ___t0;
		NullCheck(L_4);
		CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A * L_5 = L_4->get_address_of_plugOptions_60();
		float L_6 = ___endValueDegrees1;
		L_5->set_endValueDegrees_0(L_6);
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_7 = ___t0;
		NullCheck(L_7);
		CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A * L_8 = L_7->get_address_of_plugOptions_60();
		bool L_9 = ___relativeCenter2;
		L_8->set_relativeCenter_1(L_9);
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_10 = ___t0;
		NullCheck(L_10);
		CircleOptions_t45C5FB5E55882A9276C7E7D11F65426C10592F6A * L_11 = L_10->get_address_of_plugOptions_60();
		bool L_12 = ___snapping3;
		L_11->set_snapping_2(L_12);
		TweenerCore_3_tB5D562C7A608D919F4133F108AAE8F8E12B5C931 * L_13 = ___t0;
		return L_13;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetOptions_mB1C1F0FE054695BA13388058E19F4F38B39EBF8C (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, int32_t ___lockPosition1, int32_t ___lockRotation2, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		int32_t L_1 = ___lockPosition1;
		int32_t L_2 = ___lockRotation2;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_3 = TweenSettingsExtensions_SetOptions_mD4DDAD5C05009CC8EE99277336157B59C2B95B1C(L_0, (bool)0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetOptions(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean,DG.Tweening.AxisConstraint,DG.Tweening.AxisConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetOptions_mD4DDAD5C05009CC8EE99277336157B59C2B95B1C (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, bool ___closePath1, int32_t ___lockPosition2, int32_t ___lockRotation3, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_4 = ___t0;
		NullCheck(L_4);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_5 = L_4->get_address_of_plugOptions_60();
		bool L_6 = ___closePath1;
		L_5->set_isClosedPath_4(L_6);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_7 = ___t0;
		NullCheck(L_7);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_8 = L_7->get_address_of_plugOptions_60();
		int32_t L_9 = ___lockPosition2;
		L_8->set_lockPositionAxis_2(L_9);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_10 = ___t0;
		NullCheck(L_10);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_11 = L_10->get_address_of_plugOptions_60();
		int32_t L_12 = ___lockRotation3;
		L_11->set_lockRotationAxis_3(L_12);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_13 = ___t0;
		return L_13;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_m348051EC126511533EDE2AD6A5CD0752F062C71D (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition1, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection2, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up3, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___lookAtPosition1;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_2 = ___forwardDirection2;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = ___up3;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_4 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 3, L_1, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, (-1.0f), L_2, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_m88595E4280BDF8B30818C729BF77FDF82126EF5E (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition1, bool ___stableZRotation2, const RuntimeMethod* method)
{
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___lookAtPosition1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_2 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = V_0;
		bool L_4 = ___stableZRotation2;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_5 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 3, L_1, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, (-1.0f), L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Transform,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_mA4ACE4FF207B9433A30A75392A9CB7CC89AABBE5 (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform1, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection2, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetLookAt_mA4ACE4FF207B9433A30A75392A9CB7CC89AABBE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___lookAtTransform1;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = ___forwardDirection2;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_4 = ___up3;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_5 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 2, L_1, L_2, (-1.0f), L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_m4ACAB43BDC105F85944D13E559DADCEA1C3EB8FD (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform1, bool ___stableZRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetLookAt_m4ACAB43BDC105F85944D13E559DADCEA1C3EB8FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___lookAtTransform1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_4 = V_0;
		bool L_5 = ___stableZRotation2;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_6 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 2, L_1, L_2, (-1.0f), L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_m1BBF90CFDEF4EFB5F84AF0756715D109B789EF76 (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, float ___lookAhead1, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection2, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetLookAt_m1BBF90CFDEF4EFB5F84AF0756715D109B789EF76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_2 = ___lookAhead1;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = ___forwardDirection2;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_4 = ___up3;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_5 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 1, L_1, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return L_5;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_m0A3F15C94C18F1C5494D47D8F88F86A564AEDFFB (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, float ___lookAhead1, bool ___stableZRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetLookAt_m0A3F15C94C18F1C5494D47D8F88F86A564AEDFFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_2 = ___lookAhead1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_3 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE ));
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_4 = V_0;
		bool L_5 = ___stableZRotation2;
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_6 = TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA(L_0, 1, L_1, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.TweenSettingsExtensions::SetLookAt(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,DG.Tweening.Plugins.Options.OrientType,UnityEngine.Vector3,UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * TweenSettingsExtensions_SetLookAt_mE8218A79B584D7971E76FEDDDB76651547CC70AA (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, int32_t ___orientType1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition2, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lookAtTransform3, float ___lookAhead4, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection5, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up6, bool ___stableZRotation7, const RuntimeMethod* method)
{
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_3 = ___t0;
		return L_3;
	}

IL_000d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_4 = ___t0;
		NullCheck(L_4);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_5 = L_4->get_address_of_plugOptions_60();
		int32_t L_6 = ___orientType1;
		L_5->set_orientType_1(L_6);
		int32_t L_7 = ___orientType1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_002f:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_8 = ___t0;
		NullCheck(L_8);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_9 = L_8->get_address_of_plugOptions_60();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = ___lookAtPosition2;
		L_9->set_lookAtPosition_5(L_10);
		goto IL_0068;
	}

IL_003d:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_11 = ___t0;
		NullCheck(L_11);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_12 = L_11->get_address_of_plugOptions_60();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___lookAtTransform3;
		L_12->set_lookAtTransform_6(L_13);
		goto IL_0068;
	}

IL_004b:
	{
		float L_14 = ___lookAhead4;
		if ((!(((float)L_14) < ((float)(0.0001f)))))
		{
			goto IL_005b;
		}
	}
	{
		___lookAhead4 = (0.0001f);
	}

IL_005b:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_15 = ___t0;
		NullCheck(L_15);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_16 = L_15->get_address_of_plugOptions_60();
		float L_17 = ___lookAhead4;
		L_16->set_lookAhead_7(L_17);
	}

IL_0068:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_18 = ___t0;
		NullCheck(L_18);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_19 = L_18->get_address_of_plugOptions_60();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___lookAtPosition2;
		L_19->set_lookAtPosition_5(L_20);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_21 = ___t0;
		NullCheck(L_21);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_22 = L_21->get_address_of_plugOptions_60();
		bool L_23 = ___stableZRotation7;
		L_22->set_stableZRotation_14(L_23);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_24 = ___t0;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_25 = ___forwardDirection5;
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_26 = ___up6;
		TweenSettingsExtensions_SetPathForwardDirection_m7EA9A97A77D0EBB7542134E0D8224E06D5A56714(L_24, L_25, L_26, /*hidden argument*/NULL);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_27 = ___t0;
		return L_27;
	}
}
// System.Void DG.Tweening.TweenSettingsExtensions::SetPathForwardDirection(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenSettingsExtensions_SetPathForwardDirection_m7EA9A97A77D0EBB7542134E0D8224E06D5A56714 (TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * ___t0, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___forwardDirection1, Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  ___up2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TweenSettingsExtensions_SetPathForwardDirection_m7EA9A97A77D0EBB7542134E0D8224E06D5A56714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B10_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B4_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B6_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B5_0 = NULL;
	int32_t G_B9_0 = 0;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B9_1 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B8_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B7_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B17_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B16_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B11_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B13_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B12_0 = NULL;
	int32_t G_B18_0 = 0;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B18_1 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B15_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B14_0 = NULL;
	int32_t G_B24_0 = 0;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B28_0 = NULL;
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B27_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B29_0;
	memset((&G_B29_0), 0, sizeof(G_B29_0));
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B29_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B31_0;
	memset((&G_B31_0), 0, sizeof(G_B31_0));
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B31_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B30_1 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B32_0;
	memset((&G_B32_0), 0, sizeof(G_B32_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B32_1;
	memset((&G_B32_1), 0, sizeof(G_B32_1));
	PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * G_B32_2 = NULL;
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_0 = ___t0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_1 = ___t0;
		NullCheck(L_1);
		bool L_2 = Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_3 = ___t0;
		NullCheck(L_3);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_4 = L_3->get_address_of_plugOptions_60();
		bool L_5 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___forwardDirection1), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B4_0 = L_4;
		if (!L_5)
		{
			G_B10_0 = L_4;
			goto IL_004a;
		}
	}
	{
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_6 = ___forwardDirection1;
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B5_0 = G_B4_0;
		if (L_8)
		{
			G_B6_0 = G_B4_0;
			goto IL_002f;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B5_0;
		goto IL_0048;
	}

IL_002f:
	{
		bool L_9 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B7_0 = G_B6_0;
		if (L_9)
		{
			G_B8_0 = G_B6_0;
			goto IL_003b;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0048;
	}

IL_003b:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_12 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_10, L_11, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_12));
		G_B9_1 = G_B8_0;
	}

IL_0048:
	{
		G_B10_0 = G_B9_1;
		if (G_B9_0)
		{
			G_B17_0 = G_B9_1;
			goto IL_0085;
		}
	}

IL_004a:
	{
		bool L_13 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___up2), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B11_0 = G_B10_0;
		if (!L_13)
		{
			G_B16_0 = G_B10_0;
			goto IL_0082;
		}
	}
	{
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_14 = ___up2;
		V_0 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_15;
		bool L_16 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B12_0 = G_B11_0;
		if (L_16)
		{
			G_B13_0 = G_B11_0;
			goto IL_0067;
		}
	}
	{
		G_B18_0 = 1;
		G_B18_1 = G_B12_0;
		goto IL_0086;
	}

IL_0067:
	{
		bool L_17 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B14_0 = G_B13_0;
		if (L_17)
		{
			G_B15_0 = G_B13_0;
			goto IL_0073;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B14_0;
		goto IL_0086;
	}

IL_0073:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_20 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_18, L_19, /*hidden argument*/NULL);
		G_B18_0 = ((int32_t)(L_20));
		G_B18_1 = G_B15_0;
		goto IL_0086;
	}

IL_0082:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_0086:
	{
		G_B18_1->set_hasCustomForwardDirection_8((bool)G_B18_0);
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_21 = ___t0;
		NullCheck(L_21);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_22 = L_21->get_address_of_plugOptions_60();
		bool L_23 = L_22->get_hasCustomForwardDirection_8();
		if (!L_23)
		{
			goto IL_0111;
		}
	}
	{
		Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE  L_24 = ___forwardDirection1;
		V_0 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_1 = L_25;
		bool L_26 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_00ac;
		}
	}
	{
		G_B24_0 = 0;
		goto IL_00c5;
	}

IL_00ac:
	{
		bool L_27 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		if (L_27)
		{
			goto IL_00b8;
		}
	}
	{
		G_B24_0 = 1;
		goto IL_00c5;
	}

IL_00b8:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_30 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_28, L_29, /*hidden argument*/NULL);
		G_B24_0 = ((int32_t)(L_30));
	}

IL_00c5:
	{
		if (!G_B24_0)
		{
			goto IL_00d3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___forwardDirection1), L_31, /*hidden argument*/Nullable_1__ctor_m49ABD148B7A7789CB005BA17CA29E1896EE35057_RuntimeMethod_var);
	}

IL_00d3:
	{
		TweenerCore_3_tB8E672121CDE6F3B5895C573FE30EF8B42170AB1 * L_32 = ___t0;
		NullCheck(L_32);
		PathOptions_tE44D7F93669AF298F0376DB1276BFAF8902F65A7 * L_33 = L_32->get_address_of_plugOptions_60();
		bool L_34 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___forwardDirection1), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B27_0 = L_33;
		if (!L_34)
		{
			G_B28_0 = L_33;
			goto IL_00eb;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___forwardDirection1), /*hidden argument*/Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C_RuntimeMethod_var);
		G_B29_0 = L_35;
		G_B29_1 = G_B27_0;
		goto IL_00f0;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		G_B29_0 = L_36;
		G_B29_1 = G_B28_0;
	}

IL_00f0:
	{
		bool L_37 = Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_inline((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___up2), /*hidden argument*/Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_RuntimeMethod_var);
		G_B30_0 = G_B29_0;
		G_B30_1 = G_B29_1;
		if (!L_37)
		{
			G_B31_0 = G_B29_0;
			G_B31_1 = G_B29_1;
			goto IL_0102;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C((Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE *)(&___up2), /*hidden argument*/Nullable_1_get_Value_m902B83FE050783CC1CEF6CB970A5AAB926F77D9C_RuntimeMethod_var);
		G_B32_0 = L_38;
		G_B32_1 = G_B30_0;
		G_B32_2 = G_B30_1;
		goto IL_0107;
	}

IL_0102:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B32_0 = L_39;
		G_B32_1 = G_B31_0;
		G_B32_2 = G_B31_1;
	}

IL_0107:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(G_B32_1, G_B32_0, /*hidden argument*/NULL);
		G_B32_2->set_forward_9(L_40);
	}

IL_0111:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.Tweener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener__ctor_mA00C2693990531C2636134E4443E6E515EEE33FC (Tweener_t9B2A5E94EE6D11F7607E58AE4E37186FF63587C8 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isFromAllowed_56((bool)1);
		Tween__ctor_m6A636EF784F92284565ABFC0513F134BBEB27E74(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_isRelative_mEA3D6AD021A98827C455A7BEE90252C7B4A5D159_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CisRelativeU3Ek__BackingField_30();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_isRelative_m7935E250AE5F0F409A1D26046A019DA0029CE190_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisRelativeU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_playedOnce_mC682AA4DE493B64420CC2ED21B1484DB82351CBB_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CplayedOnceU3Ek__BackingField_46(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_position_m556596E53F51834A0E051C1A28BECA325451F39F_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_47(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_m5F92270FCC9EE0F8A50B2D23FFE0C4DE455662FD_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CplayedOnceU3Ek__BackingField_46();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Tween_get_active_m62D54479B27B4AE1F68046E0BF070119B326F61A_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CactiveU3Ek__BackingField_39();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Tween_get_position_m6B18371E2B35508CFA3D436CD939AD74B907DC52_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CpositionU3Ek__BackingField_47();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Debugger_get_logPriority_mD8D2B952BB81BA0BBEF334A0B4F96D01443DC096DOTween2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Debugger_tD9D47C252FB20009C8276590D54394E430619D16_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tD9D47C252FB20009C8276590D54394E430619D16_il2cpp_TypeInfo_var))->get__logPriority_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Tween_set_active_m8D47B88C314554514ED04A6A0C921F83F6B40168_inline (Tween_t119487E0AB84EF563521F1043116BDBAE68AC437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CactiveU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB0A6989529561627BBB65E6E4342DAA6549DD5A9_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6C7E30F1E2D85F0A4AB37F0F6685E37607F26231_gshared_inline (Nullable_1_tE4EDC8D5ED2772A911F67696644E6C77FA716DC0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m799FAADF5BA2C9E13220149280B2951799A26D7F_gshared_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Nullable_1_GetValueOrDefault_m35E99BED1252A5C9E5A0D197FCF8E3C0E2A3C2A8_gshared_inline (Nullable_1_tCE53BD40AA999E709C1D2369B2A531373CDD89EE * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_value_0();
		return (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0;
	}
}

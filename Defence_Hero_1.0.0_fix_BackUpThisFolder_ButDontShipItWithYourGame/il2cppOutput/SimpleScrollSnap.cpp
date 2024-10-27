#include "pch-cpp.hpp"

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

// System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>
struct Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468;
// System.Action`1<UnityEngine.EventSystems.IDragHandler>
struct Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B;
// System.Action`1<UnityEngine.EventSystems.IEndDragHandler>
struct Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36;
// System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct Action_1_t8224121086205D22DE8E1D535CB5F154A238E134;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.CanvasGroup>
struct Dictionary_2_tE4651BF28C85B3CFF00333B4AB3C00897AF37797;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.UI.Graphic>
struct Dictionary_2_tB4DEFD3319E1F2C9667A19760FD29DD0A2029364;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,UnityEngine.RectTransform>
struct Dictionary_2_t96E21FC8BA238A80F1129386FCB3FB69D9930680;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>
struct TransitionEffectBase_1_tD9295D6D39B42144A880F6F9E9C1DE15250491B7;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>
struct TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<System.Object>
struct TransitionEffectBase_1_t5D94A9F6B9420E0487F7D2DB4CF80BC82EF786A2;
// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>
struct TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>
struct UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98;
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Single>
struct UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// DanielLochner.Assets.SimpleScrollSnap.Fade
struct Fade_tD24489E5C6DE34361D46ECE1246F43A445FC8E2E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NestedScrollRect
struct NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// DanielLochner.Assets.SimpleScrollSnap.RecolourBlue
struct RecolourBlue_tD933A8FED385DAB7178EE19CD579D4DA13C28A8F;
// DanielLochner.Assets.SimpleScrollSnap.RecolourGreen
struct RecolourGreen_t264374955A3F9901495F794CCFF18BEA8A8FE27C;
// DanielLochner.Assets.SimpleScrollSnap.RecolourRed
struct RecolourRed_tE9D0A9AB5008464B52462903C4D4CF91F47400BF;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// DanielLochner.Assets.SimpleScrollSnap.RotateX
struct RotateX_t9682F01498029FBE329F50671A2B65723B535473;
// DanielLochner.Assets.SimpleScrollSnap.RotateY
struct RotateY_t87D8F91D7E0628FA47A628240926746113086D7B;
// DanielLochner.Assets.SimpleScrollSnap.RotateZ
struct RotateZ_tA3C7B1CB2410CADA70DA53A5B0C6A2A9EF93C8E0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// DanielLochner.Assets.SimpleScrollSnap.Scale
struct Scale_tC51EAAE34888D238DFB66A18E3549740BFAD229F;
// DanielLochner.Assets.SimpleScrollSnap.ScaleX
struct ScaleX_t63EB347EEF0488BD91C33254F0DA6427F06025C7;
// DanielLochner.Assets.SimpleScrollSnap.ScaleY
struct ScaleY_tE25FBA9B542F257C90FBB56C0A1FAFE5C5FBB0FF;
// DanielLochner.Assets.SimpleScrollSnap.ScaleZ
struct ScaleZ_t7939D5A708DAE984B0EA3C8CED1F1BE922A19909;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DanielLochner.Assets.SimpleScrollSnap.TranslateZ
struct TranslateZ_tE80063114F44B36C0EC787C1C13D178460B1A6BC;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// NestedScrollRect/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA;
// NestedScrollRect/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F;
// NestedScrollRect/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92;
// NestedScrollRect/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0
struct U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8224121086205D22DE8E1D535CB5F154A238E134_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6;
IL2CPP_EXTERN_C String_t* _stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432;
IL2CPP_EXTERN_C String_t* _stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230;
IL2CPP_EXTERN_C String_t* _stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m1DCB9BFC86BB0809B5EE5AEB935E0D4067D3A8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m184631AEE64B117AC887BB432AAE5B60F68B4425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mBDFD5E1F3FB288B7BCDA9701E4D429EE5B8F4D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m3D872A958B00ABE253FFBECA2912D479C2933E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mFC7012A7203E285998B4350E1BB5294FA712BF52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleScrollSnap_Start_m7187933E7800D052314C65408E74FEE1B9D721D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionEffectBase_1__ctor_mE05778EC7D0AA6DB9877A274FE324E0F98EEB20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD7F3F6B0B653F51FF474C1BCE9135203267CB96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_mBC0163F27DA23DA6851D927D1F6099AE8E87EA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_mC6DDB9A72A59976894D8FA8343EDDDA98A74E89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m8D7F5D7FEB0C110DCBFC5B1757263EA61FD79F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m830936B011961E67B64F8134FC6DB2C4BB860037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mE99C58246A748649345B010E03310D500820666D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m6765885211F6E80472BF72114142FB341E78B75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE18FC24B72D30D5F36E739D3D0C247A2D7E50593 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// DanielLochner.Assets.Margins
struct Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0  : public RuntimeObject
{
	// System.Single DanielLochner.Assets.Margins::Left
	float ___Left_0;
	// System.Single DanielLochner.Assets.Margins::Right
	float ___Right_1;
	// System.Single DanielLochner.Assets.Margins::Top
	float ___Top_2;
	// System.Single DanielLochner.Assets.Margins::Bottom
	float ___Bottom_3;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// NestedScrollRect/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass2_0::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_0;
};

// NestedScrollRect/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass3_0::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_0;
};

// NestedScrollRect/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass4_0::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_0;
};

// NestedScrollRect/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData NestedScrollRect/<>c__DisplayClass5_0::eventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData_0;
};

// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0
struct U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E  : public RuntimeObject
{
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::panelNumber
	int32_t ___panelNumber_0;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::<>4__this
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* ___U3CU3E4__this_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>
struct UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>
struct UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// DanielLochner.Assets.MinMax
struct MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 
{
	// System.Single DanielLochner.Assets.MinMax::min
	float ___min_0;
	// System.Single DanielLochner.Assets.MinMax::max
	float ___max_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>
struct Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.EventSystems.IDragHandler>
struct Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.EventSystems.IEndDragHandler>
struct Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct Action_1_t8224121086205D22DE8E1D535CB5F154A238E134  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>
struct TransitionEffectBase_1_tD9295D6D39B42144A880F6F9E9C1DE15250491B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_tE4651BF28C85B3CFF00333B4AB3C00897AF37797* ___cachedComponents_7;
};

// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>
struct TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_tB4DEFD3319E1F2C9667A19760FD29DD0A2029364* ___cachedComponents_7;
};

// DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>
struct TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxDisplacement
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxDisplacement_4;
	// DanielLochner.Assets.MinMax DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::minMaxValue
	MinMax_tA889633E68F715FD812EAC9E01B6FC6981B38091 ___minMaxValue_5;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::function
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___function_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,T> DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1::cachedComponents
	Dictionary_2_t96E21FC8BA238A80F1129386FCB3FB69D9930680* ___cachedComponents_7;
};

// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DanielLochner.Assets.SimpleScrollSnap.MovementType DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementType
	int32_t ___movementType_4;
	// DanielLochner.Assets.SimpleScrollSnap.MovementAxis DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementAxis
	int32_t ___movementAxis_5;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useAutomaticLayout
	bool ___useAutomaticLayout_6;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticLayoutSpacing
	float ___automaticLayoutSpacing_7;
	// DanielLochner.Assets.SimpleScrollSnap.SizeControl DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::sizeControl
	int32_t ___sizeControl_8;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_9;
	// DanielLochner.Assets.Margins DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticLayoutMargins
	Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* ___automaticLayoutMargins_10;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useInfiniteScrolling
	bool ___useInfiniteScrolling_11;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::infiniteScrollingSpacing
	float ___infiniteScrollingSpacing_12;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useOcclusionCulling
	bool ___useOcclusionCulling_13;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::startingPanel
	int32_t ___startingPanel_14;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useSwipeGestures
	bool ___useSwipeGestures_15;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::minimumSwipeSpeed
	float ___minimumSwipeSpeed_16;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::previousButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___previousButton_17;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::nextButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___nextButton_18;
	// UnityEngine.UI.ToggleGroup DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::pagination
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___pagination_19;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useToggleNavigation
	bool ___useToggleNavigation_20;
	// DanielLochner.Assets.SimpleScrollSnap.SnapTarget DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snapTarget
	int32_t ___snapTarget_21;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snapSpeed
	float ___snapSpeed_22;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::thresholdSpeedToSnap
	float ___thresholdSpeedToSnap_23;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useHardSnapping
	bool ___useHardSnapping_24;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useUnscaledTime
	bool ___useUnscaledTime_25;
	// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onTransitionEffects
	UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* ___onTransitionEffects_26;
	// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelecting
	UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* ___onPanelSelecting_27;
	// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelected
	UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* ___onPanelSelected_28;
	// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelCentering
	UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* ___onPanelCentering_29;
	// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelCentered
	UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* ___onPanelCentered_30;
	// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::scrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___scrollRect_31;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::contentSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___contentSize_32;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::prevAnchoredPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___prevAnchoredPosition_33;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___velocity_34;
	// DanielLochner.Assets.SimpleScrollSnap.Direction DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseDirection
	int32_t ___releaseDirection_35;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseSpeed
	float ___releaseSpeed_36;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isDragging
	bool ___isDragging_37;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isPressing
	bool ___isPressing_38;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::isSelected
	bool ___isSelected_39;
	// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Panels>k__BackingField
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___U3CPanelsU3Ek__BackingField_40;
	// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Toggles>k__BackingField
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___U3CTogglesU3Ek__BackingField_41;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<SelectedPanel>k__BackingField
	int32_t ___U3CSelectedPanelU3Ek__BackingField_42;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<CenteredPanel>k__BackingField
	int32_t ___U3CCenteredPanelU3Ek__BackingField_43;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DanielLochner.Assets.SimpleScrollSnap.Fade
struct Fade_tD24489E5C6DE34361D46ECE1246F43A445FC8E2E  : public TransitionEffectBase_1_tD9295D6D39B42144A880F6F9E9C1DE15250491B7
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// DanielLochner.Assets.SimpleScrollSnap.RecolourBlue
struct RecolourBlue_tD933A8FED385DAB7178EE19CD579D4DA13C28A8F  : public TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4
{
};

// DanielLochner.Assets.SimpleScrollSnap.RecolourGreen
struct RecolourGreen_t264374955A3F9901495F794CCFF18BEA8A8FE27C  : public TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4
{
};

// DanielLochner.Assets.SimpleScrollSnap.RecolourRed
struct RecolourRed_tE9D0A9AB5008464B52462903C4D4CF91F47400BF  : public TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4
{
};

// DanielLochner.Assets.SimpleScrollSnap.RotateX
struct RotateX_t9682F01498029FBE329F50671A2B65723B535473  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.RotateY
struct RotateY_t87D8F91D7E0628FA47A628240926746113086D7B  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.RotateZ
struct RotateZ_tA3C7B1CB2410CADA70DA53A5B0C6A2A9EF93C8E0  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.Scale
struct Scale_tC51EAAE34888D238DFB66A18E3549740BFAD229F  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.ScaleX
struct ScaleX_t63EB347EEF0488BD91C33254F0DA6427F06025C7  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.ScaleY
struct ScaleY_tE25FBA9B542F257C90FBB56C0A1FAFE5C5FBB0FF  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// DanielLochner.Assets.SimpleScrollSnap.ScaleZ
struct ScaleZ_t7939D5A708DAE984B0EA3C8CED1F1BE922A19909  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ___m_Toggles_5;
};

// DanielLochner.Assets.SimpleScrollSnap.TranslateZ
struct TranslateZ_tE80063114F44B36C0EC787C1C13D178460B1A6BC  : public TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B
{
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// NestedScrollRect
struct NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055  : public ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E
{
	// System.Boolean NestedScrollRect::routeToParent
	bool ___routeToParent_41;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
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
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D  : public RuntimeArray
{
	ALIGN_FIELD (8) RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* m_Items[1];

	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098  : public RuntimeArray
{
	ALIGN_FIELD (8) Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* m_Items[1];

	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void NestedScrollRect::DoForParents<System.Object>(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_DoForParents_TisRuntimeObject_mCE2097CDDA87F7884061440154683CEBCE4DB686_gshared (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce<System.Boolean>(UnityEngine.Events.UnityEvent`1<T>,UnityEngine.Events.UnityAction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___unityEvent0, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mE2D513B2A046E33896CB9C87F914C497FD81B72C_gshared (UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789* __this, RuntimeObject* ___arg00, float ___arg11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m48F7C02F8FE07D0CF6B8D4765FA245607595488B_gshared (UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_gshared (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffectBase_1__ctor_m820CE29420FE156E80A707DBDD3048A89E70B618_gshared (TransitionEffectBase_1_t5D94A9F6B9420E0487F7D2DB4CF80BC82EF786A2* __this, const RuntimeMethod* method) ;

// System.Void NestedScrollRect/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mD2F8249D0217F1621EAE5ED8BE5A173C9B91FCDE (U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3A5E6369A2E6AB3B0A2A91A6D61BAC60DD4BE228 (Action_1_t8224121086205D22DE8E1D535CB5F154A238E134* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8224121086205D22DE8E1D535CB5F154A238E134*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IInitializePotentialDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mFC7012A7203E285998B4350E1BB5294FA712BF52 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, Action_1_t8224121086205D22DE8E1D535CB5F154A238E134* ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055*, Action_1_t8224121086205D22DE8E1D535CB5F154A238E134*, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mCE2097CDDA87F7884061440154683CEBCE4DB686_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnInitializePotentialDrag_m35BB18E5EB6B50B7CC4B44171433E1493A5F8A10 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void NestedScrollRect/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4AC8B03E4AFFF1AC0B731126E0692C75A683B0B5 (U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.EventSystems.IDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD8CF5309C8A20EA5948D44A6E212A491BCB4C216 (Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mBDFD5E1F3FB288B7BCDA9701E4D429EE5B8F4D06 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B* ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055*, Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B*, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mCE2097CDDA87F7884061440154683CEBCE4DB686_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnDrag_m1BA80F29441E3761A294E32C7CCE52C35F1B6E5C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void NestedScrollRect/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m97B7D88DE1D49C21FCDAD59DD35AA5F73B2298FF (U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.EventSystems.IBeginDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD85F6EEF8D34226DCD4A96FE4A1E0AF0A4764C12 (Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IBeginDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m184631AEE64B117AC887BB432AAE5B60F68B4425 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468* ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055*, Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468*, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mCE2097CDDA87F7884061440154683CEBCE4DB686_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnBeginDrag_m6B0948CCD12A89B43E4F2596E3C7220A6D426868 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void NestedScrollRect/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2D0F1C9C91EFE133AB4E42188F1E3261B56BEA67 (U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.EventSystems.IEndDragHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9CBF677FABE508F3BB1B83D840B6CB16A0336EB3 (Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void NestedScrollRect::DoForParents<UnityEngine.EventSystems.IEndDragHandler>(System.Action`1<T>)
inline void NestedScrollRect_DoForParents_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m3D872A958B00ABE253FFBECA2912D479C2933E2C (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36* ___action0, const RuntimeMethod* method)
{
	((  void (*) (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055*, Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36*, const RuntimeMethod*))NestedScrollRect_DoForParents_TisRuntimeObject_mCE2097CDDA87F7884061440154683CEBCE4DB686_gshared)(__this, ___action0, method);
}
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnEndDrag_m7CB3145874E1930FEBD50874DF31280FC35B480B (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect__ctor_m71A7660A30496E9D4937AE250FBAB722BF0747C7 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ScrollRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NumberOfPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ValidConfig_m7FC72CA2C2A15E212AAF26BC61D73496300DA79E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Setup_m4488D5966100C2EF517AF9CE287890F0727F7960 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleOcclusionCulling_mBBC0B0F06CCD4C684B1AD2CAD12A3DA4DDEBDF0F (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___forceUpdate0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSelectingAndSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSelectingAndSnapping_mAAB3EE4BD6790D805C8326C1163C042B2D6C8FFF (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleInfiniteScrolling_m695E43628F173D4F547E3C6A34D2F3FE5066E44B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___forceUpdate0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleTransitionEffects_m7F0ADF5E11F5329041428986F2049544DAC74D12 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSwipeGestures_mEA653C45E8A7F341532369A3DDB69C3DF3B1736D (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GetVelocity_m45D60FD92AD7C260A9E8F668BEABCC13DF5A2F8A (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Events.UnityEventBase::GetPersistentEventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityEventBase_GetPersistentEventCount_mB1902016BED421E36781F7169554C7CF554430AF (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetNearestPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Viewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Panels(UnityEngine.RectTransform[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_mA8018259C3C74651F5A6A5572CFBAEA19EE85225_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Panels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_CenteredPanel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_mFC1C513525AC26EF79F2AF0A82A2FA1366E95B9C_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SelectedPanel(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_m5A40B79FDF7C8C0411279707D6E4E87ED6920B8F_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce(UnityEngine.Events.UnityEvent,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventUtility_AddListenerOnce_mEF7BC2A1DA01E819DCF9347F35F7D1C1D953062A (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___unityEvent0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Toggle>()
inline ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* Component_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m1DCB9BFC86BB0809B5EE5AEB935E0D4067D3A8EE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Toggles(UnityEngine.UI.Toggle[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_m96695859BA13215D171848775F2F5E95D424BE8B_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___value0, const RuntimeMethod* method) ;
// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Toggles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::SetIsOnWithoutNotify(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_SetIsOnWithoutNotify_mF5B19F1767B9EFF02335E41D3D2DC678642170C2 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0__ctor_mC740027FC7B5FF93EDBE89B344FC5C7A87EC064C (U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce<System.Boolean>(UnityEngine.Events.UnityEvent`1<T>,UnityEngine.Events.UnityAction`1<T>)
inline void UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___unityEvent0, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB_gshared)(___unityEvent0, ___call1, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SnapToPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SnapToPanel_m821C80BCBDBB36C4FFB9EE029B749FC426A4B9B8 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SelectPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SelectPanel_mDD5AF229E4F1D798FFC13F9FF016D520543BD7F5 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetDisplacementFromCenter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mE99C58246A748649345B010E03310D500820666D (UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arg00, float ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, float, const RuntimeMethod*))UnityEvent_2_Invoke_mE2D513B2A046E33896CB9C87F914C497FD81B72C_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___panelNumber0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToNextPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPreviousPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_CenteredPanel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SelectedPanel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, int32_t ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, int32_t, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_gshared)(__this, ___arg00, ___arg11, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Add(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Add_m365BD33B9E78B784506D13EDDC8375B4F489CFFD (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m8784E2833D9F115FD2B2BED6615426E8CD75EE9B_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Remove_m2E561300E99F3B6BA825E2483A642AC744FAB3B2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.Margins::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Margins__ctor_mD0360F7BD9BF5F1E252A17EF761AD750F645041E (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* __this, float ___m0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single>::.ctor()
inline void UnityEvent_2__ctor_m6765885211F6E80472BF72114142FB341E78B75A (UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98*, const RuntimeMethod*))UnityEvent_2__ctor_m48F7C02F8FE07D0CF6B8D4765FA245607595488B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*, const RuntimeMethod*))UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.CanvasGroup>::.ctor()
inline void TransitionEffectBase_1__ctor_mE05778EC7D0AA6DB9877A274FE324E0F98EEB20C (TransitionEffectBase_1_tD9295D6D39B42144A880F6F9E9C1DE15250491B7* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_tD9295D6D39B42144A880F6F9E9C1DE15250491B7*, const RuntimeMethod*))TransitionEffectBase_1__ctor_m820CE29420FE156E80A707DBDD3048A89E70B618_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.UI.Graphic>::.ctor()
inline void TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E (TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_t2438463FC123DF943C84A0166B93E3F9C197EFE4*, const RuntimeMethod*))TransitionEffectBase_1__ctor_m820CE29420FE156E80A707DBDD3048A89E70B618_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void DanielLochner.Assets.SimpleScrollSnap.TransitionEffectBase`1<UnityEngine.RectTransform>::.ctor()
inline void TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C (TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B* __this, const RuntimeMethod* method)
{
	((  void (*) (TransitionEffectBase_1_tB3A1A99AD5513E6212F2D6B1AC6A2866A9DB995B*, const RuntimeMethod*))TransitionEffectBase_1__ctor_m820CE29420FE156E80A707DBDD3048A89E70B618_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void NestedScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnInitializePotentialDrag_mEF9B72CB5F9EE7D96A632BD562842C1CF7F82A15 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8224121086205D22DE8E1D535CB5F154A238E134_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mFC7012A7203E285998B4350E1BB5294FA712BF52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_mBC0163F27DA23DA6851D927D1F6099AE8E87EA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* L_0 = (U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mD2F8249D0217F1621EAE5ED8BE5A173C9B91FCDE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* L_1 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		L_1->___eventData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___eventData_0), (void*)L_2);
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
		U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* L_3 = V_0;
		Action_1_t8224121086205D22DE8E1D535CB5F154A238E134* L_4 = (Action_1_t8224121086205D22DE8E1D535CB5F154A238E134*)il2cpp_codegen_object_new(Action_1_t8224121086205D22DE8E1D535CB5F154A238E134_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m3A5E6369A2E6AB3B0A2A91A6D61BAC60DD4BE228(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_mBC0163F27DA23DA6851D927D1F6099AE8E87EA94_RuntimeMethod_var), NULL);
		NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mFC7012A7203E285998B4350E1BB5294FA712BF52(__this, L_4, NestedScrollRect_DoForParents_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_mFC7012A7203E285998B4350E1BB5294FA712BF52_RuntimeMethod_var);
		// base.OnInitializePotentialDrag(eventData);
		U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* L_5 = V_0;
		NullCheck(L_5);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = L_5->___eventData_0;
		ScrollRect_OnInitializePotentialDrag_m35BB18E5EB6B50B7CC4B44171433E1493A5F8A10(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnDrag_mA1824169A0CABEFC4A6F478A58CE2B39BACFDD57 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mBDFD5E1F3FB288B7BCDA9701E4D429EE5B8F4D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_mC6DDB9A72A59976894D8FA8343EDDDA98A74E89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* L_0 = (U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4AC8B03E4AFFF1AC0B731126E0692C75A683B0B5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* L_1 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		L_1->___eventData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___eventData_0), (void*)L_2);
		// if (routeToParent)
		bool L_3 = __this->___routeToParent_41;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
		U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* L_4 = V_0;
		Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B* L_5 = (Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B*)il2cpp_codegen_object_new(Action_1_tE25F2150A95D3B2AD47A895CE23FA33B7A9A276B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mD8CF5309C8A20EA5948D44A6E212A491BCB4C216(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_mC6DDB9A72A59976894D8FA8343EDDDA98A74E89C_RuntimeMethod_var), NULL);
		NestedScrollRect_DoForParents_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mBDFD5E1F3FB288B7BCDA9701E4D429EE5B8F4D06(__this, L_5, NestedScrollRect_DoForParents_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_mBDFD5E1F3FB288B7BCDA9701E4D429EE5B8F4D06_RuntimeMethod_var);
		return;
	}

IL_0028:
	{
		// base.OnDrag(eventData);
		U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* L_6 = V_0;
		NullCheck(L_6);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = L_6->___eventData_0;
		ScrollRect_OnDrag_m1BA80F29441E3761A294E32C7CCE52C35F1B6E5C(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnBeginDrag_m58AD9ED8509A06A29FE9934E125E328BF13B3DA0 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m184631AEE64B117AC887BB432AAE5B60F68B4425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m8D7F5D7FEB0C110DCBFC5B1757263EA61FD79F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_0 = (U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m97B7D88DE1D49C21FCDAD59DD35AA5F73B2298FF(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_1 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		L_1->___eventData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___eventData_0), (void*)L_2);
		// if (!horizontal && Math.Abs(eventData.delta.x) > Math.Abs(eventData.delta.y))
		bool L_3;
		L_3 = ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline(__this, NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_4 = V_0;
		NullCheck(L_4);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = L_4->___eventData_0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_5, NULL);
		float L_7 = L_6.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = fabsf(L_7);
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_9 = V_0;
		NullCheck(L_9);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = L_9->___eventData_0;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_10, NULL);
		float L_12 = L_11.___y_1;
		float L_13;
		L_13 = fabsf(L_12);
		if ((!(((float)L_8) > ((float)L_13))))
		{
			goto IL_004a;
		}
	}
	{
		// routeToParent = true;
		__this->___routeToParent_41 = (bool)1;
		goto IL_008e;
	}

IL_004a:
	{
		// else if (!vertical && Math.Abs(eventData.delta.x) < Math.Abs(eventData.delta.y))
		bool L_14;
		L_14 = ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline(__this, NULL);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_15 = V_0;
		NullCheck(L_15);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_16 = L_15->___eventData_0;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_16, NULL);
		float L_18 = L_17.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_19;
		L_19 = fabsf(L_18);
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_20 = V_0;
		NullCheck(L_20);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_21 = L_20->___eventData_0;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_21, NULL);
		float L_23 = L_22.___y_1;
		float L_24;
		L_24 = fabsf(L_23);
		if ((!(((float)L_19) < ((float)L_24))))
		{
			goto IL_0087;
		}
	}
	{
		// routeToParent = true;
		__this->___routeToParent_41 = (bool)1;
		goto IL_008e;
	}

IL_0087:
	{
		// routeToParent = false;
		__this->___routeToParent_41 = (bool)0;
	}

IL_008e:
	{
		// if (routeToParent)
		bool L_25 = __this->___routeToParent_41;
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_26 = V_0;
		Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468* L_27 = (Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468*)il2cpp_codegen_object_new(Action_1_t1DD0A448DA27EE942B85DD15FA1B21F368BA6468_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mD85F6EEF8D34226DCD4A96FE4A1E0AF0A4764C12(L_27, L_26, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m8D7F5D7FEB0C110DCBFC5B1757263EA61FD79F11_RuntimeMethod_var), NULL);
		NestedScrollRect_DoForParents_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m184631AEE64B117AC887BB432AAE5B60F68B4425(__this, L_27, NestedScrollRect_DoForParents_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m184631AEE64B117AC887BB432AAE5B60F68B4425_RuntimeMethod_var);
		return;
	}

IL_00a9:
	{
		// base.OnBeginDrag(eventData);
		U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* L_28 = V_0;
		NullCheck(L_28);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_29 = L_28->___eventData_0;
		ScrollRect_OnBeginDrag_m6B0948CCD12A89B43E4F2596E3C7220A6D426868(__this, L_29, NULL);
		// }
		return;
	}
}
// System.Void NestedScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect_OnEndDrag_m42CA0CDA674FB74BF5663910033A71EA88C19999 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NestedScrollRect_DoForParents_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m3D872A958B00ABE253FFBECA2912D479C2933E2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m830936B011961E67B64F8134FC6DB2C4BB860037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* L_0 = (U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m2D0F1C9C91EFE133AB4E42188F1E3261B56BEA67(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* L_1 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		L_1->___eventData_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___eventData_0), (void*)L_2);
		// if (routeToParent)
		bool L_3 = __this->___routeToParent_41;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
		U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* L_4 = V_0;
		Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36* L_5 = (Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36*)il2cpp_codegen_object_new(Action_1_t8127956442EEF10D070FBFCE304B6C92B0994C36_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m9CBF677FABE508F3BB1B83D840B6CB16A0336EB3(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m830936B011961E67B64F8134FC6DB2C4BB860037_RuntimeMethod_var), NULL);
		NestedScrollRect_DoForParents_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m3D872A958B00ABE253FFBECA2912D479C2933E2C(__this, L_5, NestedScrollRect_DoForParents_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_m3D872A958B00ABE253FFBECA2912D479C2933E2C_RuntimeMethod_var);
		goto IL_0035;
	}

IL_0029:
	{
		// base.OnEndDrag(eventData);
		U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* L_6 = V_0;
		NullCheck(L_6);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = L_6->___eventData_0;
		ScrollRect_OnEndDrag_m7CB3145874E1930FEBD50874DF31280FC35B480B(__this, L_7, NULL);
	}

IL_0035:
	{
		// routeToParent = false;
		__this->___routeToParent_41 = (bool)0;
		// }
		return;
	}
}
// System.Void NestedScrollRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NestedScrollRect__ctor_mFFBF42B204172F2A014440EF1B0E9CD0E8434FD3 (NestedScrollRect_tC6A47E85B438CD329380A5CD95710E63703F9055* __this, const RuntimeMethod* method) 
{
	{
		ScrollRect__ctor_m71A7660A30496E9D4937AE250FBAB722BF0747C7(__this, NULL);
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
// System.Void NestedScrollRect/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mD2F8249D0217F1621EAE5ED8BE5A173C9B91FCDE (U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass2_0::<OnInitializePotentialDrag>b__0(UnityEngine.EventSystems.IInitializePotentialDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnInitializePotentialDragU3Eb__0_mBC0163F27DA23DA6851D927D1F6099AE8E87EA94 (U3CU3Ec__DisplayClass2_0_tBC058CEB1993642CF1A488A7AA4AA1BE12840FAA* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = __this->___eventData_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData) */, IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IInitializePotentialDragHandler>((parent) => { parent.OnInitializePotentialDrag(eventData); });
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
// System.Void NestedScrollRect/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4AC8B03E4AFFF1AC0B731126E0692C75A683B0B5 (U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass3_0::<OnDrag>b__0(UnityEngine.EventSystems.IDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnDragU3Eb__0_mC6DDB9A72A59976894D8FA8343EDDDA98A74E89C (U3CU3Ec__DisplayClass3_0_tF5223AF06DA44D4D9E2359611C8252C6F9D0AE9F* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = __this->___eventData_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData) */, IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IDragHandler>((parent) => { parent.OnDrag(eventData); });
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
// System.Void NestedScrollRect/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m97B7D88DE1D49C21FCDAD59DD35AA5F73B2298FF (U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass4_0::<OnBeginDrag>b__0(UnityEngine.EventSystems.IBeginDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnBeginDragU3Eb__0_m8D7F5D7FEB0C110DCBFC5B1757263EA61FD79F11 (U3CU3Ec__DisplayClass4_0_tCE5EB0C23126D9798BDE7F201F6666285E9BDD92* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = __this->___eventData_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData) */, IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IBeginDragHandler>((parent) => { parent.OnBeginDrag(eventData); });
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
// System.Void NestedScrollRect/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m2D0F1C9C91EFE133AB4E42188F1E3261B56BEA67 (U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NestedScrollRect/<>c__DisplayClass5_0::<OnEndDrag>b__0(UnityEngine.EventSystems.IEndDragHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnEndDragU3Eb__0_m830936B011961E67B64F8134FC6DB2C4BB860037 (U3CU3Ec__DisplayClass5_0_t8843B245FAF589DA8C1DEE59AD8708878120D60C* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
		RuntimeObject* L_0 = ___parent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = __this->___eventData_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(0 /* System.Void UnityEngine.EventSystems.IEndDragHandler::OnEndDrag(UnityEngine.EventSystems.PointerEventData) */, IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_il2cpp_TypeInfo_var, L_0, L_1);
		// DoForParents<IEndDragHandler>((parent) => { parent.OnEndDrag(eventData); });
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
// DanielLochner.Assets.SimpleScrollSnap.MovementType DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MovementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_MovementType_m9E787CDA12A19ED915B6C46A6C5E68FAC15CEC25 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => movementType;
		int32_t L_0 = __this->___movementType_4;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MovementType(DanielLochner.Assets.SimpleScrollSnap.MovementType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MovementType_mF4A6239DC3242C335FBE666CFE9430C88AD41FD4 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => movementType = value;
		int32_t L_0 = ___value0;
		__this->___movementType_4 = L_0;
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.MovementAxis DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MovementAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_MovementAxis_mE80053F184BA73731448B42201EA68347C48C953 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => movementAxis;
		int32_t L_0 = __this->___movementAxis_5;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MovementAxis(DanielLochner.Assets.SimpleScrollSnap.MovementAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MovementAxis_m508D51DF9ED2643BA7D1CCAD5D6E3676A24FEDD1 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => movementAxis = value;
		int32_t L_0 = ___value0;
		__this->___movementAxis_5 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseAutomaticLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseAutomaticLayout_m9E5A26B421D3039574CABE6E4603F5E3F79B33B5 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useAutomaticLayout;
		bool L_0 = __this->___useAutomaticLayout_6;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseAutomaticLayout(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseAutomaticLayout_mD6E49E1522C9E74625144B8A48284DED66C5C690 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useAutomaticLayout = value;
		bool L_0 = ___value0;
		__this->___useAutomaticLayout_6 = L_0;
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.SizeControl DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SizeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SizeControl_m01451C2D0B06283096D770DD51270FE98EE43D65 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => sizeControl;
		int32_t L_0 = __this->___sizeControl_8;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SizeControl(DanielLochner.Assets.SimpleScrollSnap.SizeControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SizeControl_mE7F3032C71DDC839104089271851757BB0684848 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => sizeControl = value;
		int32_t L_0 = ___value0;
		__this->___sizeControl_8 = L_0;
		return;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_get_Size_mE3194F6A5147BB6DED39D7445985AD3E475A4BE2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___size_9;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Size_mB8CEC8CA5EE88A1AE7256B8C7D1D2FAC84F1389B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set => size = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___size_9 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_AutomaticLayoutSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_AutomaticLayoutSpacing_m8F7D86B3F45ADF3FA85860912243A66C8AE04997 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => automaticLayoutSpacing;
		float L_0 = __this->___automaticLayoutSpacing_7;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_AutomaticLayoutSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_AutomaticLayoutSpacing_m5F100260AA4F02ACDF71C62C526182DB53AE27D6 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => automaticLayoutSpacing = value;
		float L_0 = ___value0;
		__this->___automaticLayoutSpacing_7 = L_0;
		return;
	}
}
// DanielLochner.Assets.Margins DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_AutomaticLayoutMargins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* SimpleScrollSnap_get_AutomaticLayoutMargins_m5D63DE4E109D964706700E2A7EBC3426BEE137D3 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => automaticLayoutMargins;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_0 = __this->___automaticLayoutMargins_10;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_AutomaticLayoutMargins(DanielLochner.Assets.Margins)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_AutomaticLayoutMargins_mDC3BBD95151D0F25FFF50DA32DFBC686D8A144F0 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* ___value0, const RuntimeMethod* method) 
{
	{
		// set => automaticLayoutMargins = value;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_0 = ___value0;
		__this->___automaticLayoutMargins_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaticLayoutMargins_10), (void*)L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseInfiniteScrolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseInfiniteScrolling_m4A522D12E48C6E25EB70219C3189F3924E0D7099 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useInfiniteScrolling;
		bool L_0 = __this->___useInfiniteScrolling_11;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseInfiniteScrolling_m76F13DCDAEF87049103F056DE76C20E29398E35A (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useInfiniteScrolling = value;
		bool L_0 = ___value0;
		__this->___useInfiniteScrolling_11 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_InfiniteScrollingSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_InfiniteScrollingSpacing_mDA64C725E9E4A100DE0A3F5A3B8CBFE7424FB8AB (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => infiniteScrollingSpacing;
		float L_0 = __this->___infiniteScrollingSpacing_12;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_InfiniteScrollingSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_InfiniteScrollingSpacing_mFEB2F7F651F7E1655BB75A4A4DBC6A0E2235EAE2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => infiniteScrollingSpacing = value;
		float L_0 = ___value0;
		__this->___infiniteScrollingSpacing_12 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseOcclusionCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseOcclusionCulling_m19699F660A50D6483167D676B9218DC2A66BE5FE (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useOcclusionCulling;
		bool L_0 = __this->___useOcclusionCulling_13;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseOcclusionCulling_m6EFBB9A093DD923BB0E74D9ED1E59D01DB7E69D8 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useOcclusionCulling = value;
		bool L_0 = ___value0;
		__this->___useOcclusionCulling_13 = L_0;
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_StartingPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_StartingPanel_m489648E83E076668B6A9155710D7FBFE9ACD40F2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => startingPanel;
		int32_t L_0 = __this->___startingPanel_14;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_StartingPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_StartingPanel_mB508D51B0A8CBB970F9A090E6548E61E508DB05E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => startingPanel = value;
		int32_t L_0 = ___value0;
		__this->___startingPanel_14 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseSwipeGestures_mB49AF4819FCDAF1CE05D1D2F1ABF780D3E4073F2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useSwipeGestures;
		bool L_0 = __this->___useSwipeGestures_15;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseSwipeGestures(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseSwipeGestures_mADAAB4257D168E46C63DBCF416C962F4A48DB6FB (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useSwipeGestures = value;
		bool L_0 = ___value0;
		__this->___useSwipeGestures_15 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_MinimumSwipeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_MinimumSwipeSpeed_mF3F351429550B515B862D68A3C8E62113A1B4223 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => minimumSwipeSpeed;
		float L_0 = __this->___minimumSwipeSpeed_16;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_MinimumSwipeSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_MinimumSwipeSpeed_m2827836E58BB909D4EDEFFDA8F85910444B04F24 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => minimumSwipeSpeed = value;
		float L_0 = ___value0;
		__this->___minimumSwipeSpeed_16 = L_0;
		return;
	}
}
// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_PreviousButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* SimpleScrollSnap_get_PreviousButton_m1FBCF989F49BDAA1DDB3C4D4DC68962A8A6022B6 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => previousButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___previousButton_17;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_PreviousButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_PreviousButton_m42580DEFC4B0049C227F544369B062849A82420B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => previousButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___previousButton_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousButton_17), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NextButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* SimpleScrollSnap_get_NextButton_m559DFC094BE1C0B55E16301AAD9F1E3F0D192EBA (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => nextButton;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___nextButton_18;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_NextButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_NextButton_mE2E18AB87A62D11572C6C90CB9C235726E201600 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___value0, const RuntimeMethod* method) 
{
	{
		// set => nextButton = value;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___value0;
		__this->___nextButton_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_18), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.ToggleGroup DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Pagination()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* SimpleScrollSnap_get_Pagination_m7938AAE2E5792FC74813DD2F2F6B51EB49B82185 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => pagination;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_0 = __this->___pagination_19;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Pagination(UnityEngine.UI.ToggleGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Pagination_m93FB637E84E4A7AE88C0D2EC6BCB13B8AA4A63C8 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___value0, const RuntimeMethod* method) 
{
	{
		// set => pagination = value;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_0 = ___value0;
		__this->___pagination_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pagination_19), (void*)L_0);
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ToggleNavigation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ToggleNavigation_mBF300316771F3B8E8051BA761DAAFF0DE51669C8 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useToggleNavigation;
		bool L_0 = __this->___useToggleNavigation_20;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_ToggleNavigation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_ToggleNavigation_m0F597BDBAE8BBBEC0BBCD662DDA92EC1B1662909 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useToggleNavigation = value;
		bool L_0 = ___value0;
		__this->___useToggleNavigation_20 = L_0;
		return;
	}
}
// DanielLochner.Assets.SimpleScrollSnap.SnapTarget DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SnapTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SnapTarget_m7FFFBE6B51C865FE6D82FCA56872BCE8ECB21683 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => snapTarget;
		int32_t L_0 = __this->___snapTarget_21;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SnapTarget(DanielLochner.Assets.SimpleScrollSnap.SnapTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SnapTarget_m3FC34BDDE85F73CBC80889F13A17B689E510E378 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => snapTarget = value;
		int32_t L_0 = ___value0;
		__this->___snapTarget_21 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SnapSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_SnapSpeed_m16B717A3F348641F36B41197C19A13C30FE0A198 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => snapSpeed;
		float L_0 = __this->___snapSpeed_22;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SnapSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SnapSpeed_mEAB18719F1BB65B8AB90957A957ADBEC92EDCDB5 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => snapSpeed = value;
		float L_0 = ___value0;
		__this->___snapSpeed_22 = L_0;
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ThresholdSpeedToSnap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SimpleScrollSnap_get_ThresholdSpeedToSnap_mD1A9D3D74CC2CD2D7A392B5B4DD65659E296E95C (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => thresholdSpeedToSnap;
		float L_0 = __this->___thresholdSpeedToSnap_23;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_ThresholdSpeedToSnap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_ThresholdSpeedToSnap_m35CC0D16D68DAB899E5166E93003F88DBAEADC64 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => thresholdSpeedToSnap = value;
		float L_0 = ___value0;
		__this->___thresholdSpeedToSnap_23 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseHardSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseHardSnapping_mCAEECD2818B7196994A53384AABC90B105CEFE33 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useHardSnapping;
		bool L_0 = __this->___useHardSnapping_24;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseHardSnapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseHardSnapping_m68441F63E8E17112860F09683F19D2C2552A2853 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useHardSnapping = value;
		bool L_0 = ___value0;
		__this->___useHardSnapping_24 = L_0;
		return;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_UseUnscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_UseUnscaledTime_m948512ACFE5E3CA25FE7CB036661F01959226743 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => useUnscaledTime;
		bool L_0 = __this->___useUnscaledTime_25;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_UseUnscaledTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_UseUnscaledTime_m3F328A419743B3EF4032AFBDB3FCC17D79ADC019 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => useUnscaledTime = value;
		bool L_0 = ___value0;
		__this->___useUnscaledTime_25 = L_0;
		return;
	}
}
// UnityEngine.Events.UnityEvent`2<UnityEngine.GameObject,System.Single> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* SimpleScrollSnap_get_OnTransitionEffects_m19FA7ED537B8D424522F9532DDB506025489462B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => onTransitionEffects;
		UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* L_0 = __this->___onTransitionEffects_26;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelSelecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* SimpleScrollSnap_get_OnPanelSelecting_mD83D05D23FC37D61BDB18EAB5A41F1AED2C410A1 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => onPanelSelecting;
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_0 = __this->___onPanelSelecting_27;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* SimpleScrollSnap_get_OnPanelSelected_mEDFDD070A219AA134AFE1F74EBA166AEEA0CCF43 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => onPanelSelected;
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_0 = __this->___onPanelSelected_28;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelCentering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* SimpleScrollSnap_get_OnPanelCentering_m3F7A77C6834DE6F832D22D72408C849D040FA838 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => onPanelCentering;
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_0 = __this->___onPanelCentering_29;
		return L_0;
	}
}
// UnityEngine.Events.UnityEvent`2<System.Int32,System.Int32> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_OnPanelCentered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* SimpleScrollSnap_get_OnPanelCentered_m8446FB45FAC9D495A011F18BD93EC9B02ED19530 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => onPanelCentered;
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_0 = __this->___onPanelCentered_30;
		return L_0;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => ScrollRect.content;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Viewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => ScrollRect.viewport;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* SimpleScrollSnap_get_RectTransform_mB9154E84A170F8A14E1DD1569C4399D919D71873 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ScrollRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (scrollRect == null)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___scrollRect_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// scrollRect = GetComponent<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2;
		L_2 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->___scrollRect_31 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scrollRect_31), (void*)L_2);
	}

IL_001a:
	{
		// return scrollRect;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->___scrollRect_31;
		return L_3;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_NumberOfPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => Content.childCount;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_ValidConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleScrollSnap_get_ValidConfig_m7FC72CA2C2A15E212AAF26BC61D73496300DA79E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool valid = true;
		V_0 = (bool)1;
		// if (pagination != null)
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_0 = __this->___pagination_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		// int numberOfToggles = pagination.transform.childCount;
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_2 = __this->___pagination_19;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// if (numberOfToggles != NumberOfPanels)
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0075;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> The number of Toggles should be equivalent to the number of Panels. There are currently " + numberOfToggles + " Toggles and " + NumberOfPanels + " Panels. If you are adding Panels dynamically during runtime, please update your pagination to reflect the number of Panels you will have before adding.", gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2B690FB8DA7AC95043FDA9FA3CDDC583672501D6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4FF7E018E13DC994E6359F2A4C988B36E12FA544);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13;
		L_13 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		V_2 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral31D39FE81DB635FACE944FB5C9643939FA3E0058);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(L_16, L_17, NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_0075:
	{
		// if (snapSpeed < 0)
		float L_18 = __this->___snapSpeed_22;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Snapping speed cannot be negative.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteral43657ED7B0503D60FF88BF678A9460427BBA807E, L_19, NULL);
		// valid = false;
		V_0 = (bool)0;
	}

IL_0094:
	{
		// return valid;
		bool L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => velocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___velocity_34;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Velocity_m92EC28A9CBA920448DA3751A7456281F01529E8D (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ScrollRect.velocity = velocity = value;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = L_1;
		V_0 = L_2;
		__this->___velocity_34 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		NullCheck(L_0);
		ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline(L_0, L_3, NULL);
		// isSelected = false;
		__this->___isSelected_39 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Panels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_0 = __this->___U3CPanelsU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Panels(UnityEngine.RectTransform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_mA8018259C3C74651F5A6A5572CFBAEA19EE85225 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_0 = ___value0;
		__this->___U3CPanelsU3Ek__BackingField_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPanelsU3Ek__BackingField_40), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Toggles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_0 = __this->___U3CTogglesU3Ek__BackingField_41;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_Toggles(UnityEngine.UI.Toggle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_m96695859BA13215D171848775F2F5E95D424BE8B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_0 = ___value0;
		__this->___U3CTogglesU3Ek__BackingField_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTogglesU3Ek__BackingField_41), (void*)L_0);
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_SelectedPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CSelectedPanelU3Ek__BackingField_42;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_SelectedPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_m5A40B79FDF7C8C0411279707D6E4E87ED6920B8F (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CSelectedPanelU3Ek__BackingField_42 = L_0;
		return;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_CenteredPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CCenteredPanelU3Ek__BackingField_43;
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::set_CenteredPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_mFC1C513525AC26EF79F2AF0A82A2FA1366E95B9C (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CCenteredPanelU3Ek__BackingField_43 = L_0;
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Start_m7187933E7800D052314C65408E74FEE1B9D721D7 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// if (ValidConfig)
		bool L_0;
		L_0 = SimpleScrollSnap_get_ValidConfig_m7FC72CA2C2A15E212AAF26BC61D73496300DA79E(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Setup();
		SimpleScrollSnap_Setup_m4488D5966100C2EF517AF9CE287890F0727F7960(__this, NULL);
		return;
	}

IL_000f:
	{
		// throw new Exception("Invalid configuration.");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FAD7856BCE41FCDF1BF95ED0F7570B9C075A4CA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleScrollSnap_Start_m7187933E7800D052314C65408E74FEE1B9D721D7_RuntimeMethod_var)));
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Update_mA9CE9EE8E3FAF4575E57B0437FF7882C25348713 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// if (NumberOfPanels == 0) return;
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (NumberOfPanels == 0) return;
		return;
	}

IL_0009:
	{
		// HandleOcclusionCulling();
		SimpleScrollSnap_HandleOcclusionCulling_mBBC0B0F06CCD4C684B1AD2CAD12A3DA4DDEBDF0F(__this, (bool)0, NULL);
		// HandleSelectingAndSnapping();
		SimpleScrollSnap_HandleSelectingAndSnapping_mAAB3EE4BD6790D805C8326C1163C042B2D6C8FFF(__this, NULL);
		// HandleInfiniteScrolling();
		SimpleScrollSnap_HandleInfiniteScrolling_m695E43628F173D4F547E3C6A34D2F3FE5066E44B(__this, (bool)0, NULL);
		// HandleTransitionEffects();
		SimpleScrollSnap_HandleTransitionEffects_m7F0ADF5E11F5329041428986F2049544DAC74D12(__this, NULL);
		// HandleSwipeGestures();
		SimpleScrollSnap_HandleSwipeGestures_mEA653C45E8A7F341532369A3DDB69C3DF3B1736D(__this, NULL);
		// GetVelocity();
		SimpleScrollSnap_GetVelocity_m45D60FD92AD7C260A9E8F668BEABCC13DF5A2F8A(__this, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnPointerDown_mDD938327EC6C0578A1426564683267EEA78F0EF3 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressing = true;
		__this->___isPressing_38 = (bool)1;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnPointerUp_m5B14D8E0DD2F7E1930338AEF36BEBB28AD0EE9A1 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// isPressing = false;
		__this->___isPressing_38 = (bool)0;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnDrag_mEC02605BA6C25244CC7E2C2E78FED29F7A8C5ADB (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDragging && onPanelSelecting.GetPersistentEventCount() > 0)
		bool L_0 = __this->___isDragging_37;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_1 = __this->___onPanelSelecting_27;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = UnityEventBase_GetPersistentEventCount_mB1902016BED421E36781F7169554C7CF554430AF(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// onPanelSelecting.Invoke(GetNearestPanel());
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_3 = __this->___onPanelSelecting_27;
		int32_t L_4;
		L_4 = SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9(__this, NULL);
		NullCheck(L_3);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_3, L_4, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnBeginDrag_m14FF600D36555E47ECEE0556901FDEA824CDC604 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (useHardSnapping)
		bool L_0 = __this->___useHardSnapping_24;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// ScrollRect.inertia = true;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_1);
		ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline(L_1, (bool)1, NULL);
	}

IL_0014:
	{
		// isSelected = false;
		__this->___isSelected_39 = (bool)0;
		// isDragging = true;
		__this->___isDragging_37 = (bool)1;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_OnEndDrag_m9619DFB4B7FA8EB9C276F90C6C7CCF70242669CD (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B5_0 = NULL;
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B6_1 = NULL;
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B9_0 = NULL;
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* G_B10_1 = NULL;
	{
		// isDragging = false;
		__this->___isDragging_37 = (bool)0;
		// switch (movementAxis)
		int32_t L_0 = __this->___movementAxis_5;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0051;
	}

IL_0017:
	{
		// releaseDirection = (Velocity.x > 0) ? Direction.Right : Direction.Left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline(__this, NULL);
		float L_4 = L_3.___x_0;
		G_B4_0 = __this;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B5_0 = __this;
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 2;
		G_B6_1 = G_B4_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B6_0 = 3;
		G_B6_1 = G_B5_0;
	}

IL_002e:
	{
		NullCheck(G_B6_1);
		G_B6_1->___releaseDirection_35 = G_B6_0;
		// break;
		goto IL_0051;
	}

IL_0035:
	{
		// releaseDirection = (Velocity.y > 0) ? Direction.Up : Direction.Down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline(__this, NULL);
		float L_6 = L_5.___y_1;
		G_B8_0 = __this;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			G_B9_0 = __this;
			goto IL_004b;
		}
	}
	{
		G_B10_0 = 1;
		G_B10_1 = G_B8_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_004c:
	{
		NullCheck(G_B10_1);
		G_B10_1->___releaseDirection_35 = G_B10_0;
	}

IL_0051:
	{
		// releaseSpeed = Velocity.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline(__this, NULL);
		V_1 = L_7;
		float L_8;
		L_8 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		__this->___releaseSpeed_36 = L_8;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Setup_m4488D5966100C2EF517AF9CE287890F0727F7960 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m1DCB9BFC86BB0809B5EE5AEB935E0D4067D3A8EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD7F3F6B0B653F51FF474C1BCE9135203267CB96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	bool V_12 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* V_16 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B4_0 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B5_1 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B7_0 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B8_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B15_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B16_1 = NULL;
	float G_B18_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B18_1 = NULL;
	float G_B17_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B17_1 = NULL;
	float G_B19_0 = 0.0f;
	float G_B19_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B19_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B21_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B22_1 = NULL;
	float G_B24_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B24_1 = NULL;
	float G_B23_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B23_1 = NULL;
	float G_B25_0 = 0.0f;
	float G_B25_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B25_2 = NULL;
	float G_B28_0 = 0.0f;
	float G_B31_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B38_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B37_0 = NULL;
	float G_B39_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B39_1 = NULL;
	float G_B41_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B41_1 = NULL;
	float G_B40_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B40_1 = NULL;
	float G_B42_0 = 0.0f;
	float G_B42_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B42_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B44_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B43_0 = NULL;
	float G_B45_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B45_1 = NULL;
	float G_B47_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B47_1 = NULL;
	float G_B46_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B46_1 = NULL;
	float G_B48_0 = 0.0f;
	float G_B48_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B48_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B50_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B49_0 = NULL;
	float G_B51_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B51_1 = NULL;
	float G_B53_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B53_1 = NULL;
	float G_B52_0 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B52_1 = NULL;
	float G_B54_0 = 0.0f;
	float G_B54_1 = 0.0f;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B54_2 = NULL;
	float G_B57_0 = 0.0f;
	float G_B60_0 = 0.0f;
	float G_B70_0 = 0.0f;
	float G_B74_0 = 0.0f;
	{
		// if (NumberOfPanels == 0) return;
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (NumberOfPanels == 0) return;
		return;
	}

IL_0009:
	{
		// ScrollRect.horizontal = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Horizontal);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		int32_t L_2 = __this->___movementType_4;
		G_B3_0 = L_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B4_0 = L_1;
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = __this->___movementAxis_5;
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0024:
	{
		NullCheck(G_B5_1);
		ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline(G_B5_1, (bool)G_B5_0, NULL);
		// ScrollRect.vertical =   (movementType == MovementType.Free) || (movementAxis == MovementAxis.Vertical);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4;
		L_4 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		int32_t L_5 = __this->___movementType_4;
		G_B6_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B7_0 = L_4;
			goto IL_0043;
		}
	}
	{
		int32_t L_6 = __this->___movementAxis_5;
		G_B8_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0044:
	{
		NullCheck(G_B8_1);
		ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline(G_B8_1, (bool)G_B8_0, NULL);
		// if (sizeControl == SizeControl.Fit)
		int32_t L_7 = __this->___sizeControl_8;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// size = Viewport.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_3 = L_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		__this->___size_9 = L_10;
	}

IL_006b:
	{
		// Panels = new RectTransform[NumberOfPanels];
		int32_t L_11;
		L_11 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_12 = (RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D*)(RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D*)SZArrayNew(RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D_il2cpp_TypeInfo_var, (uint32_t)L_11);
		SimpleScrollSnap_set_Panels_mA8018259C3C74651F5A6A5572CFBAEA19EE85225_inline(__this, L_12, NULL);
		// for (int i = 0; i < NumberOfPanels; i++)
		V_4 = 0;
		goto IL_02b2;
	}

IL_0084:
	{
		// Panels[i] = Content.GetChild(i) as RectTransform;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_13;
		L_13 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_14 = V_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_15, L_16, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_17, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_17, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// if (movementType == MovementType.Fixed && useAutomaticLayout)
		int32_t L_18 = __this->___movementType_4;
		if (L_18)
		{
			goto IL_02ac;
		}
	}
	{
		bool L_19 = __this->___useAutomaticLayout_6;
		if (!L_19)
		{
			goto IL_02ac;
		}
	}
	{
		// Panels[i].anchorMin = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_20;
		L_20 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = __this->___movementAxis_5;
		G_B14_0 = L_23;
		if (!L_24)
		{
			G_B15_0 = L_23;
			goto IL_00cd;
		}
	}
	{
		G_B16_0 = (0.5f);
		G_B16_1 = G_B14_0;
		goto IL_00d2;
	}

IL_00cd:
	{
		G_B16_0 = (0.0f);
		G_B16_1 = G_B15_0;
	}

IL_00d2:
	{
		int32_t L_25 = __this->___movementAxis_5;
		G_B17_0 = G_B16_0;
		G_B17_1 = G_B16_1;
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			G_B18_0 = G_B16_0;
			G_B18_1 = G_B16_1;
			goto IL_00e2;
		}
	}
	{
		G_B19_0 = (0.5f);
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00e7:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), G_B19_1, G_B19_0, /*hidden argument*/NULL);
		NullCheck(G_B19_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(G_B19_2, L_26, NULL);
		// Panels[i].anchorMax = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_27;
		L_27 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = __this->___movementAxis_5;
		G_B20_0 = L_30;
		if (!L_31)
		{
			G_B21_0 = L_30;
			goto IL_0109;
		}
	}
	{
		G_B22_0 = (0.5f);
		G_B22_1 = G_B20_0;
		goto IL_010e;
	}

IL_0109:
	{
		G_B22_0 = (0.0f);
		G_B22_1 = G_B21_0;
	}

IL_010e:
	{
		int32_t L_32 = __this->___movementAxis_5;
		G_B23_0 = G_B22_0;
		G_B23_1 = G_B22_1;
		if ((((int32_t)L_32) == ((int32_t)1)))
		{
			G_B24_0 = G_B22_0;
			G_B24_1 = G_B22_1;
			goto IL_011e;
		}
	}
	{
		G_B25_0 = (0.5f);
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		goto IL_0123;
	}

IL_011e:
	{
		G_B25_0 = (0.0f);
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
	}

IL_0123:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), G_B25_1, G_B25_0, /*hidden argument*/NULL);
		NullCheck(G_B25_2);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(G_B25_2, L_33, NULL);
		// float x = (automaticLayoutMargins.Right + automaticLayoutMargins.Left)   / 2f - automaticLayoutMargins.Left;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_34 = __this->___automaticLayoutMargins_10;
		NullCheck(L_34);
		float L_35 = L_34->___Right_1;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_36 = __this->___automaticLayoutMargins_10;
		NullCheck(L_36);
		float L_37 = L_36->___Left_0;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_38 = __this->___automaticLayoutMargins_10;
		NullCheck(L_38);
		float L_39 = L_38->___Left_0;
		V_5 = ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_add(L_35, L_37))/(2.0f))), L_39));
		// float y = (automaticLayoutMargins.Top   + automaticLayoutMargins.Bottom) / 2f - automaticLayoutMargins.Bottom;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_40 = __this->___automaticLayoutMargins_10;
		NullCheck(L_40);
		float L_41 = L_40->___Top_2;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_42 = __this->___automaticLayoutMargins_10;
		NullCheck(L_42);
		float L_43 = L_42->___Bottom_3;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_44 = __this->___automaticLayoutMargins_10;
		NullCheck(L_44);
		float L_45 = L_44->___Bottom_3;
		V_6 = ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_add(L_41, L_43))/(2.0f))), L_45));
		// Vector2 marginOffset = new Vector2(x / size.x, y / size.y);
		float L_46 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&__this->___size_9);
		float L_48 = L_47->___x_0;
		float L_49 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_50 = (&__this->___size_9);
		float L_51 = L_50->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_7), ((float)(L_46/L_48)), ((float)(L_49/L_51)), NULL);
		// Panels[i].pivot = new Vector2(0.5f, 0.5f) + marginOffset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_52;
		L_52 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_53 = V_4;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_56), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_56, L_57, NULL);
		NullCheck(L_55);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_55, L_58, NULL);
		// Panels[i].sizeDelta = size - new Vector2(automaticLayoutMargins.Left + automaticLayoutMargins.Right, automaticLayoutMargins.Top + automaticLayoutMargins.Bottom);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_59;
		L_59 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_60 = V_4;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = __this->___size_9;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_64 = __this->___automaticLayoutMargins_10;
		NullCheck(L_64);
		float L_65 = L_64->___Left_0;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_66 = __this->___automaticLayoutMargins_10;
		NullCheck(L_66);
		float L_67 = L_66->___Right_1;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_68 = __this->___automaticLayoutMargins_10;
		NullCheck(L_68);
		float L_69 = L_68->___Top_2;
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_70 = __this->___automaticLayoutMargins_10;
		NullCheck(L_70);
		float L_71 = L_70->___Bottom_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_72), ((float)il2cpp_codegen_add(L_65, L_67)), ((float)il2cpp_codegen_add(L_69, L_71)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_63, L_72, NULL);
		NullCheck(L_62);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_62, L_73, NULL);
		// float panelPosX = (movementAxis == MovementAxis.Horizontal) ? i * (automaticLayoutSpacing + 1f) * size.x + (size.x / 2f) : 0f;
		int32_t L_74 = __this->___movementAxis_5;
		if (!L_74)
		{
			goto IL_0225;
		}
	}
	{
		G_B28_0 = (0.0f);
		goto IL_0253;
	}

IL_0225:
	{
		int32_t L_75 = V_4;
		float L_76 = __this->___automaticLayoutSpacing_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_77 = (&__this->___size_9);
		float L_78 = L_77->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_79 = (&__this->___size_9);
		float L_80 = L_79->___x_0;
		G_B28_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_75), ((float)il2cpp_codegen_add(L_76, (1.0f))))), L_78)), ((float)(L_80/(2.0f)))));
	}

IL_0253:
	{
		V_8 = G_B28_0;
		// float panelPosY = (movementAxis == MovementAxis.Vertical)   ? i * (automaticLayoutSpacing + 1f) * size.y + (size.y / 2f) : 0f;
		int32_t L_81 = __this->___movementAxis_5;
		if ((((int32_t)L_81) == ((int32_t)1)))
		{
			goto IL_0265;
		}
	}
	{
		G_B31_0 = (0.0f);
		goto IL_0293;
	}

IL_0265:
	{
		int32_t L_82 = V_4;
		float L_83 = __this->___automaticLayoutSpacing_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84 = (&__this->___size_9);
		float L_85 = L_84->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_86 = (&__this->___size_9);
		float L_87 = L_86->___y_1;
		G_B31_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_82), ((float)il2cpp_codegen_add(L_83, (1.0f))))), L_85)), ((float)(L_87/(2.0f)))));
	}

IL_0293:
	{
		V_9 = G_B31_0;
		// Panels[i].anchoredPosition = new Vector2(panelPosX, panelPosY);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_88;
		L_88 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		float L_92 = V_8;
		float L_93 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_94), L_92, L_93, /*hidden argument*/NULL);
		NullCheck(L_91);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_91, L_94, NULL);
	}

IL_02ac:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_95 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_02b2:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_0084;
		}
	}
	{
		// if (movementType == MovementType.Fixed)
		int32_t L_98 = __this->___movementType_4;
		if (L_98)
		{
			goto IL_04a7;
		}
	}
	{
		// if (useAutomaticLayout)
		bool L_99 = __this->___useAutomaticLayout_6;
		if (!L_99)
		{
			goto IL_044c;
		}
	}
	{
		// Content.anchorMin = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_100;
		L_100 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		int32_t L_101 = __this->___movementAxis_5;
		G_B37_0 = L_100;
		if (!L_101)
		{
			G_B38_0 = L_100;
			goto IL_02ea;
		}
	}
	{
		G_B39_0 = (0.5f);
		G_B39_1 = G_B37_0;
		goto IL_02ef;
	}

IL_02ea:
	{
		G_B39_0 = (0.0f);
		G_B39_1 = G_B38_0;
	}

IL_02ef:
	{
		int32_t L_102 = __this->___movementAxis_5;
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		if ((((int32_t)L_102) == ((int32_t)1)))
		{
			G_B41_0 = G_B39_0;
			G_B41_1 = G_B39_1;
			goto IL_02ff;
		}
	}
	{
		G_B42_0 = (0.5f);
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		goto IL_0304;
	}

IL_02ff:
	{
		G_B42_0 = (0.0f);
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
	}

IL_0304:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_103), G_B42_1, G_B42_0, /*hidden argument*/NULL);
		NullCheck(G_B42_2);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(G_B42_2, L_103, NULL);
		// Content.anchorMax = new Vector2(movementAxis == MovementAxis.Horizontal ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_104;
		L_104 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		int32_t L_105 = __this->___movementAxis_5;
		G_B43_0 = L_104;
		if (!L_105)
		{
			G_B44_0 = L_104;
			goto IL_0323;
		}
	}
	{
		G_B45_0 = (0.5f);
		G_B45_1 = G_B43_0;
		goto IL_0328;
	}

IL_0323:
	{
		G_B45_0 = (0.0f);
		G_B45_1 = G_B44_0;
	}

IL_0328:
	{
		int32_t L_106 = __this->___movementAxis_5;
		G_B46_0 = G_B45_0;
		G_B46_1 = G_B45_1;
		if ((((int32_t)L_106) == ((int32_t)1)))
		{
			G_B47_0 = G_B45_0;
			G_B47_1 = G_B45_1;
			goto IL_0338;
		}
	}
	{
		G_B48_0 = (0.5f);
		G_B48_1 = G_B46_0;
		G_B48_2 = G_B46_1;
		goto IL_033d;
	}

IL_0338:
	{
		G_B48_0 = (0.0f);
		G_B48_1 = G_B47_0;
		G_B48_2 = G_B47_1;
	}

IL_033d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_107), G_B48_1, G_B48_0, /*hidden argument*/NULL);
		NullCheck(G_B48_2);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(G_B48_2, L_107, NULL);
		// Content.pivot = new Vector2(movementAxis == MovementAxis.Horizontal     ? 0f : 0.5f, movementAxis == MovementAxis.Vertical ? 0f : 0.5f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_108;
		L_108 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		int32_t L_109 = __this->___movementAxis_5;
		G_B49_0 = L_108;
		if (!L_109)
		{
			G_B50_0 = L_108;
			goto IL_035c;
		}
	}
	{
		G_B51_0 = (0.5f);
		G_B51_1 = G_B49_0;
		goto IL_0361;
	}

IL_035c:
	{
		G_B51_0 = (0.0f);
		G_B51_1 = G_B50_0;
	}

IL_0361:
	{
		int32_t L_110 = __this->___movementAxis_5;
		G_B52_0 = G_B51_0;
		G_B52_1 = G_B51_1;
		if ((((int32_t)L_110) == ((int32_t)1)))
		{
			G_B53_0 = G_B51_0;
			G_B53_1 = G_B51_1;
			goto IL_0371;
		}
	}
	{
		G_B54_0 = (0.5f);
		G_B54_1 = G_B52_0;
		G_B54_2 = G_B52_1;
		goto IL_0376;
	}

IL_0371:
	{
		G_B54_0 = (0.0f);
		G_B54_1 = G_B53_0;
		G_B54_2 = G_B53_1;
	}

IL_0376:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_111), G_B54_1, G_B54_0, /*hidden argument*/NULL);
		NullCheck(G_B54_2);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(G_B54_2, L_111, NULL);
		// Vector2 min = Panels[0].anchoredPosition;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_112;
		L_112 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		NullCheck(L_112);
		int32_t L_113 = 0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115;
		L_115 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_114, NULL);
		// Vector2 max = Panels[NumberOfPanels - 1].anchoredPosition;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_116;
		L_116 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_117;
		L_117 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_subtract(L_117, 1));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		L_120 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_119, NULL);
		// float contentWidth  = (movementAxis == MovementAxis.Horizontal) ? (NumberOfPanels * (automaticLayoutSpacing + 1f) * size.x) - (size.x * automaticLayoutSpacing) : size.x;
		int32_t L_121 = __this->___movementAxis_5;
		if (!L_121)
		{
			goto IL_03b8;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_122 = (&__this->___size_9);
		float L_123 = L_122->___x_0;
		G_B57_0 = L_123;
		goto IL_03eb;
	}

IL_03b8:
	{
		int32_t L_124;
		L_124 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		float L_125 = __this->___automaticLayoutSpacing_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_126 = (&__this->___size_9);
		float L_127 = L_126->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_128 = (&__this->___size_9);
		float L_129 = L_128->___x_0;
		float L_130 = __this->___automaticLayoutSpacing_7;
		G_B57_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_124), ((float)il2cpp_codegen_add(L_125, (1.0f))))), L_127)), ((float)il2cpp_codegen_multiply(L_129, L_130))));
	}

IL_03eb:
	{
		V_10 = G_B57_0;
		// float contentHeight = (movementAxis == MovementAxis.Vertical)   ? (NumberOfPanels * (automaticLayoutSpacing + 1f) * size.y) - (size.y * automaticLayoutSpacing) : size.y;
		int32_t L_131 = __this->___movementAxis_5;
		if ((((int32_t)L_131) == ((int32_t)1)))
		{
			goto IL_0403;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_132 = (&__this->___size_9);
		float L_133 = L_132->___y_1;
		G_B60_0 = L_133;
		goto IL_0436;
	}

IL_0403:
	{
		int32_t L_134;
		L_134 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		float L_135 = __this->___automaticLayoutSpacing_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_136 = (&__this->___size_9);
		float L_137 = L_136->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_138 = (&__this->___size_9);
		float L_139 = L_138->___y_1;
		float L_140 = __this->___automaticLayoutSpacing_7;
		G_B60_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_134), ((float)il2cpp_codegen_add(L_135, (1.0f))))), L_137)), ((float)il2cpp_codegen_multiply(L_139, L_140))));
	}

IL_0436:
	{
		V_11 = G_B60_0;
		// Content.sizeDelta = new Vector2(contentWidth, contentHeight);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_141;
		L_141 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		float L_142 = V_10;
		float L_143 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144;
		memset((&L_144), 0, sizeof(L_144));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_144), L_142, L_143, /*hidden argument*/NULL);
		NullCheck(L_141);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_141, L_144, NULL);
	}

IL_044c:
	{
		// if (useInfiniteScrolling)
		bool L_145 = __this->___useInfiniteScrolling_11;
		if (!L_145)
		{
			goto IL_0496;
		}
	}
	{
		// ScrollRect.movementType = ScrollRect.MovementType.Unrestricted;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_146;
		L_146 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_146);
		ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline(L_146, 0, NULL);
		// contentSize = Content.rect.size + (size * infiniteScrollingSpacing);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_147;
		L_147 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_147);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_148;
		L_148 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_147, NULL);
		V_3 = L_148;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149;
		L_149 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_150 = __this->___size_9;
		float L_151 = __this->___infiniteScrollingSpacing_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152;
		L_152 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_150, L_151, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153;
		L_153 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_149, L_152, NULL);
		__this->___contentSize_32 = L_153;
		// HandleInfiniteScrolling(true);
		SimpleScrollSnap_HandleInfiniteScrolling_m695E43628F173D4F547E3C6A34D2F3FE5066E44B(__this, (bool)1, NULL);
	}

IL_0496:
	{
		// if (useOcclusionCulling)
		bool L_154 = __this->___useOcclusionCulling_13;
		if (!L_154)
		{
			goto IL_04c4;
		}
	}
	{
		// HandleOcclusionCulling(true);
		SimpleScrollSnap_HandleOcclusionCulling_mBBC0B0F06CCD4C684B1AD2CAD12A3DA4DDEBDF0F(__this, (bool)1, NULL);
		goto IL_04c4;
	}

IL_04a7:
	{
		// useAutomaticLayout = useInfiniteScrolling = useOcclusionCulling = false;
		int32_t L_155 = 0;
		V_12 = (bool)L_155;
		__this->___useOcclusionCulling_13 = (bool)L_155;
		bool L_156 = V_12;
		bool L_157 = L_156;
		V_12 = L_157;
		__this->___useInfiniteScrolling_11 = L_157;
		bool L_158 = V_12;
		__this->___useAutomaticLayout_6 = L_158;
	}

IL_04c4:
	{
		// float xOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Horizontal) ? Viewport.rect.width  / 2f : 0f;
		int32_t L_159 = __this->___movementType_4;
		if ((((int32_t)L_159) == ((int32_t)1)))
		{
			goto IL_04dc;
		}
	}
	{
		int32_t L_160 = __this->___movementAxis_5;
		if (!L_160)
		{
			goto IL_04dc;
		}
	}
	{
		G_B70_0 = (0.0f);
		goto IL_04f5;
	}

IL_04dc:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_161;
		L_161 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_161);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_162;
		L_162 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_161, NULL);
		V_3 = L_162;
		float L_163;
		L_163 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		G_B70_0 = ((float)(L_163/(2.0f)));
	}

IL_04f5:
	{
		V_0 = G_B70_0;
		// float yOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Vertical)   ? Viewport.rect.height / 2f : 0f;
		int32_t L_164 = __this->___movementType_4;
		if ((((int32_t)L_164) == ((int32_t)1)))
		{
			goto IL_050f;
		}
	}
	{
		int32_t L_165 = __this->___movementAxis_5;
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_050f;
		}
	}
	{
		G_B74_0 = (0.0f);
		goto IL_0528;
	}

IL_050f:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_166;
		L_166 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_166);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_167;
		L_167 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_166, NULL);
		V_3 = L_167;
		float L_168;
		L_168 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		G_B74_0 = ((float)(L_168/(2.0f)));
	}

IL_0528:
	{
		V_1 = G_B74_0;
		// Vector2 offset = new Vector2(xOffset, yOffset);
		float L_169 = V_0;
		float L_170 = V_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_169, L_170, NULL);
		// prevAnchoredPosition = Content.anchoredPosition = -Panels[startingPanel].anchoredPosition + offset;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_171;
		L_171 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_172;
		L_172 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_173 = __this->___startingPanel_14;
		NullCheck(L_172);
		int32_t L_174 = L_173;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_175);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176;
		L_176 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_175, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_177;
		L_177 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_176, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179;
		L_179 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_177, L_178, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_180 = L_179;
		V_13 = L_180;
		NullCheck(L_171);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_171, L_180, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_13;
		__this->___prevAnchoredPosition_33 = L_181;
		// SelectedPanel = CenteredPanel = startingPanel;
		int32_t L_182 = __this->___startingPanel_14;
		int32_t L_183 = L_182;
		V_14 = L_183;
		SimpleScrollSnap_set_CenteredPanel_mFC1C513525AC26EF79F2AF0A82A2FA1366E95B9C_inline(__this, L_183, NULL);
		int32_t L_184 = V_14;
		SimpleScrollSnap_set_SelectedPanel_m5A40B79FDF7C8C0411279707D6E4E87ED6920B8F_inline(__this, L_184, NULL);
		// if (previousButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_185 = __this->___previousButton_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_186;
		L_186 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_185, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_186)
		{
			goto IL_05a6;
		}
	}
	{
		// previousButton.onClick.AddListenerOnce(GoToPreviousPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_187 = __this->___previousButton_17;
		NullCheck(L_187);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_188;
		L_188 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_187, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_189 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_189);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_189, __this, (intptr_t)((void*)SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E_RuntimeMethod_var), NULL);
		UnityEventUtility_AddListenerOnce_mEF7BC2A1DA01E819DCF9347F35F7D1C1D953062A(L_188, L_189, NULL);
	}

IL_05a6:
	{
		// if (nextButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_190 = __this->___nextButton_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_191;
		L_191 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_190, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_191)
		{
			goto IL_05d0;
		}
	}
	{
		// nextButton.onClick.AddListenerOnce(GoToNextPanel);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_192 = __this->___nextButton_18;
		NullCheck(L_192);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_193;
		L_193 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_192, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_194 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_194);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_194, __this, (intptr_t)((void*)SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9_RuntimeMethod_var), NULL);
		UnityEventUtility_AddListenerOnce_mEF7BC2A1DA01E819DCF9347F35F7D1C1D953062A(L_193, L_194, NULL);
	}

IL_05d0:
	{
		// if (pagination != null && NumberOfPanels != 0)
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_195 = __this->___pagination_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_196;
		L_196 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_195, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_196)
		{
			goto IL_0659;
		}
	}
	{
		int32_t L_197;
		L_197 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if (!L_197)
		{
			goto IL_0659;
		}
	}
	{
		// Toggles = pagination.GetComponentsInChildren<Toggle>();
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_198 = __this->___pagination_19;
		NullCheck(L_198);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_199;
		L_199 = Component_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m1DCB9BFC86BB0809B5EE5AEB935E0D4067D3A8EE(L_198, Component_GetComponentsInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m1DCB9BFC86BB0809B5EE5AEB935E0D4067D3A8EE_RuntimeMethod_var);
		SimpleScrollSnap_set_Toggles_m96695859BA13215D171848775F2F5E95D424BE8B_inline(__this, L_199, NULL);
		// Toggles[startingPanel].SetIsOnWithoutNotify(true);
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_200;
		L_200 = SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline(__this, NULL);
		int32_t L_201 = __this->___startingPanel_14;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		NullCheck(L_203);
		Toggle_SetIsOnWithoutNotify_mF5B19F1767B9EFF02335E41D3D2DC678642170C2(L_203, (bool)1, NULL);
		// for (int i = 0; i < Toggles.Length; i++)
		V_15 = 0;
		goto IL_064d;
	}

IL_060f:
	{
		U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* L_204 = (U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E_il2cpp_TypeInfo_var);
		NullCheck(L_204);
		U3CU3Ec__DisplayClass150_0__ctor_mC740027FC7B5FF93EDBE89B344FC5C7A87EC064C(L_204, NULL);
		V_16 = L_204;
		U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* L_205 = V_16;
		NullCheck(L_205);
		L_205->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_205->___U3CU3E4__this_1), (void*)__this);
		// int panelNumber = i;
		U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* L_206 = V_16;
		int32_t L_207 = V_15;
		NullCheck(L_206);
		L_206->___panelNumber_0 = L_207;
		// Toggles[i].onValueChanged.AddListenerOnce(delegate (bool isOn)
		// {
		//     if (isOn && useToggleNavigation)
		//     {
		//         GoToPanel(panelNumber);
		//     }
		// });
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_208;
		L_208 = SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline(__this, NULL);
		int32_t L_209 = V_15;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		NullCheck(L_211);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_212 = L_211->___onValueChanged_23;
		U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* L_213 = V_16;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_214 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_214);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_214, L_213, (intptr_t)((void*)U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD7F3F6B0B653F51FF474C1BCE9135203267CB96D_RuntimeMethod_var), NULL);
		UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB(L_212, L_214, UnityEventUtility_AddListenerOnce_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mCDCA619694F80DBDA8B871D0238A077ED61EBDDB_RuntimeMethod_var);
		// for (int i = 0; i < Toggles.Length; i++)
		int32_t L_215 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_215, 1));
	}

IL_064d:
	{
		// for (int i = 0; i < Toggles.Length; i++)
		int32_t L_216 = V_15;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_217;
		L_217 = SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline(__this, NULL);
		NullCheck(L_217);
		if ((((int32_t)L_216) < ((int32_t)((int32_t)(((RuntimeArray*)L_217)->max_length)))))
		{
			goto IL_060f;
		}
	}

IL_0659:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSelectingAndSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSelectingAndSnapping_mAAB3EE4BD6790D805C8326C1163C042B2D6C8FFF (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isSelected)
		bool L_0 = __this->___isSelected_39;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (!((isDragging || isPressing) && useSwipeGestures))
		bool L_1 = __this->___isDragging_37;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->___isPressing_38;
		if (!L_2)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		bool L_3 = __this->___useSwipeGestures_15;
		if (L_3)
		{
			goto IL_005d;
		}
	}

IL_0020:
	{
		// SnapToPanel();
		SimpleScrollSnap_SnapToPanel_m821C80BCBDBB36C4FFB9EE029B749FC426A4B9B8(__this, NULL);
		return;
	}

IL_0027:
	{
		// else if (!isDragging && (ScrollRect.velocity.magnitude <= thresholdSpeedToSnap || thresholdSpeedToSnap == -1f))
		bool L_4 = __this->___isDragging_37;
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_5;
		L_5 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline(L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		float L_8 = __this->___thresholdSpeedToSnap_23;
		if ((((float)L_7) <= ((float)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		float L_9 = __this->___thresholdSpeedToSnap_23;
		if ((!(((float)L_9) == ((float)(-1.0f)))))
		{
			goto IL_005d;
		}
	}

IL_0057:
	{
		// SelectPanel();
		SimpleScrollSnap_SelectPanel_mDD5AF229E4F1D798FFC13F9FF016D520543BD7F5(__this, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleOcclusionCulling_mBBC0B0F06CCD4C684B1AD2CAD12A3DA4DDEBDF0F (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___forceUpdate0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (useOcclusionCulling && (Velocity.magnitude > 0f || forceUpdate))
		bool L_0 = __this->___useOcclusionCulling_13;
		if (!L_0)
		{
			goto IL_00ed;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline(__this, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		bool L_3 = ___forceUpdate0;
		if (!((int32_t)(((((float)L_2) > ((float)(0.0f)))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_00ed;
		}
	}
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_1 = 0;
		goto IL_00e1;
	}

IL_002e:
	{
		// switch (movementAxis)
		int32_t L_4 = __this->___movementAxis_5;
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00dd;
	}

IL_0041:
	{
		// Panels[i].gameObject.SetActive(Mathf.Abs(GetDisplacementFromCenter(i).x) <= Viewport.rect.width  / 2f + size.x);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_7;
		L_7 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		int32_t L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_12, NULL);
		float L_14 = L_13.___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_16);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		L_17 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_16, NULL);
		V_3 = L_17;
		float L_18;
		L_18 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___size_9);
		float L_20 = L_19->___x_0;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)((((int32_t)((!(((float)L_15) <= ((float)((float)il2cpp_codegen_add(((float)(L_18/(2.0f))), L_20)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// break;
		goto IL_00dd;
	}

IL_0090:
	{
		// Panels[i].gameObject.SetActive(Mathf.Abs(GetDisplacementFromCenter(i).y) <= Viewport.rect.height / 2f + size.y);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_21;
		L_21 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		int32_t L_26 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_26, NULL);
		float L_28 = L_27.___y_1;
		float L_29;
		L_29 = fabsf(L_28);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30;
		L_30 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_30);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31;
		L_31 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_30, NULL);
		V_3 = L_31;
		float L_32;
		L_32 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___size_9);
		float L_34 = L_33->___y_1;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)((((int32_t)((!(((float)L_29) <= ((float)((float)il2cpp_codegen_add(((float)(L_32/(2.0f))), L_34)))))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_00dd:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00e1:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_36 = V_1;
		int32_t L_37;
		L_37 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_002e;
		}
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleInfiniteScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleInfiniteScrolling_m695E43628F173D4F547E3C6A34D2F3FE5066E44B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, bool ___forceUpdate0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (useInfiniteScrolling && (Velocity.magnitude > 0 || forceUpdate))
		bool L_0 = __this->___useInfiniteScrolling_11;
		if (!L_0)
		{
			goto IL_01a8;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline(__this, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		bool L_3 = ___forceUpdate0;
		if (!((int32_t)(((((float)L_2) > ((float)(0.0f)))? 1 : 0)|(int32_t)L_3)))
		{
			goto IL_01a8;
		}
	}
	{
		// switch (movementAxis)
		int32_t L_4 = __this->___movementAxis_5;
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_00ec;
		}
	}
	{
		return;
	}

IL_0039:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_2 = 0;
		goto IL_00df;
	}

IL_0040:
	{
		// Vector2 offset = new Vector2(contentSize.x, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___contentSize_32);
		float L_8 = L_7->___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_8, (0.0f), NULL);
		// if (GetDisplacementFromCenter(i).x > Content.rect.width /  2f)
		int32_t L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_9, NULL);
		float L_11 = L_10.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_12);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_12, NULL);
		V_4 = L_13;
		float L_14;
		L_14 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		if ((!(((float)L_11) > ((float)((float)(L_14/(2.0f)))))))
		{
			goto IL_009a;
		}
	}
	{
		// Panels[i].anchoredPosition -= offset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_15;
		L_15 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = L_18;
		NullCheck(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_19, L_22, NULL);
		goto IL_00db;
	}

IL_009a:
	{
		// if (GetDisplacementFromCenter(i).x < Content.rect.width / -2f)
		int32_t L_23 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_23, NULL);
		float L_25 = L_24.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_26);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		L_27 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_26, NULL);
		V_4 = L_27;
		float L_28;
		L_28 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		if ((!(((float)L_25) < ((float)((float)(L_28/(-2.0f)))))))
		{
			goto IL_00db;
		}
	}
	{
		// Panels[i].anchoredPosition += offset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_29;
		L_29 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = L_32;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_34, L_35, NULL);
		NullCheck(L_33);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_33, L_36, NULL);
	}

IL_00db:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00df:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_38 = V_2;
		int32_t L_39;
		L_39 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0040;
		}
	}
	{
		// break;
		return;
	}

IL_00ec:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_5 = 0;
		goto IL_019b;
	}

IL_00f4:
	{
		// Vector2 offset = new Vector2(0, contentSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___contentSize_32);
		float L_41 = L_40->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), (0.0f), L_41, NULL);
		// if (GetDisplacementFromCenter(i).y > Content.rect.height /  2f)
		int32_t L_42 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_42, NULL);
		float L_44 = L_43.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45;
		L_45 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_45);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_46;
		L_46 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_45, NULL);
		V_4 = L_46;
		float L_47;
		L_47 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		if ((!(((float)L_44) > ((float)((float)(L_47/(2.0f)))))))
		{
			goto IL_0151;
		}
	}
	{
		// Panels[i].anchoredPosition -= offset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_48;
		L_48 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52 = L_51;
		NullCheck(L_52);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_52, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_53, L_54, NULL);
		NullCheck(L_52);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_52, L_55, NULL);
		goto IL_0195;
	}

IL_0151:
	{
		// if (GetDisplacementFromCenter(i).y < Content.rect.height / -2f)
		int32_t L_56 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_56, NULL);
		float L_58 = L_57.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59;
		L_59 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_59);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_60;
		L_60 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_59, NULL);
		V_4 = L_60;
		float L_61;
		L_61 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		if ((!(((float)L_58) < ((float)((float)(L_61/(-2.0f)))))))
		{
			goto IL_0195;
		}
	}
	{
		// Panels[i].anchoredPosition += offset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_62;
		L_62 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_63 = V_5;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66 = L_65;
		NullCheck(L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_66, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_67, L_68, NULL);
		NullCheck(L_66);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_66, L_69, NULL);
	}

IL_0195:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_019b:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_71 = V_5;
		int32_t L_72;
		L_72 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00f4;
		}
	}

IL_01a8:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleSwipeGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleSwipeGestures_mEA653C45E8A7F341532369A3DDB69C3DF3B1736D (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B3_0 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B4_1 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B6_0 = NULL;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* G_B7_1 = NULL;
	{
		// if (useSwipeGestures)
		bool L_0 = __this->___useSwipeGestures_15;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// ScrollRect.horizontal = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Horizontal);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1;
		L_1 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		int32_t L_2 = __this->___movementType_4;
		G_B2_0 = L_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B3_0 = L_1;
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = __this->___movementAxis_5;
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0023:
	{
		NullCheck(G_B4_1);
		ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline(G_B4_1, (bool)G_B4_0, NULL);
		// ScrollRect.vertical   = (movementType == MovementType.Free) || (movementAxis == MovementAxis.Vertical);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4;
		L_4 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		int32_t L_5 = __this->___movementType_4;
		G_B5_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B6_0 = L_4;
			goto IL_0042;
		}
	}
	{
		int32_t L_6 = __this->___movementAxis_5;
		G_B7_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		G_B7_1 = G_B5_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0043:
	{
		NullCheck(G_B7_1);
		ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline(G_B7_1, (bool)G_B7_0, NULL);
		return;
	}

IL_0049:
	{
		// ScrollRect.horizontal = ScrollRect.vertical = !isDragging;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_7;
		L_7 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_8;
		L_8 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		bool L_9 = __this->___isDragging_37;
		int32_t L_10 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		V_0 = (bool)L_10;
		NullCheck(L_8);
		ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline(L_8, (bool)L_10, NULL);
		bool L_11 = V_0;
		NullCheck(L_7);
		ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline(L_7, L_11, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::HandleTransitionEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_HandleTransitionEffects_m7F0ADF5E11F5329041428986F2049544DAC74D12 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mE99C58246A748649345B010E03310D500820666D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		// if (onTransitionEffects.GetPersistentEventCount() == 0) return;
		UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* L_0 = __this->___onTransitionEffects_26;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityEventBase_GetPersistentEventCount_mB1902016BED421E36781F7169554C7CF554430AF(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (onTransitionEffects.GetPersistentEventCount() == 0) return;
		return;
	}

IL_000e:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_0012:
	{
		// Vector2 displacement = GetDisplacementFromCenter(i);
		int32_t L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_2, NULL);
		V_1 = L_3;
		// float d = (movementType == MovementType.Free) ? displacement.magnitude : ((movementAxis == MovementAxis.Horizontal) ? displacement.x : displacement.y);
		int32_t L_4 = __this->___movementType_4;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = __this->___movementAxis_5;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_1;
		float L_7 = L_6.___y_1;
		G_B8_0 = L_7;
		goto IL_0042;
	}

IL_0033:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		float L_9 = L_8.___x_0;
		G_B8_0 = L_9;
		goto IL_0042;
	}

IL_003b:
	{
		float L_10;
		L_10 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_1), NULL);
		G_B8_0 = L_10;
	}

IL_0042:
	{
		V_2 = G_B8_0;
		// onTransitionEffects.Invoke(Panels[i].gameObject, d);
		UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* L_11 = __this->___onTransitionEffects_26;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_12;
		L_12 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		float L_17 = V_2;
		NullCheck(L_11);
		UnityEvent_2_Invoke_mE99C58246A748649345B010E03310D500820666D(L_11, L_16, L_17, UnityEvent_2_Invoke_mE99C58246A748649345B010E03310D500820666D_RuntimeMethod_var);
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < NumberOfPanels; i++)
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SelectPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SelectPanel_mDD5AF229E4F1D798FFC13F9FF016D520543BD7F5 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9(__this, NULL);
		V_0 = L_0;
		// Vector2 displacementFromCenter = GetDisplacementFromCenter(nearestPanel);
		int32_t L_1 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_1, NULL);
		V_1 = L_2;
		// if (snapTarget == SnapTarget.Nearest || releaseSpeed <= minimumSwipeSpeed)
		int32_t L_3 = __this->___snapTarget_21;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		float L_4 = __this->___releaseSpeed_36;
		float L_5 = __this->___minimumSwipeSpeed_16;
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_002d;
		}
	}

IL_0025:
	{
		// GoToPanel(nearestPanel);
		int32_t L_6 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, L_6, NULL);
		return;
	}

IL_002d:
	{
		// if (snapTarget == SnapTarget.Previous)
		int32_t L_7 = __this->___snapTarget_21;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_00a3;
		}
	}
	{
		// if ((releaseDirection == Direction.Right && displacementFromCenter.x < 0f) || (releaseDirection == Direction.Up   && displacementFromCenter.y < 0f))
		int32_t L_8 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = L_9.___x_0;
		if ((((float)L_10) < ((float)(0.0f))))
		{
			goto IL_0061;
		}
	}

IL_004c:
	{
		int32_t L_11 = __this->___releaseDirection_35;
		if (L_11)
		{
			goto IL_0068;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___y_1;
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}

IL_0061:
	{
		// GoToNextPanel();
		SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9(__this, NULL);
		return;
	}

IL_0068:
	{
		// if ((releaseDirection == Direction.Left  && displacementFromCenter.x > 0f) || (releaseDirection == Direction.Down && displacementFromCenter.y > 0f))
		int32_t L_14 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_007e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___x_0;
		if ((((float)L_16) > ((float)(0.0f))))
		{
			goto IL_0094;
		}
	}

IL_007e:
	{
		int32_t L_17 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_1;
		float L_19 = L_18.___y_1;
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}

IL_0094:
	{
		// GoToPreviousPanel();
		SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E(__this, NULL);
		return;
	}

IL_009b:
	{
		// GoToPanel(nearestPanel);
		int32_t L_20 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, L_20, NULL);
		return;
	}

IL_00a3:
	{
		// if (snapTarget == SnapTarget.Next)
		int32_t L_21 = __this->___snapTarget_21;
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_0118;
		}
	}
	{
		// if ((releaseDirection == Direction.Right && displacementFromCenter.x > 0f) || (releaseDirection == Direction.Up   && displacementFromCenter.y > 0f))
		int32_t L_22 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_00c2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___x_0;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_00d7;
		}
	}

IL_00c2:
	{
		int32_t L_25 = __this->___releaseDirection_35;
		if (L_25)
		{
			goto IL_00de;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		float L_27 = L_26.___y_1;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_00de;
		}
	}

IL_00d7:
	{
		// GoToPreviousPanel();
		SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E(__this, NULL);
		return;
	}

IL_00de:
	{
		// if ((releaseDirection == Direction.Left  && displacementFromCenter.x < 0f) || (releaseDirection == Direction.Down && displacementFromCenter.y < 0f))
		int32_t L_28 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_00f4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		float L_30 = L_29.___x_0;
		if ((((float)L_30) < ((float)(0.0f))))
		{
			goto IL_010a;
		}
	}

IL_00f4:
	{
		int32_t L_31 = __this->___releaseDirection_35;
		if ((!(((uint32_t)L_31) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_1;
		float L_33 = L_32.___y_1;
		if ((!(((float)L_33) < ((float)(0.0f)))))
		{
			goto IL_0111;
		}
	}

IL_010a:
	{
		// GoToNextPanel();
		SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9(__this, NULL);
		return;
	}

IL_0111:
	{
		// GoToPanel(nearestPanel);
		int32_t L_34 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, L_34, NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::SnapToPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_SnapToPanel_m821C80BCBDBB36C4FFB9EE029B749FC426A4B9B8 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B10_1;
	memset((&G_B10_1), 0, sizeof(G_B10_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B10_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B9_1;
	memset((&G_B9_1), 0, sizeof(G_B9_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B11_2;
	memset((&G_B11_2), 0, sizeof(G_B11_2));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B11_3 = NULL;
	{
		// float xOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Horizontal) ? Viewport.rect.width  / 2f : 0f;
		int32_t L_0 = __this->___movementType_4;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->___movementAxis_5;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		G_B4_0 = (0.0f);
		goto IL_0032;
	}

IL_0018:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_4 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		G_B4_0 = ((float)(L_4/(2.0f)));
	}

IL_0032:
	{
		V_0 = G_B4_0;
		// float yOffset = (movementType == MovementType.Free || movementAxis == MovementAxis.Vertical)   ? Viewport.rect.height / 2f : 0f;
		int32_t L_5 = __this->___movementType_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = __this->___movementAxis_5;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_0066;
	}

IL_004c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_7, NULL);
		V_4 = L_8;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		G_B8_0 = ((float)(L_9/(2.0f)));
	}

IL_0066:
	{
		V_1 = G_B8_0;
		// Vector2 offset = new Vector2(xOffset, yOffset);
		float L_10 = V_0;
		float L_11 = V_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_10, L_11, NULL);
		// Vector2 targetPosition = -Panels[CenteredPanel].anchoredPosition + offset;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_12;
		L_12 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_13;
		L_13 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_17, L_18, NULL);
		V_3 = L_19;
		// Content.anchoredPosition = Vector2.Lerp(Content.anchoredPosition, targetPosition, (useUnscaledTime ? Time.unscaledDeltaTime : Time.deltaTime) * snapSpeed);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_3;
		bool L_24 = __this->___useUnscaledTime_25;
		G_B9_0 = L_23;
		G_B9_1 = L_22;
		G_B9_2 = L_20;
		if (L_24)
		{
			G_B10_0 = L_23;
			G_B10_1 = L_22;
			G_B10_2 = L_20;
			goto IL_00af;
		}
	}
	{
		float L_25;
		L_25 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B11_0 = L_25;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00b4;
	}

IL_00af:
	{
		float L_26;
		L_26 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00b4:
	{
		float L_27 = __this->___snapSpeed_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(G_B11_2, G_B11_1, ((float)il2cpp_codegen_multiply(G_B11_0, L_27)), NULL);
		NullCheck(G_B11_3);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(G_B11_3, L_28, NULL);
		// if (SelectedPanel != CenteredPanel)
		int32_t L_29;
		L_29 = SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline(__this, NULL);
		int32_t L_30;
		L_30 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_0128;
		}
	}
	{
		// if (GetDisplacementFromCenter(CenteredPanel).magnitude < (Viewport.rect.width / 10f))
		int32_t L_31;
		L_31 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_31, NULL);
		V_5 = L_32;
		float L_33;
		L_33 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_34);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		L_35 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_34, NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		if ((!(((float)L_33) < ((float)((float)(L_36/(10.0f)))))))
		{
			goto IL_013f;
		}
	}
	{
		// onPanelCentered.Invoke(CenteredPanel, SelectedPanel);
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_37 = __this->___onPanelCentered_30;
		int32_t L_38;
		L_38 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		int32_t L_39;
		L_39 = SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline(__this, NULL);
		NullCheck(L_37);
		UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F(L_37, L_38, L_39, UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
		// SelectedPanel = CenteredPanel;
		int32_t L_40;
		L_40 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		SimpleScrollSnap_set_SelectedPanel_m5A40B79FDF7C8C0411279707D6E4E87ED6920B8F_inline(__this, L_40, NULL);
		return;
	}

IL_0128:
	{
		// onPanelCentering.Invoke(CenteredPanel, SelectedPanel);
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_41 = __this->___onPanelCentering_29;
		int32_t L_42;
		L_42 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		int32_t L_43;
		L_43 = SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline(__this, NULL);
		NullCheck(L_41);
		UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F(L_41, L_42, L_43, UnityEvent_2_Invoke_m4D094BE00E94718C348D87CCC490C4E6BBE55A7F_RuntimeMethod_var);
	}

IL_013f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___panelNumber0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CenteredPanel = panelNumber;
		int32_t L_0 = ___panelNumber0;
		SimpleScrollSnap_set_CenteredPanel_mFC1C513525AC26EF79F2AF0A82A2FA1366E95B9C_inline(__this, L_0, NULL);
		// isSelected = true;
		__this->___isSelected_39 = (bool)1;
		// onPanelSelected.Invoke(SelectedPanel);
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_1 = __this->___onPanelSelected_28;
		int32_t L_2;
		L_2 = SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline(__this, NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_1, L_2, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// if (pagination != null)
		ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* L_3 = __this->___pagination_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Toggles[panelNumber].isOn = true;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_5;
		L_5 = SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline(__this, NULL);
		int32_t L_6 = ___panelNumber0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_8, (bool)1, NULL);
	}

IL_003b:
	{
		// if (useHardSnapping)
		bool L_9 = __this->___useHardSnapping_24;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// ScrollRect.inertia = false;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_10;
		L_10 = SimpleScrollSnap_get_ScrollRect_m00A9F0472570E6CF450669698624BA2F84210D0F(__this, NULL);
		NullCheck(L_10);
		ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline(L_10, (bool)0, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPreviousPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPreviousPanel_mD5590F1A0382FC77B735C93FA1FA3727550DF08E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9(__this, NULL);
		V_0 = L_0;
		// if (nearestPanel != 0)
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// GoToPanel(nearestPanel - 1);
		int32_t L_2 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, ((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		return;
	}

IL_0014:
	{
		// if (useInfiniteScrolling)
		bool L_3 = __this->___useInfiniteScrolling_11;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// GoToPanel(NumberOfPanels - 1);
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), NULL);
		return;
	}

IL_002b:
	{
		// GoToPanel(nearestPanel);
		int32_t L_5 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToNextPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToNextPanel_mD23D2012B2F5E782452A45615D512AFA9D2971F9 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int nearestPanel = GetNearestPanel();
		int32_t L_0;
		L_0 = SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9(__this, NULL);
		V_0 = L_0;
		// if (nearestPanel != (NumberOfPanels - 1))
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_001c;
		}
	}
	{
		// GoToPanel(nearestPanel + 1);
		int32_t L_3 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), NULL);
		return;
	}

IL_001c:
	{
		// if (useInfiniteScrolling)
		bool L_4 = __this->___useInfiniteScrolling_11;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// GoToPanel(0);
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, 0, NULL);
		return;
	}

IL_002c:
	{
		// GoToPanel(nearestPanel);
		int32_t L_5 = V_0;
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::AddToFront(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_AddToFront_m2A4AF4B7AF53A905C227845A9EE8E1C47579D0D7 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel0, const RuntimeMethod* method) 
{
	{
		// Add(panel, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___panel0;
		SimpleScrollSnap_Add_m365BD33B9E78B784506D13EDDC8375B4F489CFFD(__this, L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::AddToBack(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_AddToBack_m5FF305987FE0CCE58C2016A473FF79BBF4987E43 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel0, const RuntimeMethod* method) 
{
	{
		// Add(panel, NumberOfPanels);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___panel0;
		int32_t L_1;
		L_1 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		SimpleScrollSnap_Add_m365BD33B9E78B784506D13EDDC8375B4F489CFFD(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Add(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Add_m365BD33B9E78B784506D13EDDC8375B4F489CFFD (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___panel0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (NumberOfPanels != 0 && (index < 0 || index > NumberOfPanels))
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = ___index1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___index1;
		int32_t L_3;
		L_3 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Index must be an integer from 0 to " + NumberOfPanels + ".", gameObject);
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010, L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(L_6, L_7, NULL);
		// return;
		return;
	}

IL_003e:
	{
		// else if (!useAutomaticLayout)
		bool L_8 = __this->___useAutomaticLayout_6;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> \"Automatic Layout\" must be enabled for content to be dynamically added during runtime.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral8EB0945819C5326140A0BC104F36B4FA157BE230, NULL);
		// return;
		return;
	}

IL_0051:
	{
		// panel = Instantiate(panel, Content, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___panel0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5(L_9, L_10, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m8CC4225774108D732B4BF9D4B204835A2DBA6EC5_RuntimeMethod_var);
		___panel0 = L_11;
		// panel.transform.SetSiblingIndex(index);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___panel0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		int32_t L_14 = ___index1;
		NullCheck(L_13);
		Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_13, L_14, NULL);
		// if (ValidConfig)
		bool L_15;
		L_15 = SimpleScrollSnap_get_ValidConfig_m7FC72CA2C2A15E212AAF26BC61D73496300DA79E(__this, NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// if (CenteredPanel <= index)
		int32_t L_16;
		L_16 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		int32_t L_17 = ___index1;
		if ((((int32_t)L_16) > ((int32_t)L_17)))
		{
			goto IL_008b;
		}
	}
	{
		// startingPanel = CenteredPanel;
		int32_t L_18;
		L_18 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = L_18;
		goto IL_0099;
	}

IL_008b:
	{
		// startingPanel = CenteredPanel + 1;
		int32_t L_19;
		L_19 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0099:
	{
		// Setup();
		SimpleScrollSnap_Setup_m4488D5966100C2EF517AF9CE287890F0727F7960(__this, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::RemoveFromFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_RemoveFromFront_mEF845B9B547D8090D0761286EBA2D05C00327597 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// Remove(0);
		SimpleScrollSnap_Remove_m2E561300E99F3B6BA825E2483A642AC744FAB3B2(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::RemoveFromBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_RemoveFromBack_m254F58706C8554A9C4AD2E85C739A3CB7B24B69A (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// if (NumberOfPanels > 0)
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// Remove(NumberOfPanels - 1);
		int32_t L_1;
		L_1 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		SimpleScrollSnap_Remove_m2E561300E99F3B6BA825E2483A642AC744FAB3B2(__this, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		return;
	}

IL_0018:
	{
		// Remove(0);
		SimpleScrollSnap_Remove_m2E561300E99F3B6BA825E2483A642AC744FAB3B2(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_Remove_m2E561300E99F3B6BA825E2483A642AC744FAB3B2 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (NumberOfPanels == 0)
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> There are no panels to remove.", gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(_stringLiteral3BA32DD97AC34607D5300A2A6A2FBAF0E7FA4432, L_1, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// else if (index < 0 || index > (NumberOfPanels - 1))
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, 1)))))
		{
			goto IL_0053;
		}
	}

IL_0028:
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> Index must be an integer from 0 to " + (NumberOfPanels - 1) + ".", gameObject);
		int32_t L_5;
		L_5 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB6271585B2341FD7554D18797BFC8763B3F40010, L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m385F8F46AD9C455E80053F42571A7CE321915C0A(L_7, L_8, NULL);
		// return;
		return;
	}

IL_0053:
	{
		// else if (!useAutomaticLayout)
		bool L_9 = __this->___useAutomaticLayout_6;
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		// Debug.LogError("<b>[SimpleScrollSnap]</b> \"Automatic Layout\" must be enabled for content to be dynamically removed during runtime.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral204F19AE4DAE1232C3425CBB1CDD81D3BC74A2FF, NULL);
		// return;
		return;
	}

IL_0066:
	{
		// DestroyImmediate(Panels[index].gameObject);
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_10;
		L_10 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_14, NULL);
		// if (ValidConfig)
		bool L_15;
		L_15 = SimpleScrollSnap_get_ValidConfig_m7FC72CA2C2A15E212AAF26BC61D73496300DA79E(__this, NULL);
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		// if (CenteredPanel == index)
		int32_t L_16;
		L_16 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		int32_t L_17 = ___index0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_00b0;
		}
	}
	{
		// if (index == NumberOfPanels)
		int32_t L_18 = ___index0;
		int32_t L_19;
		L_19 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_00a2;
		}
	}
	{
		// startingPanel = CenteredPanel - 1;
		int32_t L_20;
		L_20 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_00d5;
	}

IL_00a2:
	{
		// startingPanel = CenteredPanel;
		int32_t L_21;
		L_21 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = L_21;
		goto IL_00d5;
	}

IL_00b0:
	{
		// else if (CenteredPanel < index)
		int32_t L_22;
		L_22 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		int32_t L_23 = ___index0;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00c7;
		}
	}
	{
		// startingPanel = CenteredPanel;
		int32_t L_24;
		L_24 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = L_24;
		goto IL_00d5;
	}

IL_00c7:
	{
		// startingPanel = CenteredPanel - 1;
		int32_t L_25;
		L_25 = SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline(__this, NULL);
		__this->___startingPanel_14 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_00d5:
	{
		// Setup();
		SimpleScrollSnap_Setup_m4488D5966100C2EF517AF9CE287890F0727F7960(__this, NULL);
	}

IL_00db:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetDisplacementFromCenter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Panels[index].anchoredPosition + Content.anchoredPosition - new Vector2(Viewport.rect.width * (0.5f - Content.anchorMin.x), Viewport.rect.height * (0.5f - Content.anchorMin.y));
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_0;
		L_0 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_3, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_4, L_6, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_8);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9;
		L_9 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_11, NULL);
		float L_13 = L_12.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = SimpleScrollSnap_get_Viewport_mC01B1AC46A8699CA6235F8599B2A88A255177901(__this, NULL);
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_0 = L_15;
		float L_16;
		L_16 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = RectTransform_get_anchorMin_mD85363930BE38EC188F933B9F4D58320CAB72F03(L_17, NULL);
		float L_19 = L_18.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), ((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_subtract((0.5f), L_13)))), ((float)il2cpp_codegen_multiply(L_16, ((float)il2cpp_codegen_subtract((0.5f), L_19)))), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_7, L_20, NULL);
		return L_21;
	}
}
// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetNearestPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_GetNearestPanel_mFAC439CDA64DA98FD438E99DB71F83B160BACFD9 (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		// float[] distances = new float[NumberOfPanels];
		int32_t L_0;
		L_0 = SimpleScrollSnap_get_NumberOfPanels_m2D231FE17A9EDCB4C2D36A17FEDCB89BA4C57C78(__this, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < Panels.Length; i++)
		V_3 = 0;
		goto IL_0027;
	}

IL_0010:
	{
		// distances[i] = GetDisplacementFromCenter(i).magnitude;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_0;
		int32_t L_3 = V_3;
		int32_t L_4 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = SimpleScrollSnap_GetDisplacementFromCenter_m665E940B3D76885921A2D73FE3EEBBAF0776D1AB(__this, L_4, NULL);
		V_4 = L_5;
		float L_6;
		L_6 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_4), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_6);
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0027:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_8 = V_3;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_9;
		L_9 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// int nearestPanel = 0;
		V_1 = 0;
		// float minDistance = Mathf.Min(distances);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = V_0;
		float L_11;
		L_11 = Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline(L_10, NULL);
		V_2 = L_11;
		// for (int i = 0; i < Panels.Length; i++)
		V_5 = 0;
		goto IL_0052;
	}

IL_0040:
	{
		// if (minDistance == distances[i])
		float L_12 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_0;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((float)L_12) == ((float)L_16))))
		{
			goto IL_004c;
		}
	}
	{
		// nearestPanel = i;
		int32_t L_17 = V_5;
		V_1 = L_17;
		// break;
		goto IL_005e;
	}

IL_004c:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0052:
	{
		// for (int i = 0; i < Panels.Length; i++)
		int32_t L_19 = V_5;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_20;
		L_20 = SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline(__this, NULL);
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0040;
		}
	}

IL_005e:
	{
		// return nearestPanel;
		int32_t L_21 = V_1;
		return L_21;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GetVelocity_m45D60FD92AD7C260A9E8F668BEABCC13DF5A2F8A (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// Vector2 displacement = Content.anchoredPosition - prevAnchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___prevAnchoredPosition_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// float time = useUnscaledTime ? Time.unscaledDeltaTime : Time.deltaTime;
		bool L_4 = __this->___useUnscaledTime_25;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		G_B3_0 = L_5;
		goto IL_002b;
	}

IL_0026:
	{
		float L_6;
		L_6 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_1 = G_B3_0;
		// velocity = displacement / time;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_7, L_8, NULL);
		__this->___velocity_34 = L_9;
		// prevAnchoredPosition = Content.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = SimpleScrollSnap_get_Content_m33CD1DC268476273185845BB2A8D197F5224A664(__this, NULL);
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		__this->___prevAnchoredPosition_33 = L_11;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::StartingPanelChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_StartingPanelChange_mD389BD0AD9A2029C7DC68B186B37AD17AE2BF20B (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// startingPanel = value;
		int32_t L_0 = ___value0;
		__this->___startingPanel_14 = L_0;
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap__ctor_m10F83F7D117E4F0213779B0A7FBFDDD859CF468E (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m6765885211F6E80472BF72114142FB341E78B75A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool useAutomaticLayout = true;
		__this->___useAutomaticLayout_6 = (bool)1;
		// [SerializeField] private float automaticLayoutSpacing = 0.25f;
		__this->___automaticLayoutSpacing_7 = (0.25f);
		// [SerializeField] private SizeControl sizeControl = SizeControl.Fit;
		__this->___sizeControl_8 = 1;
		// [SerializeField] private Vector2 size = new Vector2(400, 250);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (400.0f), (250.0f), /*hidden argument*/NULL);
		__this->___size_9 = L_0;
		// [SerializeField] private Margins automaticLayoutMargins = new Margins(0);
		Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0* L_1 = (Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0*)il2cpp_codegen_object_new(Margins_t8DDEFA2068F938441A8F739E62815DC0F232C8A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Margins__ctor_mD0360F7BD9BF5F1E252A17EF761AD750F645041E(L_1, (0.0f), NULL);
		__this->___automaticLayoutMargins_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___automaticLayoutMargins_10), (void*)L_1);
		// [SerializeField] private float infiniteScrollingSpacing = 0.25f;
		__this->___infiniteScrollingSpacing_12 = (0.25f);
		// [SerializeField] private bool useSwipeGestures = true;
		__this->___useSwipeGestures_15 = (bool)1;
		// [SerializeField] private bool useToggleNavigation = true;
		__this->___useToggleNavigation_20 = (bool)1;
		// [SerializeField] private SnapTarget snapTarget = SnapTarget.Next;
		__this->___snapTarget_21 = 2;
		// [SerializeField] private float snapSpeed = 10f;
		__this->___snapSpeed_22 = (10.0f);
		// [SerializeField] private float thresholdSpeedToSnap = -1f;
		__this->___thresholdSpeedToSnap_23 = (-1.0f);
		// [SerializeField] private bool useHardSnapping = true;
		__this->___useHardSnapping_24 = (bool)1;
		// [SerializeField] private UnityEvent<GameObject, float> onTransitionEffects = new UnityEvent<GameObject, float>();
		UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98* L_2 = (UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98*)il2cpp_codegen_object_new(UnityEvent_2_t82C0EF669A901454B31B24E27CEC5CEDC2C15E98_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEvent_2__ctor_m6765885211F6E80472BF72114142FB341E78B75A(L_2, UnityEvent_2__ctor_m6765885211F6E80472BF72114142FB341E78B75A_RuntimeMethod_var);
		__this->___onTransitionEffects_26 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onTransitionEffects_26), (void*)L_2);
		// [SerializeField] private UnityEvent<int> onPanelSelecting = new UnityEvent<int>();
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_3 = (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*)il2cpp_codegen_object_new(UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(L_3, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		__this->___onPanelSelecting_27 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPanelSelecting_27), (void*)L_3);
		// [SerializeField] private UnityEvent<int> onPanelSelected = new UnityEvent<int>();
		UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* L_4 = (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*)il2cpp_codegen_object_new(UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(L_4, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		__this->___onPanelSelected_28 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPanelSelected_28), (void*)L_4);
		// [SerializeField] private UnityEvent<int, int> onPanelCentering = new UnityEvent<int, int>();
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_5 = (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*)il2cpp_codegen_object_new(UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E(L_5, UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var);
		__this->___onPanelCentering_29 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPanelCentering_29), (void*)L_5);
		// [SerializeField] private UnityEvent<int, int> onPanelCentered = new UnityEvent<int, int>();
		UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73* L_6 = (UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73*)il2cpp_codegen_object_new(UnityEvent_2_t750A5CCCFC4D6C109624CD29B7A331D1B6517E73_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E(L_6, UnityEvent_2__ctor_mBF924870A9172E74E01A58B93BF4F3B560478A6E_RuntimeMethod_var);
		__this->___onPanelCentered_30 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onPanelCentered_30), (void*)L_6);
		// private bool isDragging, isPressing, isSelected = true;
		__this->___isSelected_39 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0__ctor_mC740027FC7B5FF93EDBE89B344FC5C7A87EC064C (U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass150_0::<Setup>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass150_0_U3CSetupU3Eb__0_mD7F3F6B0B653F51FF474C1BCE9135203267CB96D (U3CU3Ec__DisplayClass150_0_tBD0C4D5B18EE7411CDAB90D64F6FFDDA1E3C243E* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	{
		// if (isOn && useToggleNavigation)
		bool L_0 = ___isOn0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* L_1 = __this->___U3CU3E4__this_1;
		NullCheck(L_1);
		bool L_2 = L_1->___useToggleNavigation_20;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// GoToPanel(panelNumber);
		SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* L_3 = __this->___U3CU3E4__this_1;
		int32_t L_4 = __this->___panelNumber_0;
		NullCheck(L_3);
		SimpleScrollSnap_GoToPanel_m895E87BE57EB72F3E6ECB9CA5036130888E8AF13(L_3, L_4, NULL);
	}

IL_0021:
	{
		// });
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.Fade::OnTransition(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_OnTransition_m604452C6B562DE8CAF1E3F93CCA9097D01231072 (Fade_tD24489E5C6DE34361D46ECE1246F43A445FC8E2E* __this, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup0, float ___alpha1, const RuntimeMethod* method) 
{
	{
		// canvasGroup.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___canvasGroup0;
		float L_1 = ___alpha1;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.Fade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade__ctor_m7552A7D83FC6010155B5C6B37C515AC2F9EBB5B8 (Fade_tD24489E5C6DE34361D46ECE1246F43A445FC8E2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_mE05778EC7D0AA6DB9877A274FE324E0F98EEB20C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_mE05778EC7D0AA6DB9877A274FE324E0F98EEB20C(__this, TransitionEffectBase_1__ctor_mE05778EC7D0AA6DB9877A274FE324E0F98EEB20C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourBlue::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourBlue_OnTransition_mA183F7BBECBBD690CDFEF6519EAAF6E142B92B28 (RecolourBlue_tD933A8FED385DAB7178EE19CD579D4DA13C28A8F* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic0, float ___blue1, const RuntimeMethod* method) 
{
	{
		// graphic.color = new Color(graphic.color.r, graphic.color.g, blue, graphic.color.a);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___graphic0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___graphic0;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.___r_0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = ___graphic0;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		float L_6 = L_5.___g_1;
		float L_7 = ___blue1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = ___graphic0;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), L_3, L_6, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourBlue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourBlue__ctor_mA2793633DBD1009801A1EE5F733919E0FBC6A163 (RecolourBlue_tD933A8FED385DAB7178EE19CD579D4DA13C28A8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E(__this, TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourGreen::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourGreen_OnTransition_m77E1CDC4E805E735FFBFD8C5A7E5B489968E5BED (RecolourGreen_t264374955A3F9901495F794CCFF18BEA8A8FE27C* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic0, float ___green1, const RuntimeMethod* method) 
{
	{
		// graphic.color = new Color(graphic.color.r, green, graphic.color.b, graphic.color.a);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___graphic0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___graphic0;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		float L_3 = L_2.___r_0;
		float L_4 = ___green1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = ___graphic0;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.___b_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = ___graphic0;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), L_3, L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourGreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourGreen__ctor_m58C927F2EEF071B4BD957069AAA3008929926514 (RecolourGreen_t264374955A3F9901495F794CCFF18BEA8A8FE27C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E(__this, TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourRed::OnTransition(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourRed_OnTransition_m65BF6A4D5DE6A7537C8065FF4C4228256BBF985C (RecolourRed_tE9D0A9AB5008464B52462903C4D4CF91F47400BF* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic0, float ___red1, const RuntimeMethod* method) 
{
	{
		// graphic.color = new Color(red, graphic.color.g, graphic.color.b, graphic.color.a);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___graphic0;
		float L_1 = ___red1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___graphic0;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		float L_4 = L_3.___g_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = ___graphic0;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.___b_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = ___graphic0;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), L_1, L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_11);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RecolourRed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecolourRed__ctor_mF02B3BD650AF7B142411A09AAA5284BA56257C5D (RecolourRed_tE9D0A9AB5008464B52462903C4D4CF91F47400BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E(__this, TransitionEffectBase_1__ctor_m0DE86B0CAA3832E31D396BFF383C45941716CC7E_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateX::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateX_OnTransition_m3803AC78AAD0CBD5CEFFF4C6C8F89E225FFC9684 (RotateX_t9682F01498029FBE329F50671A2B65723B535473* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___angle1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(angle, rectTransform.localEulerAngles.y, rectTransform.localEulerAngles.z));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		float L_1 = ___angle1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rectTransform0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		float L_4 = L_3.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rectTransform0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_8, NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateX__ctor_m9DC431E2FB320527DBF96B64B15F8ECE3276F4A7 (RotateX_t9682F01498029FBE329F50671A2B65723B535473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateY::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateY_OnTransition_mA5222E271A742AC59788AC0644256E4DD250BD7C (RotateY_t87D8F91D7E0628FA47A628240926746113086D7B* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___angle1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(rectTransform.localEulerAngles.x, angle, rectTransform.localEulerAngles.z));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = ___angle1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rectTransform0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_8, NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateY__ctor_m67498E515A296AB6B88004FA0A843097E2198EE1 (RotateY_t87D8F91D7E0628FA47A628240926746113086D7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateZ_OnTransition_m68ACC1AF5B23654E0F1747594074F4C75461CE07 (RotateZ_tA3C7B1CB2410CADA70DA53A5B0C6A2A9EF93C8E0* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___angle1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localRotation = Quaternion.Euler(new Vector3(rectTransform.localEulerAngles.x, rectTransform.localEulerAngles.y, angle));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_1, NULL);
		float L_3 = L_2.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rectTransform0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___angle1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_8, NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.RotateZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateZ__ctor_m4209187AB491C6617C5E9CADDC34B5B2F5191A79 (RotateZ_tA3C7B1CB2410CADA70DA53A5B0C6A2A9EF93C8E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.Scale::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale_OnTransition_m67FD770C0C9034CF2A004FC54F3603360B6B677D (Scale_tC51EAAE34888D238DFB66A18E3549740BFAD229F* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localScale = Vector3.one * scale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.Scale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale__ctor_mCD297F4445A9AA02F83EAAF3999C61E6F7FCDD81 (Scale_tC51EAAE34888D238DFB66A18E3549740BFAD229F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleX::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleX_OnTransition_m461BD30DD0BEB1EFAAC818E2836B01BC4BB88954 (ScaleX_t63EB347EEF0488BD91C33254F0DA6427F06025C7* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localScale = new Vector3(scale, rectTransform.localScale.y, rectTransform.localScale.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		float L_1 = ___scale1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rectTransform0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rectTransform0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleX__ctor_m44A1CCA32B95565FA3E488E8F45855128480B7AC (ScaleX_t63EB347EEF0488BD91C33254F0DA6427F06025C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleY::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleY_OnTransition_mF370909EB7D6FD91EA3E59A50A7B42C384207472 (ScaleY_tE25FBA9B542F257C90FBB56C0A1FAFE5C5FBB0FF* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localScale = new Vector3(rectTransform.localScale.x, scale, rectTransform.localScale.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		float L_4 = ___scale1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ___rectTransform0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleY__ctor_mD415C37B117D04BE288F5A6777009458B636143F (ScaleY_tE25FBA9B542F257C90FBB56C0A1FAFE5C5FBB0FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleZ_OnTransition_m21E4E31F07F0FC2D496BEAAF5ED3195846C63CA6 (ScaleZ_t7939D5A708DAE984B0EA3C8CED1F1BE922A19909* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___scale1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localScale = new Vector3(rectTransform.localScale.x, rectTransform.localScale.y, scale);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rectTransform0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___scale1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.ScaleZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleZ__ctor_m1142D5FAB117961EFB6A2874BB78AC38556A51BB (ScaleZ_t7939D5A708DAE984B0EA3C8CED1F1BE922A19909* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.TranslateZ::OnTransition(UnityEngine.RectTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateZ_OnTransition_mBF07D17D16D649C4EAE2ECA2224D10569CBF0DE9 (TranslateZ_tE80063114F44B36C0EC787C1C13D178460B1A6BC* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, float ___distance1, const RuntimeMethod* method) 
{
	{
		// rectTransform.localPosition = new Vector3(rectTransform.localPosition.x, rectTransform.localPosition.y, distance);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___rectTransform0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___rectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___rectTransform0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___distance1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.TranslateZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslateZ__ctor_m78AA482A2310800CE6E5BF1856FEF4661A58ACDB (TranslateZ_tE80063114F44B36C0EC787C1C13D178460B1A6BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C(__this, TransitionEffectBase_1__ctor_m601461647F0C1D51D217908EDCD25C635CCA860C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		bool L_0 = __this->___m_Horizontal_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		bool L_0 = __this->___m_Vertical_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_viewport_m85092216DD476F77E78F5CE50F9C4E70063ECCF9_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform viewport { get { return m_Viewport; } set { m_Viewport = value; SetDirtyCaching(); } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Viewport_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_velocity_mBC8D4BC0A0184FCC3AEB359AE68E9130E811AFC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___m_Velocity_25 = L_0;
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_inertia_m8A17589561A5E7A2F5F543B8F2F6149458C68AC2_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool inertia { get { return m_Inertia; } set { m_Inertia = value; } }
		bool L_0 = ___value0;
		__this->___m_Inertia_9 = L_0;
		// public bool inertia { get { return m_Inertia; } set { m_Inertia = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SimpleScrollSnap_get_Velocity_m9C1B60AC4219DA59408360685B626723E47CB48E_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get => velocity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___velocity_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_horizontal_m99C076AF2B2B596C87435E1465EF0B104281B150_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		bool L_0 = ___value0;
		__this->___m_Horizontal_5 = L_0;
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_vertical_m972088E788E72690AAE139E7C0F8F634C325E7CE_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		bool L_0 = ___value0;
		__this->___m_Vertical_6 = L_0;
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Panels_mA8018259C3C74651F5A6A5572CFBAEA19EE85225_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_0 = ___value0;
		__this->___U3CPanelsU3Ek__BackingField_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPanelsU3Ek__BackingField_40), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* SimpleScrollSnap_get_Panels_mCC50D36864C5D8DFB12E04E791CB7FA7A435D075_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* L_0 = __this->___U3CPanelsU3Ek__BackingField_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScrollRect_set_movementType_m2A900C10E6C005FD6866EFF1DA2DF78AA957534A_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		int32_t L_0 = ___value0;
		__this->___m_MovementType_7 = L_0;
		// public MovementType movementType { get { return m_MovementType; } set { m_MovementType = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_CenteredPanel_mFC1C513525AC26EF79F2AF0A82A2FA1366E95B9C_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CCenteredPanelU3Ek__BackingField_43 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_SelectedPanel_m5A40B79FDF7C8C0411279707D6E4E87ED6920B8F_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CSelectedPanelU3Ek__BackingField_42 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleScrollSnap_set_Toggles_m96695859BA13215D171848775F2F5E95D424BE8B_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_0 = ___value0;
		__this->___U3CTogglesU3Ek__BackingField_41 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTogglesU3Ek__BackingField_41), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* SimpleScrollSnap_get_Toggles_mFCC3B594A1E271A8B543906BF5E22211AB6B3937_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* L_0 = __this->___U3CTogglesU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ScrollRect_get_velocity_m8F7DDB02F52BFF2503F079C216FC5C89AA4875DC_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 velocity { get { return m_Velocity; } set { m_Velocity = value; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Velocity_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_CenteredPanel_mBDCAF872112CF4B5D40122842FB735ACD505EEE5_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CCenteredPanelU3Ek__BackingField_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleScrollSnap_get_SelectedPanel_mBE1C21ACDC936A18B3F341610135EE385AC03087_inline (SimpleScrollSnap_t1EFCC6C02DF4349D365B4F33F30E648016A4133A* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CSelectedPanelU3Ek__BackingField_42;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String DanielLochner.Assets.StringUtility::SplitCamelCase(System.String)
extern void StringUtility_SplitCamelCase_mD42522C5157D5B3C8EF2A8E0755268C95AE29489 (void);
// 0x00000002 System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce(UnityEngine.Events.UnityEvent,UnityEngine.Events.UnityAction)
extern void UnityEventUtility_AddListenerOnce_mEF7BC2A1DA01E819DCF9347F35F7D1C1D953062A (void);
// 0x00000003 System.Void DanielLochner.Assets.UnityEventUtility::AddListenerOnce(UnityEngine.Events.UnityEvent`1<T>,UnityEngine.Events.UnityAction`1<T>)
static Il2CppMethodPointer s_methodPointers[3] = 
{
	StringUtility_SplitCamelCase_mD42522C5157D5B3C8EF2A8E0755268C95AE29489,
	UnityEventUtility_AddListenerOnce_mEF7BC2A1DA01E819DCF9347F35F7D1C1D953062A,
	NULL,
};
static const int32_t s_InvokerIndices[3] = 
{
	10030,
	9038,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000003, { 0, 3 } },
};
extern const uint32_t g_rgctx_UnityEvent_1_t67376C09540B9C81501CA50BA271ABE6C8991D09;
extern const uint32_t g_rgctx_UnityEvent_1_RemoveListener_mA0D9BB49398D4CB4DBC198BB35D4246CD4CEF27E;
extern const uint32_t g_rgctx_UnityEvent_1_AddListener_mE6BC140ED8EEA1EFE14ACBFE51D8446FF81C288C;
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_UnityEvent_1_t67376C09540B9C81501CA50BA271ABE6C8991D09 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnityEvent_1_RemoveListener_mA0D9BB49398D4CB4DBC198BB35D4246CD4CEF27E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnityEvent_1_AddListener_mE6BC140ED8EEA1EFE14ACBFE51D8446FF81C288C },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Utilities_CodeGenModule;
const Il2CppCodeGenModule g_Utilities_CodeGenModule = 
{
	"Utilities.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

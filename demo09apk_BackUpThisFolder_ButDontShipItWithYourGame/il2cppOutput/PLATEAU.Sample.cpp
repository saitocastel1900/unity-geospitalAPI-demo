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

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<PLATEAU.CityGML.CityModel>
struct Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// PLATEAU.CityGML.CityObject[]
struct CityObjectU5BU5D_tA54AEFBBC8E43067D64BB8AF5AD731A709D08F0B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// PLATEAU.CityGML.Geometry[]
struct GeometryU5BU5D_tAB98BF7B5F6B936AFDF37273E1CFC91C56DCA796;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// PLATEAU.CityGML.Address
struct Address_t87D58DD532030E930F0637FECB3D413D95DFEAE6;
// PLATEAU.CityGML.AttributeValue
struct AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA;
// PLATEAU.Samples.Scripts.AttributesDisplay
struct AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8;
// PLATEAU.CityGML.AttributesMap
struct AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// PLATEAU.CityGML.CityModel
struct CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117;
// PLATEAU.CityGML.CityObject
struct CityObject_t98A05D1C31BA884BC13104451F9280794070A054;
// PLATEAU.Samples.Scripts.ClickToShowAttributes
struct ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5
struct U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PLATEAUCityGmlProxy_t59FB987023583D0F38D28B75F947FCDCFD86B8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0609961F2473DF2C741413DC2F17C6FF97F3DD76;
IL2CPP_EXTERN_C String_t* _stringLiteral14F51FE95176D28D6D0D7EB591F587753BCDF995;
IL2CPP_EXTERN_C String_t* _stringLiteral15DFFE89E46115129D3E99639A25201CABEA5989;
IL2CPP_EXTERN_C String_t* _stringLiteral1F2EBD8EC7989B67A89D532057C3683E25482C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral2DB82068421B627874676B4498883F6AD73FA147;
IL2CPP_EXTERN_C String_t* _stringLiteral4B647B5E96A6826FDDFACEEDEA6C213F867B6DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral55F09496010EFCB7512B5CA7EC466CDC45200AA0;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral723C4D3C37D5EFEC645FEF32A6FE2D8B9153556B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AEC8FDBE2FDFC216E65862B39FFF288D7C37A95;
IL2CPP_EXTERN_C String_t* _stringLiteral9107049986266813CC14444DBDE88B700E840795;
IL2CPP_EXTERN_C String_t* _stringLiteralA61C8184A75E432844667F9ABF48AAC010009399;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreEqual_TisAttributeType_t7584D1A0B271812C17CB2022DAEE45988C55A2C5_m75253EA614C81D730A104B9A4176846C014E7096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m006164F270059D0B27D93A8C91A933878AF7BC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m20F8C82AF148EDB8B7451FF873EC4F550BFB0181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClickToShowAttributes_U3CUpdateU3Eb__4_0_m94A67BD7F286D1D8ADD32FF6389C963B242359DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF4A9C0E172DEF5A291B1593458D1E153792FE723_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mFDBCBB53F36AB03D45E3AEABB1377E61305FD403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7664FB1FCCE25B0DE305288DD7D5D2A18E34A303_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B039CC58E1857DA45554944B8E54582BB493862 
{
};
struct Il2CppArrayBounds;

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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E* ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_4;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_5;
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

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<PLATEAU.CityGML.CityModel>
struct TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<PLATEAU.CityGML.CityModel>
struct Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// PLATEAU.CityGML.AttributeValue
struct AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA  : public RuntimeObject
{
	// System.IntPtr PLATEAU.CityGML.AttributeValue::handle
	intptr_t ___handle_0;
};

// PLATEAU.CityGML.AttributesMap
struct AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42  : public RuntimeObject
{
	// System.IntPtr PLATEAU.CityGML.AttributesMap::handle
	intptr_t ___handle_0;
	// System.String[] PLATEAU.CityGML.AttributesMap::cachedKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___cachedKeys_1;
};

// PLATEAU.CityGML.CityModel
struct CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117  : public RuntimeObject
{
	// System.Int32 PLATEAU.CityGML.CityModel::disposed
	int32_t ___disposed_0;
	// PLATEAU.CityGML.CityObject[] PLATEAU.CityGML.CityModel::rootCityObjects
	CityObjectU5BU5D_tA54AEFBBC8E43067D64BB8AF5AD731A709D08F0B* ___rootCityObjects_1;
	// System.IntPtr PLATEAU.CityGML.CityModel::<Handle>k__BackingField
	intptr_t ___U3CHandleU3Ek__BackingField_2;
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

// PLATEAU.CityGML.Object
struct Object_t208C1DF10D01B83F50A5CB4C4BB3B00B83A02E87  : public RuntimeObject
{
	// PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.Object::attributesMap
	AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* ___attributesMap_0;
	// System.String PLATEAU.CityGML.Object::id
	String_t* ___id_1;
	// System.IntPtr PLATEAU.CityGML.Object::<Handle>k__BackingField
	intptr_t ___U3CHandleU3Ek__BackingField_2;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// PLATEAU.CityGML.FeatureObject
struct FeatureObject_t7715888DE1B3CC32BF2CDCA653D1864506E00AD3  : public Object_t208C1DF10D01B83F50A5CB4C4BB3B00B83A02E87
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

// PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5
struct U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80  : public RuntimeObject
{
	// System.Int32 PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// UnityEngine.Transform PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans_2;
	// PLATEAU.Samples.Scripts.ClickToShowAttributes PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<>4__this
	ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* ___U3CU3E4__this_3;
	// System.String PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<cityObjID>5__1
	String_t* ___U3CcityObjIDU3E5__1_4;
	// UnityEngine.Transform PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<gmlTrans>5__2
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CgmlTransU3E5__2_5;
	// System.String PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<rootDirName>5__3
	String_t* ___U3CrootDirNameU3E5__3_6;
	// PLATEAU.CityGML.CityModel PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<cityModel>5__4
	CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* ___U3CcityModelU3E5__4_7;
	// PLATEAU.CityGML.CityObject PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<cityObj>5__5
	CityObject_t98A05D1C31BA884BC13104451F9280794070A054* ___U3CcityObjU3E5__5_8;
	// System.String PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<cityName>5__6
	String_t* ___U3CcityNameU3E5__6_9;
	// System.Nullable`1<System.Double> PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<height>5__7
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CheightU3E5__7_10;
	// PLATEAU.CityGML.AttributeValue PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<detailAttr>5__8
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* ___U3CdetailAttrU3E5__8_11;
	// PLATEAU.CityGML.CityModel PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<>s__9
	CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* ___U3CU3Es__9_12;
	// System.Runtime.CompilerServices.TaskAwaiter`1<PLATEAU.CityGML.CityModel> PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::<>u__1
	TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 ___U3CU3Eu__1_13;
};

// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// PLATEAU.CityGML.CityObject
struct CityObject_t98A05D1C31BA884BC13104451F9280794070A054  : public FeatureObject_t7715888DE1B3CC32BF2CDCA653D1864506E00AD3
{
	// PLATEAU.CityGML.CityObjectType PLATEAU.CityGML.CityObject::type
	uint64_t ___type_3;
	// PLATEAU.CityGML.Address PLATEAU.CityGML.CityObject::cachedAddress
	Address_t87D58DD532030E930F0637FECB3D413D95DFEAE6* ___cachedAddress_4;
	// PLATEAU.CityGML.CityObject[] PLATEAU.CityGML.CityObject::cachedChildCityObjects
	CityObjectU5BU5D_tA54AEFBBC8E43067D64BB8AF5AD731A709D08F0B* ___cachedChildCityObjects_5;
	// PLATEAU.CityGML.Geometry[] PLATEAU.CityGML.CityObject::cachedGeometries
	GeometryU5BU5D_tAB98BF7B5F6B936AFDF37273E1CFC91C56DCA796* ___cachedGeometries_6;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PLATEAU.Samples.Scripts.AttributesDisplay
struct AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text PLATEAU.Samples.Scripts.AttributesDisplay::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_4;
	// UnityEngine.UI.Text PLATEAU.Samples.Scripts.AttributesDisplay::attributesText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___attributesText_5;
};

// PLATEAU.Samples.Scripts.ClickToShowAttributes
struct ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PLATEAU.Samples.Scripts.AttributesDisplay PLATEAU.Samples.Scripts.ClickToShowAttributes::display
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* ___display_4;
	// UnityEngine.Camera PLATEAU.Samples.Scripts.ClickToShowAttributes::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_5;
	// System.String PLATEAU.Samples.Scripts.ClickToShowAttributes::cityDataPath
	String_t* ___cityDataPath_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___continuationAction0, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m07B572608C528AC8F684456A98C7A8590DA70518_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m7AAFBB234F89B78BABA0A328582363B279174964_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Int32Enum>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m361E93CB894ACACC51263D46B9075E6B1AE80BA5_gshared (int32_t ___expected0, int32_t ___actual1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> PLATEAU.Samples.Scripts.ClickToShowAttributes::GetAttributesAndShowAsync(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ClickToShowAttributes_GetAttributesAndShowAsync_m534C29349FF1607786282B12D9FEE6D6835A727B (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.Tasks.TaskScheduler)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* ___continuationAction0, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler1, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F_gshared)(__this, ___continuationAction0, ___scheduler1, method);
}
// System.Threading.Tasks.Task PLATEAU.Util.Async.TaskExtension::ContinueWithErrorCatch(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskExtension_ContinueWithErrorCatch_mA77FA07A1E7176705A2137A03421CE41865D1D3C (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, const RuntimeMethod* method) ;
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesAndShowAsyncU3Ed__5__ctor_m7C199F3329AEFB33FECE052B87556A87391213BD (U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m20F8C82AF148EDB8B7451FF873EC4F550BFB0181 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisRuntimeObject_m07B572608C528AC8F684456A98C7A8590DA70518_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::set_TitleText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay_set_TitleText_m601E1A157A203DFD92649AB47CE22E48B5212457 (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::set_AttributesText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay_set_AttributesText_mA329F6CBA77BEF59CB3F744FC7B93511AF9F2463 (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
inline bool Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9_gshared)(__this, method);
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::NotifyLoadFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_NotifyLoadFailure_mA0D30BD84F992E488EF27FD8944D506151D4AAE5 (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<PLATEAU.CityGML.CityModel> PLATEAU.CityInfo.PLATEAUCityGmlProxy::LoadAsync(UnityEngine.GameObject,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20* PLATEAUCityGmlProxy_LoadAsync_m11B716664D2E5B055CBD76BD041783DA539B376D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, String_t* ___rootDirName1, String_t* ___parentPathOfRootDir2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<PLATEAU.CityGML.CityModel>::GetAwaiter()
inline TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 Task_1_GetAwaiter_m7664FB1FCCE25B0DE305288DD7D5D2A18E34A303 (Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 (*) (Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<PLATEAU.CityGML.CityModel>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mFDBCBB53F36AB03D45E3AEABB1377E61305FD403 (TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<PLATEAU.CityGML.CityModel>,PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m006164F270059D0B27D93A8C91A933878AF7BC41 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310* ___awaiter0, U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310*, U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m7AAFBB234F89B78BABA0A328582363B279174964_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<PLATEAU.CityGML.CityModel>::GetResult()
inline CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* TaskAwaiter_1_GetResult_mF4A9C0E172DEF5A291B1593458D1E153792FE723 (TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310* __this, const RuntimeMethod* method)
{
	return ((  CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* (*) (TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// PLATEAU.CityGML.CityObject PLATEAU.CityGML.CityModel::GetCityObjectById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CityObject_t98A05D1C31BA884BC13104451F9280794070A054* CityModel_GetCityObjectById_mB136A39BF8AE005E43C8F9C0A9653FEB8FBF7385 (CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* __this, String_t* ___id0, const RuntimeMethod* method) ;
// PLATEAU.CityGML.AttributeValue PLATEAU.CityGML.AttributesMap::GetValueOrNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* AttributesMap_GetValueOrNull_m97D8312317AA89941A1615602E787864B1BB343F (AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* __this, String_t* ___key0, const RuntimeMethod* method) ;
// PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.AttributeValue::get_AsAttrSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* AttributeValue_get_AsAttrSet_mC277B342477F139EC6E1B1F320355DADB87A4D58 (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* __this, const RuntimeMethod* method) ;
// System.String PLATEAU.CityGML.AttributeValue::get_AsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttributeValue_get_AsString_m9EDF07C46860E079C798E1050EE35B41FCB5438B (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* __this, const RuntimeMethod* method) ;
// System.Double PLATEAU.CityGML.AttributeValue::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AttributeValue_get_AsDouble_m31A756F9E4C160A0CC893376CED127C972F2B31C (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Double>::.ctor(T)
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::GetValueOrDefault()
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// PLATEAU.CityGML.AttributeType PLATEAU.CityGML.AttributeValue::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttributeValue_get_Type_m03F80E1540D2E67FF29C1CB581F63CF17EA043A0 (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::AreEqual<PLATEAU.CityGML.AttributeType>(T,T)
inline void Assert_AreEqual_TisAttributeType_t7584D1A0B271812C17CB2022DAEE45988C55A2C5_m75253EA614C81D730A104B9A4176846C014E7096 (int32_t ___expected0, int32_t ___actual1, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, const RuntimeMethod*))Assert_AreEqual_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m361E93CB894ACACC51263D46B9075E6B1AE80BA5_gshared)(___expected0, ___actual1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___result0, method);
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
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::set_TitleText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay_set_TitleText_m601E1A157A203DFD92649AB47CE22E48B5212457 (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => this.titleText.text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___titleText_4;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::set_AttributesText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay_set_AttributesText_mA329F6CBA77BEF59CB3F744FC7B93511AF9F2463 (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set => this.attributesText.text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___attributesText_5;
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay_Awake_mB39CC4C1448F8DCF245ED1C096CC4B1B3823A47E (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F51FE95176D28D6D0D7EB591F587753BCDF995);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DB82068421B627874676B4498883F6AD73FA147);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.titleText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___titleText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError($"{nameof(this.titleText)} ? null ????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral14F51FE95176D28D6D0D7EB591F587753BCDF995, NULL);
	}

IL_001e:
	{
		// if (this.attributesText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___attributesText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.LogError($"{nameof(this.attributesText)} ? null ????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral2DB82068421B627874676B4498883F6AD73FA147, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.AttributesDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesDisplay__ctor_m51FDF4C4CE975A6F4A2DFF156E3297966C570A10 (AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_Start_m5BC1382ECE5140EB787DAC987DC5B44F657E4695 (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral723C4D3C37D5EFEC645FEF32A6FE2D8B9153556B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// this.mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_5), (void*)L_0);
		// if (this.mainCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___mainCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.LogError("?????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral723C4D3C37D5EFEC645FEF32A6FE2D8B9153556B, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_Update_mAA51DE406008C2A777EE411CD9E11196104BFB1E (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClickToShowAttributes_U3CUpdateU3Eb__4_0_m94A67BD7F286D1D8ADD32FF6389C963B242359DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_4 = NULL;
	{
		// if (Input.GetMouseButtonDown(0)) // ??????---
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// var ray = this.mainCamera.ScreenPointToRay(Input.mousePosition); // ???????---
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___mainCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_2);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		L_4 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_2, L_3, NULL);
		V_1 = L_4;
		// if (Physics.Raycast(ray, out var hit)) // ??????????????---
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = V_1;
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_2), NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// var task = GetAttributesAndShowAsync(hit.transform); // ???????????????
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_2), NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9;
		L_9 = ClickToShowAttributes_GetAttributesAndShowAsync_m534C29349FF1607786282B12D9FEE6D6835A727B(__this, L_8, NULL);
		V_4 = L_9;
		// task.ContinueWith(t =>
		//     {
		//         if (!t.Result) NotifyLoadFailure(); // ???? "????" ???????
		//     }, TaskScheduler.FromCurrentSynchronizationContext())
		//     .ContinueWithErrorCatch();
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10 = V_4;
		Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856* L_11 = (Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856*)il2cpp_codegen_object_new(Action_1_t12D515BBBDB69A29DC0C4812555D0A8A51D6B856_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m8DB17142BC5CB34C561C3A08FF3390CC83C7D94F(L_11, __this, (intptr_t)((void*)ClickToShowAttributes_U3CUpdateU3Eb__4_0_m94A67BD7F286D1D8ADD32FF6389C963B242359DC_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_12;
		L_12 = TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7(NULL);
		NullCheck(L_10);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F(L_10, L_11, L_12, Task_1_ContinueWith_mE1569A43EBBA2C5599CD88922A97D282A5B82A4F_RuntimeMethod_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_14;
		L_14 = TaskExtension_ContinueWithErrorCatch_mA77FA07A1E7176705A2137A03421CE41865D1D3C(L_13, NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> PLATEAU.Samples.Scripts.ClickToShowAttributes::GetAttributesAndShowAsync(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ClickToShowAttributes_GetAttributesAndShowAsync_m534C29349FF1607786282B12D9FEE6D6835A727B (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m20F8C82AF148EDB8B7451FF873EC4F550BFB0181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* V_0 = NULL;
	{
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_0 = (U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80*)il2cpp_codegen_object_new(U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetAttributesAndShowAsyncU3Ed__5__ctor_m7C199F3329AEFB33FECE052B87556A87391213BD(L_0, NULL);
		V_0 = L_0;
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___trans0;
		NullCheck(L_4);
		L_4->___trans_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___trans_2), (void*)L_5);
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m20F8C82AF148EDB8B7451FF873EC4F550BFB0181(L_8, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m20F8C82AF148EDB8B7451FF873EC4F550BFB0181_RuntimeMethod_var);
		U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_11;
		L_11 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_10, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::NotifyLoadFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_NotifyLoadFailure_mA0D30BD84F992E488EF27FD8944D506151D4AAE5 (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0609961F2473DF2C741413DC2F17C6FF97F3DD76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.display.TitleText = "";
		AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_0 = __this->___display_4;
		NullCheck(L_0);
		AttributesDisplay_set_TitleText_m601E1A157A203DFD92649AB47CE22E48B5212457(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// this.display.AttributesText = "????";
		AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_1 = __this->___display_4;
		NullCheck(L_1);
		AttributesDisplay_set_AttributesText_mA329F6CBA77BEF59CB3F744FC7B93511AF9F2463(L_1, _stringLiteral0609961F2473DF2C741413DC2F17C6FF97F3DD76, NULL);
		// }
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_Awake_m2EFA185F00FF8DCF81CE78D3235B09A236D95652 (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AEC8FDBE2FDFC216E65862B39FFF288D7C37A95);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.display == null)
		AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_0 = __this->___display_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError($"{nameof(AttributesDisplay)} ? null ????????????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral8AEC8FDBE2FDFC216E65862B39FFF288D7C37A95, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes__ctor_mC7ACA2D35FB1D33422A007D37A2515D587B026ED (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes::<Update>b__4_0(System.Threading.Tasks.Task`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickToShowAttributes_U3CUpdateU3Eb__4_0_m94A67BD7F286D1D8ADD32FF6389C963B242359DC (ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* __this, Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!t.Result) NotifyLoadFailure(); // ???? "????" ???????
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9(L_0, Task_1_get_Result_m48902D0529EDB4646DFE6B5A7631AE15911E87B9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (!t.Result) NotifyLoadFailure(); // ???? "????" ???????
		ClickToShowAttributes_NotifyLoadFailure_mA0D30BD84F992E488EF27FD8944D506151D4AAE5(__this, NULL);
	}

IL_0015:
	{
		// }, TaskScheduler.FromCurrentSynchronizationContext())
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
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesAndShowAsyncU3Ed__5__ctor_m7C199F3329AEFB33FECE052B87556A87391213BD (U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesAndShowAsyncU3Ed__5_MoveNext_m28D48834468801085CFE840372ABE2DAC893745E (U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_AreEqual_TisAttributeType_t7584D1A0B271812C17CB2022DAEE45988C55A2C5_m75253EA614C81D730A104B9A4176846C014E7096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m006164F270059D0B27D93A8C91A933878AF7BC41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PLATEAUCityGmlProxy_t59FB987023583D0F38D28B75F947FCDCFD86B8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF4A9C0E172DEF5A291B1593458D1E153792FE723_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mFDBCBB53F36AB03D45E3AEABB1377E61305FD403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7664FB1FCCE25B0DE305288DD7D5D2A18E34A303_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15DFFE89E46115129D3E99639A25201CABEA5989);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F2EBD8EC7989B67A89D532057C3683E25482C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B647B5E96A6826FDDFACEEDEA6C213F867B6DF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55F09496010EFCB7512B5CA7EC466CDC45200AA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9107049986266813CC14444DBDE88B700E840795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA61C8184A75E432844667F9ABF48AAC010009399);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_7;
	memset((&V_7), 0, sizeof(V_7));
	double V_8 = 0.0;
	bool V_9 = false;
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B9_0 = 0;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B20_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B20_1 = NULL;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B19_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B19_1 = NULL;
	String_t* G_B25_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B25_1 = NULL;
	AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* G_B22_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B22_1 = NULL;
	AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* G_B21_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B21_1 = NULL;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B24_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B24_1 = NULL;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B23_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B23_1 = NULL;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B27_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B27_1 = NULL;
	AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* G_B26_0 = NULL;
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B26_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* G_B28_1 = NULL;
	String_t* G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B30_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B30_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B30_4 = NULL;
	String_t* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B29_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B29_4 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B32_4 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B31_4 = NULL;
	String_t* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B33_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B33_4 = NULL;
	String_t* G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B35_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B35_4 = NULL;
	String_t* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B34_3 = NULL;
	AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* G_B34_4 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0120_1;
		}

IL_0011_1:
		{
			// if (trans == null || trans.parent == null || trans.parent.parent == null || trans.parent.parent.parent == null){return false;}
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___trans_2;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (L_3)
			{
				goto IL_0068_1;
			}
		}
		{
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___trans_2;
			NullCheck(L_4);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
			L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (L_6)
			{
				goto IL_0068_1;
			}
		}
		{
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___trans_2;
			NullCheck(L_7);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
			L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
			NullCheck(L_8);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
			L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (L_10)
			{
				goto IL_0068_1;
			}
		}
		{
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___trans_2;
			NullCheck(L_11);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
			L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
			NullCheck(L_12);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
			L_13 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_12, NULL);
			NullCheck(L_13);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
			L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_15;
			L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			G_B9_0 = ((int32_t)(L_15));
			goto IL_0069_1;
		}

IL_0068_1:
		{
			G_B9_0 = 1;
		}

IL_0069_1:
		{
			V_2 = (bool)G_B9_0;
			bool L_16 = V_2;
			if (!L_16)
			{
				goto IL_0075_1;
			}
		}
		{
			// if (trans == null || trans.parent == null || trans.parent.parent == null || trans.parent.parent.parent == null){return false;}
			V_1 = (bool)0;
			goto IL_0341;
		}

IL_0075_1:
		{
			// string cityObjID = trans.name; // ? : "BLD_1532c5ce-c78d-44d3-8d73-9f7b6b81cfcc"
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___trans_2;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
			__this->___U3CcityObjIDU3E5__1_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjIDU3E5__1_4), (void*)L_18);
			// var gmlTrans = trans.parent.parent; // ? : "53391540_bldg_6697_op.gml"
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___trans_2;
			NullCheck(L_19);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
			L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
			NullCheck(L_20);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
			L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
			__this->___U3CgmlTransU3E5__2_5 = L_21;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgmlTransU3E5__2_5), (void*)L_21);
			// string rootDirName = gmlTrans.parent.name; // ? : "SampleDataMinatoMirai"
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___U3CgmlTransU3E5__2_5;
			NullCheck(L_22);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
			L_23 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_22, NULL);
			NullCheck(L_23);
			String_t* L_24;
			L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
			__this->___U3CrootDirNameU3E5__3_6 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootDirNameU3E5__3_6), (void*)L_24);
			// this.display.AttributesText = "???...";
			ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* L_25 = __this->___U3CU3E4__this_3;
			NullCheck(L_25);
			AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_26 = L_25->___display_4;
			NullCheck(L_26);
			AttributesDisplay_set_AttributesText_mA329F6CBA77BEF59CB3F744FC7B93511AF9F2463(L_26, _stringLiteral9107049986266813CC14444DBDE88B700E840795, NULL);
			// var cityModel = await PLATEAUCityGmlProxy.LoadAsync(gmlTrans.gameObject, rootDirName, cityDataPath);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___U3CgmlTransU3E5__2_5;
			NullCheck(L_27);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
			L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
			String_t* L_29 = __this->___U3CrootDirNameU3E5__3_6;
			ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* L_30 = __this->___U3CU3E4__this_3;
			NullCheck(L_30);
			String_t* L_31 = L_30->___cityDataPath_6;
			il2cpp_codegen_runtime_class_init_inline(PLATEAUCityGmlProxy_t59FB987023583D0F38D28B75F947FCDCFD86B8C2_il2cpp_TypeInfo_var);
			Task_1_t328F32BAFE9BF61F99937A26FF8D9D4F9E350F20* L_32;
			L_32 = PLATEAUCityGmlProxy_LoadAsync_m11B716664D2E5B055CBD76BD041783DA539B376D(L_28, L_29, L_31, NULL);
			NullCheck(L_32);
			TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 L_33;
			L_33 = Task_1_GetAwaiter_m7664FB1FCCE25B0DE305288DD7D5D2A18E34A303(L_32, Task_1_GetAwaiter_m7664FB1FCCE25B0DE305288DD7D5D2A18E34A303_RuntimeMethod_var);
			V_3 = L_33;
			bool L_34;
			L_34 = TaskAwaiter_1_get_IsCompleted_mFDBCBB53F36AB03D45E3AEABB1377E61305FD403((&V_3), TaskAwaiter_1_get_IsCompleted_mFDBCBB53F36AB03D45E3AEABB1377E61305FD403_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_013c_1;
			}
		}
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 L_36 = V_3;
			__this->___U3CU3Eu__1_13 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_13))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_37 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m006164F270059D0B27D93A8C91A933878AF7BC41(L_37, (&V_3), (&V_4), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310_TisU3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80_m006164F270059D0B27D93A8C91A933878AF7BC41_RuntimeMethod_var);
			goto IL_0387;
		}

IL_0120_1:
		{
			TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310 L_38 = __this->___U3CU3Eu__1_13;
			V_3 = L_38;
			TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310* L_39 = (&__this->___U3CU3Eu__1_13);
			il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_1_tCBDF18A7E6CB0DB8992BAA804A54AB0C8D250310));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_013c_1:
		{
			CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* L_41;
			L_41 = TaskAwaiter_1_GetResult_mF4A9C0E172DEF5A291B1593458D1E153792FE723((&V_3), TaskAwaiter_1_GetResult_mF4A9C0E172DEF5A291B1593458D1E153792FE723_RuntimeMethod_var);
			__this->___U3CU3Es__9_12 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__9_12), (void*)L_41);
			CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* L_42 = __this->___U3CU3Es__9_12;
			__this->___U3CcityModelU3E5__4_7 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityModelU3E5__4_7), (void*)L_42);
			__this->___U3CU3Es__9_12 = (CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__9_12), (void*)(CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL);
			// if (cityModel == null) return false;
			CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* L_43 = __this->___U3CcityModelU3E5__4_7;
			V_5 = (bool)((((RuntimeObject*)(CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)L_43) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_44 = V_5;
			if (!L_44)
			{
				goto IL_0172_1;
			}
		}
		{
			// if (cityModel == null) return false;
			V_1 = (bool)0;
			goto IL_0341;
		}

IL_0172_1:
		{
			// var cityObj = cityModel.GetCityObjectById(cityObjID);
			CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117* L_45 = __this->___U3CcityModelU3E5__4_7;
			String_t* L_46 = __this->___U3CcityObjIDU3E5__1_4;
			NullCheck(L_45);
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_47;
			L_47 = CityModel_GetCityObjectById_mB136A39BF8AE005E43C8F9C0A9653FEB8FBF7385(L_45, L_46, NULL);
			__this->___U3CcityObjU3E5__5_8 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjU3E5__5_8), (void*)L_47);
			// if (cityObj == null) return false;
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_48 = __this->___U3CcityObjU3E5__5_8;
			V_6 = (bool)((((RuntimeObject*)(CityObject_t98A05D1C31BA884BC13104451F9280794070A054*)L_48) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_49 = V_6;
			if (!L_49)
			{
				goto IL_019f_1;
			}
		}
		{
			// if (cityObj == null) return false;
			V_1 = (bool)0;
			goto IL_0341;
		}

IL_019f_1:
		{
			// this.display.AttributesText = cityObj.AttributesMap.ToString();
			ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* L_50 = __this->___U3CU3E4__this_3;
			NullCheck(L_50);
			AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_51 = L_50->___display_4;
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_52 = __this->___U3CcityObjU3E5__5_8;
			NullCheck(L_52);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_53;
			L_53 = VirtualFuncInvoker0< AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* >::Invoke(4 /* PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.Object::get_AttributesMap() */, L_52);
			NullCheck(L_53);
			String_t* L_54;
			L_54 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
			NullCheck(L_51);
			AttributesDisplay_set_AttributesText_mA329F6CBA77BEF59CB3F744FC7B93511AF9F2463(L_51, L_54, NULL);
			// string cityName = cityObj
			//     .AttributesMap // ????????????
			//     .GetValueOrNull("uro:buildingDetails") // ????? ??????? AttributeValue ???????
			//     ?.AsAttrSet // AttributeValue ???????? AsString ? AsAttrSet ?????????????????????????????
			//     ?.GetValueOrNull("uro:city") // ?AttributesMap ???????????? AttributeValue ???????
			//     ?.AsString; // ??????????????????????
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_55 = __this->___U3CcityObjU3E5__5_8;
			NullCheck(L_55);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_56;
			L_56 = VirtualFuncInvoker0< AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* >::Invoke(4 /* PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.Object::get_AttributesMap() */, L_55);
			NullCheck(L_56);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_57;
			L_57 = AttributesMap_GetValueOrNull_m97D8312317AA89941A1615602E787864B1BB343F(L_56, _stringLiteralA61C8184A75E432844667F9ABF48AAC010009399, NULL);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_58 = L_57;
			G_B19_0 = L_58;
			G_B19_1 = __this;
			if (L_58)
			{
				G_B20_0 = L_58;
				G_B20_1 = __this;
				goto IL_01dd_1;
			}
		}
		{
			G_B25_0 = ((String_t*)(NULL));
			G_B25_1 = G_B19_1;
			goto IL_01ff_1;
		}

IL_01dd_1:
		{
			NullCheck(G_B20_0);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_59;
			L_59 = AttributeValue_get_AsAttrSet_mC277B342477F139EC6E1B1F320355DADB87A4D58(G_B20_0, NULL);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_60 = L_59;
			G_B21_0 = L_60;
			G_B21_1 = G_B20_1;
			if (L_60)
			{
				G_B22_0 = L_60;
				G_B22_1 = G_B20_1;
				goto IL_01e9_1;
			}
		}
		{
			G_B25_0 = ((String_t*)(NULL));
			G_B25_1 = G_B21_1;
			goto IL_01ff_1;
		}

IL_01e9_1:
		{
			NullCheck(G_B22_0);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_61;
			L_61 = AttributesMap_GetValueOrNull_m97D8312317AA89941A1615602E787864B1BB343F(G_B22_0, _stringLiteral15DFFE89E46115129D3E99639A25201CABEA5989, NULL);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_62 = L_61;
			G_B23_0 = L_62;
			G_B23_1 = G_B22_1;
			if (L_62)
			{
				G_B24_0 = L_62;
				G_B24_1 = G_B22_1;
				goto IL_01fa_1;
			}
		}
		{
			G_B25_0 = ((String_t*)(NULL));
			G_B25_1 = G_B23_1;
			goto IL_01ff_1;
		}

IL_01fa_1:
		{
			NullCheck(G_B24_0);
			String_t* L_63;
			L_63 = AttributeValue_get_AsString_m9EDF07C46860E079C798E1050EE35B41FCB5438B(G_B24_0, NULL);
			G_B25_0 = L_63;
			G_B25_1 = G_B24_1;
		}

IL_01ff_1:
		{
			NullCheck(G_B25_1);
			G_B25_1->___U3CcityNameU3E5__6_9 = G_B25_0;
			Il2CppCodeGenWriteBarrier((void**)(&G_B25_1->___U3CcityNameU3E5__6_9), (void*)G_B25_0);
			// double? height = cityObj.AttributesMap
			//     .GetValueOrNull("??")
			//     ?.AsDouble; // AttributeValue.AsString ? double ??????????????
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_64 = __this->___U3CcityObjU3E5__5_8;
			NullCheck(L_64);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_65;
			L_65 = VirtualFuncInvoker0< AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* >::Invoke(4 /* PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.Object::get_AttributesMap() */, L_64);
			NullCheck(L_65);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_66;
			L_66 = AttributesMap_GetValueOrNull_m97D8312317AA89941A1615602E787864B1BB343F(L_65, _stringLiteral55F09496010EFCB7512B5CA7EC466CDC45200AA0, NULL);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_67 = L_66;
			G_B26_0 = L_67;
			G_B26_1 = __this;
			if (L_67)
			{
				G_B27_0 = L_67;
				G_B27_1 = __this;
				goto IL_022a_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_68 = V_7;
			G_B28_0 = L_68;
			G_B28_1 = G_B26_1;
			goto IL_0234_1;
		}

IL_022a_1:
		{
			NullCheck(G_B27_0);
			double L_69;
			L_69 = AttributeValue_get_AsDouble_m31A756F9E4C160A0CC893376CED127C972F2B31C(G_B27_0, NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_70;
			memset((&L_70), 0, sizeof(L_70));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_70), L_69, /*hidden argument*/Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B28_0 = L_70;
			G_B28_1 = G_B27_1;
		}

IL_0234_1:
		{
			NullCheck(G_B28_1);
			G_B28_1->___U3CheightU3E5__7_10 = G_B28_0;
			// this.display.TitleText = $"[{cityName ?? "No data"}]   ??: {height?.ToString() ?? "No data"}\nID: {cityObjID}";
			ClickToShowAttributes_tF66715C7F0B8517DD42C2ACD4DF430CE20BEAF61* L_71 = __this->___U3CU3E4__this_3;
			NullCheck(L_71);
			AttributesDisplay_t41A92481F37D3635FF2E4B63CFD12F8489A004A8* L_72 = L_71->___display_4;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73;
			NullCheck(L_74);
			ArrayElementTypeCheck (L_74, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
			(L_74)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
			String_t* L_76 = __this->___U3CcityNameU3E5__6_9;
			String_t* L_77 = L_76;
			G_B29_0 = L_77;
			G_B29_1 = 1;
			G_B29_2 = L_75;
			G_B29_3 = L_75;
			G_B29_4 = L_72;
			if (L_77)
			{
				G_B30_0 = L_77;
				G_B30_1 = 1;
				G_B30_2 = L_75;
				G_B30_3 = L_75;
				G_B30_4 = L_72;
				goto IL_0263_1;
			}
		}
		{
			G_B30_0 = _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
			G_B30_1 = G_B29_1;
			G_B30_2 = G_B29_2;
			G_B30_3 = G_B29_3;
			G_B30_4 = G_B29_4;
		}

IL_0263_1:
		{
			NullCheck(G_B30_2);
			ArrayElementTypeCheck (G_B30_2, G_B30_0);
			(G_B30_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B30_1), (String_t*)G_B30_0);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = G_B30_3;
			NullCheck(L_78);
			ArrayElementTypeCheck (L_78, _stringLiteral1F2EBD8EC7989B67A89D532057C3683E25482C3C);
			(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1F2EBD8EC7989B67A89D532057C3683E25482C3C);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_80 = (&__this->___U3CheightU3E5__7_10);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_81 = L_80;
			bool L_82;
			L_82 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_81, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			G_B31_0 = L_81;
			G_B31_1 = 3;
			G_B31_2 = L_79;
			G_B31_3 = L_79;
			G_B31_4 = G_B30_4;
			if (L_82)
			{
				G_B32_0 = L_81;
				G_B32_1 = 3;
				G_B32_2 = L_79;
				G_B32_3 = L_79;
				G_B32_4 = G_B30_4;
				goto IL_0280_1;
			}
		}
		{
			G_B33_0 = ((String_t*)(NULL));
			G_B33_1 = G_B31_1;
			G_B33_2 = G_B31_2;
			G_B33_3 = G_B31_3;
			G_B33_4 = G_B31_4;
			goto IL_028e_1;
		}

IL_0280_1:
		{
			double L_83;
			L_83 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline(G_B32_0, Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			V_8 = L_83;
			String_t* L_84;
			L_84 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_8), NULL);
			G_B33_0 = L_84;
			G_B33_1 = G_B32_1;
			G_B33_2 = G_B32_2;
			G_B33_3 = G_B32_3;
			G_B33_4 = G_B32_4;
		}

IL_028e_1:
		{
			String_t* L_85 = G_B33_0;
			G_B34_0 = L_85;
			G_B34_1 = G_B33_1;
			G_B34_2 = G_B33_2;
			G_B34_3 = G_B33_3;
			G_B34_4 = G_B33_4;
			if (L_85)
			{
				G_B35_0 = L_85;
				G_B35_1 = G_B33_1;
				G_B35_2 = G_B33_2;
				G_B35_3 = G_B33_3;
				G_B35_4 = G_B33_4;
				goto IL_0297_1;
			}
		}
		{
			G_B35_0 = _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
			G_B35_1 = G_B34_1;
			G_B35_2 = G_B34_2;
			G_B35_3 = G_B34_3;
			G_B35_4 = G_B34_4;
		}

IL_0297_1:
		{
			NullCheck(G_B35_2);
			ArrayElementTypeCheck (G_B35_2, G_B35_0);
			(G_B35_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B35_1), (String_t*)G_B35_0);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = G_B35_3;
			NullCheck(L_86);
			ArrayElementTypeCheck (L_86, _stringLiteral4B647B5E96A6826FDDFACEEDEA6C213F867B6DF9);
			(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4B647B5E96A6826FDDFACEEDEA6C213F867B6DF9);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_86;
			String_t* L_88 = __this->___U3CcityObjIDU3E5__1_4;
			NullCheck(L_87);
			ArrayElementTypeCheck (L_87, L_88);
			(L_87)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_88);
			String_t* L_89;
			L_89 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_87, NULL);
			NullCheck(G_B35_4);
			AttributesDisplay_set_TitleText_m601E1A157A203DFD92649AB47CE22E48B5212457(G_B35_4, L_89, NULL);
			// var detailAttr = cityObj.AttributesMap.GetValueOrNull("uro:buildingDetails");
			CityObject_t98A05D1C31BA884BC13104451F9280794070A054* L_90 = __this->___U3CcityObjU3E5__5_8;
			NullCheck(L_90);
			AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* L_91;
			L_91 = VirtualFuncInvoker0< AttributesMap_tA7B7CF823E096841D82555CA9481A287B806FA42* >::Invoke(4 /* PLATEAU.CityGML.AttributesMap PLATEAU.CityGML.Object::get_AttributesMap() */, L_90);
			NullCheck(L_91);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_92;
			L_92 = AttributesMap_GetValueOrNull_m97D8312317AA89941A1615602E787864B1BB343F(L_91, _stringLiteralA61C8184A75E432844667F9ABF48AAC010009399, NULL);
			__this->___U3CdetailAttrU3E5__8_11 = L_92;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdetailAttrU3E5__8_11), (void*)L_92);
			// if (detailAttr != null)
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_93 = __this->___U3CdetailAttrU3E5__8_11;
			V_9 = (bool)((!(((RuntimeObject*)(AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA*)L_93) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_94 = V_9;
			if (!L_94)
			{
				goto IL_02f2_1;
			}
		}
		{
			// Assert.AreEqual(AttributeType.AttributeSet ,detailAttr.Type);
			AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA* L_95 = __this->___U3CdetailAttrU3E5__8_11;
			NullCheck(L_95);
			int32_t L_96;
			L_96 = AttributeValue_get_Type_m03F80E1540D2E67FF29C1CB581F63CF17EA043A0(L_95, NULL);
			il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
			Assert_AreEqual_TisAttributeType_t7584D1A0B271812C17CB2022DAEE45988C55A2C5_m75253EA614C81D730A104B9A4176846C014E7096(6, L_96, Assert_AreEqual_TisAttributeType_t7584D1A0B271812C17CB2022DAEE45988C55A2C5_m75253EA614C81D730A104B9A4176846C014E7096_RuntimeMethod_var);
		}

IL_02f2_1:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0341;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02f6;
		}
		throw e;
	}

CATCH_02f6:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcityObjIDU3E5__1_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjIDU3E5__1_4), (void*)(String_t*)NULL);
		__this->___U3CgmlTransU3E5__2_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgmlTransU3E5__2_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		__this->___U3CrootDirNameU3E5__3_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootDirNameU3E5__3_6), (void*)(String_t*)NULL);
		__this->___U3CcityModelU3E5__4_7 = (CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityModelU3E5__4_7), (void*)(CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL);
		__this->___U3CcityObjU3E5__5_8 = (CityObject_t98A05D1C31BA884BC13104451F9280794070A054*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjU3E5__5_8), (void*)(CityObject_t98A05D1C31BA884BC13104451F9280794070A054*)NULL);
		__this->___U3CcityNameU3E5__6_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityNameU3E5__6_9), (void*)(String_t*)NULL);
		__this->___U3CdetailAttrU3E5__8_11 = (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdetailAttrU3E5__8_11), (void*)(AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_97 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_98 = V_10;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_97, L_98, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0387;
	}// end catch (depth: 1)

IL_0341:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CcityObjIDU3E5__1_4 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjIDU3E5__1_4), (void*)(String_t*)NULL);
		__this->___U3CgmlTransU3E5__2_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgmlTransU3E5__2_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		__this->___U3CrootDirNameU3E5__3_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrootDirNameU3E5__3_6), (void*)(String_t*)NULL);
		__this->___U3CcityModelU3E5__4_7 = (CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityModelU3E5__4_7), (void*)(CityModel_t6677C8973B041D84EEAC0382CF0529819B4B4117*)NULL);
		__this->___U3CcityObjU3E5__5_8 = (CityObject_t98A05D1C31BA884BC13104451F9280794070A054*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityObjU3E5__5_8), (void*)(CityObject_t98A05D1C31BA884BC13104451F9280794070A054*)NULL);
		__this->___U3CcityNameU3E5__6_9 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcityNameU3E5__6_9), (void*)(String_t*)NULL);
		__this->___U3CdetailAttrU3E5__8_11 = (AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdetailAttrU3E5__8_11), (void*)(AttributeValue_t94ACD7BE210C2E82AF6A7B30A0448ADBF8D82EEA*)NULL);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_99 = (&__this->___U3CU3Et__builder_1);
		bool L_100 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_99, L_100, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_0387:
	{
		return;
	}
}
// System.Void PLATEAU.Samples.Scripts.ClickToShowAttributes/<GetAttributesAndShowAsync>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAttributesAndShowAsyncU3Ed__5_SetStateMachine_m3ADFA2E3A64E406027428A1E00B66DC0872BD890 (U3CGetAttributesAndShowAsyncU3Ed__5_tC106BF4B30B218444EB871F6713B588B98D8BE80* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = (double)__this->___value_1;
		return L_0;
	}
}
